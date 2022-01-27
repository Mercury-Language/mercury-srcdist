/*
** Automatically generated from `simplify_info.m'
** by the Mercury compiler,
** version rotd-2016-02-08
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module check_hlds.simplify.simplify_info. */
/* :- implementation. */

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
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[7];

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[7];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_info_0[1];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__maybe__ti_maybe_1check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0[3];

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0[3];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_nested_context_0[1];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_nested_context_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0[12];

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0[12];

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0[12];

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1];

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_name_ordered_simplify_sub_info_0[1];

static const MR_Integer check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__functor_number_map_simplify_sub_info_0[1];

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3);

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2);


static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_1[9][2];

static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_2[1][3];




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
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_innermost_proc_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_info_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__simplify_info_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__simplify_info_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__simplify_info_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
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
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_innermost_proc_0_1 = {
  (MR_String) "imp_lambda",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_innermost_proc_0_1,
  NULL,
  NULL,
  NULL
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_innermost_proc_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0[7] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_tasks_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0
};

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0[7] = {
  (MR_String) "simp_simplify_tasks",
  (MR_String) "simp_module_info",
  (MR_String) "simp_varset",
  (MR_String) "simp_vartypes",
  (MR_String) "simp_rtti_varmaps",
  (MR_String) "simp_fully_strict",
  (MR_String) "simp_sub_info"
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0 = {
  (MR_String) "simplify_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_info_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_info_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_nested_context_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_nested_context_0_0,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_nested_context_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_nested_context_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_nested_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
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

static const MR_PseudoTypeInfo check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0[12] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__list__ti_list_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_parallel_conj_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_user_event_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__simplify_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
};

static const MR_ConstString check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0[12] = {
  (MR_String) "ssimp_pred_id",
  (MR_String) "ssimp_proc_id",
  (MR_String) "ssimp_inst_varset",
  (MR_String) "ssimp_elim_vars",
  (MR_String) "ssimp_error_specs",
  (MR_String) "ssimp_should_requantify",
  (MR_String) "ssimp_should_rerun_det",
  (MR_String) "ssimp_cost_delta",
  (MR_String) "ssimp_has_parallel_conj",
  (MR_String) "ssimp_found_contains_trace",
  (MR_String) "ssimp_has_user_event",
  (MR_String) "ssimp_deleted_call_callees"
};

static const MR_DuArgLocn check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0[12] = {
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
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0 = {
  (MR_String) "simplify_sub_info",
  (MR_Integer) 12,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_types_simplify_sub_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_names_simplify_sub_info_0_0,
  check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__field_locns_simplify_sub_info_0_0,
  NULL
};

static const MR_DuFunctorDescPtr check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_stag_ordered_simplify_sub_info_0_0[1] = {
  &check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_functor_desc_simplify_sub_info_0_0
};

static const MR_DuPtagLayout check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__du_ptag_ordered_simplify_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0_10001(
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;

    {
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0_10001(
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;

    {
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0_10001(
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;

    {
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0_10001(
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;

    {
      check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_1), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2));
    }
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0_10001(
  MR_Box * check_hlds__simplify__simplify_info__wrapper_arg_1,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_2,
  MR_Box check_hlds__simplify__simplify_info__wrapper_arg_3)
{
  {
    MR_Word check_hlds__simplify__simplify_info__conv0_HeadVar__1_1;

    {
      check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(&check_hlds__simplify__simplify_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_2), ((MR_Word) check_hlds__simplify__simplify_info__wrapper_arg_3));
    }
    *check_hlds__simplify__simplify_info__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__simplify_info__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_sub_info_0_0(
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Integer check_hlds__simplify__simplify_info__CastX_39 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
    MR_Integer check_hlds__simplify__simplify_info__CastY_40 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_39 == check_hlds__simplify__simplify_info__CastY_40);
    if (check_hlds__simplify__simplify_info__succeeded)
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer check_hlds__simplify__simplify_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer check_hlds__simplify__simplify_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 8)));
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer check_hlds__simplify__simplify_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer check_hlds__simplify__simplify_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word check_hlds__simplify__simplify_info__V_28_28;

        {
          hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__simplify__simplify_info__V_28_28, check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_16_16);
        }
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_28_28 == (MR_Integer) 0);
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
        if (check_hlds__simplify__simplify_info__succeeded)
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_28_28;
        else
          {
            MR_Word check_hlds__simplify__simplify_info__V_29_29;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_29_29, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_17_17);
            }
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_29_29 == (MR_Integer) 0);
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
            if (check_hlds__simplify__simplify_info__succeeded)
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_29_29;
            else
              {
                MR_Word check_hlds__simplify__simplify_info__V_30_30;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4], &check_hlds__simplify__simplify_info__V_30_30, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18)));
                }
                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_30_30 == (MR_Integer) 0);
                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                if (check_hlds__simplify__simplify_info__succeeded)
                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_30_30;
                else
                  {
                    MR_Word check_hlds__simplify__simplify_info__V_31_31;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6], &check_hlds__simplify__simplify_info__V_31_31, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19)));
                    }
                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_31_31 == (MR_Integer) 0);
                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                    if (check_hlds__simplify__simplify_info__succeeded)
                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_31_31;
                    else
                      {
                        MR_Word check_hlds__simplify__simplify_info__V_32_32;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7], &check_hlds__simplify__simplify_info__V_32_32, ((MR_Box) (check_hlds__simplify__simplify_info__V_8_8)), ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20)));
                        }
                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_32_32 == (MR_Integer) 0);
                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                        if (check_hlds__simplify__simplify_info__succeeded)
                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_32_32;
                        else
                          {
                            MR_Word check_hlds__simplify__simplify_info__V_33_33;
                            MR_Integer check_hlds__simplify__simplify_info__V_53_53 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
                            MR_Integer check_hlds__simplify__simplify_info__V_54_54 = (MR_Integer) check_hlds__simplify__simplify_info__V_21_21;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_33_33, check_hlds__simplify__simplify_info__V_53_53, check_hlds__simplify__simplify_info__V_54_54);
                            }
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_33_33 == (MR_Integer) 0);
                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                            if (check_hlds__simplify__simplify_info__succeeded)
                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_33_33;
                            else
                              {
                                MR_Word check_hlds__simplify__simplify_info__V_34_34;
                                MR_Integer check_hlds__simplify__simplify_info__V_55_55 = (MR_Integer) check_hlds__simplify__simplify_info__V_10_10;
                                MR_Integer check_hlds__simplify__simplify_info__V_56_56 = (MR_Integer) check_hlds__simplify__simplify_info__V_22_22;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_34_34, check_hlds__simplify__simplify_info__V_55_55, check_hlds__simplify__simplify_info__V_56_56);
                                }
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_34_34 == (MR_Integer) 0);
                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                if (check_hlds__simplify__simplify_info__succeeded)
                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_34_34;
                                else
                                  {
                                    MR_Word check_hlds__simplify__simplify_info__V_35_35;

                                    {
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_35_35, check_hlds__simplify__simplify_info__V_11_11, check_hlds__simplify__simplify_info__V_23_23);
                                    }
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_35_35 == (MR_Integer) 0);
                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                    if (check_hlds__simplify__simplify_info__succeeded)
                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_35_35;
                                    else
                                      {
                                        MR_Word check_hlds__simplify__simplify_info__V_36_36;
                                        MR_Integer check_hlds__simplify__simplify_info__V_57_57 = (MR_Integer) check_hlds__simplify__simplify_info__V_12_12;
                                        MR_Integer check_hlds__simplify__simplify_info__V_58_58 = (MR_Integer) check_hlds__simplify__simplify_info__V_24_24;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_36_36, check_hlds__simplify__simplify_info__V_57_57, check_hlds__simplify__simplify_info__V_58_58);
                                        }
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_36_36 == (MR_Integer) 0);
                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                        if (check_hlds__simplify__simplify_info__succeeded)
                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_36_36;
                                        else
                                          {
                                            MR_Word check_hlds__simplify__simplify_info__V_37_37;
                                            MR_Integer check_hlds__simplify__simplify_info__V_59_59 = (MR_Integer) check_hlds__simplify__simplify_info__V_13_13;
                                            MR_Integer check_hlds__simplify__simplify_info__V_60_60 = (MR_Integer) check_hlds__simplify__simplify_info__V_25_25;

                                            {
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_37_37, check_hlds__simplify__simplify_info__V_59_59, check_hlds__simplify__simplify_info__V_60_60);
                                            }
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_37_37 == (MR_Integer) 0);
                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                            if (check_hlds__simplify__simplify_info__succeeded)
                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_37_37;
                                            else
                                              {
                                                MR_Word check_hlds__simplify__simplify_info__V_38_38;
                                                MR_Integer check_hlds__simplify__simplify_info__V_61_61 = (MR_Integer) check_hlds__simplify__simplify_info__V_14_14;
                                                MR_Integer check_hlds__simplify__simplify_info__V_62_62 = (MR_Integer) check_hlds__simplify__simplify_info__V_26_26;

                                                {
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_38_38, check_hlds__simplify__simplify_info__V_61_61, check_hlds__simplify__simplify_info__V_62_62);
                                                }
                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_38_38 == (MR_Integer) 0);
                                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                                if (check_hlds__simplify__simplify_info__succeeded)
                                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_38_38;
                                                else
                                                  {
                                                    {
                                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[8], check_hlds__simplify__simplify_info__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15)), ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27)));
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

static MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_sub_info_0_0(
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Integer check_hlds__simplify__simplify_info__CastX_27 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
    MR_Integer check_hlds__simplify__simplify_info__CastY_28 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_27 == check_hlds__simplify__simplify_info__CastY_28);
    if (check_hlds__simplify__simplify_info__succeeded)
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_30_30;
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_31_31;
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_32_32;
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_33_33;
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer check_hlds__simplify__simplify_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer check_hlds__simplify__simplify_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 8)));
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer check_hlds__simplify__simplify_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer check_hlds__simplify__simplify_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 8)));

        {
          check_hlds__simplify__simplify_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_info__V_3_3, check_hlds__simplify__simplify_info__V_15_15);
        }
        if (check_hlds__simplify__simplify_info__succeeded)
          {
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == check_hlds__simplify__simplify_info__V_16_16);
            if (check_hlds__simplify__simplify_info__succeeded)
              {
                check_hlds__simplify__simplify_info__TypeInfo_30_30 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4];
                {
                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_30_30, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17)));
                }
                if (check_hlds__simplify__simplify_info__succeeded)
                  {
                    check_hlds__simplify__simplify_info__TypeInfo_31_31 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6];
                    {
                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_31_31, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18)));
                    }
                    if (check_hlds__simplify__simplify_info__succeeded)
                      {
                        check_hlds__simplify__simplify_info__TypeInfo_32_32 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7];
                        {
                          check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_32_32, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19)));
                        }
                        if (check_hlds__simplify__simplify_info__succeeded)
                          {
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_8_8 == check_hlds__simplify__simplify_info__V_20_20);
                            if (check_hlds__simplify__simplify_info__succeeded)
                              {
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_9_9 == check_hlds__simplify__simplify_info__V_21_21);
                                if (check_hlds__simplify__simplify_info__succeeded)
                                  {
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_10_10 == check_hlds__simplify__simplify_info__V_22_22);
                                    if (check_hlds__simplify__simplify_info__succeeded)
                                      {
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == check_hlds__simplify__simplify_info__V_23_23);
                                        if (check_hlds__simplify__simplify_info__succeeded)
                                          {
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_12_12 == check_hlds__simplify__simplify_info__V_24_24);
                                            if (check_hlds__simplify__simplify_info__succeeded)
                                              {
                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_13_13 == check_hlds__simplify__simplify_info__V_25_25);
                                                if (check_hlds__simplify__simplify_info__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_info__TypeInfo_33_33 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[8];
                                                    {
                                                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_33_33, ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14)), ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26)));
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
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_nested_context_0_0(
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Integer check_hlds__simplify__simplify_info__CastX_12 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
    MR_Integer check_hlds__simplify__simplify_info__CastY_13 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_12 == check_hlds__simplify__simplify_info__CastY_13);
    if (check_hlds__simplify__simplify_info__succeeded)
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer check_hlds__simplify__simplify_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer check_hlds__simplify__simplify_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__simplify_info__V_10_10;
        MR_Integer check_hlds__simplify__simplify_info__V_17_17 = (MR_Integer) check_hlds__simplify__simplify_info__V_4_4;
        MR_Integer check_hlds__simplify__simplify_info__V_18_18 = (MR_Integer) check_hlds__simplify__simplify_info__V_7_7;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_10_10, check_hlds__simplify__simplify_info__V_17_17, check_hlds__simplify__simplify_info__V_18_18);
        }
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_10_10 == (MR_Integer) 0);
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
        if (check_hlds__simplify__simplify_info__succeeded)
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_10_10;
        else
          {
            MR_Word check_hlds__simplify__simplify_info__V_11_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_11_11, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_8_8);
            }
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == (MR_Integer) 0);
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
            if (check_hlds__simplify__simplify_info__succeeded)
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[3], check_hlds__simplify__simplify_info__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9)));
                }
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_nested_context_0_0(
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Integer check_hlds__simplify__simplify_info__CastX_9 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
    MR_Integer check_hlds__simplify__simplify_info__CastY_10 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_9 == check_hlds__simplify__simplify_info__CastY_10);
    if (check_hlds__simplify__simplify_info__succeeded)
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_11_11;
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer check_hlds__simplify__simplify_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer check_hlds__simplify__simplify_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));

        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_3_3 == check_hlds__simplify__simplify_info__V_6_6);
        if (check_hlds__simplify__simplify_info__succeeded)
          {
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == check_hlds__simplify__simplify_info__V_7_7);
            if (check_hlds__simplify__simplify_info__succeeded)
              {
                check_hlds__simplify__simplify_info__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[3];
                {
                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_8_8)));
                }
              }
          }
      }
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____simplify_info_0_0(
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Integer check_hlds__simplify__simplify_info__CastX_24 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
    MR_Integer check_hlds__simplify__simplify_info__CastY_25 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_24 == check_hlds__simplify__simplify_info__CastY_25);
    if (check_hlds__simplify__simplify_info__succeeded)
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word check_hlds__simplify__simplify_info__V_18_18;

        {
          check_hlds__simplify__simplify_tasks____Compare____simplify_tasks_0_0(&check_hlds__simplify__simplify_info__V_18_18, check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_11_11);
        }
        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_18_18 == (MR_Integer) 0);
        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
        if (check_hlds__simplify__simplify_info__succeeded)
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_18_18;
        else
          {
            MR_Word check_hlds__simplify__simplify_info__V_19_19;

            {
              hlds__hlds_module____Compare____module_info_0_0(&check_hlds__simplify__simplify_info__V_19_19, check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_12_12);
            }
            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_19_19 == (MR_Integer) 0);
            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
            if (check_hlds__simplify__simplify_info__succeeded)
              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_19_19;
            else
              {
                MR_Word check_hlds__simplify__simplify_info__V_20_20;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[2], &check_hlds__simplify__simplify_info__V_20_20, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13)));
                }
                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_20_20 == (MR_Integer) 0);
                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                if (check_hlds__simplify__simplify_info__succeeded)
                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_20_20;
                else
                  {
                    MR_Word check_hlds__simplify__simplify_info__V_21_21;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_2[0], &check_hlds__simplify__simplify_info__V_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__V_7_7)), ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14)));
                    }
                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_21_21 == (MR_Integer) 0);
                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                    if (check_hlds__simplify__simplify_info__succeeded)
                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_21_21;
                    else
                      {
                        MR_Word check_hlds__simplify__simplify_info__V_22_22;

                        {
                          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&check_hlds__simplify__simplify_info__V_22_22, check_hlds__simplify__simplify_info__V_8_8, check_hlds__simplify__simplify_info__V_15_15);
                        }
                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_22_22 == (MR_Integer) 0);
                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                        if (check_hlds__simplify__simplify_info__succeeded)
                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_22_22;
                        else
                          {
                            MR_Word check_hlds__simplify__simplify_info__V_23_23;
                            MR_Integer check_hlds__simplify__simplify_info__V_33_33 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
                            MR_Integer check_hlds__simplify__simplify_info__V_34_34 = (MR_Integer) check_hlds__simplify__simplify_info__V_16_16;

                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_23_23, check_hlds__simplify__simplify_info__V_33_33, check_hlds__simplify__simplify_info__V_34_34);
                            }
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_23_23 == (MR_Integer) 0);
                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                            if (check_hlds__simplify__simplify_info__succeeded)
                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_23_23;
                            else
                              {
                                MR_Integer check_hlds__simplify__simplify_info__CastX_70 = (MR_Integer) check_hlds__simplify__simplify_info__V_10_10;
                                MR_Integer check_hlds__simplify__simplify_info__CastY_71 = (MR_Integer) check_hlds__simplify__simplify_info__V_17_17;

                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_70 == check_hlds__simplify__simplify_info__CastY_71);
                                if (check_hlds__simplify__simplify_info__succeeded)
                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
                                else
                                  {
                                    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 0)));
                                    MR_Integer check_hlds__simplify__simplify_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 1)));
                                    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 2)));
                                    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 3)));
                                    MR_Word check_hlds__simplify__simplify_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 4)));
                                    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 5)))) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                    MR_Integer check_hlds__simplify__simplify_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 6)));
                                    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, (MR_Integer) 8)));
                                    MR_Word check_hlds__simplify__simplify_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 0)));
                                    MR_Integer check_hlds__simplify__simplify_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 1)));
                                    MR_Word check_hlds__simplify__simplify_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 2)));
                                    MR_Word check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 3)));
                                    MR_Word check_hlds__simplify__simplify_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 4)));
                                    MR_Word check_hlds__simplify__simplify_info__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 5)))) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                    MR_Integer check_hlds__simplify__simplify_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 6)));
                                    MR_Word check_hlds__simplify__simplify_info__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_17_17, (MR_Integer) 8)));
                                    MR_Word check_hlds__simplify__simplify_info__V_59_59;

                                    {
                                      hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__simplify__simplify_info__V_59_59, check_hlds__simplify__simplify_info__V_35_35, check_hlds__simplify__simplify_info__V_47_47);
                                    }
                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_59_59 == (MR_Integer) 0);
                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                    if (check_hlds__simplify__simplify_info__succeeded)
                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_59_59;
                                    else
                                      {
                                        MR_Word check_hlds__simplify__simplify_info__V_60_60;

                                        {
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_60_60, check_hlds__simplify__simplify_info__V_36_36, check_hlds__simplify__simplify_info__V_48_48);
                                        }
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_60_60 == (MR_Integer) 0);
                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                        if (check_hlds__simplify__simplify_info__succeeded)
                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_60_60;
                                        else
                                          {
                                            MR_Word check_hlds__simplify__simplify_info__V_61_61;

                                            {
                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4], &check_hlds__simplify__simplify_info__V_61_61, ((MR_Box) (check_hlds__simplify__simplify_info__V_37_37)), ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49)));
                                            }
                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_61_61 == (MR_Integer) 0);
                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                            if (check_hlds__simplify__simplify_info__succeeded)
                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_61_61;
                                            else
                                              {
                                                MR_Word check_hlds__simplify__simplify_info__V_62_62;

                                                {
                                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6], &check_hlds__simplify__simplify_info__V_62_62, ((MR_Box) (check_hlds__simplify__simplify_info__V_38_38)), ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50)));
                                                }
                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_62_62 == (MR_Integer) 0);
                                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                                if (check_hlds__simplify__simplify_info__succeeded)
                                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_62_62;
                                                else
                                                  {
                                                    MR_Word check_hlds__simplify__simplify_info__V_63_63;

                                                    {
                                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7], &check_hlds__simplify__simplify_info__V_63_63, ((MR_Box) (check_hlds__simplify__simplify_info__V_39_39)), ((MR_Box) (check_hlds__simplify__simplify_info__V_51_51)));
                                                    }
                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_63_63 == (MR_Integer) 0);
                                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                                    if (check_hlds__simplify__simplify_info__succeeded)
                                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_63_63;
                                                    else
                                                      {
                                                        MR_Word check_hlds__simplify__simplify_info__V_64_64;
                                                        MR_Integer check_hlds__simplify__simplify_info__V_84_84 = (MR_Integer) check_hlds__simplify__simplify_info__V_40_40;
                                                        MR_Integer check_hlds__simplify__simplify_info__V_85_85 = (MR_Integer) check_hlds__simplify__simplify_info__V_52_52;

                                                        {
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_64_64, check_hlds__simplify__simplify_info__V_84_84, check_hlds__simplify__simplify_info__V_85_85);
                                                        }
                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_64_64 == (MR_Integer) 0);
                                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                                        if (check_hlds__simplify__simplify_info__succeeded)
                                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_64_64;
                                                        else
                                                          {
                                                            MR_Word check_hlds__simplify__simplify_info__V_65_65;
                                                            MR_Integer check_hlds__simplify__simplify_info__V_86_86 = (MR_Integer) check_hlds__simplify__simplify_info__V_41_41;
                                                            MR_Integer check_hlds__simplify__simplify_info__V_87_87 = (MR_Integer) check_hlds__simplify__simplify_info__V_53_53;

                                                            {
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_65_65, check_hlds__simplify__simplify_info__V_86_86, check_hlds__simplify__simplify_info__V_87_87);
                                                            }
                                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_65_65 == (MR_Integer) 0);
                                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                                            if (check_hlds__simplify__simplify_info__succeeded)
                                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_65_65;
                                                            else
                                                              {
                                                                MR_Word check_hlds__simplify__simplify_info__V_66_66;

                                                                {
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_66_66, check_hlds__simplify__simplify_info__V_42_42, check_hlds__simplify__simplify_info__V_54_54);
                                                                }
                                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_66_66 == (MR_Integer) 0);
                                                                check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                                                if (check_hlds__simplify__simplify_info__succeeded)
                                                                  *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_66_66;
                                                                else
                                                                  {
                                                                    MR_Word check_hlds__simplify__simplify_info__V_67_67;
                                                                    MR_Integer check_hlds__simplify__simplify_info__V_88_88 = (MR_Integer) check_hlds__simplify__simplify_info__V_43_43;
                                                                    MR_Integer check_hlds__simplify__simplify_info__V_89_89 = (MR_Integer) check_hlds__simplify__simplify_info__V_55_55;

                                                                    {
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_67_67, check_hlds__simplify__simplify_info__V_88_88, check_hlds__simplify__simplify_info__V_89_89);
                                                                    }
                                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_67_67 == (MR_Integer) 0);
                                                                    check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                                                    if (check_hlds__simplify__simplify_info__succeeded)
                                                                      *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_67_67;
                                                                    else
                                                                      {
                                                                        MR_Word check_hlds__simplify__simplify_info__V_68_68;
                                                                        MR_Integer check_hlds__simplify__simplify_info__V_90_90 = (MR_Integer) check_hlds__simplify__simplify_info__V_44_44;
                                                                        MR_Integer check_hlds__simplify__simplify_info__V_91_91 = (MR_Integer) check_hlds__simplify__simplify_info__V_56_56;

                                                                        {
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_68_68, check_hlds__simplify__simplify_info__V_90_90, check_hlds__simplify__simplify_info__V_91_91);
                                                                        }
                                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_68_68 == (MR_Integer) 0);
                                                                        check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                                                        if (check_hlds__simplify__simplify_info__succeeded)
                                                                          *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_68_68;
                                                                        else
                                                                          {
                                                                            MR_Word check_hlds__simplify__simplify_info__V_69_69;
                                                                            MR_Integer check_hlds__simplify__simplify_info__V_92_92 = (MR_Integer) check_hlds__simplify__simplify_info__V_45_45;
                                                                            MR_Integer check_hlds__simplify__simplify_info__V_93_93 = (MR_Integer) check_hlds__simplify__simplify_info__V_57_57;

                                                                            {
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__simplify_info__V_69_69, check_hlds__simplify__simplify_info__V_92_92, check_hlds__simplify__simplify_info__V_93_93);
                                                                            }
                                                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_69_69 == (MR_Integer) 0);
                                                                            check_hlds__simplify__simplify_info__succeeded = !(check_hlds__simplify__simplify_info__succeeded);
                                                                            if (check_hlds__simplify__simplify_info__succeeded)
                                                                              *check_hlds__simplify__simplify_info__HeadVar__1_1 = check_hlds__simplify__simplify_info__V_69_69;
                                                                            else
                                                                              {
                                                                                {
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[8], check_hlds__simplify__simplify_info__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__simplify_info__V_46_46)), ((MR_Box) (check_hlds__simplify__simplify_info__V_58_58)));
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
              }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____simplify_info_0_0(
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Integer check_hlds__simplify__simplify_info__CastX_17 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
    MR_Integer check_hlds__simplify__simplify_info__CastY_18 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_17 == check_hlds__simplify__simplify_info__CastY_18);
    if (check_hlds__simplify__simplify_info__succeeded)
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_21_21;
        MR_Word check_hlds__simplify__simplify_info__TypeInfo_22_22;
        MR_Word check_hlds__simplify__simplify_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer check_hlds__simplify__simplify_info__CastX_48;
        MR_Integer check_hlds__simplify__simplify_info__CastY_49;

        {
          check_hlds__simplify__simplify_info__succeeded = check_hlds__simplify__simplify_tasks____Unify____simplify_tasks_0_0(check_hlds__simplify__simplify_info__V_3_3, check_hlds__simplify__simplify_info__V_10_10);
        }
        if (check_hlds__simplify__simplify_info__succeeded)
          {
            {
              check_hlds__simplify__simplify_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__simplify__simplify_info__V_4_4, check_hlds__simplify__simplify_info__V_11_11);
            }
            if (check_hlds__simplify__simplify_info__succeeded)
              {
                check_hlds__simplify__simplify_info__TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[2];
                {
                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__V_5_5)), ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12)));
                }
                if (check_hlds__simplify__simplify_info__succeeded)
                  {
                    check_hlds__simplify__simplify_info__TypeInfo_22_22 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_2[0];
                    {
                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_22_22, ((MR_Box) (check_hlds__simplify__simplify_info__V_6_6)), ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13)));
                    }
                    if (check_hlds__simplify__simplify_info__succeeded)
                      {
                        {
                          check_hlds__simplify__simplify_info__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(check_hlds__simplify__simplify_info__V_7_7, check_hlds__simplify__simplify_info__V_14_14);
                        }
                        if (check_hlds__simplify__simplify_info__succeeded)
                          {
                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_8_8 == check_hlds__simplify__simplify_info__V_15_15);
                            if (check_hlds__simplify__simplify_info__succeeded)
                              {
                                check_hlds__simplify__simplify_info__CastX_48 = (MR_Integer) check_hlds__simplify__simplify_info__V_9_9;
                                check_hlds__simplify__simplify_info__CastY_49 = (MR_Integer) check_hlds__simplify__simplify_info__V_16_16;
                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_48 == check_hlds__simplify__simplify_info__CastY_49);
                                if (check_hlds__simplify__simplify_info__succeeded)
                                  check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
                                else
                                  {
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_30_51;
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_31_52;
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_32_53;
                                    MR_Word check_hlds__simplify__simplify_info__TypeInfo_33_54;
                                    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
                                    MR_Integer check_hlds__simplify__simplify_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
                                    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
                                    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
                                    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
                                    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                    MR_Integer check_hlds__simplify__simplify_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
                                    MR_Word check_hlds__simplify__simplify_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 8)));
                                    MR_Word check_hlds__simplify__simplify_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 0)));
                                    MR_Integer check_hlds__simplify__simplify_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 1)));
                                    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 2)));
                                    MR_Word check_hlds__simplify__simplify_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 3)));
                                    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 4)));
                                    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 5)))) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                    MR_Integer check_hlds__simplify__simplify_info__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 6)));
                                    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                    MR_Word check_hlds__simplify__simplify_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_16_16, (MR_Integer) 8)));

                                    {
                                      check_hlds__simplify__simplify_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__simplify__simplify_info__V_24_24, check_hlds__simplify__simplify_info__V_36_36);
                                    }
                                    if (check_hlds__simplify__simplify_info__succeeded)
                                      {
                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_25_25 == check_hlds__simplify__simplify_info__V_37_37);
                                        if (check_hlds__simplify__simplify_info__succeeded)
                                          {
                                            check_hlds__simplify__simplify_info__TypeInfo_30_51 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[4];
                                            {
                                              check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_30_51, ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26)), ((MR_Box) (check_hlds__simplify__simplify_info__V_38_38)));
                                            }
                                            if (check_hlds__simplify__simplify_info__succeeded)
                                              {
                                                check_hlds__simplify__simplify_info__TypeInfo_31_52 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[6];
                                                {
                                                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_31_52, ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27)), ((MR_Box) (check_hlds__simplify__simplify_info__V_39_39)));
                                                }
                                                if (check_hlds__simplify__simplify_info__succeeded)
                                                  {
                                                    check_hlds__simplify__simplify_info__TypeInfo_32_53 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[7];
                                                    {
                                                      check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_32_53, ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28)), ((MR_Box) (check_hlds__simplify__simplify_info__V_40_40)));
                                                    }
                                                    if (check_hlds__simplify__simplify_info__succeeded)
                                                      {
                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_29_29 == check_hlds__simplify__simplify_info__V_41_41);
                                                        if (check_hlds__simplify__simplify_info__succeeded)
                                                          {
                                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_30_30 == check_hlds__simplify__simplify_info__V_42_42);
                                                            if (check_hlds__simplify__simplify_info__succeeded)
                                                              {
                                                                check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_31_31 == check_hlds__simplify__simplify_info__V_43_43);
                                                                if (check_hlds__simplify__simplify_info__succeeded)
                                                                  {
                                                                    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_32_32 == check_hlds__simplify__simplify_info__V_44_44);
                                                                    if (check_hlds__simplify__simplify_info__succeeded)
                                                                      {
                                                                        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_33_33 == check_hlds__simplify__simplify_info__V_45_45);
                                                                        if (check_hlds__simplify__simplify_info__succeeded)
                                                                          {
                                                                            check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_34_34 == check_hlds__simplify__simplify_info__V_46_46);
                                                                            if (check_hlds__simplify__simplify_info__succeeded)
                                                                              {
                                                                                check_hlds__simplify__simplify_info__TypeInfo_33_54 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[8];
                                                                                {
                                                                                  check_hlds__simplify__simplify_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__simplify_info__TypeInfo_33_54, ((MR_Box) (check_hlds__simplify__simplify_info__V_35_35)), ((MR_Box) (check_hlds__simplify__simplify_info__V_47_47)));
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
              }
          }
      }
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info____Compare____innermost_proc_0_0(
  MR_Word * check_hlds__simplify__simplify_info__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__3_3)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Integer check_hlds__simplify__simplify_info__CastX_8 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;
    MR_Integer check_hlds__simplify__simplify_info__CastY_9 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__3_3;

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_8 == check_hlds__simplify__simplify_info__CastY_9);
    if (check_hlds__simplify__simplify_info__succeeded)
      *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((check_hlds__simplify__simplify_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__simplify__simplify_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 0;
      else
        *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));

        if ((check_hlds__simplify__simplify_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__simplify__simplify_info__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__term____Compare____context_0_0(check_hlds__simplify__simplify_info__HeadVar__1_1, check_hlds__simplify__simplify_info__V_11_11, check_hlds__simplify__simplify_info__V_7_7);
            }
          }
      }
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info____Unify____innermost_proc_0_0(
  MR_Word check_hlds__simplify__simplify_info__HeadVar__1_1,
  MR_Word check_hlds__simplify__simplify_info__HeadVar__2_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Integer check_hlds__simplify__simplify_info__CastX_7 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
    MR_Integer check_hlds__simplify__simplify_info__CastY_8 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastX_7 == check_hlds__simplify__simplify_info__CastY_8);
    if (check_hlds__simplify__simplify_info__succeeded)
      check_hlds__simplify__simplify_info__succeeded = MR_TRUE;
    else
    if ((check_hlds__simplify__simplify_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer check_hlds__simplify__simplify_info__CastX_3 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__1_1;
        MR_Integer check_hlds__simplify__simplify_info__CastY_4 = (MR_Integer) check_hlds__simplify__simplify_info__HeadVar__2_2;

        check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__CastY_4 == check_hlds__simplify__simplify_info__CastX_3);
      }
    else
      {
        MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__simplify__simplify_info__V_6_6;

        check_hlds__simplify__simplify_info__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__simplify_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__simplify__simplify_info__succeeded)
          {
            check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__HeadVar__2_2, (MR_Integer) 0)));
            {
              check_hlds__simplify__simplify_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__simplify_info__V_5_5, check_hlds__simplify__simplify_info__V_6_6);
            }
          }
      }
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_or_opt_duplicate_calls_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__OptDuplicateCalls_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__WarnDuplicateCalls_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
    MR_Word check_hlds__simplify__simplify_info__V_18_18;

    *check_hlds__simplify__simplify_info__OptDuplicateCalls_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_5, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__WarnDuplicateCalls_6 == (MR_Integer) 1);
    if (!(check_hlds__simplify__simplify_info__succeeded))
      check_hlds__simplify__simplify_info__succeeded = (*check_hlds__simplify__simplify_info__OptDuplicateCalls_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_ignore_par_conjunctions_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_extra_common_struct_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_common_struct_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_const_prop_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_opt_duplicate_calls_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_elim_removable_scopes_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_excess_assign_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_after_front_end_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_mark_code_model_changes_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_obsolete_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_format_calls_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_duplicate_calls_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__simplify__simplify_info__simplify_do_warn_simple_code_1_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_2)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_2, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_3, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_4_4 == (MR_Integer) 1);
    return check_hlds__simplify__simplify_info__succeeded;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_deleted_call_callees_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__TGP_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 8)));

    {
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__TGP_4));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_has_user_event_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__HUE_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 8)));
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__HUE_4 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_found_contains_trace_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__FCT_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 8)));
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    {
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__FCT_4 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_has_parallel_conj_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__HPC_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 8)));
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);

    {
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__HPC_4 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_cost_delta_3_p_0(
  MR_Integer check_hlds__simplify__simplify_info__CD_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 8)));
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));

    {
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__CD_4));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_should_rerun_det_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 8)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

    {
      check_hlds__simplify__simplify_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_21_21 | (((MR_Integer) 1 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_should_requantify_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 8)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_8_8, (MR_Integer) 5)))) & (MR_Integer) 1);

    {
      check_hlds__simplify__simplify_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 5) = ((MR_Box) (((MR_Integer) 1 | ((check_hlds__simplify__simplify_info__V_22_22 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_error_specs_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__Specs_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 8)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));

    {
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_4));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_elim_vars_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__EV_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10;
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 8)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_9_9, (MR_Integer) 3)));

    {
      check_hlds__simplify__simplify_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__EV_4));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_22_22 | ((check_hlds__simplify__simplify_info__V_23_23 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_27_27 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_10_10, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_rtti_varmaps_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__RVM_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RVM_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_varset_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__VS_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__VS_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_var_types_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__VT_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VT_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_module_info_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__MI_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_9_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__MI_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_set_simplify_tasks_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__Tasks_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Tasks_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_10_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_11_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_12_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_13_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_deleted_call_callees_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__TGP_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    *check_hlds__simplify__simplify_info__TGP_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 8)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_has_user_event_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__HUE_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_22_22;

    *check_hlds__simplify__simplify_info__HUE_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 8)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_found_contains_trace_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__FCT_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
    MR_Word check_hlds__simplify__simplify_info__V_22_22;

    *check_hlds__simplify__simplify_info__FCT_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 8)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_has_parallel_conj_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__HPC_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
    MR_Word check_hlds__simplify__simplify_info__V_22_22;

    *check_hlds__simplify__simplify_info__HPC_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 8)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_cost_delta_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Integer * check_hlds__simplify__simplify_info__CD_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
    MR_Word check_hlds__simplify__simplify_info__V_22_22;

    *check_hlds__simplify__simplify_info__CD_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 8)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_should_rerun_det_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__RRD_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
    MR_Word check_hlds__simplify__simplify_info__V_22_22;

    *check_hlds__simplify__simplify_info__RRD_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 8)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_should_requantify_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__RQ_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
    MR_Word check_hlds__simplify__simplify_info__V_22_22;

    *check_hlds__simplify__simplify_info__RQ_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 8)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_error_specs_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__Specs_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
    MR_Word check_hlds__simplify__simplify_info__V_22_22;

    *check_hlds__simplify__simplify_info__Specs_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 8)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_elim_vars_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__EV_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
    MR_Word check_hlds__simplify__simplify_info__V_22_22;

    *check_hlds__simplify__simplify_info__EV_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 8)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_inst_varset_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__IVS_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14;
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
    MR_Integer check_hlds__simplify__simplify_info__V_18_18;
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
    MR_Word check_hlds__simplify__simplify_info__V_20_20;
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
    MR_Word check_hlds__simplify__simplify_info__V_22_22;

    *check_hlds__simplify__simplify_info__IVS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 2)));
    check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 3)));
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 6)));
    check_hlds__simplify__simplify_info__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_5_5, (MR_Integer) 8)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_id_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_4,
  MR_Word * check_hlds__simplify__simplify_info__PredId_5,
  MR_Integer * check_hlds__simplify__simplify_info__ProcId_6)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SubInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15;
    MR_Word check_hlds__simplify__simplify_info__V_16_16;
    MR_Word check_hlds__simplify__simplify_info__V_17_17;
    MR_Word check_hlds__simplify__simplify_info__V_18_18;
    MR_Word check_hlds__simplify__simplify_info__V_19_19;
    MR_Integer check_hlds__simplify__simplify_info__V_20_20;
    MR_Word check_hlds__simplify__simplify_info__V_21_21;
    MR_Word check_hlds__simplify__simplify_info__V_22_22;
    MR_Word check_hlds__simplify__simplify_info__V_23_23;
    MR_Word check_hlds__simplify__simplify_info__V_24_24;

    *check_hlds__simplify__simplify_info__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 0)));
    *check_hlds__simplify__simplify_info__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 1)));
    check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 2)));
    check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 3)));
    check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 5)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 6)));
    check_hlds__simplify__simplify_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_7, (MR_Integer) 8)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_fully_strict_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__FS_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

    *check_hlds__simplify__simplify_info__FS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_rtti_varmaps_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__RVM_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

    *check_hlds__simplify__simplify_info__RVM_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_varset_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__VS_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

    *check_hlds__simplify__simplify_info__VS_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_var_types_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__VT_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

    *check_hlds__simplify__simplify_info__VT_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_module_info_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__MI_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_6_6;
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

    *check_hlds__simplify__simplify_info__MI_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_simplify_tasks_2_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_3,
  MR_Word * check_hlds__simplify__simplify_info__Tasks_4)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_5_5;
    MR_Word check_hlds__simplify__simplify_info__V_6_6;
    MR_Word check_hlds__simplify__simplify_info__V_7_7;
    MR_Word check_hlds__simplify__simplify_info__V_8_8;
    MR_Word check_hlds__simplify__simplify_info__V_9_9;
    MR_Word check_hlds__simplify__simplify_info__V_10_10;

    *check_hlds__simplify__simplify_info__Tasks_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 0)));
    check_hlds__simplify__simplify_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 1)));
    check_hlds__simplify__simplify_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 2)));
    check_hlds__simplify__simplify_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 3)));
    check_hlds__simplify__simplify_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 5)));
    check_hlds__simplify__simplify_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_3, (MR_Integer) 6)));
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_apply_substitutions_and_duplicate_5_p_0(
  MR_Word check_hlds__simplify__simplify_info__ToVar_6,
  MR_Word check_hlds__simplify__simplify_info__FromVar_7,
  MR_Word check_hlds__simplify__simplify_info__TSubst_8,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_17)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__TypeInfo_21_21;
    MR_Word check_hlds__simplify__simplify_info__TypeInfo_22_22;
    MR_Word check_hlds__simplify__simplify_info__VarTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__VarTypes_12;
    MR_Word check_hlds__simplify__simplify_info__Renaming_13;
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps1_14;
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps_15;
    MR_Word check_hlds__simplify__simplify_info__V_18_18;
    MR_Word check_hlds__simplify__simplify_info__V_44_44;
    MR_Word check_hlds__simplify__simplify_info__V_45_45;
    MR_Word check_hlds__simplify__simplify_info__V_46_46;
    MR_Word check_hlds__simplify__simplify_info__V_49_49;
    MR_Word check_hlds__simplify__simplify_info__V_50_50;
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_47_47;
    MR_Word check_hlds__simplify__simplify_info__V_48_48;

    {
      hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(check_hlds__simplify__simplify_info__TSubst_8, check_hlds__simplify__simplify_info__VarTypes0_10, &check_hlds__simplify__simplify_info__VarTypes_12);
    }
    check_hlds__simplify__simplify_info__TypeInfo_21_21 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[0];
    {
      check_hlds__simplify__simplify_info__Renaming_13 = mercury__map__singleton_2_f_0(check_hlds__simplify__simplify_info__TypeInfo_21_21, check_hlds__simplify__simplify_info__TypeInfo_21_21, ((MR_Box) (check_hlds__simplify__simplify_info__ToVar_6)), ((MR_Box) (check_hlds__simplify__simplify_info__FromVar_7)));
    }
    check_hlds__simplify__simplify_info__TypeInfo_22_22 = (MR_Word) &check_hlds__simplify__simplify_info_scalar_common_1[1];
    {
      check_hlds__simplify__simplify_info__V_18_18 = mercury__map__init_0_f_0(check_hlds__simplify__simplify_info__TypeInfo_22_22, check_hlds__simplify__simplify_info__TypeInfo_22_22);
    }
    {
      hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(check_hlds__simplify__simplify_info__V_18_18, check_hlds__simplify__simplify_info__TSubst_8, check_hlds__simplify__simplify_info__Renaming_13, check_hlds__simplify__simplify_info__RttiVarMaps0_11, &check_hlds__simplify__simplify_info__RttiVarMaps1_14);
    }
    {
      hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(check_hlds__simplify__simplify_info__FromVar_7, check_hlds__simplify__simplify_info__ToVar_6, check_hlds__simplify__simplify_info__RttiVarMaps1_14, &check_hlds__simplify__simplify_info__RttiVarMaps_15);
    }
    check_hlds__simplify__simplify_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
    check_hlds__simplify__simplify_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
    check_hlds__simplify__simplify_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
    check_hlds__simplify__simplify_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
    check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
    check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_44_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_45_45));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_46_46));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VarTypes_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RttiVarMaps_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_incr_cost_delta_3_p_0(
  MR_Integer check_hlds__simplify__simplify_info__Incr_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Integer check_hlds__simplify__simplify_info__CostDelta0_6;
    MR_Integer check_hlds__simplify__simplify_info__CostDelta_7;
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
    MR_Word check_hlds__simplify__simplify_info__V_30_30;
    MR_Word check_hlds__simplify__simplify_info__V_37_37;

    check_hlds__simplify__simplify_info__CostDelta0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 8)));
    check_hlds__simplify__simplify_info__CostDelta_7 = (check_hlds__simplify__simplify_info__CostDelta0_6 + check_hlds__simplify__simplify_info__Incr_4);
    {
      check_hlds__simplify__simplify_info__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_25_25 | ((check_hlds__simplify__simplify_info__V_26_26 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__CostDelta_7));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_30_30));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_37_37));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_simple_code_spec_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__Spec_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SimplifyTasks_10, (MR_Integer) 0)))) >> (MR_Integer) 12)) & (MR_Integer) 1);

    check_hlds__simplify__simplify_info__succeeded = (check_hlds__simplify__simplify_info__V_11_11 == (MR_Integer) 1);
    if (check_hlds__simplify__simplify_info__succeeded)
      {
        MR_Word check_hlds__simplify__simplify_info__Specs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 4)));
        MR_Word check_hlds__simplify__simplify_info__Specs_37;
        MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 0)));
        MR_Integer check_hlds__simplify__simplify_info__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 1)));
        MR_Word check_hlds__simplify__simplify_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 2)));
        MR_Word check_hlds__simplify__simplify_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 3)));
        MR_Word check_hlds__simplify__simplify_info__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer check_hlds__simplify__simplify_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 6)));
        MR_Word check_hlds__simplify__simplify_info__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word check_hlds__simplify__simplify_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 8)));
        MR_Word check_hlds__simplify__simplify_info__V_65_65;

        {
          check_hlds__simplify__simplify_info__Specs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_37, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Spec_4));
          MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs0_36));
        }
        {
          check_hlds__simplify__simplify_info__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_65_65, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_48_48));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_65_65, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_49_49));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_65_65, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_50_50));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_65_65, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_51_51));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_65_65, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_37));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_65_65, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_52_52 | ((check_hlds__simplify__simplify_info__V_53_53 << (MR_Integer) 1)))));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_65_65, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_54_54));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_65_65, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_55_55 | ((((check_hlds__simplify__simplify_info__V_56_56 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_57_57 << (MR_Integer) 2)))))));
          MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_65_65, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_58_58));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__SimplifyTasks_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_27_27));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_28_28));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_29_29));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_30_30));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_65_65));
        }
      }
    else
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6;
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_error_spec_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__Spec_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__Specs0_6;
    MR_Word check_hlds__simplify__simplify_info__Specs_7;
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
    MR_Word check_hlds__simplify__simplify_info__V_25_25;
    MR_Integer check_hlds__simplify__simplify_info__V_26_26;
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
    MR_Word check_hlds__simplify__simplify_info__V_30_30;
    MR_Word check_hlds__simplify__simplify_info__V_37_37;

    check_hlds__simplify__simplify_info__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 8)));
    {
      check_hlds__simplify__simplify_info__Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_7, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__Spec_4));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__Specs_7, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs0_6));
    }
    {
      check_hlds__simplify__simplify_info__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__Specs_7));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_30_30));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_37_37));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_add_elim_vars_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__ElimVars_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__ElimVarsLists0_6;
    MR_Word check_hlds__simplify__simplify_info__ElimVarsLists_7;
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_23_23;
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
    MR_Word check_hlds__simplify__simplify_info__V_25_25;
    MR_Integer check_hlds__simplify__simplify_info__V_26_26;
    MR_Word check_hlds__simplify__simplify_info__V_27_27;
    MR_Word check_hlds__simplify__simplify_info__V_28_28;
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
    MR_Word check_hlds__simplify__simplify_info__V_30_30;
    MR_Word check_hlds__simplify__simplify_info__V_37_37;

    check_hlds__simplify__simplify_info__ElimVarsLists0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 3)));
    check_hlds__simplify__simplify_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 6)));
    check_hlds__simplify__simplify_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_13_13, (MR_Integer) 8)));
    {
      check_hlds__simplify__simplify_info__ElimVarsLists_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__ElimVarsLists_7, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVars_4));
      MR_hl_field(MR_mktag(1), check_hlds__simplify__simplify_info__ElimVarsLists_7, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVarsLists0_6));
    }
    {
      check_hlds__simplify__simplify_info__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_20_20));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_21_21));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_22_22));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__ElimVarsLists_7));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_23_23));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 5) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_24_24 | ((check_hlds__simplify__simplify_info__V_25_25 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_26_26));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 7) = ((MR_Box) ((check_hlds__simplify__simplify_info__V_27_27 | ((((check_hlds__simplify__simplify_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__simplify__simplify_info__V_29_29 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_37_37, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_30_30));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_14_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_15_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_16_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_17_17));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_18_18));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_19_19));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_37_37));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_get_pred_proc_info_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__Info_4,
  MR_Word * check_hlds__simplify__simplify_info__PredInfo_5,
  MR_Word * check_hlds__simplify__simplify_info__ProcInfo_6)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__PredId_8;
    MR_Integer check_hlds__simplify__simplify_info__ProcId_9;
    MR_Word check_hlds__simplify__simplify_info__SubInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__Info_4, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_29_29;
    MR_Word check_hlds__simplify__simplify_info__V_30_30;
    MR_Word check_hlds__simplify__simplify_info__V_31_31;
    MR_Word check_hlds__simplify__simplify_info__V_32_32;
    MR_Word check_hlds__simplify__simplify_info__V_33_33;
    MR_Integer check_hlds__simplify__simplify_info__V_34_34;
    MR_Word check_hlds__simplify__simplify_info__V_35_35;
    MR_Word check_hlds__simplify__simplify_info__V_36_36;
    MR_Word check_hlds__simplify__simplify_info__V_37_37;
    MR_Word check_hlds__simplify__simplify_info__V_38_38;

    check_hlds__simplify__simplify_info__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 0)));
    check_hlds__simplify__simplify_info__ProcId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 1)));
    check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 2)));
    check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 3)));
    check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 4)));
    check_hlds__simplify__simplify_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 5)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 6)));
    check_hlds__simplify__simplify_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_21, (MR_Integer) 8)));
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__simplify__simplify_info__ModuleInfo_7, check_hlds__simplify__simplify_info__PredId_8, check_hlds__simplify__simplify_info__ProcId_9, check_hlds__simplify__simplify_info__PredInfo_5, check_hlds__simplify__simplify_info__ProcInfo_6);
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_reinit_3_p_0(
  MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_4,
  MR_Word check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6,
  MR_Word * check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__V_24_24;
    MR_Word check_hlds__simplify__simplify_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
    MR_Word check_hlds__simplify__simplify_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
    MR_Word check_hlds__simplify__simplify_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 0)));
    MR_Integer check_hlds__simplify__simplify_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 1)));
    MR_Word check_hlds__simplify__simplify_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 2)));
    MR_Word check_hlds__simplify__simplify_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 3)));
    MR_Word check_hlds__simplify__simplify_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 4)));
    MR_Integer check_hlds__simplify__simplify_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 6)));
    MR_Word check_hlds__simplify__simplify_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 8)));
    MR_Word check_hlds__simplify__simplify_info__V_50_50 = check_hlds__simplify__simplify_info__SimplifyTasks_4;
    MR_Word check_hlds__simplify__simplify_info__V_51_51 = check_hlds__simplify__simplify_info__V_26_26;
    MR_Word check_hlds__simplify__simplify_info__V_52_52 = check_hlds__simplify__simplify_info__V_27_27;
    MR_Word check_hlds__simplify__simplify_info__V_53_53 = check_hlds__simplify__simplify_info__V_28_28;
    MR_Word check_hlds__simplify__simplify_info__V_54_54 = check_hlds__simplify__simplify_info__V_29_29;
    MR_Word check_hlds__simplify__simplify_info__V_55_55 = check_hlds__simplify__simplify_info__V_30_30;
    MR_Word check_hlds__simplify__simplify_info__V_63_63 = check_hlds__simplify__simplify_info__V_38_38;
    MR_Integer check_hlds__simplify__simplify_info__V_64_64 = check_hlds__simplify__simplify_info__V_39_39;
    MR_Word check_hlds__simplify__simplify_info__V_65_65 = check_hlds__simplify__simplify_info__V_40_40;
    MR_Word check_hlds__simplify__simplify_info__V_66_66 = check_hlds__simplify__simplify_info__V_41_41;
    MR_Word check_hlds__simplify__simplify_info__V_67_67 = check_hlds__simplify__simplify_info__V_42_42;
    MR_Integer check_hlds__simplify__simplify_info__V_70_70 = check_hlds__simplify__simplify_info__V_45_45;
    MR_Word check_hlds__simplify__simplify_info__V_72_72 = check_hlds__simplify__simplify_info__V_47_47;
    MR_Word check_hlds__simplify__simplify_info__V_74_74 = check_hlds__simplify__simplify_info__V_49_49;
    MR_Word check_hlds__simplify__simplify_info__V_75_75 = check_hlds__simplify__simplify_info__V_50_50;
    MR_Word check_hlds__simplify__simplify_info__V_76_76 = check_hlds__simplify__simplify_info__V_51_51;
    MR_Word check_hlds__simplify__simplify_info__V_77_77 = check_hlds__simplify__simplify_info__V_52_52;
    MR_Word check_hlds__simplify__simplify_info__V_78_78 = check_hlds__simplify__simplify_info__V_53_53;
    MR_Word check_hlds__simplify__simplify_info__V_79_79 = check_hlds__simplify__simplify_info__V_54_54;
    MR_Word check_hlds__simplify__simplify_info__V_80_80 = check_hlds__simplify__simplify_info__V_55_55;
    MR_Word check_hlds__simplify__simplify_info__V_88_88 = check_hlds__simplify__simplify_info__V_63_63;
    MR_Integer check_hlds__simplify__simplify_info__V_89_89 = check_hlds__simplify__simplify_info__V_64_64;
    MR_Word check_hlds__simplify__simplify_info__V_90_90 = check_hlds__simplify__simplify_info__V_65_65;
    MR_Word check_hlds__simplify__simplify_info__V_91_91 = check_hlds__simplify__simplify_info__V_66_66;
    MR_Word check_hlds__simplify__simplify_info__V_92_92 = check_hlds__simplify__simplify_info__V_67_67;
    MR_Integer check_hlds__simplify__simplify_info__V_95_95 = check_hlds__simplify__simplify_info__V_70_70;
    MR_Word check_hlds__simplify__simplify_info__V_97_97 = check_hlds__simplify__simplify_info__V_72_72;
    MR_Word check_hlds__simplify__simplify_info__V_99_99 = check_hlds__simplify__simplify_info__V_74_74;
    MR_Word check_hlds__simplify__simplify_info__V_100_100 = check_hlds__simplify__simplify_info__V_75_75;
    MR_Word check_hlds__simplify__simplify_info__V_101_101 = check_hlds__simplify__simplify_info__V_76_76;
    MR_Word check_hlds__simplify__simplify_info__V_102_102 = check_hlds__simplify__simplify_info__V_77_77;
    MR_Word check_hlds__simplify__simplify_info__V_103_103 = check_hlds__simplify__simplify_info__V_78_78;
    MR_Word check_hlds__simplify__simplify_info__V_104_104 = check_hlds__simplify__simplify_info__V_79_79;
    MR_Word check_hlds__simplify__simplify_info__V_105_105 = check_hlds__simplify__simplify_info__V_80_80;
    MR_Word check_hlds__simplify__simplify_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
    MR_Word check_hlds__simplify__simplify_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 5)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word check_hlds__simplify__simplify_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_31_31, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

    {
      check_hlds__simplify__simplify_info__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_88_88));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_89_89));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_90_90));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_91_91));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_92_92));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 5) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_95_95));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 7) = ((MR_Box) (((MR_Integer) 1 | ((((check_hlds__simplify__simplify_info__V_97_97 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__V_24_24, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__V_99_99));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__STATE_VARIABLE_Info_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__V_100_100));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__V_101_101));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__V_102_102));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__V_103_103));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__V_104_104));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__V_105_105));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__V_24_24));
    }
  }
}

void MR_CALL 
check_hlds__simplify__simplify_info__simplify_info_init_6_p_0(
  MR_Word check_hlds__simplify__simplify_info__ModuleInfo_7,
  MR_Word check_hlds__simplify__simplify_info__PredId_8,
  MR_Integer check_hlds__simplify__simplify_info__ProcId_9,
  MR_Word check_hlds__simplify__simplify_info__ProcInfo_10,
  MR_Word check_hlds__simplify__simplify_info__SimplifyTasks_11,
  MR_Word * check_hlds__simplify__simplify_info__Info_12)
{
  {
    MR_bool check_hlds__simplify__simplify_info__succeeded;
    MR_Word check_hlds__simplify__simplify_info__Globals_13;
    MR_Word check_hlds__simplify__simplify_info__FullyStrict_14;
    MR_Word check_hlds__simplify__simplify_info__VarSet_15;
    MR_Word check_hlds__simplify__simplify_info__VarTypes_16;
    MR_Word check_hlds__simplify__simplify_info__InstVarSet_17;
    MR_Word check_hlds__simplify__simplify_info__RttiVarMaps_18;
    MR_Word check_hlds__simplify__simplify_info__TraceGoalProcs_26;
    MR_Word check_hlds__simplify__simplify_info__SubInfo_27;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__simplify_info__ModuleInfo_7, &check_hlds__simplify__simplify_info__Globals_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__simplify_info__Globals_13, (MR_Integer) 167, &check_hlds__simplify__simplify_info__FullyStrict_14);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__VarSet_15);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__VarTypes_16);
    }
    {
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__InstVarSet_17);
    }
    {
      hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(check_hlds__simplify__simplify_info__ProcInfo_10, &check_hlds__simplify__simplify_info__RttiVarMaps_18);
    }
    {
      mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &check_hlds__simplify__simplify_info__TraceGoalProcs_26);
    }
    {
      check_hlds__simplify__simplify_info__SubInfo_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_27, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__PredId_8));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_27, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ProcId_9));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_27, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__InstVarSet_17));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_27, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_27, 5) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_27, 6) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_27, 7) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), check_hlds__simplify__simplify_info__SubInfo_27, 8) = ((MR_Box) (check_hlds__simplify__simplify_info__TraceGoalProcs_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *check_hlds__simplify__simplify_info__Info_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__simplify_info__SimplifyTasks_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__simplify_info__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__simplify__simplify_info__VarSet_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__simplify__simplify_info__VarTypes_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__simplify__simplify_info__RttiVarMaps_18));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__simplify__simplify_info__FullyStrict_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__simplify__simplify_info__SubInfo_27));
    }
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
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_info_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_nested_context_0);
	MR_register_type_ctor_info(&check_hlds__simplify__simplify_info__check_hlds__simplify__simplify_info__type_ctor_info_simplify_sub_info_0);
}

void mercury__check_hlds__simplify__simplify_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.simplify_info. */
