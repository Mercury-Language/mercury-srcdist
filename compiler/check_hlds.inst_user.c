/*
** Automatically generated from `inst_user.m'
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


/* :- module check_hlds.inst_user. */
/* :- implementation. */

/*
INIT mercury__check_hlds__inst_user__init
ENDINIT
*/

#include "check_hlds.inst_user.mih"


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
#include "check_hlds.mode_util.mih"
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
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct2 check_hlds__inst_user__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0check_hlds__inst_user__type_ctor_info_maybe_user_inst_0;

static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_0;

static const MR_PseudoTypeInfo check_hlds__inst_user__check_hlds__inst_user__field_types_maybe_user_inst_0_1[1];

static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1;

static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_1[1];

static const MR_DuPtagLayout check_hlds__inst_user__check_hlds__inst_user__du_ptag_ordered_maybe_user_inst_0[2];

static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_name_ordered_maybe_user_inst_0[2];

static const MR_Integer check_hlds__inst_user__check_hlds__inst_user__functor_number_map_maybe_user_inst_0[2];

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0_10001(
  MR_Box check_hlds__inst_user__wrapper_arg_1,
  MR_Box check_hlds__inst_user__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0_10001(
  MR_Box * check_hlds__inst_user__wrapper_arg_1,
  MR_Box check_hlds__inst_user__wrapper_arg_2,
  MR_Box check_hlds__inst_user__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0_10001(
  MR_Box check_hlds__inst_user__wrapper_arg_1,
  MR_Box check_hlds__inst_user__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0_10001(
  MR_Box * check_hlds__inst_user__wrapper_arg_1,
  MR_Box check_hlds__inst_user__wrapper_arg_2,
  MR_Box check_hlds__inst_user__wrapper_arg_3);

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word check_hlds__inst_user__HeadVar__1_1,
  MR_Word * check_hlds__inst_user__HeadVar__2_2,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_Groundness_5,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15);

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word check_hlds__inst_user__HeadVar__1_1,
  MR_Word * check_hlds__inst_user__HeadVar__2_2,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_Groundness_5,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15);

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(
  MR_Word check_hlds__inst_user__Inst0_11,
  MR_Word * check_hlds__inst_user__Inst_12,
  MR_Word * check_hlds__inst_user__Groundness_14,
  MR_Word * check_hlds__inst_user__ContainsAny_15,
  MR_Word * check_hlds__inst_user__ContainsInstNames_16,
  MR_Word * check_hlds__inst_user__ContainsInstVars_17,
  MR_Word * check_hlds__inst_user__ContainsTypes_18,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39);

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_117_115_101_114_95_105_110_115_116_95_100_101_102_110_115_95_95_91_52_93_95_48_6_p_0(
  MR_Word check_hlds__inst_user__ModuleInfo_1,
  MR_Word check_hlds__inst_user__HeadVar__2_2,
  MR_Word check_hlds__inst_user__HeadVar__3_3,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_6);

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0(
  MR_Word * check_hlds__inst_user__HeadVar__1_1,
  MR_Word check_hlds__inst_user__HeadVar__2_2,
  MR_Word check_hlds__inst_user__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0(
  MR_Word check_hlds__inst_user__HeadVar__1_1,
  MR_Word check_hlds__inst_user__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0(
  MR_Word * check_hlds__inst_user__HeadVar__1_1,
  MR_Word check_hlds__inst_user__HeadVar__2_2,
  MR_Word check_hlds__inst_user__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0(
  MR_Word check_hlds__inst_user__HeadVar__1_1,
  MR_Word check_hlds__inst_user__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_user__record_user_inst_results_2_p_0(
  MR_Word check_hlds__inst_user__HeadVar__1_1,
  MR_Word * check_hlds__inst_user__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_user__combine_contains_types_results_3_p_0(
  MR_Word check_hlds__inst_user__ContainsTypesA_4,
  MR_Word check_hlds__inst_user__ContainsTypesB_5,
  MR_Word * check_hlds__inst_user__ContainsTypes_6);


static /* final */ const MR_Box check_hlds__inst_user_scalar_common_1[1][2];

static /* final */ const MR_Box check_hlds__inst_user_scalar_common_2[1][3];




static /* final */ const MR_Box check_hlds__inst_user_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__inst_user_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct2 check_hlds__inst_user__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0check_hlds__inst_user__type_ctor_info_maybe_user_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_TypeInfo) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_inst_defns_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0_10001)),
  ((MR_Box) (check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0_10001)),
  (MR_String) "check_hlds.inst_user",
  (MR_String) "maybe_inst_defns_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__inst_user__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0check_hlds__inst_user__type_ctor_info_maybe_user_inst_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_0 = {
  (MR_String) "user_inst_being_processed",
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

static const MR_PseudoTypeInfo check_hlds__inst_user__check_hlds__inst_user__field_types_maybe_user_inst_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0
};

static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1 = {
  (MR_String) "processed_user_inst",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__inst_user__check_hlds__inst_user__field_types_maybe_user_inst_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_0[1] = {
  &check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_0
};

static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_1[1] = {
  &check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1
};

static const MR_DuPtagLayout check_hlds__inst_user__check_hlds__inst_user__du_ptag_ordered_maybe_user_inst_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_1
  }
};

static const MR_DuFunctorDescPtr check_hlds__inst_user__check_hlds__inst_user__du_name_ordered_maybe_user_inst_0[2] = {
  &check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1,
  &check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_0
};

static const MR_Integer check_hlds__inst_user__check_hlds__inst_user__functor_number_map_maybe_user_inst_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__inst_user____Unify____maybe_user_inst_0_0_10001)),
  ((MR_Box) (check_hlds__inst_user____Compare____maybe_user_inst_0_0_10001)),
  (MR_String) "check_hlds.inst_user",
  (MR_String) "maybe_user_inst",
  {     check_hlds__inst_user__check_hlds__inst_user__du_name_ordered_maybe_user_inst_0 },
  {     check_hlds__inst_user__check_hlds__inst_user__du_ptag_ordered_maybe_user_inst_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__inst_user__check_hlds__inst_user__functor_number_map_maybe_user_inst_0
};

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0_10001(
  MR_Box check_hlds__inst_user__wrapper_arg_1,
  MR_Box check_hlds__inst_user__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_user__succeeded;

    {
      check_hlds__inst_user__succeeded = check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0(((MR_Word) check_hlds__inst_user__wrapper_arg_1), ((MR_Word) check_hlds__inst_user__wrapper_arg_2));
    }
    return check_hlds__inst_user__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0_10001(
  MR_Box * check_hlds__inst_user__wrapper_arg_1,
  MR_Box check_hlds__inst_user__wrapper_arg_2,
  MR_Box check_hlds__inst_user__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_user__conv0_HeadVar__1_1;

    {
      check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0(&check_hlds__inst_user__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_user__wrapper_arg_2), ((MR_Word) check_hlds__inst_user__wrapper_arg_3));
    }
    *check_hlds__inst_user__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_user__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0_10001(
  MR_Box check_hlds__inst_user__wrapper_arg_1,
  MR_Box check_hlds__inst_user__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_user__succeeded;

    {
      check_hlds__inst_user__succeeded = check_hlds__inst_user____Unify____maybe_user_inst_0_0(((MR_Word) check_hlds__inst_user__wrapper_arg_1), ((MR_Word) check_hlds__inst_user__wrapper_arg_2));
    }
    return check_hlds__inst_user__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0_10001(
  MR_Box * check_hlds__inst_user__wrapper_arg_1,
  MR_Box check_hlds__inst_user__wrapper_arg_2,
  MR_Box check_hlds__inst_user__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_user__conv0_HeadVar__1_1;

    {
      check_hlds__inst_user____Compare____maybe_user_inst_0_0(&check_hlds__inst_user__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_user__wrapper_arg_2), ((MR_Word) check_hlds__inst_user__wrapper_arg_3));
    }
    *check_hlds__inst_user__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_user__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word check_hlds__inst_user__HeadVar__1_1,
  MR_Word * check_hlds__inst_user__HeadVar__2_2,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_Groundness_5,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15)
{
  {
    MR_bool check_hlds__inst_user__succeeded;

    if ((check_hlds__inst_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14;
        *check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13 = check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12;
        *check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11 = check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10;
        *check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9 = check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8;
        *check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7 = check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6;
        *check_hlds__inst_user__STATE_VARIABLE_Groundness_5 = check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4;
      }
    else
      {
        MR_Word check_hlds__inst_user__ArgInst0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_user__ArgInsts0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_user__ArgInst_37;
        MR_Word check_hlds__inst_user__ArgInsts_38;
        MR_Word check_hlds__inst_user__ArgGroundness_46;
        MR_Word check_hlds__inst_user__ArgContainsAny_47;
        MR_Word check_hlds__inst_user__ArgContainsInstNames_48;
        MR_Word check_hlds__inst_user__ArgContainsInstVars_49;
        MR_Word check_hlds__inst_user__ArgContainsTypes_50;
        MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_63_63;
        MR_Word check_hlds__inst_user__STATE_VARIABLE_Groundness_64_64;
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsAny_65_65;
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_66_66;
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_67_67;
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_68_68;

        {
          check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(check_hlds__inst_user__ArgInst0_35, &check_hlds__inst_user__ArgInst_37, &check_hlds__inst_user__ArgGroundness_46, &check_hlds__inst_user__ArgContainsAny_47, &check_hlds__inst_user__ArgContainsInstNames_48, &check_hlds__inst_user__ArgContainsInstVars_49, &check_hlds__inst_user__ArgContainsTypes_50, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_63_63);
        }
        switch (check_hlds__inst_user__ArgGroundness_46) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            switch (check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
              case (MR_Integer) 1:
                check_hlds__inst_user__STATE_VARIABLE_Groundness_64_64 = (MR_Integer) 2;
                break;
              case (MR_Integer) 0:
                check_hlds__inst_user__STATE_VARIABLE_Groundness_64_64 = (MR_Integer) 0;
                break;
            }
            break;
          case (MR_Integer) 1:
            check_hlds__inst_user__STATE_VARIABLE_Groundness_64_64 = check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4;
            break;
          case (MR_Integer) 0:
            check_hlds__inst_user__STATE_VARIABLE_Groundness_64_64 = (MR_Integer) 0;
            break;
        }
        switch (check_hlds__inst_user__ArgContainsAny_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            switch (check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
              case (MR_Integer) 0:
                check_hlds__inst_user__STATE_VARIABLE_ContainsAny_65_65 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                check_hlds__inst_user__STATE_VARIABLE_ContainsAny_65_65 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            check_hlds__inst_user__STATE_VARIABLE_ContainsAny_65_65 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            check_hlds__inst_user__STATE_VARIABLE_ContainsAny_65_65 = check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6;
            break;
        }
        if ((check_hlds__inst_user__ArgContainsInstNames_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word check_hlds__inst_user__InstNamesA_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__ArgContainsInstNames_48, (MR_Integer) 0)));

            if ((check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word check_hlds__inst_user__InstNamesB_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8, (MR_Integer) 0)));
                MR_Word check_hlds__inst_user__InstNames_86;

                {
                  mercury__set__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, check_hlds__inst_user__InstNamesA_84, check_hlds__inst_user__InstNamesB_85, &check_hlds__inst_user__InstNames_86);
                }
                {
                  check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_66_66, 0) = ((MR_Box) (check_hlds__inst_user__InstNames_86));
                }
              }
          }
        if ((check_hlds__inst_user__ArgContainsInstVars_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_67_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word check_hlds__inst_user__InstVarsA_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__ArgContainsInstVars_49, (MR_Integer) 0)));

            if ((check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_67_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word check_hlds__inst_user__InstVarsB_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10, (MR_Integer) 0)));
                MR_Word check_hlds__inst_user__InstVars_93;

                {
                  mercury__set__union_3_p_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0], check_hlds__inst_user__InstVarsA_91, check_hlds__inst_user__InstVarsB_92, &check_hlds__inst_user__InstVars_93);
                }
                {
                  check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_67_67, 0) = ((MR_Box) (check_hlds__inst_user__InstVars_93));
                }
              }
          }
        {
          check_hlds__inst_user__combine_contains_types_results_3_p_0(check_hlds__inst_user__ArgContainsTypes_50, check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12, &check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_68_68);
        }
        {
          check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(check_hlds__inst_user__ArgInsts0_36, &check_hlds__inst_user__ArgInsts_38, check_hlds__inst_user__STATE_VARIABLE_Groundness_64_64, check_hlds__inst_user__STATE_VARIABLE_Groundness_5, check_hlds__inst_user__STATE_VARIABLE_ContainsAny_65_65, check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7, check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_66_66, check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9, check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_67_67, check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11, check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_68_68, check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_63_63, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__inst_user__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__ArgInst_37));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_user__ArgInsts_38));
        }
      }
  }
}

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word check_hlds__inst_user__HeadVar__1_1,
  MR_Word * check_hlds__inst_user__HeadVar__2_2,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_Groundness_5,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15)
{
  {
    MR_bool check_hlds__inst_user__succeeded;

    if ((check_hlds__inst_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *check_hlds__inst_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14;
        *check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13 = check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12;
        *check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11 = check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10;
        *check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9 = check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8;
        *check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7 = check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6;
        *check_hlds__inst_user__STATE_VARIABLE_Groundness_5 = check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4;
      }
    else
      {
        MR_Word check_hlds__inst_user__BoundInst0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_user__BoundInsts0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_user__BoundInst_37;
        MR_Word check_hlds__inst_user__BoundInsts_38;
        MR_Word check_hlds__inst_user__ConsId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__BoundInst0_35, (MR_Integer) 0)));
        MR_Word check_hlds__inst_user__ArgInsts0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__BoundInst0_35, (MR_Integer) 1)));
        MR_Word check_hlds__inst_user__ArgInsts_48;
        MR_Word check_hlds__inst_user__STATE_VARIABLE_Groundness_61_61;
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsAny_62_62;
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_63_63;
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_64_64;
        MR_Word check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_65_65;
        MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_66_66;

        {
          check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(check_hlds__inst_user__ArgInsts0_47, &check_hlds__inst_user__ArgInsts_48, check_hlds__inst_user__STATE_VARIABLE_Groundness_0_4, &check_hlds__inst_user__STATE_VARIABLE_Groundness_61_61, check_hlds__inst_user__STATE_VARIABLE_ContainsAny_0_6, &check_hlds__inst_user__STATE_VARIABLE_ContainsAny_62_62, check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_0_8, &check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_63_63, check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_0_10, &check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_64_64, check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_0_12, &check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_65_65, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_14, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_66_66);
        }
        {
          check_hlds__inst_user__BoundInst_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__inst_user__BoundInst_37, 0) = ((MR_Box) (check_hlds__inst_user__ConsId_46));
          MR_hl_field(MR_mktag(0), check_hlds__inst_user__BoundInst_37, 1) = ((MR_Box) (check_hlds__inst_user__ArgInsts_48));
        }
        {
          check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_51_93_95_48_15_p_0(check_hlds__inst_user__BoundInsts0_36, &check_hlds__inst_user__BoundInsts_38, check_hlds__inst_user__STATE_VARIABLE_Groundness_61_61, check_hlds__inst_user__STATE_VARIABLE_Groundness_5, check_hlds__inst_user__STATE_VARIABLE_ContainsAny_62_62, check_hlds__inst_user__STATE_VARIABLE_ContainsAny_7, check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_63_63, check_hlds__inst_user__STATE_VARIABLE_ContainsInstNames_9, check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_64_64, check_hlds__inst_user__STATE_VARIABLE_ContainsInstVars_11, check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_65_65, check_hlds__inst_user__STATE_VARIABLE_ContainsTypes_13, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_66_66, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_15);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__inst_user__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__BoundInst_37));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_user__BoundInsts_38));
        }
      }
  }
}

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(
  MR_Word check_hlds__inst_user__Inst0_11,
  MR_Word * check_hlds__inst_user__Inst_12,
  MR_Word * check_hlds__inst_user__Groundness_14,
  MR_Word * check_hlds__inst_user__ContainsAny_15,
  MR_Word * check_hlds__inst_user__ContainsInstNames_16,
  MR_Word * check_hlds__inst_user__ContainsInstVars_17,
  MR_Word * check_hlds__inst_user__ContainsTypes_18,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39)
{
  {
    MR_bool check_hlds__inst_user__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_user__Inst0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_user__Inst0_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_user__V_70_70;
              MR_Word check_hlds__inst_user__V_71_71;
              MR_Word check_hlds__inst_user__V_72_72;

              *check_hlds__inst_user__Groundness_14 = (MR_Integer) 0;
              *check_hlds__inst_user__ContainsAny_15 = (MR_Integer) 0;
              {
                check_hlds__inst_user__V_70_70 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_user__ContainsInstNames_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_70_70));
              }
              {
                check_hlds__inst_user__V_71_71 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_user__ContainsInstVars_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_71_71));
              }
              {
                check_hlds__inst_user__V_72_72 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_user__ContainsTypes_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_72_72));
              }
              *check_hlds__inst_user__Inst_12 = check_hlds__inst_user__Inst0_11;
              *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_user", (MR_String) "predicate \140check_hlds.inst_user.pretest_inst\'/10", (MR_String) "Inst0 = not_reached");
                return;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_user__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__Inst0_11, (MR_Integer) 0)));
          MR_Word check_hlds__inst_user__V_68_68;
          MR_Word check_hlds__inst_user__V_69_69;
          MR_Word check_hlds__inst_user__TypeCtor_21;

          *check_hlds__inst_user__Groundness_14 = (MR_Integer) 0;
          *check_hlds__inst_user__ContainsAny_15 = (MR_Integer) 0;
          {
            check_hlds__inst_user__V_68_68 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__inst_user__ContainsInstNames_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_68_68));
          }
          {
            check_hlds__inst_user__V_69_69 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__inst_user__ContainsInstVars_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_69_69));
          }
          {
            check_hlds__inst_user__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__inst_user__Type_20, &check_hlds__inst_user__TypeCtor_21);
          }
          if (check_hlds__inst_user__succeeded)
            {
              MR_Word check_hlds__inst_user__TypeCtors_22;

              {
                mercury__set__singleton_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (check_hlds__inst_user__TypeCtor_21)), &check_hlds__inst_user__TypeCtors_22);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_user__ContainsTypes_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__TypeCtors_22));
              }
            }
          else
            *check_hlds__inst_user__ContainsTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *check_hlds__inst_user__Inst_12 = check_hlds__inst_user__Inst0_11;
          *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__inst_user__V_62_62;
          MR_Word check_hlds__inst_user__V_63_63;
          MR_Word check_hlds__inst_user__V_64_64;

          *check_hlds__inst_user__Groundness_14 = (MR_Integer) 0;
          *check_hlds__inst_user__ContainsAny_15 = (MR_Integer) 1;
          {
            check_hlds__inst_user__V_62_62 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__inst_user__ContainsInstNames_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_62_62));
          }
          {
            check_hlds__inst_user__V_63_63 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__inst_user__ContainsInstVars_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_63_63));
          }
          {
            check_hlds__inst_user__V_64_64 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *check_hlds__inst_user__ContainsTypes_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_64_64));
          }
          *check_hlds__inst_user__Inst_12 = check_hlds__inst_user__Inst0_11;
          *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__inst_user__Uniq_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst0_11, (MR_Integer) 1)));
              MR_Word check_hlds__inst_user__BoundInsts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst0_11, (MR_Integer) 3)));
              MR_Word check_hlds__inst_user__BoundInsts_36;
              MR_Word check_hlds__inst_user__TestResults_37;
              MR_Word check_hlds__inst_user__V_42_42;
              MR_Word check_hlds__inst_user__V_43_43;
              MR_Word check_hlds__inst_user__V_44_44;
              MR_Word check_hlds__inst_user__V_46_46;
              MR_Word check_hlds__inst_user__V_47_47;
              MR_Word check_hlds__inst_user__V_48_48;
              MR_Word check_hlds__inst_user___TestResults0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst0_11, (MR_Integer) 2)));

              {
                check_hlds__inst_user__V_46_46 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
              }
              {
                check_hlds__inst_user__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__V_42_42, 0) = ((MR_Box) (check_hlds__inst_user__V_46_46));
              }
              {
                check_hlds__inst_user__V_47_47 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
              }
              {
                check_hlds__inst_user__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__V_43_43, 0) = ((MR_Box) (check_hlds__inst_user__V_47_47));
              }
              {
                check_hlds__inst_user__V_48_48 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
              }
              {
                check_hlds__inst_user__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__V_44_44, 0) = ((MR_Box) (check_hlds__inst_user__V_48_48));
              }
              {
                check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_51_93_95_48_15_p_0(check_hlds__inst_user__BoundInsts0_35, &check_hlds__inst_user__BoundInsts_36, (MR_Integer) 1, check_hlds__inst_user__Groundness_14, (MR_Integer) 0, check_hlds__inst_user__ContainsAny_15, check_hlds__inst_user__V_42_42, check_hlds__inst_user__ContainsInstNames_16, check_hlds__inst_user__V_43_43, check_hlds__inst_user__ContainsInstVars_17, check_hlds__inst_user__V_44_44, check_hlds__inst_user__ContainsTypes_18, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39);
              }
              {
                check_hlds__inst_user__TestResults_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__TestResults_37, 0) = ((MR_Box) (*check_hlds__inst_user__Groundness_14));
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__TestResults_37, 1) = ((MR_Box) (*check_hlds__inst_user__ContainsAny_15));
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__TestResults_37, 2) = ((MR_Box) (*check_hlds__inst_user__ContainsInstNames_16));
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__TestResults_37, 3) = ((MR_Box) (*check_hlds__inst_user__ContainsInstVars_17));
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__TestResults_37, 4) = ((MR_Box) (*check_hlds__inst_user__ContainsTypes_18));
                MR_hl_field(MR_mktag(1), check_hlds__inst_user__TestResults_37, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_user__Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_user__Uniq_33));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_user__TestResults_37));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_user__BoundInsts_36));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__inst_user__V_65_65;
              MR_Word check_hlds__inst_user__V_66_66;
              MR_Word check_hlds__inst_user__V_67_67;

              *check_hlds__inst_user__Groundness_14 = (MR_Integer) 1;
              *check_hlds__inst_user__ContainsAny_15 = (MR_Integer) 0;
              {
                check_hlds__inst_user__V_65_65 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_user__ContainsInstNames_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_65_65));
              }
              {
                check_hlds__inst_user__V_66_66 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_user__ContainsInstVars_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_66_66));
              }
              {
                check_hlds__inst_user__V_67_67 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_user__ContainsTypes_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_67_67));
              }
              *check_hlds__inst_user__Inst_12 = check_hlds__inst_user__Inst0_11;
              *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38;
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_user", (MR_String) "predicate \140check_hlds.inst_user.pretest_inst\'/10", (MR_String) "Inst0 = inst_var");
                return;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word check_hlds__inst_user__SubInst0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst0_11, (MR_Integer) 2)));
              MR_Word check_hlds__inst_user__SubInst_28;
              MR_Word check_hlds__inst_user__ContainsInstVars0_29;
              MR_Word check_hlds__inst_user__InstVarsA_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst0_11, (MR_Integer) 1)));

              {
                check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(check_hlds__inst_user__SubInst0_27, &check_hlds__inst_user__SubInst_28, check_hlds__inst_user__Groundness_14, check_hlds__inst_user__ContainsAny_15, check_hlds__inst_user__ContainsInstNames_16, &check_hlds__inst_user__ContainsInstVars0_29, check_hlds__inst_user__ContainsTypes_18, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39);
              }
              if ((check_hlds__inst_user__ContainsInstVars0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *check_hlds__inst_user__ContainsInstVars_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word check_hlds__inst_user__InstVarsB_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__ContainsInstVars0_29, (MR_Integer) 0)));
                  MR_Word check_hlds__inst_user__InstVars_98;

                  {
                    mercury__set__union_3_p_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0], check_hlds__inst_user__InstVarsA_96, check_hlds__inst_user__InstVarsB_97, &check_hlds__inst_user__InstVars_98);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__inst_user__ContainsInstVars_17 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__InstVars_98));
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_user__Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_user__InstVarsA_96));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_user__SubInst_28));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word check_hlds__inst_user__V_53_53;

              *check_hlds__inst_user__Groundness_14 = (MR_Integer) 2;
              *check_hlds__inst_user__ContainsAny_15 = (MR_Integer) 2;
              *check_hlds__inst_user__ContainsInstNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                check_hlds__inst_user__V_53_53 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__inst_user__ContainsInstVars_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__V_53_53));
              }
              *check_hlds__inst_user__ContainsTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *check_hlds__inst_user__Inst_12 = check_hlds__inst_user__Inst0_11;
              *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_39 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_38;
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_user", (MR_String) "predicate \140check_hlds.inst_user.pretest_inst\'/10", (MR_String) "Inst0 = abstract_inst");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_117_115_101_114_95_105_110_115_116_95_100_101_102_110_115_95_95_91_52_93_95_48_6_p_0(
  MR_Word check_hlds__inst_user__ModuleInfo_1,
  MR_Word check_hlds__inst_user__HeadVar__2_2,
  MR_Word check_hlds__inst_user__HeadVar__3_3,
  MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_user__succeeded;

        if ((check_hlds__inst_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__inst_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_6 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5;
          else
            {
              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__inst_user__HeadVar__2__tmp_copy_2 = check_hlds__inst_user__HeadVar__3_3;

                check_hlds__inst_user__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                check_hlds__inst_user__HeadVar__2_2 = check_hlds__inst_user__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
        else
          {
            MR_Word check_hlds__inst_user__InstDefnPair_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word check_hlds__inst_user__InstDefnPairs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word check_hlds__inst_user__InstId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefnPair_18, (MR_Integer) 0)));
            MR_Word check_hlds__inst_user__InstDefn_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefnPair_18, (MR_Integer) 1)));
            MR_Word check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30;
            MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_31_31;
            MR_Word check_hlds__inst_user__MaybeUserInst_25;
            MR_Box check_hlds__inst_user__conv0_MaybeUserInst_25;

            {
              check_hlds__inst_user__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5, ((MR_Box) (check_hlds__inst_user__InstId_23)), &check_hlds__inst_user__conv0_MaybeUserInst_25);
            }
            if (check_hlds__inst_user__succeeded)
              {
                check_hlds__inst_user__MaybeUserInst_25 = ((MR_Word) check_hlds__inst_user__conv0_MaybeUserInst_25);
                check_hlds__inst_user__succeeded = MR_TRUE;
              }
            if (check_hlds__inst_user__succeeded)
              {
                if ((check_hlds__inst_user__MaybeUserInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30, 0) = ((MR_Box) (check_hlds__inst_user__InstDefnPair_18));
                    MR_hl_field(MR_mktag(1), check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30, 1) = ((MR_Box) (check_hlds__inst_user__HeadVar__3_3));
                  }
                else
                  check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30 = check_hlds__inst_user__HeadVar__3_3;
                check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_31_31 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5;
              }
            else
              {
                MR_Word check_hlds__inst_user__InstVarSet_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_24, (MR_Integer) 0)));
                MR_Word check_hlds__inst_user__InstParams_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_24, (MR_Integer) 1)));
                MR_Word check_hlds__inst_user__InstBody0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_24, (MR_Integer) 2)));
                MR_Word check_hlds__inst_user__IFTC_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_24, (MR_Integer) 3)));
                MR_Word check_hlds__inst_user__Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_24, (MR_Integer) 4)));
                MR_Word check_hlds__inst_user__Status_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_24, (MR_Integer) 5)));

                if ((check_hlds__inst_user__InstBody0_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word check_hlds__inst_user__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_user__InstDefn_24);

                    {
                      mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0, ((MR_Box) (check_hlds__inst_user__InstId_23)), ((MR_Box) (check_hlds__inst_user__V_78_78)), check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_31_31);
                    }
                  }
                else
                  {
                    MR_Word check_hlds__inst_user__Inst0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__InstBody0_44, (MR_Integer) 0)));

                    if ((check_hlds__inst_user__InstParams_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word check_hlds__inst_user__TypeCtorInfo_56_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0;
                        MR_Word check_hlds__inst_user__TypeCtorInfo_57_85 = (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0;
                        MR_Word check_hlds__inst_user__Inst1_51;
                        MR_Word check_hlds__inst_user__Inst_64;
                        MR_Word check_hlds__inst_user__InstBody_65;
                        MR_Word check_hlds__inst_user__InstDefn_66;
                        MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_40_68;
                        MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_41_69;
                        MR_Word check_hlds__inst_user__V_74_74;
                        MR_Word check_hlds__inst_user__V_52_52;
                        MR_Word check_hlds__inst_user__V_53_53;
                        MR_Word check_hlds__inst_user__V_54_54;
                        MR_Word check_hlds__inst_user__V_55_55;
                        MR_Word check_hlds__inst_user__V_56_56;
                        MR_Word check_hlds__inst_user__TypeCtorSymName_61;
                        MR_Word check_hlds__inst_user__InstTypeCtor_60;
                        MR_Integer check_hlds__inst_user__TypeCtorArity_62;
                        MR_Word check_hlds__inst_user__V_57_57;
                        MR_Word check_hlds__inst_user__V_58_58;
                        MR_Word check_hlds__inst_user__V_59_59;

                        {
                          mercury__map__det_insert_4_p_0(check_hlds__inst_user__TypeCtorInfo_56_84, check_hlds__inst_user__TypeCtorInfo_57_85, ((MR_Box) (check_hlds__inst_user__InstId_23)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_40_68);
                        }
                        {
                          check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(check_hlds__inst_user__Inst0_48, &check_hlds__inst_user__Inst1_51, &check_hlds__inst_user__V_52_52, &check_hlds__inst_user__V_53_53, &check_hlds__inst_user__V_54_54, &check_hlds__inst_user__V_55_55, &check_hlds__inst_user__V_56_56, check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_40_68, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_41_69);
                        }
                        check_hlds__inst_user__succeeded = ((((MR_tag((MR_Word) check_hlds__inst_user__Inst1_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst1_51, (MR_Integer) 0)))) == (MR_Integer) 0)));
                        if (check_hlds__inst_user__succeeded)
                          {
                            check_hlds__inst_user__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst1_51, (MR_Integer) 1)));
                            check_hlds__inst_user__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst1_51, (MR_Integer) 2)));
                            check_hlds__inst_user__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_user__Inst1_51, (MR_Integer) 3)));
                            if (((MR_tag((MR_Word) check_hlds__inst_user__IFTC_45)) == (MR_mktag((MR_Integer) 1))))
                              {
                                check_hlds__inst_user__InstTypeCtor_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__IFTC_45, (MR_Integer) 0)));
                                check_hlds__inst_user__succeeded = MR_TRUE;
                              }
                            else
                            if (((MR_tag((MR_Word) check_hlds__inst_user__IFTC_45)) == (MR_mktag((MR_Integer) 2))))
                              {
                                MR_Word check_hlds__inst_user__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_user__IFTC_45, (MR_Integer) 0)));
                                MR_Word check_hlds__inst_user__V_71_71;

                                check_hlds__inst_user__succeeded = ((MR_tag((MR_Word) check_hlds__inst_user__V_70_70)) == (MR_mktag((MR_Integer) 1)));
                                if (check_hlds__inst_user__succeeded)
                                  {
                                    check_hlds__inst_user__InstTypeCtor_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__V_70_70, (MR_Integer) 0)));
                                    check_hlds__inst_user__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__V_70_70, (MR_Integer) 1)));
                                    check_hlds__inst_user__succeeded = (check_hlds__inst_user__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  }
                              }
                            else
                              check_hlds__inst_user__succeeded = MR_FALSE;
                            if (check_hlds__inst_user__succeeded)
                              {
                                check_hlds__inst_user__TypeCtorSymName_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstTypeCtor_60, (MR_Integer) 0)));
                                check_hlds__inst_user__TypeCtorArity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstTypeCtor_60, (MR_Integer) 1)));
                                check_hlds__inst_user__succeeded = (check_hlds__inst_user__TypeCtorArity_62 == (MR_Integer) 0);
                              }
                          }
                        if (check_hlds__inst_user__succeeded)
                          {
                            MR_Word check_hlds__inst_user__Type_63;

                            {
                              check_hlds__inst_user__Type_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), check_hlds__inst_user__Type_63, 0) = ((MR_Box) (check_hlds__inst_user__TypeCtorSymName_61));
                              MR_hl_field(MR_mktag(1), check_hlds__inst_user__Type_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              MR_hl_field(MR_mktag(1), check_hlds__inst_user__Type_63, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(check_hlds__inst_user__ModuleInfo_1, check_hlds__inst_user__Type_63, check_hlds__inst_user__Inst1_51, &check_hlds__inst_user__Inst_64);
                            }
                          }
                        else
                          check_hlds__inst_user__Inst_64 = check_hlds__inst_user__Inst1_51;
                        {
                          check_hlds__inst_user__InstBody_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__inst_user__InstBody_65, 0) = ((MR_Box) (check_hlds__inst_user__Inst_64));
                        }
                        {
                          check_hlds__inst_user__InstDefn_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_66, 0) = ((MR_Box) (check_hlds__inst_user__InstVarSet_42));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_66, 1) = ((MR_Box) (check_hlds__inst_user__InstParams_43));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_66, 2) = ((MR_Box) (check_hlds__inst_user__InstBody_65));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_66, 3) = ((MR_Box) (check_hlds__inst_user__IFTC_45));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_66, 4) = ((MR_Box) (check_hlds__inst_user__Context_46));
                          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefn_66, 5) = ((MR_Box) (check_hlds__inst_user__Status_47));
                        }
                        check_hlds__inst_user__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_user__InstDefn_66);
                        {
                          mercury__map__det_update_4_p_0(check_hlds__inst_user__TypeCtorInfo_56_84, check_hlds__inst_user__TypeCtorInfo_57_85, ((MR_Box) (check_hlds__inst_user__InstId_23)), ((MR_Box) (check_hlds__inst_user__V_74_74)), check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_41_69, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_31_31);
                        }
                      }
                    else
                      {
                        MR_Word check_hlds__inst_user__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_user__InstDefn_24);

                        {
                          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0, ((MR_Box) (check_hlds__inst_user__InstId_23)), ((MR_Box) (check_hlds__inst_user__V_76_76)), check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5, &check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_31_31);
                        }
                      }
                  }
                check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30 = check_hlds__inst_user__HeadVar__3_3;
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__inst_user__HeadVar__2__tmp_copy_2 = check_hlds__inst_user__InstDefnPairs_19;
              MR_Word check_hlds__inst_user__HeadVar__3__tmp_copy_3 = check_hlds__inst_user__STATE_VARIABLE_DelayedInstDefnPairs_30_30;
              MR_Word check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0__tmp_copy_5 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_31_31;

              check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0_5 = check_hlds__inst_user__STATE_VARIABLE_MaybeInstDefnsMap_0__tmp_copy_5;
              check_hlds__inst_user__HeadVar__3_3 = check_hlds__inst_user__HeadVar__3__tmp_copy_3;
              check_hlds__inst_user__HeadVar__2_2 = check_hlds__inst_user__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0(
  MR_Word * check_hlds__inst_user__HeadVar__1_1,
  MR_Word check_hlds__inst_user__HeadVar__2_2,
  MR_Word check_hlds__inst_user__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_user__succeeded;
    MR_Integer check_hlds__inst_user__CastX_8 = (MR_Integer) check_hlds__inst_user__HeadVar__2_2;
    MR_Integer check_hlds__inst_user__CastY_9 = (MR_Integer) check_hlds__inst_user__HeadVar__3_3;

    check_hlds__inst_user__succeeded = (check_hlds__inst_user__CastX_8 == check_hlds__inst_user__CastY_9);
    if (check_hlds__inst_user__succeeded)
      *check_hlds__inst_user__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((check_hlds__inst_user__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((check_hlds__inst_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__inst_user__HeadVar__1_1 = (MR_Integer) 0;
      else
        *check_hlds__inst_user__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word check_hlds__inst_user__V_11_11 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_user__HeadVar__2_2), (MR_Integer) 1);

        if ((check_hlds__inst_user__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__inst_user__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word check_hlds__inst_user__V_7_7 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_user__HeadVar__3_3), (MR_Integer) 1);

            {
              hlds__hlds_data____Compare____hlds_inst_defn_0_0(check_hlds__inst_user__HeadVar__1_1, check_hlds__inst_user__V_11_11, check_hlds__inst_user__V_7_7);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0(
  MR_Word check_hlds__inst_user__HeadVar__1_1,
  MR_Word check_hlds__inst_user__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_user__succeeded;
    MR_Integer check_hlds__inst_user__CastX_7 = (MR_Integer) check_hlds__inst_user__HeadVar__1_1;
    MR_Integer check_hlds__inst_user__CastY_8 = (MR_Integer) check_hlds__inst_user__HeadVar__2_2;

    check_hlds__inst_user__succeeded = (check_hlds__inst_user__CastX_7 == check_hlds__inst_user__CastY_8);
    if (check_hlds__inst_user__succeeded)
      check_hlds__inst_user__succeeded = MR_TRUE;
    else
    if ((check_hlds__inst_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer check_hlds__inst_user__CastX_3 = (MR_Integer) check_hlds__inst_user__HeadVar__1_1;
        MR_Integer check_hlds__inst_user__CastY_4 = (MR_Integer) check_hlds__inst_user__HeadVar__2_2;

        check_hlds__inst_user__succeeded = (check_hlds__inst_user__CastY_4 == check_hlds__inst_user__CastX_3);
      }
    else
      {
        MR_Word check_hlds__inst_user__V_5_5 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_user__HeadVar__1_1), (MR_Integer) 1);
        MR_Word check_hlds__inst_user__V_6_6;

        check_hlds__inst_user__succeeded = ((MR_tag((MR_Word) check_hlds__inst_user__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__inst_user__succeeded)
          {
            check_hlds__inst_user__V_6_6 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_user__HeadVar__2_2), (MR_Integer) 1);
            {
              check_hlds__inst_user__succeeded = hlds__hlds_data____Unify____hlds_inst_defn_0_0(check_hlds__inst_user__V_5_5, check_hlds__inst_user__V_6_6);
            }
          }
      }
    return check_hlds__inst_user__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0(
  MR_Word * check_hlds__inst_user__HeadVar__1_1,
  MR_Word check_hlds__inst_user__HeadVar__2_2,
  MR_Word check_hlds__inst_user__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_user__succeeded;
    MR_Word check_hlds__inst_user__Cast_HeadVar1_4 = check_hlds__inst_user__HeadVar__2_2;
    MR_Word check_hlds__inst_user__Cast_HeadVar2_5 = check_hlds__inst_user__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_user_scalar_common_2[0], check_hlds__inst_user__HeadVar__1_1, ((MR_Box) (check_hlds__inst_user__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_user__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0(
  MR_Word check_hlds__inst_user__HeadVar__1_1,
  MR_Word check_hlds__inst_user__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_user__succeeded;
    MR_Word check_hlds__inst_user__Cast_HeadVar1_3 = check_hlds__inst_user__HeadVar__1_1;
    MR_Word check_hlds__inst_user__Cast_HeadVar2_4 = check_hlds__inst_user__HeadVar__2_2;

    {
      check_hlds__inst_user__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_user_scalar_common_2[0], ((MR_Box) (check_hlds__inst_user__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_user__Cast_HeadVar2_4)));
    }
    return check_hlds__inst_user__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_user__record_user_inst_results_2_p_0(
  MR_Word check_hlds__inst_user__HeadVar__1_1,
  MR_Word * check_hlds__inst_user__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_user__succeeded;

    if ((check_hlds__inst_user__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__inst_user__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__inst_user__MaybeInstPair_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__inst_user__MaybeInstPairs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__inst_user__InstDefnPair_5;
        MR_Word check_hlds__inst_user__InstDefnPairs_6;
        MR_Word check_hlds__inst_user__InstId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__MaybeInstPair_3, (MR_Integer) 0)));
        MR_Word check_hlds__inst_user__MaybeUserInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_user__MaybeInstPair_3, (MR_Integer) 1)));
        MR_Word check_hlds__inst_user__UserInstDefn_9;

        if ((check_hlds__inst_user__MaybeUserInst_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_user", (MR_String) "predicate \140check_hlds.inst_user.record_user_inst_results\'/2", (MR_String) "MaybeUserInst = user_inst_being_processed");
              return;
            }
          }
        else
          check_hlds__inst_user__UserInstDefn_9 = (MR_Word) MR_body(((MR_Word) check_hlds__inst_user__MaybeUserInst_8), (MR_Integer) 1);
        {
          check_hlds__inst_user__InstDefnPair_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefnPair_5, 0) = ((MR_Box) (check_hlds__inst_user__InstId_7));
          MR_hl_field(MR_mktag(0), check_hlds__inst_user__InstDefnPair_5, 1) = ((MR_Box) (check_hlds__inst_user__UserInstDefn_9));
        }
        {
          check_hlds__inst_user__record_user_inst_results_2_p_0(check_hlds__inst_user__MaybeInstPairs_4, &check_hlds__inst_user__InstDefnPairs_6);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__inst_user__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__InstDefnPair_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__inst_user__InstDefnPairs_6));
        }
      }
  }
}

static void MR_CALL 
check_hlds__inst_user__combine_contains_types_results_3_p_0(
  MR_Word check_hlds__inst_user__ContainsTypesA_4,
  MR_Word check_hlds__inst_user__ContainsTypesB_5,
  MR_Word * check_hlds__inst_user__ContainsTypes_6)
{
  {
    MR_bool check_hlds__inst_user__succeeded;

    if ((check_hlds__inst_user__ContainsTypesA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__inst_user__ContainsTypes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word check_hlds__inst_user__TypesA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__ContainsTypesA_4, (MR_Integer) 0)));

        if ((check_hlds__inst_user__ContainsTypesB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__inst_user__ContainsTypes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word check_hlds__inst_user__TypesB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_user__ContainsTypesB_5, (MR_Integer) 0)));
            MR_Word check_hlds__inst_user__Types_9;

            {
              mercury__set__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, check_hlds__inst_user__TypesA_7, check_hlds__inst_user__TypesB_8, &check_hlds__inst_user__Types_9);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__inst_user__ContainsTypes_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__inst_user__Types_9));
            }
          }
      }
  }
}

void MR_CALL 
check_hlds__inst_user__pretest_user_inst_table_2_p_0(
  MR_Word check_hlds__inst_user__STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * check_hlds__inst_user__STATE_VARIABLE_ModuleInfo_13)
{
  {
    MR_bool check_hlds__inst_user__succeeded;
    MR_Word check_hlds__inst_user__TypeCtorInfo_17_17;
    MR_Word check_hlds__inst_user__TypeCtorInfo_18_18;
    MR_Word check_hlds__inst_user__TypeCtorInfo_19_19;
    MR_Word check_hlds__inst_user__InstTable0_4;
    MR_Word check_hlds__inst_user__UserInstTable0_5;
    MR_Word check_hlds__inst_user__UserInstDefns0_6;
    MR_Word check_hlds__inst_user__MaybeInstDefnsMap_7;
    MR_Word check_hlds__inst_user__MaybeInstDefns_8;
    MR_Word check_hlds__inst_user__UserInstDefns_9;
    MR_Word check_hlds__inst_user__UserInstTable_10;
    MR_Word check_hlds__inst_user__InstTable_11;
    MR_Word check_hlds__inst_user__V_15_15;

    {
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__inst_user__STATE_VARIABLE_ModuleInfo_0_12, &check_hlds__inst_user__InstTable0_4);
    }
    {
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(check_hlds__inst_user__InstTable0_4, &check_hlds__inst_user__UserInstTable0_5);
    }
    check_hlds__inst_user__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0;
    check_hlds__inst_user__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;
    {
      mercury__map__to_sorted_assoc_list_2_p_0(check_hlds__inst_user__TypeCtorInfo_17_17, check_hlds__inst_user__TypeCtorInfo_18_18, check_hlds__inst_user__UserInstTable0_5, &check_hlds__inst_user__UserInstDefns0_6);
    }
    check_hlds__inst_user__TypeCtorInfo_19_19 = (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0;
    {
      check_hlds__inst_user__V_15_15 = mercury__map__init_0_f_0(check_hlds__inst_user__TypeCtorInfo_17_17, check_hlds__inst_user__TypeCtorInfo_19_19);
    }
    {
      check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_117_115_101_114_95_105_110_115_116_95_100_101_102_110_115_95_95_91_52_93_95_48_6_p_0(check_hlds__inst_user__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_user__UserInstDefns0_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_user__V_15_15, &check_hlds__inst_user__MaybeInstDefnsMap_7);
    }
    {
      mercury__map__to_sorted_assoc_list_2_p_0(check_hlds__inst_user__TypeCtorInfo_17_17, check_hlds__inst_user__TypeCtorInfo_19_19, check_hlds__inst_user__MaybeInstDefnsMap_7, &check_hlds__inst_user__MaybeInstDefns_8);
    }
    {
      check_hlds__inst_user__record_user_inst_results_2_p_0(check_hlds__inst_user__MaybeInstDefns_8, &check_hlds__inst_user__UserInstDefns_9);
    }
    {
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__inst_user__TypeCtorInfo_17_17, check_hlds__inst_user__TypeCtorInfo_18_18, check_hlds__inst_user__UserInstDefns_9, &check_hlds__inst_user__UserInstTable_10);
    }
    {
      hlds__hlds_data__inst_table_set_user_insts_3_p_0(check_hlds__inst_user__UserInstTable_10, check_hlds__inst_user__InstTable0_4, &check_hlds__inst_user__InstTable_11);
    }
    {
      hlds__hlds_module__module_info_set_inst_table_3_p_0(check_hlds__inst_user__InstTable_11, check_hlds__inst_user__STATE_VARIABLE_ModuleInfo_0_12, check_hlds__inst_user__STATE_VARIABLE_ModuleInfo_13);
    }
  }
}

void mercury__check_hlds__inst_user__init(void)
{
}

void mercury__check_hlds__inst_user__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_inst_defns_map_0);
	MR_register_type_ctor_info(&check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0);
}

void mercury__check_hlds__inst_user__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.inst_user. */
