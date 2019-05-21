/*
** Automatically generated from `term_util.m'
** by the Mercury compiler,
** version rotd-2017-07-24
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


/* :- module transform_hlds.term_util. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_util__init
ENDINIT
*/

#include "transform_hlds.term_util.mih"


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
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
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
#include "require.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_PseudoTypeInfo transform_hlds__term_util__transform_hlds__term_util__field_types_pass_info_0_0[3];

static const MR_DuFunctorDesc transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__term_util__transform_hlds__term_util__du_ptag_ordered_pass_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_name_ordered_pass_info_0[1];

static const MR_Integer transform_hlds__term_util__transform_hlds__term_util__functor_number_map_pass_info_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0;

static MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2,
  MR_Word transform_hlds__term_util__ModuleInfo_3);

static void MR_CALL 
transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__Bools_2,
  MR_Word * transform_hlds__term_util__HeadVar__3_3);

static void MR_CALL 
transform_hlds__term_util__partition_call_args_2_5_p_0(
  MR_Word transform_hlds__term_util__ModuleInfo_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2,
  MR_Word transform_hlds__term_util__HeadVar__3_3,
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
  MR_Word * transform_hlds__term_util__HeadVar__5_5);

static MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0_10001(
  MR_Box transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0_10001(
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2,
  MR_Box transform_hlds__term_util__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0_10001(
  MR_Box transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0_10001(
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2,
  MR_Box transform_hlds__term_util__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0_10001(
  MR_Box transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0_10001(
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2,
  MR_Box transform_hlds__term_util__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0_10001(
  MR_Box transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0_10001(
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2,
  MR_Box transform_hlds__term_util__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_util_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__term_util_scalar_common_2[2][3];

static /* final */ const MR_Box transform_hlds__term_util_scalar_common_3[2][1];




static /* final */ const MR_Box transform_hlds__term_util_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_arg_size_info_1)),
    ((MR_Box) (&transform_hlds__term_util_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_util_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&transform_hlds__term_util_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__term_util_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box transform_hlds__term_util_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__term_util_scalar_common_3[0]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__term_errors__transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_arg_size_info_1,
  {
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_arg_size_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_util____Unify____arg_size_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_util____Compare____arg_size_info_0_0_10001)),
  (MR_String) "transform_hlds.term_util",
  (MR_String) "arg_size_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_util__parse_tree__prog_data_pragma__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo transform_hlds__term_util__transform_hlds__term_util__field_types_pass_info_0_0[3] = {
  (MR_PseudoTypeInfo) &transform_hlds__term_norm__transform_hlds__term_norm__type_ctor_info_functor_info_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0 = {
  (MR_String) "pass_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__term_util__transform_hlds__term_util__field_types_pass_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0[1] = {
  &transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0
};

static const MR_DuPtagLayout transform_hlds__term_util__transform_hlds__term_util__du_ptag_ordered_pass_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__term_util__transform_hlds__term_util__du_stag_ordered_pass_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__term_util__transform_hlds__term_util__du_name_ordered_pass_info_0[1] = {
  &transform_hlds__term_util__transform_hlds__term_util__du_functor_desc_pass_info_0_0
};

static const MR_Integer transform_hlds__term_util__transform_hlds__term_util__functor_number_map_pass_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_pass_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__term_util____Unify____pass_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_util____Compare____pass_info_0_0_10001)),
  (MR_String) "transform_hlds.term_util",
  (MR_String) "pass_info",
  {     transform_hlds__term_util__transform_hlds__term_util__du_name_ordered_pass_info_0 },
  {     transform_hlds__term_util__transform_hlds__term_util__du_ptag_ordered_pass_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__term_util__transform_hlds__term_util__functor_number_map_pass_info_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 = {
  &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_generic_termination_info_2,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0,
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_termination_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_util____Unify____termination_info_0_0_10001)),
  ((MR_Box) (transform_hlds__term_util____Compare____termination_info_0_0_10001)),
  (MR_String) "transform_hlds.term_util",
  (MR_String) "termination_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_util__parse_tree__prog_data_pragma__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_term_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__term_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__term_util__list__ti_list_1bool__type_ctor_info_bool_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_used_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__term_util____Unify____used_args_0_0_10001)),
  ((MR_Box) (transform_hlds__term_util____Compare____used_args_0_0_10001)),
  (MR_String) "transform_hlds.term_util",
  (MR_String) "used_args",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__term_util__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0(
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2,
  MR_Word transform_hlds__term_util__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[1], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

    {
      transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[1], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_util__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0(
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2,
  MR_Word transform_hlds__term_util__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[0], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

    {
      transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_2[0], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_util__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0(
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2,
  MR_Word transform_hlds__term_util__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Integer transform_hlds__term_util__CastX_12 = (MR_Integer) transform_hlds__term_util__HeadVar__2_2;
    MR_Integer transform_hlds__term_util__CastY_13 = (MR_Integer) transform_hlds__term_util__HeadVar__3_3;

    transform_hlds__term_util__succeeded = (transform_hlds__term_util__CastX_12 == transform_hlds__term_util__CastY_13);
    if (transform_hlds__term_util__succeeded)
      *transform_hlds__term_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__term_util__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_util__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer transform_hlds__term_util__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_util__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_util__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer transform_hlds__term_util__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__term_util__Var_10;

        {
          transform_hlds__term_norm____Compare____functor_info_0_0(&transform_hlds__term_util__Var_10, transform_hlds__term_util__ArgX1_4, transform_hlds__term_util__ArgY1_5);
        }
        transform_hlds__term_util__succeeded = (transform_hlds__term_util__Var_10 == (MR_Integer) 0);
        transform_hlds__term_util__succeeded = !(transform_hlds__term_util__succeeded);
        if (transform_hlds__term_util__succeeded)
          *transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__Var_10;
        else
          {
            MR_Word transform_hlds__term_util__Var_11;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__term_util__Var_11, transform_hlds__term_util__ArgX2_6, transform_hlds__term_util__ArgY2_7);
            }
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__Var_11 == (MR_Integer) 0);
            transform_hlds__term_util__succeeded = !(transform_hlds__term_util__succeeded);
            if (transform_hlds__term_util__succeeded)
              *transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__Var_11;
            else
              {
                mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__term_util__HeadVar__1_1, transform_hlds__term_util__ArgX3_8, transform_hlds__term_util__ArgY3_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Integer transform_hlds__term_util__CastX_9 = (MR_Integer) transform_hlds__term_util__HeadVar__1_1;
    MR_Integer transform_hlds__term_util__CastY_10 = (MR_Integer) transform_hlds__term_util__HeadVar__2_2;

    transform_hlds__term_util__succeeded = (transform_hlds__term_util__CastX_9 == transform_hlds__term_util__CastY_10);
    if (transform_hlds__term_util__succeeded)
      transform_hlds__term_util__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__term_util__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__term_util__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer transform_hlds__term_util__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_util__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_util__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer transform_hlds__term_util__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 2)));

        {
          transform_hlds__term_util__succeeded = transform_hlds__term_norm____Unify____functor_info_0_0(transform_hlds__term_util__ArgX1_3, transform_hlds__term_util__ArgY1_4);
        }
        if (transform_hlds__term_util__succeeded)
          {
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__ArgX2_5 == transform_hlds__term_util__ArgY2_6);
            if (transform_hlds__term_util__succeeded)
              transform_hlds__term_util__succeeded = (transform_hlds__term_util__ArgX3_7 == transform_hlds__term_util__ArgY3_8);
          }
      }
    return transform_hlds__term_util__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0(
  MR_Word * transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2,
  MR_Word transform_hlds__term_util__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__Cast_HeadVar1_4 = transform_hlds__term_util__HeadVar__2_2;
    MR_Word transform_hlds__term_util__Cast_HeadVar2_5 = transform_hlds__term_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[2], transform_hlds__term_util__HeadVar__1_1, ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__Cast_HeadVar1_3 = transform_hlds__term_util__HeadVar__1_1;
    MR_Word transform_hlds__term_util__Cast_HeadVar2_4 = transform_hlds__term_util__HeadVar__2_2;

    {
      transform_hlds__term_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[2], ((MR_Box) (transform_hlds__term_util__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__term_util__Cast_HeadVar2_4)));
    }
    return transform_hlds__term_util__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__term_util__attributes_imply_termination_1_p_0(
  MR_Word transform_hlds__term_util__Attributes_2)
{
  {
    MR_bool transform_hlds__term_util__succeeded;

    {
      MR_Word transform_hlds__term_util__Var_5;

      {
        transform_hlds__term_util__Var_5 = parse_tree__prog_data_foreign__get_terminates_1_f_0(transform_hlds__term_util__Attributes_2);
      }
      transform_hlds__term_util__succeeded = (transform_hlds__term_util__Var_5 == (MR_Integer) 0);
    }
    if (!(transform_hlds__term_util__succeeded))
      {
        MR_Word transform_hlds__term_util__Var_3;
        MR_Word transform_hlds__term_util__Var_4;

        {
          transform_hlds__term_util__Var_3 = parse_tree__prog_data_foreign__get_terminates_1_f_0(transform_hlds__term_util__Attributes_2);
        }
        transform_hlds__term_util__succeeded = (transform_hlds__term_util__Var_3 == (MR_Integer) 2);
        if (transform_hlds__term_util__succeeded)
          {
            {
              transform_hlds__term_util__Var_4 = parse_tree__prog_data_foreign__get_may_call_mercury_1_f_0(transform_hlds__term_util__Attributes_2);
            }
            transform_hlds__term_util__succeeded = (transform_hlds__term_util__Var_4 == (MR_Integer) 1);
          }
      }
    return transform_hlds__term_util__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_util__get_context_from_scc_3_p_0(
  MR_Word transform_hlds__term_util__ModuleInfo_4,
  MR_Word transform_hlds__term_util__SCC_5,
  MR_Word * transform_hlds__term_util__Context_6)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__SCCProcs_7;

    {
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, transform_hlds__term_util__SCC_5, &transform_hlds__term_util__SCCProcs_7);
    }
    if ((transform_hlds__term_util__SCCProcs_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.get_context_from_scc\'/3", (MR_String) "empty SCC");
          return;
        }
      }
    else
      {
        MR_Word transform_hlds__term_util__PredId_8;
        MR_Word transform_hlds__term_util__PredInfo_11;
        MR_Word transform_hlds__term_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__SCCProcs_7, (MR_Integer) 0)));
        MR_Word transform_hlds__term_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__SCCProcs_7, (MR_Integer) 1)));
        MR_Integer transform_hlds__term_util__Var_9;

        transform_hlds__term_util__PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__Var_15, (MR_Integer) 0)));
        transform_hlds__term_util__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__Var_15, (MR_Integer) 1)));
        {
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PredId_8, &transform_hlds__term_util__PredInfo_11);
        }
        {
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_util__PredInfo_11, transform_hlds__term_util__Context_6);
        }
      }
  }
}

void MR_CALL 
transform_hlds__term_util__add_context_to_arg_size_info_3_p_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__Context_2,
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_util__succeeded;

    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__term_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_util__Var_18)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word transform_hlds__term_util__Var_9 = (MR_Word) transform_hlds__term_util__Var_18;

            *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) transform_hlds__term_util__HeadVar__1_1;
          }
        else
          {
            MR_Word transform_hlds__term_util__Var_13;
            MR_Word transform_hlds__term_util__Var_14;
            MR_Word transform_hlds__term_util__Var_15;

            {
              transform_hlds__term_util__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__Var_15, 0) = ((MR_Box) (transform_hlds__term_util__Context_2));
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            }
            {
              transform_hlds__term_util__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__Var_14, 0) = ((MR_Box) (transform_hlds__term_util__Var_15));
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__term_util__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__Var_13, 0) = ((MR_Box) (transform_hlds__term_util__Var_14));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_util__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__Var_13));
            }
          }
      }
  }
}

void MR_CALL 
transform_hlds__term_util__add_context_to_termination_info_3_p_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__Context_2,
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_util__succeeded;

    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word transform_hlds__term_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) transform_hlds__term_util__Var_18)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word transform_hlds__term_util__Var_13;
            MR_Word transform_hlds__term_util__Var_14;
            MR_Word transform_hlds__term_util__Var_15;

            {
              transform_hlds__term_util__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__Var_15, 0) = ((MR_Box) (transform_hlds__term_util__Context_2));
              MR_hl_field(MR_mktag(0), transform_hlds__term_util__Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            }
            {
              transform_hlds__term_util__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__Var_14, 0) = ((MR_Box) (transform_hlds__term_util__Var_15));
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              transform_hlds__term_util__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__Var_13, 0) = ((MR_Box) (transform_hlds__term_util__Var_14));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *transform_hlds__term_util__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__Var_13));
            }
          }
        else
          {
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
            *transform_hlds__term_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_util_scalar_common_3[1]);
          }
      }
  }
}

void MR_CALL 
transform_hlds__term_util__set_pred_proc_ids_termination_info_4_p_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2,
  MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_util__succeeded;

        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3;
        else
          {
            MR_Word transform_hlds__term_util__TypeCtorInfo_28_28;
            MR_Word transform_hlds__term_util__TypeCtorInfo_29_29;
            MR_Word transform_hlds__term_util__TypeCtorInfo_31_31;
            MR_Word transform_hlds__term_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 0)));
            MR_Integer transform_hlds__term_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 1)));
            MR_Word transform_hlds__term_util__PredTable0_15;
            MR_Word transform_hlds__term_util__PredInfo0_16;
            MR_Word transform_hlds__term_util__ProcTable0_17;
            MR_Word transform_hlds__term_util__ProcInfo0_18;
            MR_Word transform_hlds__term_util__ProcInfo_19;
            MR_Word transform_hlds__term_util__ProcTable_20;
            MR_Word transform_hlds__term_util__PredInfo_21;
            MR_Word transform_hlds__term_util__PredTable_22;
            MR_Word transform_hlds__term_util__Var_25;
            MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;
            MR_Box transform_hlds__term_util__conv0_PredInfo0_16;
            MR_Box transform_hlds__term_util__conv1_ProcInfo0_18;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__PredTable0_15);
            }
            transform_hlds__term_util__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            transform_hlds__term_util__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, transform_hlds__term_util__PredTable0_15, ((MR_Box) (transform_hlds__term_util__PredId_13)), &transform_hlds__term_util__conv0_PredInfo0_16);
            }
            transform_hlds__term_util__PredInfo0_16 = ((MR_Word) transform_hlds__term_util__conv0_PredInfo0_16);
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__ProcTable0_17);
            }
            transform_hlds__term_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcTable0_17, transform_hlds__term_util__ProcId_14, &transform_hlds__term_util__conv1_ProcInfo0_18);
            }
            transform_hlds__term_util__ProcInfo0_18 = ((MR_Word) transform_hlds__term_util__conv1_ProcInfo0_18);
            {
              transform_hlds__term_util__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__Var_25, 0) = ((MR_Box) (transform_hlds__term_util__HeadVar__2_2));
            }
            {
              hlds__hlds_pred__proc_info_set_maybe_termination_info_3_p_0(transform_hlds__term_util__Var_25, transform_hlds__term_util__ProcInfo0_18, &transform_hlds__term_util__ProcInfo_19);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcId_14, ((MR_Box) (transform_hlds__term_util__ProcInfo_19)), transform_hlds__term_util__ProcTable0_17, &transform_hlds__term_util__ProcTable_20);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_util__ProcTable_20, transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__PredInfo_21);
            }
            {
              mercury__map__det_update_4_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__term_util__PredId_13)), ((MR_Box) (transform_hlds__term_util__PredInfo_21)), transform_hlds__term_util__PredTable0_15, &transform_hlds__term_util__PredTable_22);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_util__PredTable_22, transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_util__next_value_of_HeadVar__1_1 = transform_hlds__term_util__PPIds_10;
              MR_Word transform_hlds__term_util__next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;

              transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_util__next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
              transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_p_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2,
  MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_util__succeeded;

        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_4 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3;
        else
          {
            MR_Word transform_hlds__term_util__TypeCtorInfo_28_28;
            MR_Word transform_hlds__term_util__TypeCtorInfo_29_29;
            MR_Word transform_hlds__term_util__TypeCtorInfo_31_31;
            MR_Word transform_hlds__term_util__PPId_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_util__PPIds_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_util__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 0)));
            MR_Integer transform_hlds__term_util__ProcId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__PPId_9, (MR_Integer) 1)));
            MR_Word transform_hlds__term_util__PredTable0_15;
            MR_Word transform_hlds__term_util__PredInfo0_16;
            MR_Word transform_hlds__term_util__ProcTable0_17;
            MR_Word transform_hlds__term_util__ProcInfo0_18;
            MR_Word transform_hlds__term_util__ProcInfo_19;
            MR_Word transform_hlds__term_util__ProcTable_20;
            MR_Word transform_hlds__term_util__PredInfo_21;
            MR_Word transform_hlds__term_util__PredTable_22;
            MR_Word transform_hlds__term_util__Var_25;
            MR_Word transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;
            MR_Box transform_hlds__term_util__conv0_PredInfo0_16;
            MR_Box transform_hlds__term_util__conv1_ProcInfo0_18;

            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__PredTable0_15);
            }
            transform_hlds__term_util__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            transform_hlds__term_util__TypeCtorInfo_29_29 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            {
              mercury__map__lookup_3_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, transform_hlds__term_util__PredTable0_15, ((MR_Box) (transform_hlds__term_util__PredId_13)), &transform_hlds__term_util__conv0_PredInfo0_16);
            }
            transform_hlds__term_util__PredInfo0_16 = ((MR_Word) transform_hlds__term_util__conv0_PredInfo0_16);
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__ProcTable0_17);
            }
            transform_hlds__term_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcTable0_17, transform_hlds__term_util__ProcId_14, &transform_hlds__term_util__conv1_ProcInfo0_18);
            }
            transform_hlds__term_util__ProcInfo0_18 = ((MR_Word) transform_hlds__term_util__conv1_ProcInfo0_18);
            {
              transform_hlds__term_util__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_util__Var_25, 0) = ((MR_Box) (transform_hlds__term_util__HeadVar__2_2));
            }
            {
              hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_p_0(transform_hlds__term_util__Var_25, transform_hlds__term_util__ProcInfo0_18, &transform_hlds__term_util__ProcInfo_19);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_util__TypeCtorInfo_31_31, transform_hlds__term_util__ProcId_14, ((MR_Box) (transform_hlds__term_util__ProcInfo_19)), transform_hlds__term_util__ProcTable0_17, &transform_hlds__term_util__ProcTable_20);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_util__ProcTable_20, transform_hlds__term_util__PredInfo0_16, &transform_hlds__term_util__PredInfo_21);
            }
            {
              mercury__map__det_update_4_p_0(transform_hlds__term_util__TypeCtorInfo_28_28, transform_hlds__term_util__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__term_util__PredId_13)), ((MR_Box) (transform_hlds__term_util__PredInfo_21)), transform_hlds__term_util__PredTable0_15, &transform_hlds__term_util__PredTable_22);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_util__PredTable_22, transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3, &transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_util__next_value_of_HeadVar__1_1 = transform_hlds__term_util__PPIds_10;
              MR_Word transform_hlds__term_util__next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_26_26;

              transform_hlds__term_util__STATE_VARIABLE_ModuleInfo_0_3 = transform_hlds__term_util__next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
              transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(
  MR_Word transform_hlds__term_util__ModuleInfo_4,
  MR_Word transform_hlds__term_util__PredInfo_5,
  MR_Word transform_hlds__term_util__ProcInfo_6)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__TypeList_7;
    MR_Word transform_hlds__term_util__ModeList_8;

    {
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(transform_hlds__term_util__PredInfo_5, &transform_hlds__term_util__TypeList_7);
    }
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__ModeList_8);
    }
    {
      transform_hlds__term_util__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(transform_hlds__term_util__TypeList_7, transform_hlds__term_util__ModeList_8, transform_hlds__term_util__ModuleInfo_4);
    }
    return transform_hlds__term_util__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_util__all_args_input_or_zero_size_2_3_p_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2,
  MR_Word transform_hlds__term_util__ModuleInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_util__succeeded;

        if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.all_args_input_or_zero_size_2\'/3", (MR_String) "unmatched lists");
                }
              }
            transform_hlds__term_util__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word transform_hlds__term_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));

            if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.all_args_input_or_zero_size_2\'/3", (MR_String) "unmatched lists");
                }
                transform_hlds__term_util__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word transform_hlds__term_util__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word transform_hlds__term_util__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));

                {
                  transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__Mode_19);
                }
                if (transform_hlds__term_util__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word transform_hlds__term_util__next_value_of_HeadVar__1_1 = transform_hlds__term_util__Var_22;
                      MR_Word transform_hlds__term_util__next_value_of_HeadVar__2_2 = transform_hlds__term_util__Modes_20;

                      transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__next_value_of_HeadVar__2_2;
                      transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
                else
                  {
                    {
                      transform_hlds__term_util__succeeded = transform_hlds__term_norm__zero_size_type_2_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__Var_23);
                    }
                    if (transform_hlds__term_util__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word transform_hlds__term_util__next_value_of_HeadVar__1_1 = transform_hlds__term_util__Var_22;
                          MR_Word transform_hlds__term_util__next_value_of_HeadVar__2_2 = transform_hlds__term_util__Modes_20;

                          transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__next_value_of_HeadVar__2_2;
                          transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return transform_hlds__term_util__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
transform_hlds__term_util__pred_proc_id_terminates_2_p_0(
  MR_Word transform_hlds__term_util__ModuleInfo_3,
  MR_Word transform_hlds__term_util__PPId_4)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__ProcInfo_6;
    MR_Word transform_hlds__term_util__TerminationInfo_7;
    MR_Word transform_hlds__term_util__Var_9;
    MR_Word transform_hlds__term_util__Var_5;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__PPId_4, &transform_hlds__term_util__Var_5, &transform_hlds__term_util__ProcInfo_6);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__TerminationInfo_7);
    }
    transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__TerminationInfo_7)) == (MR_mktag((MR_Integer) 1)));
    if (transform_hlds__term_util__succeeded)
      {
        transform_hlds__term_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__TerminationInfo_7, (MR_Integer) 0)));
        transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__Var_9)) == (MR_mktag((MR_Integer) 0)));
      }
    return transform_hlds__term_util__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__term_util__is_termination_known_2_p_0(
  MR_Word transform_hlds__term_util__ModuleInfo_3,
  MR_Word transform_hlds__term_util__PPId_4)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__ProcInfo_6;
    MR_Word transform_hlds__term_util__Var_9;
    MR_Word transform_hlds__term_util__Var_5;
    MR_Word transform_hlds__term_util__ArgX1_13;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_3, transform_hlds__term_util__PPId_4, &transform_hlds__term_util__Var_5, &transform_hlds__term_util__ProcInfo_6);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_6, &transform_hlds__term_util__Var_9);
    }
    transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__Var_9)) == (MR_mktag((MR_Integer) 1)));
    if (transform_hlds__term_util__succeeded)
      transform_hlds__term_util__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__Var_9, (MR_Integer) 0)));
    return transform_hlds__term_util__succeeded;
  }
}

void MR_CALL 
transform_hlds__term_util__lookup_proc_arg_size_info_3_p_0(
  MR_Word transform_hlds__term_util__ModuleInfo_4,
  MR_Word transform_hlds__term_util__PPId_5,
  MR_Word * transform_hlds__term_util__MaybeArgSize_6)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__ProcInfo_8;
    MR_Word transform_hlds__term_util__Var_7;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PPId_5, &transform_hlds__term_util__Var_7, &transform_hlds__term_util__ProcInfo_8);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_p_0(transform_hlds__term_util__ProcInfo_8, transform_hlds__term_util__MaybeArgSize_6);
    }
  }
}

void MR_CALL 
transform_hlds__term_util__lookup_proc_termination_info_3_p_0(
  MR_Word transform_hlds__term_util__ModuleInfo_4,
  MR_Word transform_hlds__term_util__PPId_5,
  MR_Word * transform_hlds__term_util__MaybeTermination_6)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__ProcInfo_8;
    MR_Word transform_hlds__term_util__Var_7;

    {
      hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__term_util__ModuleInfo_4, transform_hlds__term_util__PPId_5, &transform_hlds__term_util__Var_7, &transform_hlds__term_util__ProcInfo_8);
    }
    {
      hlds__hlds_pred__proc_info_get_maybe_termination_info_2_p_0(transform_hlds__term_util__ProcInfo_8, transform_hlds__term_util__MaybeTermination_6);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__term_util__horder_vars_2_p_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__VarType_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_util__succeeded = ((MR_tag((MR_Word) transform_hlds__term_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word transform_hlds__term_util__Arg_3;
        MR_Word transform_hlds__term_util__Args_4;

        if (transform_hlds__term_util__succeeded)
          {
            transform_hlds__term_util__Arg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0)));
            transform_hlds__term_util__Args_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
            {
              MR_Word transform_hlds__term_util__Type_6;

              {
                hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__term_util__VarType_5, transform_hlds__term_util__Arg_3, &transform_hlds__term_util__Type_6);
              }
              {
                transform_hlds__term_util__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(transform_hlds__term_util__Type_6);
              }
            }
            if (!(transform_hlds__term_util__succeeded))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word transform_hlds__term_util__next_value_of_HeadVar__1_1 = transform_hlds__term_util__Args_4;

                  transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return transform_hlds__term_util__succeeded;
      }
      break;
    }
}

void MR_CALL 
transform_hlds__term_util__remove_unused_args_4_p_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2,
  MR_Word transform_hlds__term_util__HeadVar__3_3,
  MR_Word * transform_hlds__term_util__Vars_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_util__succeeded;

        if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
          else
            {
              *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.remove_unused_args\'/4", (MR_String) "unmatched variables");
                return;
              }
            }
        else
          {
            MR_Word transform_hlds__term_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word transform_hlds__term_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

            if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *transform_hlds__term_util__Vars_4 = transform_hlds__term_util__HeadVar__1_1;
                {
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.remove_unused_args\'/4", (MR_String) "unmatched variables");
                  return;
                }
              }
            else
              {
                MR_Word transform_hlds__term_util__UsedVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
                MR_Word transform_hlds__term_util__UsedVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));

                switch (transform_hlds__term_util__UsedVar_21) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word transform_hlds__term_util__Vars1_24;

                      {
                        mercury__bag__delete_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__Var_27)), transform_hlds__term_util__HeadVar__1_1, &transform_hlds__term_util__Vars1_24);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__term_util__next_value_of_HeadVar__1_1 = transform_hlds__term_util__Vars1_24;
                        MR_Word transform_hlds__term_util__next_value_of_HeadVar__2_2 = transform_hlds__term_util__Var_26;
                        MR_Word transform_hlds__term_util__next_value_of_HeadVar__3_3 = transform_hlds__term_util__UsedVars_22;

                        transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__next_value_of_HeadVar__3_3;
                        transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__next_value_of_HeadVar__2_2;
                        transform_hlds__term_util__HeadVar__1_1 = transform_hlds__term_util__next_value_of_HeadVar__1_1;
                      }
                      continue;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word transform_hlds__term_util__next_value_of_HeadVar__2_2 = transform_hlds__term_util__Var_26;
                        MR_Word transform_hlds__term_util__next_value_of_HeadVar__3_3 = transform_hlds__term_util__UsedVars_22;

                        transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__next_value_of_HeadVar__3_3;
                        transform_hlds__term_util__HeadVar__2_2 = transform_hlds__term_util__next_value_of_HeadVar__2_2;
                      }
                      continue;
                    }
                    break;
                }
              }
          }
      }
      break;
    }
}

void MR_CALL 
transform_hlds__term_util__make_bool_list_3_p_0(
  MR_Word transform_hlds__term_util__TypeInfo_for__T_13,
  MR_Word transform_hlds__term_util__HeadVars0_4,
  MR_Word transform_hlds__term_util__Bools_5,
  MR_Word * transform_hlds__term_util__Out_6)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Integer transform_hlds__term_util__Arity_7;
    MR_Word transform_hlds__term_util__HeadVars_9;
    MR_Word transform_hlds__term_util__HeadVars1_8;

    {
      mercury__list__length_2_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, transform_hlds__term_util__Bools_5, &transform_hlds__term_util__Arity_7);
    }
    {
      transform_hlds__term_util__succeeded = mercury__list__drop_3_p_0(transform_hlds__term_util__TypeInfo_for__T_13, transform_hlds__term_util__Arity_7, transform_hlds__term_util__HeadVars0_4, &transform_hlds__term_util__HeadVars1_8);
    }
    if (transform_hlds__term_util__succeeded)
      transform_hlds__term_util__HeadVars_9 = transform_hlds__term_util__HeadVars1_8;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.make_bool_list\'/3", (MR_String) "unmatched variables");
          return;
        }
      }
    {
      transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(transform_hlds__term_util__HeadVars_9, transform_hlds__term_util__Bools_5, transform_hlds__term_util__Out_6);
    }
  }
}

static void MR_CALL 
transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
  MR_Word transform_hlds__term_util__HeadVar__1_1,
  MR_Word transform_hlds__term_util__Bools_2,
  MR_Word * transform_hlds__term_util__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_util__succeeded;

    if ((transform_hlds__term_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__term_util__HeadVar__3_3 = transform_hlds__term_util__Bools_2;
    else
      {
        MR_Word transform_hlds__term_util__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__term_util__Out_8;
        MR_Box transform_hlds__term_util__Var_5 = (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__1_1, (MR_Integer) 0));

        {
          transform_hlds__term_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(transform_hlds__term_util__Vars_6, transform_hlds__term_util__Bools_2, &transform_hlds__term_util__Out_8);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__term_util__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__Out_8));
        }
      }
  }
}

void MR_CALL 
transform_hlds__term_util__split_unification_vars_5_p_0(
  MR_Word transform_hlds__term_util__ModuleInfo_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2,
  MR_Word transform_hlds__term_util__HeadVar__3_3,
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
  MR_Word * transform_hlds__term_util__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__term_util__succeeded;

    if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__bag__init_1_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], transform_hlds__term_util__HeadVar__4_4);
          }
          *transform_hlds__term_util__HeadVar__5_5 = *transform_hlds__term_util__HeadVar__4_4;
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.split_unification_vars\'/5", (MR_String) "unmatched variables");
            return;
          }
        }
    else
      {
        MR_Word transform_hlds__term_util__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

        if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.split_unification_vars\'/5", (MR_String) "unmatched variables");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__term_util__ArgMode_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__term_util__ArgModes_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__term_util__InVars0_31;
            MR_Word transform_hlds__term_util__OutVars0_32;
            MR_Word transform_hlds__term_util__ArgInit_34;
            MR_Word transform_hlds__term_util__ArgFinal_35;
            MR_Word transform_hlds__term_util__Var_36;
            MR_Word transform_hlds__term_util__Var_33;

            {
              transform_hlds__term_util__split_unification_vars_5_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__Var_40, transform_hlds__term_util__ArgModes_28, &transform_hlds__term_util__InVars0_31, &transform_hlds__term_util__OutVars0_32);
            }
            transform_hlds__term_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__ArgMode_27, (MR_Integer) 0)));
            transform_hlds__term_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__ArgMode_27, (MR_Integer) 1)));
            transform_hlds__term_util__ArgInit_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__Var_36, (MR_Integer) 0)));
            transform_hlds__term_util__ArgFinal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_util__Var_36, (MR_Integer) 1)));
            {
              transform_hlds__term_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgInit_34);
            }
            if (transform_hlds__term_util__succeeded)
              {
                {
                  mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__Var_41)), transform_hlds__term_util__InVars0_31, transform_hlds__term_util__HeadVar__4_4);
                }
                *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutVars0_32;
              }
            else
              {
                {
                  transform_hlds__term_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgInit_34);
                }
                if (transform_hlds__term_util__succeeded)
                  {
                    transform_hlds__term_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__ArgFinal_35);
                  }
                if (transform_hlds__term_util__succeeded)
                  {
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InVars0_31;
                    {
                      mercury__bag__insert_3_p_0((MR_Word) &transform_hlds__term_util_scalar_common_1[0], ((MR_Box) (transform_hlds__term_util__Var_41)), transform_hlds__term_util__OutVars0_32, transform_hlds__term_util__HeadVar__5_5);
                    }
                  }
                else
                  {
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InVars0_31;
                    *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutVars0_32;
                  }
              }
          }
      }
  }
}

void MR_CALL 
transform_hlds__term_util__partition_call_args_5_p_0(
  MR_Word transform_hlds__term_util__ModuleInfo_6,
  MR_Word transform_hlds__term_util__ArgModes_7,
  MR_Word transform_hlds__term_util__Args_8,
  MR_Word * transform_hlds__term_util__InVarsBag_9,
  MR_Word * transform_hlds__term_util__OutVarsBag_10)
{
  {
    MR_bool transform_hlds__term_util__succeeded;
    MR_Word transform_hlds__term_util__TypeInfo_13_13;
    MR_Word transform_hlds__term_util__InVars_11;
    MR_Word transform_hlds__term_util__OutVars_12;

    {
      transform_hlds__term_util__partition_call_args_2_5_p_0(transform_hlds__term_util__ModuleInfo_6, transform_hlds__term_util__ArgModes_7, transform_hlds__term_util__Args_8, &transform_hlds__term_util__InVars_11, &transform_hlds__term_util__OutVars_12);
    }
    transform_hlds__term_util__TypeInfo_13_13 = (MR_Word) &transform_hlds__term_util_scalar_common_1[0];
    {
      mercury__bag__from_list_2_p_0(transform_hlds__term_util__TypeInfo_13_13, transform_hlds__term_util__InVars_11, transform_hlds__term_util__InVarsBag_9);
    }
    {
      mercury__bag__from_list_2_p_0(transform_hlds__term_util__TypeInfo_13_13, transform_hlds__term_util__OutVars_12, transform_hlds__term_util__OutVarsBag_10);
    }
  }
}

static void MR_CALL 
transform_hlds__term_util__partition_call_args_2_5_p_0(
  MR_Word transform_hlds__term_util__ModuleInfo_1,
  MR_Word transform_hlds__term_util__HeadVar__2_2,
  MR_Word transform_hlds__term_util__HeadVar__3_3,
  MR_Word * transform_hlds__term_util__HeadVar__4_4,
  MR_Word * transform_hlds__term_util__HeadVar__5_5)
{
  {
    MR_bool transform_hlds__term_util__succeeded;

    if ((transform_hlds__term_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *transform_hlds__term_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *transform_hlds__term_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.partition_call_args_2\'/5", (MR_String) "unmatched variables");
            return;
          }
        }
    else
      {
        MR_Word transform_hlds__term_util__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__2_2, (MR_Integer) 0)));

        if ((transform_hlds__term_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_util", (MR_String) "predicate \140transform_hlds.term_util.partition_call_args_2\'/5", (MR_String) "unmatched variables");
              return;
            }
          }
        else
          {
            MR_Word transform_hlds__term_util__Arg_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word transform_hlds__term_util__Args_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_util__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word transform_hlds__term_util__InputArgs1_30;
            MR_Word transform_hlds__term_util__OutputArgs1_31;

            {
              transform_hlds__term_util__partition_call_args_2_5_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__Var_32, transform_hlds__term_util__Args_27, &transform_hlds__term_util__InputArgs1_30, &transform_hlds__term_util__OutputArgs1_31);
            }
            {
              transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__Var_33);
            }
            if (transform_hlds__term_util__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *transform_hlds__term_util__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__Arg_26));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__InputArgs1_30));
                }
                *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutputArgs1_31;
              }
            else
              {
                {
                  transform_hlds__term_util__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(transform_hlds__term_util__ModuleInfo_1, transform_hlds__term_util__Var_33);
                }
                if (transform_hlds__term_util__succeeded)
                  {
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InputArgs1_30;
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *transform_hlds__term_util__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__term_util__Arg_26));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__term_util__OutputArgs1_31));
                    }
                  }
                else
                  {
                    *transform_hlds__term_util__HeadVar__4_4 = transform_hlds__term_util__InputArgs1_30;
                    *transform_hlds__term_util__HeadVar__5_5 = transform_hlds__term_util__OutputArgs1_31;
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_util____Unify____arg_size_info_0_0_10001(
  MR_Box transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_util__succeeded;

    {
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____arg_size_info_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
    return transform_hlds__term_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_util____Compare____arg_size_info_0_0_10001(
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2,
  MR_Box transform_hlds__term_util__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

    {
      transform_hlds__term_util____Compare____arg_size_info_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_util____Unify____pass_info_0_0_10001(
  MR_Box transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_util__succeeded;

    {
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____pass_info_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
    return transform_hlds__term_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_util____Compare____pass_info_0_0_10001(
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2,
  MR_Box transform_hlds__term_util__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

    {
      transform_hlds__term_util____Compare____pass_info_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_util____Unify____termination_info_0_0_10001(
  MR_Box transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_util__succeeded;

    {
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____termination_info_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
    return transform_hlds__term_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_util____Compare____termination_info_0_0_10001(
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2,
  MR_Box transform_hlds__term_util__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

    {
      transform_hlds__term_util____Compare____termination_info_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__term_util____Unify____used_args_0_0_10001(
  MR_Box transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__term_util__succeeded;

    {
      transform_hlds__term_util__succeeded = transform_hlds__term_util____Unify____used_args_0_0(((MR_Word) transform_hlds__term_util__wrapper_arg_1), ((MR_Word) transform_hlds__term_util__wrapper_arg_2));
    }
    return transform_hlds__term_util__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_util____Compare____used_args_0_0_10001(
  MR_Box * transform_hlds__term_util__wrapper_arg_1,
  MR_Box transform_hlds__term_util__wrapper_arg_2,
  MR_Box transform_hlds__term_util__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__term_util__conv0_HeadVar__1_1;

    {
      transform_hlds__term_util____Compare____used_args_0_0(&transform_hlds__term_util__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__term_util__wrapper_arg_2), ((MR_Word) transform_hlds__term_util__wrapper_arg_3));
    }
    *transform_hlds__term_util__wrapper_arg_1 = ((MR_Box) (transform_hlds__term_util__conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__term_util__init(void)
{
}

void mercury__transform_hlds__term_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_arg_size_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_pass_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_termination_info_0);
	MR_register_type_ctor_info(&transform_hlds__term_util__transform_hlds__term_util__type_ctor_info_used_args_0);
}

void mercury__transform_hlds__term_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.term_util. */
