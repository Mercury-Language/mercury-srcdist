/*
** Automatically generated from `simplify_info.m'
** by the Mercury compiler,
** version rotd-2017-12-31
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module check_hlds.simplify.simplify_info.
// :- implementation.

/*
INIT mercury__check_hlds__simplify__simplify_info__init
ENDINIT
*/

#include "check_hlds.simplify.simplify_info.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1[1];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_innermost_proc_0[2];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0[2];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0[2];

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_0;

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_1;

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_value_ordered_maybe_allow_messages_0[2];

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_allow_messages_0[2];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_allow_messages_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[8];

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[8];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0[1];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_params_0_0[5];

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_params_0_0[5];

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_info_params_0_0[5];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_params_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_params_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_params_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_params_0[1];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_params_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0[3];

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0[3];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0[1];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0[9];

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0[9];

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0[9];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0[1];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0[1];

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_allow_messages_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_allow_messages_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_1[9][2];




static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_info_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_info_scalar_common_1[6]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0 = {
  (MR_String) "imp_whole_proc",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1 = {
  (MR_String) "imp_lambda",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_innermost_proc_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_1
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "innermost_proc",
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_innermost_proc_0 },
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_innermost_proc_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_innermost_proc_0
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_0 = {
  (MR_String) "do_not_allow_messages",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_1 = {
  (MR_String) "allow_messages",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_value_ordered_maybe_allow_messages_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_0,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_allow_messages_0[2] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_1,
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_functor_desc_maybe_allow_messages_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_allow_messages_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_allow_messages_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____maybe_allow_messages_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____maybe_allow_messages_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "maybe_allow_messages",
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_name_ordered_maybe_allow_messages_0 },
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__enum_value_ordered_maybe_allow_messages_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_maybe_allow_messages_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[8] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_params_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0
};

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[8] = {
  (MR_String) "simp_simplify_tasks",
  (MR_String) "simp_module_info",
  (MR_String) "simp_varset",
  (MR_String) "simp_vartypes",
  (MR_String) "simp_should_requantify",
  (MR_String) "simp_should_rerun_det",
  (MR_String) "simp_params",
  (MR_String) "simp_sub_info"
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0 = {
  (MR_String) "simplify_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_info",
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0 },
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_params_0_0[5] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_params_0_0[5] = {
  (MR_String) "sip_pred_proc_id",
  (MR_String) "sip_inst_varset",
  (MR_String) "sip_fully_strict",
  (MR_String) "sip_trace_level",
  (MR_String) "sip_trace_optimized"
};

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_info_params_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 1,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 4,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_params_0_0 = {
  (MR_String) "simplify_info_params",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_params_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_params_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_info_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_params_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_params_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_params_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_params_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_params_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_info_params_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_info_params_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_info_params",
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_params_0 },
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_params_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0
};

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0[3] = {
  (MR_String) "snc_inside_dupl_for_switch",
  (MR_String) "snc_num_enclosing_lambdas",
  (MR_String) "snc_proc_is_model_non"
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0 = {
  (MR_String) "simplify_nested_context",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_nested_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_nested_context",
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0 },
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0[9] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_allow_messages_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_parallel_conj_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_user_event_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0[9] = {
  (MR_String) "ssimp_rtti_varmaps",
  (MR_String) "ssimp_elim_vars",
  (MR_String) "ssimp_allow_messages",
  (MR_String) "ssimp_error_specs",
  (MR_String) "ssimp_cost_delta",
  (MR_String) "ssimp_has_parallel_conj",
  (MR_String) "ssimp_found_contains_trace",
  (MR_String) "ssimp_has_user_event",
  (MR_String) "ssimp_deleted_call_callees"
};

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0[9] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0 = {
  (MR_String) "simplify_sub_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.simplify_info",
  (MR_String) "simplify_sub_info",
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0 },
  {     check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0
};

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_22 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ArgY6_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ArgX7_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));

      succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_24_24 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_25_25 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[8];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      TypeInfo_26_26 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[3];
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;
      MR_Integer Var_17 = (MR_Integer) ArgX1_4;
      MR_Integer Var_18 = (MR_Integer) ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, Var_17, Var_18);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, ArgX2_6, ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[5], HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[5];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_19 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word ArgX4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
      MR_Word ArgY4_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
      MR_Word ArgX5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgY5_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word Var_14;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_14, ArgX1_4, ArgY1_5);
      succeeded = (Var_14 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_14;
      else
      {
        MR_Word Var_15;

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4], &Var_15, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_15 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_15;
        else
        {
          MR_Word Var_16;
          MR_Integer Var_25 = (MR_Integer) ArgX3_8;
          MR_Integer Var_26 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_16, Var_25, Var_26);
          succeeded = (Var_16 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_16;
          else
          {
            MR_Word Var_17;

            libs__trace_params____Compare____trace_level_0_0(&Var_17, ArgX4_10, ArgY4_11);
            succeeded = (Var_17 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_17;
            else
            {
              MR_Integer Var_27 = (MR_Integer) ArgX5_12;
              MR_Integer Var_28 = (MR_Integer) ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_27, Var_28);
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
      MR_Word ArgY4_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
      MR_Word ArgX5_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = libs__trace_params____Unify____trace_level_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = (ArgX5_11 == ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_28 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word Var_20;

      check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(&Var_20, ArgX1_4, ArgY1_5);
      succeeded = (Var_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_20;
      else
      {
        MR_Word Var_21;

        hlds__hlds_module____Compare____module_info_0_0(&Var_21, ArgX2_6, ArgY2_7);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          MR_Word Var_22;

          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[2], &Var_22, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_22 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_22;
          else
          {
            MR_Word Var_23;

            mercury__builtin__compare_3_p_0((MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0, &Var_23, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_23 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_23;
            else
            {
              MR_Word Var_24;
              MR_Integer Var_37 = (MR_Integer) ArgX5_12;
              MR_Integer Var_38 = (MR_Integer) ArgY5_13;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_24, Var_37, Var_38);
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_24;
              else
              {
                MR_Word Var_25;
                MR_Integer Var_39 = (MR_Integer) ArgX6_14;
                MR_Integer Var_40 = (MR_Integer) ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_25, Var_39, Var_40);
                succeeded = (Var_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_25;
                else
                {
                  MR_Word Var_26;
                  MR_Integer CastX_55 = (MR_Integer) ArgX7_16;
                  MR_Integer CastY_56 = (MR_Integer) ArgY7_17;

                  succeeded = (CastX_55 == CastY_56);
                  if (succeeded)
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      Var_26 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                  else
                  {
                    MR_Word ArgX1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_16, (MR_Integer) 0)));
                    MR_Word ArgY1_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_17, (MR_Integer) 0)));
                    MR_Word ArgX2_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_16, (MR_Integer) 1)));
                    MR_Word ArgY2_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_17, (MR_Integer) 1)));
                    MR_Word ArgX3_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_16, (MR_Integer) 2)))) & (MR_Integer) 1);
                    MR_Word ArgY3_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_17, (MR_Integer) 2)))) & (MR_Integer) 1);
                    MR_Word ArgX4_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_16, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
                    MR_Word ArgY4_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_17, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
                    MR_Word ArgX5_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_16, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                    MR_Word ArgY5_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_17, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                    MR_Word Var_51;

                    hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_51, ArgX1_41, ArgY1_42);
                    succeeded = (Var_51 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      Var_26 = Var_51;
                      succeeded = (Var_26 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                    }
                    else
                    {
                      MR_Word Var_52;

                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4], &Var_52, ((MR_Box) (ArgX2_43)), ((MR_Box) (ArgY2_44)));
                      succeeded = (Var_52 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        Var_26 = Var_52;
                        succeeded = (Var_26 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                      }
                      else
                      {
                        MR_Word Var_53;
                        MR_Integer Var_62 = (MR_Integer) ArgX3_45;
                        MR_Integer Var_63 = (MR_Integer) ArgY3_46;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_53, Var_62, Var_63);
                        succeeded = (Var_53 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          Var_26 = Var_53;
                          succeeded = (Var_26 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                        }
                        else
                        {
                          MR_Word Var_54;

                          libs__trace_params____Compare____trace_level_0_0(&Var_54, ArgX4_47, ArgY4_48);
                          succeeded = (Var_54 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            Var_26 = Var_54;
                            succeeded = (Var_26 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                          }
                          else
                          {
                            MR_Integer Var_64 = (MR_Integer) ArgX5_49;
                            MR_Integer Var_65 = (MR_Integer) ArgY5_50;

                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_26, Var_64, Var_65);
                            succeeded = (Var_26 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                          }
                        }
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = Var_26;
                  else
                    check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(HeadVar__1_1, ArgX8_18, ArgY8_19);
                }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_31 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Integer ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ArgY6_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word ArgX7_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY7_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX8_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY8_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word Var_22;

      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&Var_22, ArgX1_4, ArgY1_5);
      succeeded = (Var_22 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_22;
      else
      {
        MR_Word Var_23;

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7], &Var_23, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_23 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_23;
        else
        {
          MR_Word Var_24;
          MR_Integer Var_41 = (MR_Integer) ArgX3_8;
          MR_Integer Var_42 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_24, Var_41, Var_42);
          succeeded = (Var_24 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_24;
          else
          {
            MR_Word Var_25;

            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[8], &Var_25, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_25 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_25;
            else
            {
              MR_Word Var_26;

              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_26, ArgX5_12, ArgY5_13);
              succeeded = (Var_26 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_26;
              else
              {
                MR_Word Var_27;
                MR_Integer Var_43 = (MR_Integer) ArgX6_14;
                MR_Integer Var_44 = (MR_Integer) ArgY6_15;

                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_27, Var_43, Var_44);
                succeeded = (Var_27 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_27;
                else
                {
                  MR_Word Var_28;
                  MR_Integer Var_45 = (MR_Integer) ArgX7_16;
                  MR_Integer Var_46 = (MR_Integer) ArgY7_17;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_28, Var_45, Var_46);
                  succeeded = (Var_28 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_28;
                  else
                  {
                    MR_Word Var_29;
                    MR_Integer Var_47 = (MR_Integer) ArgX8_18;
                    MR_Integer Var_48 = (MR_Integer) ArgY8_19;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_29, Var_47, Var_48);
                    succeeded = (Var_29 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_29;
                    else
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (ArgX9_20)), ((MR_Box) (ArgY9_21)));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_23_23;
      MR_Word TypeCtorInfo_24_24;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Integer CastX_35;
      MR_Integer CastY_36;
      MR_Integer CastX_58;
      MR_Integer CastY_59;

      succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_23_23 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[2];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeCtorInfo_24_24 = (MR_Word) &hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0;
            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  CastX_35 = (MR_Integer) ArgX7_15;
                  CastY_36 = (MR_Integer) ArgY7_16;
                  succeeded = (CastX_35 == CastY_36);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word TypeInfo_16_38;
                    MR_Word ArgX1_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 0)));
                    MR_Word ArgY1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 0)));
                    MR_Word ArgX2_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 1)));
                    MR_Word ArgY2_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 1)));
                    MR_Word ArgX3_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 2)))) & (MR_Integer) 1);
                    MR_Word ArgY3_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 2)))) & (MR_Integer) 1);
                    MR_Word ArgX4_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
                    MR_Word ArgY4_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
                    MR_Word ArgX5_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX7_15, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                    MR_Word ArgY5_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY7_16, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

                    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_25, ArgY1_26);
                    if (succeeded)
                    {
                      TypeInfo_16_38 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4];
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_38, ((MR_Box) (ArgX2_27)), ((MR_Box) (ArgY2_28)));
                      if (succeeded)
                      {
                        succeeded = (ArgX3_29 == ArgY3_30);
                        if (succeeded)
                        {
                          succeeded = libs__trace_params____Unify____trace_level_0_0(ArgX4_31, ArgY4_32);
                          if (succeeded)
                            succeeded = (ArgX5_33 == ArgY5_34);
                        }
                      }
                    }
                  }
                  if (succeeded)
                  {
                    CastX_58 = (MR_Integer) ArgX8_17;
                    CastY_59 = (MR_Integer) ArgY8_18;
                    succeeded = (CastX_58 == CastY_59);
                    if (succeeded)
                      succeeded = MR_TRUE;
                    else
                    {
                      MR_Word TypeInfo_24_61;
                      MR_Word TypeInfo_25_62;
                      MR_Word TypeInfo_26_63;
                      MR_Word ArgX1_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 0)));
                      MR_Word ArgY1_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 0)));
                      MR_Word ArgX2_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 1)));
                      MR_Word ArgY2_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 1)));
                      MR_Word ArgX3_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 2)));
                      MR_Word ArgY3_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 2)));
                      MR_Word ArgX4_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 3)));
                      MR_Word ArgY4_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 3)));
                      MR_Integer ArgX5_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 4)));
                      MR_Integer ArgY5_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 4)));
                      MR_Word ArgX6_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 5)))) & (MR_Integer) 1);
                      MR_Word ArgY6_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 5)))) & (MR_Integer) 1);
                      MR_Word ArgX7_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word ArgY7_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word ArgX8_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      MR_Word ArgY8_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      MR_Word ArgX9_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 6)));
                      MR_Word ArgY9_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 6)));

                      succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX1_40, ArgY1_41);
                      if (succeeded)
                      {
                        TypeInfo_24_61 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7];
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_61, ((MR_Box) (ArgX2_42)), ((MR_Box) (ArgY2_43)));
                        if (succeeded)
                        {
                          succeeded = (ArgX3_44 == ArgY3_45);
                          if (succeeded)
                          {
                            TypeInfo_25_62 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[8];
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_62, ((MR_Box) (ArgX4_46)), ((MR_Box) (ArgY4_47)));
                            if (succeeded)
                            {
                              succeeded = (ArgX5_48 == ArgY5_49);
                              if (succeeded)
                              {
                                succeeded = (ArgX6_50 == ArgY6_51);
                                if (succeeded)
                                {
                                  succeeded = (ArgX7_52 == ArgY7_53);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX8_54 == ArgY8_55);
                                    if (succeeded)
                                    {
                                      TypeInfo_26_63 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[3];
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_63, ((MR_Box) (ArgX9_56)), ((MR_Box) (ArgY9_57)));
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_allow_messages_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_allow_messages_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_9 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__term____Compare____context_0_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = mercury__term____Unify____context_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(
  MR_Word Info_3,
  MR_Word * OptDuplicateCalls_4)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word WarnDuplicateCalls_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    *OptDuplicateCalls_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    succeeded = (WarnDuplicateCalls_6 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (*OptDuplicateCalls_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_ignore_par_conjunctions_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_extra_common_struct_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_elim_removable_scopes_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_test_after_switch_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_excess_assign_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_format_calls_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_implicit_stream_calls_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(
  MR_Word Info_2)
{
  {
    MR_bool succeeded;
    MR_Word SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 0)));
    MR_Word Var_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 3)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 4)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 5)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 6)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_2, (MR_Integer) 7)));
    MR_Word Var_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 13)) & (MR_Integer) 1);
    MR_Word Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 14)) & (MR_Integer) 1);

    succeeded = (Var_4 == (MR_Integer) 1);
    return succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)));
    MR_Integer Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));
    MR_Word Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6)));
    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word Var_12;
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2)));
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3)));
      MR_Integer Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 4)));
      MR_Word Var_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6)));

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) ((Var_40 | ((((Var_41 << (MR_Integer) 1)) | ((Var_42 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) (X_4));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_12));
      }
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)));
    MR_Integer Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 6)));

    succeeded = (X_4 == Var_51);
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word Var_11;
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3)));
      MR_Integer Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4)));
      MR_Word Var_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 6)));
      MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) ((Var_39 | ((((Var_40 << (MR_Integer) 1)) | ((X_4 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), Var_11, 6) = ((MR_Box) (Var_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_11));
      }
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_found_contains_trace_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)));
    MR_Integer Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 6)));

    succeeded = (X_4 == Var_51);
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word Var_11;
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3)));
      MR_Integer Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4)));
      MR_Word Var_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 6)));
      MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) ((Var_39 | ((((X_4 << (MR_Integer) 1)) | ((Var_41 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), Var_11, 6) = ((MR_Box) (Var_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_11));
      }
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_has_parallel_conj_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_51 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)));
    MR_Integer Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)));
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 6)));

    succeeded = (X_4 == Var_51);
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word Var_11;
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3)));
      MR_Integer Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4)));
      MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 6)));
      MR_Word Var_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)))) & (MR_Integer) 1);

      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) ((X_4 | ((((Var_40 << (MR_Integer) 1)) | ((Var_41 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), Var_11, 6) = ((MR_Box) (Var_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_11));
      }
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_error_specs_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
    MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));
    MR_Word Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) ((Var_23 | ((((Var_24 << (MR_Integer) 1)) | ((Var_25 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_allow_messages_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)));
    MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));
    MR_Word Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) ((Var_23 | ((((Var_24 << (MR_Integer) 1)) | ((Var_25 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_elim_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)));
    MR_Integer Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));
    MR_Word Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) ((Var_23 | ((((Var_24 << (MR_Integer) 1)) | ((Var_25 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));

    succeeded = ((MR_Integer) 1 == Var_23);
    if (succeeded)
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    else
    {
      MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_22));
      }
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));

    succeeded = ((MR_Integer) 1 == Var_23);
    if (succeeded)
      *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    else
    {
      MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 0)));
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 1)));
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 2)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 3)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 5)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 6)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 7)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_5, (MR_Integer) 4)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_22));
      }
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_has_user_event_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_20;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_found_contains_trace_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_19;
    MR_Word Var_20;

    *X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_has_parallel_conj_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    *X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_cost_delta_2_p_0(
  MR_Word Info_3,
  MR_Integer * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    *X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
    Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_error_specs_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    MR_Integer Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
    Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_allow_messages_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15;
    MR_Integer Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
    Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_elim_vars_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Integer Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
    Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Integer Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3)));
    Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4)));
    Var_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_trace_level_optimized_3_p_0(
  MR_Word Info_4,
  MR_Word * X_5,
  MR_Word * Y_6)
{
  {
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 6)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 7)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1)));
    MR_Word Var_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 2)))) & (MR_Integer) 1);

    *X_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
    *Y_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    MR_Word Var_15;
    MR_Word Var_16;

    *X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)))) & (MR_Integer) 1);
    Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
    Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    Var_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)))) & (MR_Integer) 1);
    Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
    Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1)));
    Var_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)))) & (MR_Integer) 1);
    Var_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
    Var_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_should_rerun_det_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_should_requantify_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(
  MR_Word Info_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    *X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0)));
    Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1)));
    Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2)));
    Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 3)));
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 4)));
    Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 5)));
    Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 6)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 7)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0(
  MR_Word ToVar_6,
  MR_Word FromVar_7,
  MR_Word TSubst_8,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  {
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_22_22;
    MR_Word VarTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    MR_Word RttiVarMaps0_11;
    MR_Word VarTypes_12;
    MR_Word Renaming_13;
    MR_Word RttiVarMaps1_14;
    MR_Word RttiVarMaps_15;
    MR_Word Var_18;
    MR_Word STATE_VARIABLE_Info_19_19;
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Integer Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;

    RttiVarMaps0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 2)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 3)));
    Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 4)));
    Var_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 6)));
    hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(TSubst_8, VarTypes0_10, &VarTypes_12);
    TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[0];
    Renaming_13 = mercury__map__singleton_2_f_0(TypeInfo_21_21, TypeInfo_21_21, ((MR_Box) (ToVar_6)), ((MR_Box) (FromVar_7)));
    TypeInfo_22_22 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[1];
    Var_18 = mercury__map__init_0_f_0(TypeInfo_22_22, TypeInfo_22_22);
    hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(Var_18, TSubst_8, Renaming_13, RttiVarMaps0_11, &RttiVarMaps1_14);
    hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(FromVar_7, ToVar_6, RttiVarMaps1_14, &RttiVarMaps_15);
    check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(VarTypes_12, STATE_VARIABLE_Info_0_16, &STATE_VARIABLE_Info_19_19);
    check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(RttiVarMaps_15, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_17);
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;
    MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Integer Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;

    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3)));
    Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4)));
    Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6)));
    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word Var_12;
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2)));
      MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3)));
      MR_Integer Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 4)));
      MR_Word Var_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0)));

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) ((Var_40 | ((((Var_41 << (MR_Integer) 1)) | ((Var_42 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) (Var_43));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_12));
      }
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(
  MR_Integer Incr_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Integer CostDelta0_6;
    MR_Integer CostDelta_7;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 2)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 3)));
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    CostDelta0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 4)));
    Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 6)));
    CostDelta_7 = (CostDelta0_6 + Incr_4);
    check_hlds__simplify__simplify_info__simplify_info_set_cost_delta_3_p_0(CostDelta_7, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_cost_delta_3_p_0(
  MR_Integer X_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Integer Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 4)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 3)));
    MR_Word Var_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 6)));

    succeeded = (X_4 == Var_51);
    if (succeeded)
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    else
    {
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
      MR_Word Var_11;
      MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
      MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0)));
      MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1)));
      MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2)));
      MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3)));
      MR_Word Var_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)))) & (MR_Integer) 1);
      MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 6)));
      MR_Integer Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 4)));

      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Var_35));
        MR_hl_field(MR_mktag(0), Var_11, 2) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(0), Var_11, 3) = ((MR_Box) (Var_37));
        MR_hl_field(MR_mktag(0), Var_11, 4) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), Var_11, 5) = ((MR_Box) ((Var_39 | ((((Var_40 << (MR_Integer) 1)) | ((Var_41 << (MR_Integer) 2)))))));
        MR_hl_field(MR_mktag(0), Var_11, 6) = ((MR_Box) (Var_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_11));
      }
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_message_3_p_0(
  MR_Word Spec_4,
  MR_Word STATE_VARIABLE_Info_0_9,
  MR_Word * STATE_VARIABLE_Info_10)
{
  {
    MR_Word AllowMsgs_6;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 7)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 0)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 1)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 2)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 4)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 5)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_9, (MR_Integer) 6)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)));
    MR_Word Var_24;
    MR_Integer Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;

    AllowMsgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 2)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 3)));
    Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 4)));
    Var_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 6)));
    switch (AllowMsgs_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Specs_8;
          MR_Word Var_54;

          {
            Specs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Specs_8, 0) = ((MR_Box) (Spec_4));
            MR_hl_field(MR_mktag(1), Specs_8, 1) = ((MR_Box) (Var_24));
          }
          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (AllowMsgs_6));
            MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (Specs_8));
            MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (Var_25));
            MR_hl_field(MR_mktag(0), Var_54, 5) = ((MR_Box) ((Var_26 | ((((Var_27 << (MR_Integer) 1)) | ((Var_28 << (MR_Integer) 2)))))));
            MR_hl_field(MR_mktag(0), Var_54, 6) = ((MR_Box) (Var_29));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Info_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_15));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_18));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_19));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_20));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_54));
          }
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_Info_10 = STATE_VARIABLE_Info_0_9;
        break;
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_elim_vars_3_p_0(
  MR_Word ElimVars_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word ElimVarsLists0_6;
    MR_Word ElimVarsLists_7;
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Integer Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_35;

    ElimVarsLists0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 2)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 3)));
    Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 4)));
    Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 5)))) & (MR_Integer) 1);
    Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 6)));
    {
      ElimVarsLists_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ElimVarsLists_7, 0) = ((MR_Box) (ElimVars_4));
      MR_hl_field(MR_mktag(1), ElimVarsLists_7, 1) = ((MR_Box) (ElimVarsLists0_6));
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ElimVarsLists_7));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_35, 5) = ((MR_Box) ((Var_25 | ((((Var_26 << (MR_Integer) 1)) | ((Var_27 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), Var_35, 6) = ((MR_Box) (Var_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_35));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_info_3_p_0(
  MR_Word Info_4,
  MR_Word * PredInfo_5,
  MR_Word * ProcInfo_6)
{
  {
    MR_Word ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1)));
    MR_Word PredProcId_8;
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 6)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 2)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 3)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 5)));
    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 7)));
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;

    PredProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1)));
    Var_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 2)))) & (MR_Integer) 1);
    Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
    Var_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_7, PredProcId_8, PredInfo_5, ProcInfo_6);
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_reinit_3_p_0(
  MR_Word SimplifyTasks_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_Word Var_20;
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
    MR_Word Var_29 = SimplifyTasks_4;
    MR_Word Var_30 = Var_22;
    MR_Word Var_31 = Var_23;
    MR_Word Var_32 = Var_24;
    MR_Word Var_35 = Var_27;
    MR_Word Var_36 = Var_28;
    MR_Word Var_37 = Var_29;
    MR_Word Var_38 = Var_30;
    MR_Word Var_39 = Var_31;
    MR_Word Var_40 = Var_32;
    MR_Word Var_43 = Var_35;
    MR_Word Var_44 = Var_36;
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1)));
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 2)));
    MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 3)));
    MR_Integer Var_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 4)));
    MR_Word Var_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 6)));
    MR_Word Var_61 = Var_37;
    MR_Word Var_62 = Var_38;
    MR_Word Var_63 = Var_39;
    MR_Word Var_64 = Var_40;
    MR_Word Var_67 = Var_43;
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word Var_57 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 5)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_20, 5) = ((MR_Box) (((MR_Integer) 1 | ((((Var_58 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), Var_20, 6) = ((MR_Box) (Var_60));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_20));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Integer ProcId_9,
  MR_Word ProcInfo_10,
  MR_Word SimplifyTasks_11,
  MR_Word * Info_12)
{
  {
    MR_Word PredProcId_13;
    MR_Word InstVarSet_14;
    MR_Word Globals_15;
    MR_Word FullyStrict_16;
    MR_Word TraceLevel_17;
    MR_Word TraceOptimized_18;
    MR_Word Params_19;
    MR_Word RttiVarMaps_20;
    MR_Word TraceGoalProcs_27;
    MR_Word SubInfo_28;
    MR_Word VarSet_29;
    MR_Word VarTypes_30;

    {
      PredProcId_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_13, 0) = ((MR_Box) (PredId_8));
      MR_hl_field(MR_mktag(0), PredProcId_13, 1) = ((MR_Box) (ProcId_9));
    }
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_10, &InstVarSet_14);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 180, &FullyStrict_16);
    libs__globals__get_trace_level_2_p_0(Globals_15, &TraceLevel_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 133, &TraceOptimized_18);
    {
      Params_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_19, 0) = ((MR_Box) (PredProcId_13));
      MR_hl_field(MR_mktag(0), Params_19, 1) = ((MR_Box) (InstVarSet_14));
      MR_hl_field(MR_mktag(0), Params_19, 2) = ((MR_Box) ((FullyStrict_16 | ((((TraceLevel_17 << (MR_Integer) 1)) | ((TraceOptimized_18 << (MR_Integer) 4)))))));
    }
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_10, &RttiVarMaps_20);
    mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &TraceGoalProcs_27);
    {
      SubInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SubInfo_28, 0) = ((MR_Box) (RttiVarMaps_20));
      MR_hl_field(MR_mktag(0), SubInfo_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), SubInfo_28, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), SubInfo_28, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), SubInfo_28, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), SubInfo_28, 5) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), SubInfo_28, 6) = ((MR_Box) (TraceGoalProcs_27));
    }
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_10, &VarSet_29);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_10, &VarTypes_30);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *Info_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SimplifyTasks_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (VarSet_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarTypes_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Params_19));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (SubInfo_28));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____maybe_allow_messages_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_info____Unify____maybe_allow_messages_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____maybe_allow_messages_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__simplify_info____Compare____maybe_allow_messages_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_info____Unify____simplify_info_params_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__simplify_info____Compare____simplify_info_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__simplify__simplify_info__init(void)
{
}

void mercury__check_hlds__simplify__simplify_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_maybe_allow_messages_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_params_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_nested_context_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0);
}

void mercury__check_hlds__simplify__simplify_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__simplify__simplify_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.simplify.simplify_info.
