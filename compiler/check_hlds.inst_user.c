/*
** Automatically generated from `inst_user.m'
** by the Mercury compiler,
** version rotd-2018-02-28
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


// :- module check_hlds.inst_user.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_117_115_101_114_95_105_110_115_116_95_100_101_102_110_115_95_95_91_52_93_95_48_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_5,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_6);

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Groundness_0_4,
  MR_Word * STATE_VARIABLE_Groundness_5,
  MR_Word STATE_VARIABLE_ContainsAny_0_6,
  MR_Word * STATE_VARIABLE_ContainsAny_7,
  MR_Word STATE_VARIABLE_ContainsInstNames_0_8,
  MR_Word * STATE_VARIABLE_ContainsInstNames_9,
  MR_Word STATE_VARIABLE_ContainsInstVars_0_10,
  MR_Word * STATE_VARIABLE_ContainsInstVars_11,
  MR_Word STATE_VARIABLE_ContainsTypes_0_12,
  MR_Word * STATE_VARIABLE_ContainsTypes_13,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_14,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_15);

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Groundness_0_4,
  MR_Word * STATE_VARIABLE_Groundness_5,
  MR_Word STATE_VARIABLE_ContainsAny_0_6,
  MR_Word * STATE_VARIABLE_ContainsAny_7,
  MR_Word STATE_VARIABLE_ContainsInstNames_0_8,
  MR_Word * STATE_VARIABLE_ContainsInstNames_9,
  MR_Word STATE_VARIABLE_ContainsInstVars_0_10,
  MR_Word * STATE_VARIABLE_ContainsInstVars_11,
  MR_Word STATE_VARIABLE_ContainsTypes_0_12,
  MR_Word * STATE_VARIABLE_ContainsTypes_13,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_14,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_15);

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Word * Groundness_14,
  MR_Word * ContainsAny_15,
  MR_Word * ContainsInstNames_16,
  MR_Word * ContainsInstVars_17,
  MR_Word * ContainsTypes_18,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_38,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_39);

static void MR_CALL 
check_hlds__inst_user__combine_contains_types_results_3_p_0(
  MR_Word ContainsTypesA_4,
  MR_Word ContainsTypesB_5,
  MR_Word * ContainsTypes_6);

static void MR_CALL 
check_hlds__inst_user__record_user_inst_results_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_PseudoTypeInfo check_hlds__inst_user__check_hlds__inst_user__field_types_maybe_user_inst_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0
};

static const MR_DuFunctorDesc check_hlds__inst_user__check_hlds__inst_user__du_functor_desc_maybe_user_inst_0_1 = {
  (MR_String) "processed_user_inst",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__inst_user__check_hlds__inst_user__field_types_maybe_user_inst_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    check_hlds__inst_user__check_hlds__inst_user__du_stag_ordered_maybe_user_inst_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0(
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
      MR_Word Var_11 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 1);

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_7 = (MR_Word) MR_body(((MR_Word) HeadVar__3_3), (MR_Integer) 1);

        hlds__hlds_inst_mode____Compare____hlds_inst_defn_0_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0(
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
      MR_Word ArgX1_5 = (MR_Word) MR_body(((MR_Word) HeadVar__1_1), (MR_Integer) 1);
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = (MR_Word) MR_body(((MR_Word) HeadVar__2_2), (MR_Integer) 1);
        succeeded = hlds__hlds_inst_mode____Unify____hlds_inst_defn_0_0(ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_user_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_user_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__inst_user__pretest_user_inst_table_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  {
    MR_Word TypeCtorInfo_17_17;
    MR_Word TypeCtorInfo_18_18;
    MR_Word TypeCtorInfo_19_19;
    MR_Word InstTable0_4;
    MR_Word UserInstTable0_5;
    MR_Word UserInstDefns0_6;
    MR_Word MaybeInstDefnsMap_7;
    MR_Word MaybeInstDefns_8;
    MR_Word UserInstDefns_9;
    MR_Word UserInstTable_10;
    MR_Word InstTable_11;
    MR_Word Var_15;

    hlds__hlds_module__module_info_get_inst_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &InstTable0_4);
    hlds__hlds_inst_mode__inst_table_get_user_insts_2_p_0(InstTable0_4, &UserInstTable0_5);
    TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0;
    TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_inst_mode__hlds__hlds_inst_mode__type_ctor_info_hlds_inst_defn_0;
    mercury__map__to_sorted_assoc_list_2_p_0(TypeCtorInfo_17_17, TypeCtorInfo_18_18, UserInstTable0_5, &UserInstDefns0_6);
    TypeCtorInfo_19_19 = (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0;
    Var_15 = mercury__map__init_0_f_0(TypeCtorInfo_17_17, TypeCtorInfo_19_19);
    check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_117_115_101_114_95_105_110_115_116_95_100_101_102_110_115_95_95_91_52_93_95_48_6_p_0(STATE_VARIABLE_ModuleInfo_0_12, UserInstDefns0_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_15, &MaybeInstDefnsMap_7);
    mercury__map__to_sorted_assoc_list_2_p_0(TypeCtorInfo_17_17, TypeCtorInfo_19_19, MaybeInstDefnsMap_7, &MaybeInstDefns_8);
    check_hlds__inst_user__record_user_inst_results_2_p_0(MaybeInstDefns_8, &UserInstDefns_9);
    mercury__map__from_sorted_assoc_list_2_p_0(TypeCtorInfo_17_17, TypeCtorInfo_18_18, UserInstDefns_9, &UserInstTable_10);
    hlds__hlds_inst_mode__inst_table_set_user_insts_3_p_0(UserInstTable_10, InstTable0_4, &InstTable_11);
    hlds__hlds_module__module_info_set_inst_table_3_p_0(InstTable_11, STATE_VARIABLE_ModuleInfo_0_12, STATE_VARIABLE_ModuleInfo_13);
  }
}

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_117_115_101_114_95_105_110_115_116_95_100_101_102_110_115_95_95_91_52_93_95_48_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_5,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_MaybeInstDefnsMap_6 = STATE_VARIABLE_MaybeInstDefnsMap_0_5;
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = HeadVar__3_3;

        // direct tailcall eliminated
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        continue;
      }
    else
    {
      MR_Word InstDefnPair_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word InstDefnPairs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word InstId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefnPair_18, (MR_Integer) 0)));
      MR_Word InstDefn_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefnPair_18, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_DelayedInstDefnPairs_30_30;
      MR_Word STATE_VARIABLE_MaybeInstDefnsMap_31_31;
      MR_Word MaybeUserInst_25;
      MR_Box conv0_MaybeUserInst_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_MaybeInstDefnsMap_0_5;

      succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0, STATE_VARIABLE_MaybeInstDefnsMap_0_5, ((MR_Box) (InstId_23)), &conv0_MaybeUserInst_25);
      if (succeeded)
      {
        MaybeUserInst_25 = ((MR_Word) conv0_MaybeUserInst_25);
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        if ((MaybeUserInst_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            STATE_VARIABLE_DelayedInstDefnPairs_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_DelayedInstDefnPairs_30_30, 0) = ((MR_Box) (InstDefnPair_18));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_DelayedInstDefnPairs_30_30, 1) = ((MR_Box) (HeadVar__3_3));
          }
        else
          STATE_VARIABLE_DelayedInstDefnPairs_30_30 = HeadVar__3_3;
        STATE_VARIABLE_MaybeInstDefnsMap_31_31 = STATE_VARIABLE_MaybeInstDefnsMap_0_5;
      }
      else
      {
        MR_Word InstVarSet_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_24, (MR_Integer) 0)));
        MR_Word InstParams_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_24, (MR_Integer) 1)));
        MR_Word InstBody0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_24, (MR_Integer) 2)));
        MR_Word IFTC_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_24, (MR_Integer) 3)));
        MR_Word Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_24, (MR_Integer) 4)));
        MR_Word Status_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstDefn_24, (MR_Integer) 5)));

        if ((InstBody0_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word Var_78 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) InstDefn_24);

          mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0, ((MR_Box) (InstId_23)), ((MR_Box) (Var_78)), STATE_VARIABLE_MaybeInstDefnsMap_0_5, &STATE_VARIABLE_MaybeInstDefnsMap_31_31);
        }
        else
        {
          MR_Word Inst0_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), InstBody0_44, (MR_Integer) 0)));

          if ((InstParams_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word TypeCtorInfo_56_84 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0;
            MR_Word TypeCtorInfo_57_85 = (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0;
            MR_Word Inst1_51;
            MR_Word Inst_64;
            MR_Word InstBody_65;
            MR_Word InstDefn_66;
            MR_Word STATE_VARIABLE_MaybeInstDefnsMap_40_68;
            MR_Word STATE_VARIABLE_MaybeInstDefnsMap_41_69;
            MR_Word Var_74;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word TypeCtorSymName_61;
            MR_Word InstTypeCtor_60;
            MR_Integer TypeCtorArity_62;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word Var_59;

            mercury__map__det_insert_4_p_0(TypeCtorInfo_56_84, TypeCtorInfo_57_85, ((MR_Box) (InstId_23)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), STATE_VARIABLE_MaybeInstDefnsMap_0_5, &STATE_VARIABLE_MaybeInstDefnsMap_40_68);
            check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(Inst0_48, &Inst1_51, &Var_52, &Var_53, &Var_54, &Var_55, &Var_56, STATE_VARIABLE_MaybeInstDefnsMap_40_68, &STATE_VARIABLE_MaybeInstDefnsMap_41_69);
            succeeded = ((((MR_tag((MR_Word) Inst1_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst1_51, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst1_51, (MR_Integer) 1)));
              Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst1_51, (MR_Integer) 2)));
              Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst1_51, (MR_Integer) 3)));
              if (((MR_tag((MR_Word) IFTC_45)) == (MR_mktag((MR_Integer) 1))))
              {
                InstTypeCtor_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), IFTC_45, (MR_Integer) 0)));
                succeeded = MR_TRUE;
              }
              else
              if (((MR_tag((MR_Word) IFTC_45)) == (MR_mktag((MR_Integer) 2))))
              {
                MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), IFTC_45, (MR_Integer) 0)));
                MR_Word Var_71;

                succeeded = ((MR_tag((MR_Word) Var_70)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  InstTypeCtor_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 0)));
                  Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_70, (MR_Integer) 1)));
                  succeeded = (Var_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                TypeCtorSymName_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), InstTypeCtor_60, (MR_Integer) 0)));
                TypeCtorArity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), InstTypeCtor_60, (MR_Integer) 1)));
                succeeded = (TypeCtorArity_62 == (MR_Integer) 0);
              }
            }
            if (succeeded)
            {
              MR_Word Type_63;

              {
                Type_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Type_63, 0) = ((MR_Box) (TypeCtorSymName_61));
                MR_hl_field(MR_mktag(1), Type_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(1), Type_63, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              check_hlds__mode_util__propagate_ctor_info_into_bound_inst_4_p_0(ModuleInfo_1, Type_63, Inst1_51, &Inst_64);
            }
            else
              Inst_64 = Inst1_51;
            {
              InstBody_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), InstBody_65, 0) = ((MR_Box) (Inst_64));
            }
            {
              InstDefn_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), InstDefn_66, 0) = ((MR_Box) (InstVarSet_42));
              MR_hl_field(MR_mktag(0), InstDefn_66, 1) = ((MR_Box) (InstParams_43));
              MR_hl_field(MR_mktag(0), InstDefn_66, 2) = ((MR_Box) (InstBody_65));
              MR_hl_field(MR_mktag(0), InstDefn_66, 3) = ((MR_Box) (IFTC_45));
              MR_hl_field(MR_mktag(0), InstDefn_66, 4) = ((MR_Box) (Context_46));
              MR_hl_field(MR_mktag(0), InstDefn_66, 5) = ((MR_Box) (Status_47));
            }
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) InstDefn_66);
            mercury__map__det_update_4_p_0(TypeCtorInfo_56_84, TypeCtorInfo_57_85, ((MR_Box) (InstId_23)), ((MR_Box) (Var_74)), STATE_VARIABLE_MaybeInstDefnsMap_41_69, &STATE_VARIABLE_MaybeInstDefnsMap_31_31);
          }
          else
          {
            MR_Word Var_76 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) InstDefn_24);

            mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &check_hlds__inst_user__check_hlds__inst_user__type_ctor_info_maybe_user_inst_0, ((MR_Box) (InstId_23)), ((MR_Box) (Var_76)), STATE_VARIABLE_MaybeInstDefnsMap_0_5, &STATE_VARIABLE_MaybeInstDefnsMap_31_31);
          }
        }
        STATE_VARIABLE_DelayedInstDefnPairs_30_30 = HeadVar__3_3;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = InstDefnPairs_19;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_DelayedInstDefnPairs_30_30;
      next_value_of_STATE_VARIABLE_MaybeInstDefnsMap_0_5 = STATE_VARIABLE_MaybeInstDefnsMap_31_31;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_MaybeInstDefnsMap_0_5 = next_value_of_STATE_VARIABLE_MaybeInstDefnsMap_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Groundness_0_4,
  MR_Word * STATE_VARIABLE_Groundness_5,
  MR_Word STATE_VARIABLE_ContainsAny_0_6,
  MR_Word * STATE_VARIABLE_ContainsAny_7,
  MR_Word STATE_VARIABLE_ContainsInstNames_0_8,
  MR_Word * STATE_VARIABLE_ContainsInstNames_9,
  MR_Word STATE_VARIABLE_ContainsInstVars_0_10,
  MR_Word * STATE_VARIABLE_ContainsInstVars_11,
  MR_Word STATE_VARIABLE_ContainsTypes_0_12,
  MR_Word * STATE_VARIABLE_ContainsTypes_13,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_14,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_15)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_MaybeInstDefnsMap_15 = STATE_VARIABLE_MaybeInstDefnsMap_0_14;
    *STATE_VARIABLE_ContainsTypes_13 = STATE_VARIABLE_ContainsTypes_0_12;
    *STATE_VARIABLE_ContainsInstVars_11 = STATE_VARIABLE_ContainsInstVars_0_10;
    *STATE_VARIABLE_ContainsInstNames_9 = STATE_VARIABLE_ContainsInstNames_0_8;
    *STATE_VARIABLE_ContainsAny_7 = STATE_VARIABLE_ContainsAny_0_6;
    *STATE_VARIABLE_Groundness_5 = STATE_VARIABLE_Groundness_0_4;
  }
  else
  {
    MR_Word ArgInst0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ArgInsts0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ArgInst_37;
    MR_Word ArgInsts_38;
    MR_Word ArgGroundness_46;
    MR_Word ArgContainsAny_47;
    MR_Word ArgContainsInstNames_48;
    MR_Word ArgContainsInstVars_49;
    MR_Word ArgContainsTypes_50;
    MR_Word STATE_VARIABLE_MaybeInstDefnsMap_63_63;
    MR_Word STATE_VARIABLE_Groundness_64_64;
    MR_Word STATE_VARIABLE_ContainsAny_65_65;
    MR_Word STATE_VARIABLE_ContainsInstNames_66_66;
    MR_Word STATE_VARIABLE_ContainsInstVars_67_67;
    MR_Word STATE_VARIABLE_ContainsTypes_68_68;

    check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(ArgInst0_35, &ArgInst_37, &ArgGroundness_46, &ArgContainsAny_47, &ArgContainsInstNames_48, &ArgContainsInstVars_49, &ArgContainsTypes_50, STATE_VARIABLE_MaybeInstDefnsMap_0_14, &STATE_VARIABLE_MaybeInstDefnsMap_63_63);
    switch (ArgGroundness_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        switch (STATE_VARIABLE_Groundness_0_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            STATE_VARIABLE_Groundness_64_64 = (MR_Integer) 2;
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_Groundness_64_64 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Groundness_64_64 = STATE_VARIABLE_Groundness_0_4;
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Groundness_64_64 = (MR_Integer) 0;
        break;
    }
    switch (ArgContainsAny_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        switch (STATE_VARIABLE_ContainsAny_0_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 0:
            STATE_VARIABLE_ContainsAny_65_65 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_ContainsAny_65_65 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_ContainsAny_65_65 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_ContainsAny_65_65 = STATE_VARIABLE_ContainsAny_0_6;
        break;
    }
    if ((ArgContainsInstNames_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_ContainsInstNames_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word InstNamesA_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgContainsInstNames_48, (MR_Integer) 0)));

      if ((STATE_VARIABLE_ContainsInstNames_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        STATE_VARIABLE_ContainsInstNames_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word InstNamesB_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_ContainsInstNames_0_8, (MR_Integer) 0)));
        MR_Word InstNames_86;

        mercury__set__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, InstNamesA_84, InstNamesB_85, &InstNames_86);
        {
          STATE_VARIABLE_ContainsInstNames_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ContainsInstNames_66_66, 0) = ((MR_Box) (InstNames_86));
        }
      }
    }
    if ((ArgContainsInstVars_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_ContainsInstVars_67_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word InstVarsA_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArgContainsInstVars_49, (MR_Integer) 0)));

      if ((STATE_VARIABLE_ContainsInstVars_0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        STATE_VARIABLE_ContainsInstVars_67_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word InstVarsB_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_ContainsInstVars_0_10, (MR_Integer) 0)));
        MR_Word InstVars_93;

        mercury__set__union_3_p_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0], InstVarsA_91, InstVarsB_92, &InstVars_93);
        {
          STATE_VARIABLE_ContainsInstVars_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_ContainsInstVars_67_67, 0) = ((MR_Box) (InstVars_93));
        }
      }
    }
    check_hlds__inst_user__combine_contains_types_results_3_p_0(ArgContainsTypes_50, STATE_VARIABLE_ContainsTypes_0_12, &STATE_VARIABLE_ContainsTypes_68_68);
    check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(ArgInsts0_36, &ArgInsts_38, STATE_VARIABLE_Groundness_64_64, STATE_VARIABLE_Groundness_5, STATE_VARIABLE_ContainsAny_65_65, STATE_VARIABLE_ContainsAny_7, STATE_VARIABLE_ContainsInstNames_66_66, STATE_VARIABLE_ContainsInstNames_9, STATE_VARIABLE_ContainsInstVars_67_67, STATE_VARIABLE_ContainsInstVars_11, STATE_VARIABLE_ContainsTypes_68_68, STATE_VARIABLE_ContainsTypes_13, STATE_VARIABLE_MaybeInstDefnsMap_63_63, STATE_VARIABLE_MaybeInstDefnsMap_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgInst_37));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ArgInsts_38));
    }
  }
}

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_51_93_95_48_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Groundness_0_4,
  MR_Word * STATE_VARIABLE_Groundness_5,
  MR_Word STATE_VARIABLE_ContainsAny_0_6,
  MR_Word * STATE_VARIABLE_ContainsAny_7,
  MR_Word STATE_VARIABLE_ContainsInstNames_0_8,
  MR_Word * STATE_VARIABLE_ContainsInstNames_9,
  MR_Word STATE_VARIABLE_ContainsInstVars_0_10,
  MR_Word * STATE_VARIABLE_ContainsInstVars_11,
  MR_Word STATE_VARIABLE_ContainsTypes_0_12,
  MR_Word * STATE_VARIABLE_ContainsTypes_13,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_14,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_15)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *STATE_VARIABLE_MaybeInstDefnsMap_15 = STATE_VARIABLE_MaybeInstDefnsMap_0_14;
    *STATE_VARIABLE_ContainsTypes_13 = STATE_VARIABLE_ContainsTypes_0_12;
    *STATE_VARIABLE_ContainsInstVars_11 = STATE_VARIABLE_ContainsInstVars_0_10;
    *STATE_VARIABLE_ContainsInstNames_9 = STATE_VARIABLE_ContainsInstNames_0_8;
    *STATE_VARIABLE_ContainsAny_7 = STATE_VARIABLE_ContainsAny_0_6;
    *STATE_VARIABLE_Groundness_5 = STATE_VARIABLE_Groundness_0_4;
  }
  else
  {
    MR_Word BoundInst0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word BoundInsts0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word BoundInst_37;
    MR_Word BoundInsts_38;
    MR_Word ConsId_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), BoundInst0_35, (MR_Integer) 0)));
    MR_Word ArgInsts0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), BoundInst0_35, (MR_Integer) 1)));
    MR_Word ArgInsts_48;
    MR_Word STATE_VARIABLE_Groundness_61_61;
    MR_Word STATE_VARIABLE_ContainsAny_62_62;
    MR_Word STATE_VARIABLE_ContainsInstNames_63_63;
    MR_Word STATE_VARIABLE_ContainsInstVars_64_64;
    MR_Word STATE_VARIABLE_ContainsTypes_65_65;
    MR_Word STATE_VARIABLE_MaybeInstDefnsMap_66_66;

    check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_95_97_114_103_115_95_95_91_51_93_95_48_15_p_0(ArgInsts0_47, &ArgInsts_48, STATE_VARIABLE_Groundness_0_4, &STATE_VARIABLE_Groundness_61_61, STATE_VARIABLE_ContainsAny_0_6, &STATE_VARIABLE_ContainsAny_62_62, STATE_VARIABLE_ContainsInstNames_0_8, &STATE_VARIABLE_ContainsInstNames_63_63, STATE_VARIABLE_ContainsInstVars_0_10, &STATE_VARIABLE_ContainsInstVars_64_64, STATE_VARIABLE_ContainsTypes_0_12, &STATE_VARIABLE_ContainsTypes_65_65, STATE_VARIABLE_MaybeInstDefnsMap_0_14, &STATE_VARIABLE_MaybeInstDefnsMap_66_66);
    {
      BoundInst_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BoundInst_37, 0) = ((MR_Box) (ConsId_46));
      MR_hl_field(MR_mktag(0), BoundInst_37, 1) = ((MR_Box) (ArgInsts_48));
    }
    check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_51_93_95_48_15_p_0(BoundInsts0_36, &BoundInsts_38, STATE_VARIABLE_Groundness_61_61, STATE_VARIABLE_Groundness_5, STATE_VARIABLE_ContainsAny_62_62, STATE_VARIABLE_ContainsAny_7, STATE_VARIABLE_ContainsInstNames_63_63, STATE_VARIABLE_ContainsInstNames_9, STATE_VARIABLE_ContainsInstVars_64_64, STATE_VARIABLE_ContainsInstVars_11, STATE_VARIABLE_ContainsTypes_65_65, STATE_VARIABLE_ContainsTypes_13, STATE_VARIABLE_MaybeInstDefnsMap_66_66, STATE_VARIABLE_MaybeInstDefnsMap_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BoundInst_37));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BoundInsts_38));
    }
  }
}

static void MR_CALL 
check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Word * Groundness_14,
  MR_Word * ContainsAny_15,
  MR_Word * ContainsInstNames_16,
  MR_Word * ContainsInstVars_17,
  MR_Word * ContainsTypes_18,
  MR_Word STATE_VARIABLE_MaybeInstDefnsMap_0_38,
  MR_Word * STATE_VARIABLE_MaybeInstDefnsMap_39)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Inst0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Inst0_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_70;
              MR_Word Var_71;
              MR_Word Var_72;

              *Groundness_14 = (MR_Integer) 0;
              *ContainsAny_15 = (MR_Integer) 0;
              Var_70 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ContainsInstNames_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_70));
              }
              Var_71 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ContainsInstVars_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_71));
              }
              Var_72 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ContainsTypes_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_72));
              }
              *Inst_12 = Inst0_11;
              *STATE_VARIABLE_MaybeInstDefnsMap_39 = STATE_VARIABLE_MaybeInstDefnsMap_0_38;
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
          MR_Word Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Inst0_11, (MR_Integer) 0)));
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word TypeCtor_21;

          *Groundness_14 = (MR_Integer) 0;
          *ContainsAny_15 = (MR_Integer) 0;
          Var_68 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ContainsInstNames_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_68));
          }
          Var_69 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ContainsInstVars_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_69));
          }
          succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(Type_20, &TypeCtor_21);
          if (succeeded)
          {
            MR_Word TypeCtors_22;

            mercury__set__singleton_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (TypeCtor_21)), &TypeCtors_22);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ContainsTypes_18 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeCtors_22));
            }
          }
          else
            *ContainsTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *Inst_12 = Inst0_11;
          *STATE_VARIABLE_MaybeInstDefnsMap_39 = STATE_VARIABLE_MaybeInstDefnsMap_0_38;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;

          *Groundness_14 = (MR_Integer) 0;
          *ContainsAny_15 = (MR_Integer) 1;
          Var_62 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ContainsInstNames_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_62));
          }
          Var_63 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ContainsInstVars_17 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_63));
          }
          Var_64 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ContainsTypes_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_64));
          }
          *Inst_12 = Inst0_11;
          *STATE_VARIABLE_MaybeInstDefnsMap_39 = STATE_VARIABLE_MaybeInstDefnsMap_0_38;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Uniq_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1)));
              MR_Word BoundInsts0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 3)));
              MR_Word BoundInsts_36;
              MR_Word TestResults_37;
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word Var_44;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word _TestResults0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2)));

              Var_46 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_46));
              }
              Var_47 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_47));
              }
              Var_48 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_48));
              }
              check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_51_93_95_48_15_p_0(BoundInsts0_35, &BoundInsts_36, (MR_Integer) 1, Groundness_14, (MR_Integer) 0, ContainsAny_15, Var_42, ContainsInstNames_16, Var_43, ContainsInstVars_17, Var_44, ContainsTypes_18, STATE_VARIABLE_MaybeInstDefnsMap_0_38, STATE_VARIABLE_MaybeInstDefnsMap_39);
              {
                TestResults_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), TestResults_37, 0) = ((MR_Box) (*Groundness_14));
                MR_hl_field(MR_mktag(1), TestResults_37, 1) = ((MR_Box) (*ContainsAny_15));
                MR_hl_field(MR_mktag(1), TestResults_37, 2) = ((MR_Box) (*ContainsInstNames_16));
                MR_hl_field(MR_mktag(1), TestResults_37, 3) = ((MR_Box) (*ContainsInstVars_17));
                MR_hl_field(MR_mktag(1), TestResults_37, 4) = ((MR_Box) (*ContainsTypes_18));
                MR_hl_field(MR_mktag(1), TestResults_37, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Uniq_33));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (TestResults_37));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (BoundInsts_36));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word Var_67;

              *Groundness_14 = (MR_Integer) 1;
              *ContainsAny_15 = (MR_Integer) 0;
              Var_65 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ContainsInstNames_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_65));
              }
              Var_66 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ContainsInstVars_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_66));
              }
              Var_67 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ContainsTypes_18 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_67));
              }
              *Inst_12 = Inst0_11;
              *STATE_VARIABLE_MaybeInstDefnsMap_39 = STATE_VARIABLE_MaybeInstDefnsMap_0_38;
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
              MR_Word SubInst0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 2)));
              MR_Word SubInst_28;
              MR_Word ContainsInstVars0_29;
              MR_Word InstVarsA_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), Inst0_11, (MR_Integer) 1)));

              check_hlds__inst_user__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_101_116_101_115_116_95_105_110_115_116_95_95_91_51_93_95_48_10_p_0(SubInst0_27, &SubInst_28, Groundness_14, ContainsAny_15, ContainsInstNames_16, &ContainsInstVars0_29, ContainsTypes_18, STATE_VARIABLE_MaybeInstDefnsMap_0_38, STATE_VARIABLE_MaybeInstDefnsMap_39);
              if ((ContainsInstVars0_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *ContainsInstVars_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
              {
                MR_Word InstVarsB_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), ContainsInstVars0_29, (MR_Integer) 0)));
                MR_Word InstVars_98;

                mercury__set__union_3_p_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0], InstVarsA_96, InstVarsB_97, &InstVars_98);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *ContainsInstVars_17 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstVars_98));
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *Inst_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (InstVarsA_96));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubInst_28));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_53;

              *Groundness_14 = (MR_Integer) 2;
              *ContainsAny_15 = (MR_Integer) 2;
              *ContainsInstNames_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              Var_53 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_user_scalar_common_1[0]);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ContainsInstVars_17 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_53));
              }
              *ContainsTypes_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *Inst_12 = Inst0_11;
              *STATE_VARIABLE_MaybeInstDefnsMap_39 = STATE_VARIABLE_MaybeInstDefnsMap_0_38;
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
check_hlds__inst_user__combine_contains_types_results_3_p_0(
  MR_Word ContainsTypesA_4,
  MR_Word ContainsTypesB_5,
  MR_Word * ContainsTypes_6)
{
  if ((ContainsTypesA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *ContainsTypes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word TypesA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ContainsTypesA_4, (MR_Integer) 0)));

    if ((ContainsTypesB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ContainsTypes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word TypesB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ContainsTypesB_5, (MR_Integer) 0)));
      MR_Word Types_9;

      mercury__set__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, TypesA_7, TypesB_8, &Types_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *ContainsTypes_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Types_9));
      }
    }
  }
}

static void MR_CALL 
check_hlds__inst_user__record_user_inst_results_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word MaybeInstPair_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word MaybeInstPairs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word InstDefnPair_5;
    MR_Word InstDefnPairs_6;
    MR_Word InstId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeInstPair_3, (MR_Integer) 0)));
    MR_Word MaybeUserInst_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeInstPair_3, (MR_Integer) 1)));
    MR_Word UserInstDefn_9;

    if ((MaybeUserInst_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_user", (MR_String) "predicate \140check_hlds.inst_user.record_user_inst_results\'/2", (MR_String) "MaybeUserInst = user_inst_being_processed");
        return;
      }
    }
    else
      UserInstDefn_9 = (MR_Word) MR_body(((MR_Word) MaybeUserInst_8), (MR_Integer) 1);
    {
      InstDefnPair_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InstDefnPair_5, 0) = ((MR_Box) (InstId_7));
      MR_hl_field(MR_mktag(0), InstDefnPair_5, 1) = ((MR_Box) (UserInstDefn_9));
    }
    check_hlds__inst_user__record_user_inst_results_2_p_0(MaybeInstPairs_4, &InstDefnPairs_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InstDefnPair_5));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (InstDefnPairs_6));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_user____Unify____maybe_inst_defns_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_user____Compare____maybe_inst_defns_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__inst_user____Unify____maybe_user_inst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__inst_user____Unify____maybe_user_inst_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_user____Compare____maybe_user_inst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__inst_user____Compare____maybe_user_inst_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__inst_user__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.inst_user.
