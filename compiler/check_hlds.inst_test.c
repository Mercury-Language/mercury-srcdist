/*
** Automatically generated from `inst_test.m'
** by the Mercury compiler,
** version rotd-2016-05-13
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


/* :- module check_hlds.inst_test. */
/* :- implementation. */

/*
INIT mercury__check_hlds__inst_test__init
ENDINIT
*/

#include "check_hlds.inst_test.mih"


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
#include "check_hlds.type_util.mih"
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




static const MR_FA_TypeInfo_Struct1 check_hlds__inst_test__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0;

static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0_10001(
  MR_Box check_hlds__inst_test__wrapper_arg_1,
  MR_Box check_hlds__inst_test__wrapper_arg_2);

static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0_10001(
  MR_Box * check_hlds__inst_test__wrapper_arg_1,
  MR_Box check_hlds__inst_test__wrapper_arg_2,
  MR_Box check_hlds__inst_test__wrapper_arg_3);

static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0(
  MR_Word * check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2,
  MR_Word check_hlds__inst_test__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2);

static void MR_CALL 
check_hlds__inst_test__inst_list_contains_inst_name_6_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2,
  MR_Word check_hlds__inst_test__HeadVar__3_3,
  MR_Word * check_hlds__inst_test__HeadVar__4_4,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_6);

static void MR_CALL 
check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2,
  MR_Word check_hlds__inst_test__HeadVar__3_3,
  MR_Word * check_hlds__inst_test__HeadVar__4_4,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_6);

static void MR_CALL 
check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(
  MR_Word check_hlds__inst_test__Inst_7,
  MR_Word check_hlds__inst_test__ModuleInfo_8,
  MR_Word check_hlds__inst_test__InstName_9,
  MR_Word * check_hlds__inst_test__Contains_10,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_35);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_fully_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_partly_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_mostly_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_2_5_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2,
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_5);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_3_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2,
  MR_Word check_hlds__inst_test__ModuleInfo_3);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_mt_2_5_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__MaybeType_2,
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_5);

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__MaybeType_2,
  MR_Word check_hlds__inst_test__ModuleInfo_3);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_2_5_p_0(
  MR_Word check_hlds__inst_test__InstResults_6,
  MR_Word check_hlds__inst_test__BoundInsts_7,
  MR_Word check_hlds__inst_test__ModuleInfo_8,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_16,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_17);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(
  MR_Word check_hlds__inst_test__InstResults_7,
  MR_Word check_hlds__inst_test__BoundInsts_8,
  MR_Word check_hlds__inst_test__MaybeType_9,
  MR_Word check_hlds__inst_test__ModuleInfo_10,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_18,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_19);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_5,
  MR_Word check_hlds__inst_test__Inst_6,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_30);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_5,
  MR_Word check_hlds__inst_test__Inst_6,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_27);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_5,
  MR_Word check_hlds__inst_test__Inst_6,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_29);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_5,
  MR_Word check_hlds__inst_test__Inst_6,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_28);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_5,
  MR_Word check_hlds__inst_test__Inst_6,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_24);

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_6,
  MR_Word check_hlds__inst_test__MaybeType_7,
  MR_Word check_hlds__inst_test__Inst_8,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_26);

static void MR_CALL 
check_hlds__inst_test__record_inst_is_ground_2_p_0(
  MR_Word check_hlds__inst_test__Inst_1,
  MR_Word check_hlds__inst_test__IsGround_2);

static void MR_CALL 
check_hlds__inst_test__lookup_inst_is_ground_3_p_0(
  MR_Word check_hlds__inst_test__Inst_1,
  MR_Word * check_hlds__inst_test__Found_2,
  MR_Word * check_hlds__inst_test__IsGround_3);


static /* final */ const MR_Box check_hlds__inst_test_scalar_common_1[2][2];




static /* final */ const MR_Box check_hlds__inst_test_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "check_hlds.inst_test.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__inst_test__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__inst_test__check_hlds__inst_test__type_ctor_info_inst_names_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__inst_test____Unify____inst_names_0_0_10001)),
  ((MR_Box) (check_hlds__inst_test____Compare____inst_names_0_0_10001)),
  (MR_String) "check_hlds.inst_test",
  (MR_String) "inst_names",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__inst_test__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_inst_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0_10001(
  MR_Box check_hlds__inst_test__wrapper_arg_1,
  MR_Box check_hlds__inst_test__wrapper_arg_2)
{
  {
    MR_bool check_hlds__inst_test__succeeded;

    {
      check_hlds__inst_test__succeeded = check_hlds__inst_test____Unify____inst_names_0_0(((MR_Word) check_hlds__inst_test__wrapper_arg_1), ((MR_Word) check_hlds__inst_test__wrapper_arg_2));
    }
    return check_hlds__inst_test__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0_10001(
  MR_Box * check_hlds__inst_test__wrapper_arg_1,
  MR_Box check_hlds__inst_test__wrapper_arg_2,
  MR_Box check_hlds__inst_test__wrapper_arg_3)
{
  {
    MR_Word check_hlds__inst_test__conv0_HeadVar__1_1;

    {
      check_hlds__inst_test____Compare____inst_names_0_0(&check_hlds__inst_test__conv0_HeadVar__1_1, ((MR_Word) check_hlds__inst_test__wrapper_arg_2), ((MR_Word) check_hlds__inst_test__wrapper_arg_3));
    }
    *check_hlds__inst_test__wrapper_arg_1 = ((MR_Box) (check_hlds__inst_test__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__inst_test____Compare____inst_names_0_0(
  MR_Word * check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2,
  MR_Word check_hlds__inst_test__HeadVar__3_3)
{
  {
    MR_bool check_hlds__inst_test__succeeded;
    MR_Word check_hlds__inst_test__Cast_HeadVar1_4 = check_hlds__inst_test__HeadVar__2_2;
    MR_Word check_hlds__inst_test__Cast_HeadVar2_5 = check_hlds__inst_test__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__inst_test_scalar_common_1[1], check_hlds__inst_test__HeadVar__1_1, ((MR_Box) (check_hlds__inst_test__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__inst_test__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test____Unify____inst_names_0_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2)
{
  {
    MR_bool check_hlds__inst_test__succeeded;
    MR_Word check_hlds__inst_test__Cast_HeadVar1_3 = check_hlds__inst_test__HeadVar__1_1;
    MR_Word check_hlds__inst_test__Cast_HeadVar2_4 = check_hlds__inst_test__HeadVar__2_2;

    {
      check_hlds__inst_test__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__inst_test_scalar_common_1[1], ((MR_Box) (check_hlds__inst_test__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__inst_test__Cast_HeadVar2_4)));
    }
    return check_hlds__inst_test__succeeded;
  }
}

static void MR_CALL 
check_hlds__inst_test__inst_list_contains_inst_name_6_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2,
  MR_Word check_hlds__inst_test__HeadVar__3_3,
  MR_Word * check_hlds__inst_test__HeadVar__4_4,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__HeadVar__4_4 = (MR_Integer) 0;
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_6 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5;
          }
        else
          {
            MR_Word check_hlds__inst_test__Inst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Contains1_18;
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_21_21;

            {
              check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(check_hlds__inst_test__Inst_12, check_hlds__inst_test__HeadVar__2_2, check_hlds__inst_test__HeadVar__3_3, &check_hlds__inst_test__Contains1_18, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5, &check_hlds__inst_test__STATE_VARIABLE_Expansions_21_21);
            }
            switch (check_hlds__inst_test__Contains1_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_13;
                    MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_5 = check_hlds__inst_test__STATE_VARIABLE_Expansions_21_21;

                    check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_5;
                    check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_test__HeadVar__4_4 = (MR_Integer) 1;
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_6 = check_hlds__inst_test__STATE_VARIABLE_Expansions_21_21;
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2,
  MR_Word check_hlds__inst_test__HeadVar__3_3,
  MR_Word * check_hlds__inst_test__HeadVar__4_4,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__HeadVar__4_4 = (MR_Integer) 0;
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_6 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5;
          }
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__ArgInsts_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_12, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Contains1_20;
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_23_23;
            MR_Word check_hlds__inst_test___Functor_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_12, (MR_Integer) 0)));

            {
              check_hlds__inst_test__inst_list_contains_inst_name_6_p_0(check_hlds__inst_test__ArgInsts_19, check_hlds__inst_test__HeadVar__2_2, check_hlds__inst_test__HeadVar__3_3, &check_hlds__inst_test__Contains1_20, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5, &check_hlds__inst_test__STATE_VARIABLE_Expansions_23_23);
            }
            switch (check_hlds__inst_test__Contains1_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_13;
                    MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_5 = check_hlds__inst_test__STATE_VARIABLE_Expansions_23_23;

                    check_hlds__inst_test__STATE_VARIABLE_Expansions_0_5 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_5;
                    check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_test__HeadVar__4_4 = (MR_Integer) 1;
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_6 = check_hlds__inst_test__STATE_VARIABLE_Expansions_23_23;
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(
  MR_Word check_hlds__inst_test__Inst_7,
  MR_Word check_hlds__inst_test__ModuleInfo_8,
  MR_Word check_hlds__inst_test__InstName_9,
  MR_Word * check_hlds__inst_test__Contains_10,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_35)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *check_hlds__inst_test__Contains_10 = (MR_Integer) 0;
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              *check_hlds__inst_test__Contains_10 = (MR_Integer) 0;
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_test__InstResults_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__ArgInsts_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 3)));
                  MR_Word check_hlds__inst_test___Uniq_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__inst_test__InstResults_25)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      switch (MR_unmkbody(check_hlds__inst_test__InstResults_25)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(check_hlds__inst_test__ArgInsts_26, check_hlds__inst_test__ModuleInfo_8, check_hlds__inst_test__InstName_9, check_hlds__inst_test__Contains_10, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34, check_hlds__inst_test__STATE_VARIABLE_Expansions_35);
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            *check_hlds__inst_test__Contains_10 = (MR_Integer) 0;
                            *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__inst_test__InstNamesResult_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_25, (MR_Integer) 2)));
                        MR_Word check_hlds__inst_test__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_25, (MR_Integer) 0)));
                        MR_Word check_hlds__inst_test__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_25, (MR_Integer) 1)));
                        MR_Word check_hlds__inst_test__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_25, (MR_Integer) 3)));
                        MR_Word check_hlds__inst_test__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_25, (MR_Integer) 4)));
                        MR_Word check_hlds__inst_test__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_25, (MR_Integer) 5)));

                        if ((check_hlds__inst_test__InstNamesResult_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(check_hlds__inst_test__ArgInsts_26, check_hlds__inst_test__ModuleInfo_8, check_hlds__inst_test__InstName_9, check_hlds__inst_test__Contains_10, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34, check_hlds__inst_test__STATE_VARIABLE_Expansions_35);
                          }
                        else
                          {
                            MR_Word check_hlds__inst_test__InstNameSet_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstNamesResult_29, (MR_Integer) 0)));

                            {
                              check_hlds__inst_test__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, check_hlds__inst_test__InstNameSet_33, ((MR_Box) (check_hlds__inst_test__InstName_9)));
                            }
                            if (check_hlds__inst_test__succeeded)
                              {
                                check_hlds__inst_test__bound_inst_list_contains_inst_name_6_p_0(check_hlds__inst_test__ArgInsts_26, check_hlds__inst_test__ModuleInfo_8, check_hlds__inst_test__InstName_9, check_hlds__inst_test__Contains_10, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34, check_hlds__inst_test__STATE_VARIABLE_Expansions_35);
                              }
                            else
                              {
                                *check_hlds__inst_test__Contains_10 = (MR_Integer) 0;
                                *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
                              }
                          }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 5:
                {
                  *check_hlds__inst_test__Contains_10 = (MR_Integer) 0;
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_test__SubInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_7 = check_hlds__inst_test__SubInst_21;

                    check_hlds__inst_test__Inst_7 = check_hlds__inst_test__Inst__tmp_copy_7;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_test__ThisInstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_7, (MR_Integer) 1)));

                  {
                    check_hlds__inst_test__succeeded = parse_tree__prog_data____Unify____inst_name_0_0(check_hlds__inst_test__InstName_9, check_hlds__inst_test__ThisInstName_22);
                  }
                  if (check_hlds__inst_test__succeeded)
                    {
                      *check_hlds__inst_test__Contains_10 = (MR_Integer) 1;
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
                    }
                  else
                    {
                      MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_39_39;

                      {
                        check_hlds__inst_test__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_test__ThisInstName_22)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34, &check_hlds__inst_test__STATE_VARIABLE_Expansions_39_39);
                      }
                      if (check_hlds__inst_test__succeeded)
                        {
                          MR_Word check_hlds__inst_test__ThisInst_23;
                          MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_40_40;

                          {
                            check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_8, check_hlds__inst_test__ThisInstName_22, &check_hlds__inst_test__ThisInst_23);
                          }
                          {
                            mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__inst_test__ThisInstName_22)), check_hlds__inst_test__STATE_VARIABLE_Expansions_39_39, &check_hlds__inst_test__STATE_VARIABLE_Expansions_40_40);
                          }
                          /* direct tailcall eliminated */
                          {
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_7 = check_hlds__inst_test__ThisInst_23;
                            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_34 = check_hlds__inst_test__STATE_VARIABLE_Expansions_40_40;

                            check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_34;
                            check_hlds__inst_test__Inst_7 = check_hlds__inst_test__Inst__tmp_copy_7;
                          }
                          continue;
                        }
                      else
                        {
                          *check_hlds__inst_test__Contains_10 = (MR_Integer) 0;
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_35 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_34;
                        }
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

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_fully_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
            check_hlds__inst_test__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_test__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_9, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_10;
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_partly_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
            check_hlds__inst_test__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_test__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_9, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_10;
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_mostly_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
            check_hlds__inst_test__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_test__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_9, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_10;
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
            check_hlds__inst_test__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_test__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_9, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_10;
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
            check_hlds__inst_test__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_test__Inst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_9, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_10;
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_15;

                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_2_5_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2,
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            if ((check_hlds__inst_test__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_5 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4;
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_mt_2\'/5", (MR_String) "length mismatch");
                }
              }
            check_hlds__inst_test__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_test__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));

            if ((check_hlds__inst_test__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_list_is_ground_mt_2\'/5", (MR_String) "length mismatch");
                }
                check_hlds__inst_test__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word check_hlds__inst_test__MaybeType_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word check_hlds__inst_test__MaybeTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_36_36;
                MR_Word check_hlds__inst_test__V_46_46;
                MR_Word check_hlds__inst_test__V_47_47;

                check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__V_39_39)) == (MR_mktag((MR_Integer) 2)));
                if (check_hlds__inst_test__succeeded)
                  {
                    check_hlds__inst_test__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__V_39_39, (MR_Integer) 0)));
                    check_hlds__inst_test__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__V_39_39, (MR_Integer) 1)));
                    {
                      check_hlds__inst_test__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4, ((MR_Box) (check_hlds__inst_test__V_39_39)));
                    }
                    if (check_hlds__inst_test__succeeded)
                      {
                        check_hlds__inst_test__STATE_VARIABLE_Expansions_36_36 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4;
                        check_hlds__inst_test__succeeded = MR_TRUE;
                      }
                    else
                      {
                        check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__MaybeType_30, check_hlds__inst_test__V_39_39, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_test__STATE_VARIABLE_Expansions_36_36);
                      }
                  }
                else
                  {
                    MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_49;

                    {
                      check_hlds__inst_test__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__V_39_39)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_49);
                    }
                    if (check_hlds__inst_test__succeeded)
                      {
                        check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__MaybeType_30, check_hlds__inst_test__V_39_39, check_hlds__inst_test__STATE_VARIABLE_Expansions_15_49, &check_hlds__inst_test__STATE_VARIABLE_Expansions_36_36);
                      }
                    else
                      {
                        check_hlds__inst_test__STATE_VARIABLE_Expansions_36_36 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4;
                        check_hlds__inst_test__succeeded = MR_TRUE;
                      }
                  }
                if (check_hlds__inst_test__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__V_38_38;
                      MR_Word check_hlds__inst_test__HeadVar__2__tmp_copy_2 = check_hlds__inst_test__MaybeTypes_31;
                      MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_36_36;

                      check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_4;
                      check_hlds__inst_test__HeadVar__2_2 = check_hlds__inst_test__HeadVar__2__tmp_copy_2;
                      check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_mt_3_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2,
  MR_Word check_hlds__inst_test__ModuleInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = (check_hlds__inst_test__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        else
          {
            MR_Word check_hlds__inst_test__TypeCtorInfo_9_15;
            MR_Word check_hlds__inst_test__Inst_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__MaybeType_7;
            MR_Word check_hlds__inst_test__MaybeTypes_8;
            MR_Word check_hlds__inst_test__Expansions0_13;
            MR_Word check_hlds__inst_test__V_22_22;
            MR_Word check_hlds__inst_test__V_23_23;

            check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_test__succeeded)
              {
                check_hlds__inst_test__MaybeType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__inst_test__MaybeTypes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 1)));
                check_hlds__inst_test__TypeCtorInfo_9_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
                {
                  check_hlds__inst_test__Expansions0_13 = mercury__set_tree234__init_0_f_0(check_hlds__inst_test__TypeCtorInfo_9_15);
                }
                check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__Inst_5)) == (MR_mktag((MR_Integer) 2)));
                if (check_hlds__inst_test__succeeded)
                  {
                    check_hlds__inst_test__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_5, (MR_Integer) 0)));
                    check_hlds__inst_test__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_5, (MR_Integer) 1)));
                    {
                      check_hlds__inst_test__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__Expansions0_13, ((MR_Box) (check_hlds__inst_test__Inst_5)));
                    }
                    if (check_hlds__inst_test__succeeded)
                      check_hlds__inst_test__succeeded = MR_TRUE;
                    else
                      {
                        MR_Word check_hlds__inst_test___Expansions_29;

                        {
                          check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__MaybeType_7, check_hlds__inst_test__Inst_5, check_hlds__inst_test__Expansions0_13, &check_hlds__inst_test___Expansions_29);
                        }
                      }
                  }
                else
                  {
                    MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_25;

                    {
                      check_hlds__inst_test__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_5)), check_hlds__inst_test__Expansions0_13, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_25);
                    }
                    if (check_hlds__inst_test__succeeded)
                      {
                        MR_Word check_hlds__inst_test___Expansions_30;

                        {
                          check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__MaybeType_7, check_hlds__inst_test__Inst_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_15_25, &check_hlds__inst_test___Expansions_30);
                        }
                      }
                    else
                      check_hlds__inst_test__succeeded = MR_TRUE;
                  }
                if (check_hlds__inst_test__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_6;
                      MR_Word check_hlds__inst_test__HeadVar__2__tmp_copy_2 = check_hlds__inst_test__MaybeTypes_8;

                      check_hlds__inst_test__HeadVar__2_2 = check_hlds__inst_test__HeadVar__2__tmp_copy_2;
                      check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
            check_hlds__inst_test__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;
            MR_Word check_hlds__inst_test___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 0)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_not_fully_unique_2_4_p_0(check_hlds__inst_test__Args_14, check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_10;
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;

                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
            check_hlds__inst_test__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;
            MR_Word check_hlds__inst_test___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 0)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_not_partly_unique_2_4_p_0(check_hlds__inst_test__Args_14, check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_10;
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;

                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
            check_hlds__inst_test__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;
            MR_Word check_hlds__inst_test___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 0)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_mostly_unique_2_4_p_0(check_hlds__inst_test__Args_14, check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_10;
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;

                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
            check_hlds__inst_test__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;
            MR_Word check_hlds__inst_test___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 0)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_unique_2_4_p_0(check_hlds__inst_test__Args_14, check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_10;
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;

                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_4_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3;
            check_hlds__inst_test__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;
            MR_Word check_hlds__inst_test___Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_9, (MR_Integer) 0)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_2_4_p_0(check_hlds__inst_test__Args_14, check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3, &check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_10;
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_17_17;

                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_3 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_3;
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 0)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_ground_or_any_2_p_0(check_hlds__inst_test__Args_8, check_hlds__inst_test__ModuleInfo_2);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_mt_2_5_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__MaybeType_2,
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__inst_test__STATE_VARIABLE_Expansions_5 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4;
            check_hlds__inst_test__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_11, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_11, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__MaybeTypes_18;
            MR_Integer check_hlds__inst_test__V_21_21;
            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_22_22;

            {
              check_hlds__inst_test__V_21_21 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__Args_17);
            }
            {
              check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__MaybeType_2, check_hlds__inst_test__Name_16, check_hlds__inst_test__V_21_21, &check_hlds__inst_test__MaybeTypes_18);
            }
            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_ground_mt_2_5_p_0(check_hlds__inst_test__Args_17, check_hlds__inst_test__MaybeTypes_18, check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4, &check_hlds__inst_test__STATE_VARIABLE_Expansions_22_22);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_12;
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_22_22;

                  check_hlds__inst_test__STATE_VARIABLE_Expansions_0_4 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_4;
                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__MaybeType_2,
  MR_Word check_hlds__inst_test__ModuleInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_6, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_6, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__MaybeTypes_12;
            MR_Integer check_hlds__inst_test__V_13_13;

            {
              check_hlds__inst_test__V_13_13 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__Args_11);
            }
            {
              check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__MaybeType_2, check_hlds__inst_test__Name_10, check_hlds__inst_test__V_13_13, &check_hlds__inst_test__MaybeTypes_12);
            }
            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_ground_mt_3_p_0(check_hlds__inst_test__Args_11, check_hlds__inst_test__MaybeTypes_12, check_hlds__inst_test__ModuleInfo_3);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_7;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_2_5_p_0(
  MR_Word check_hlds__inst_test__InstResults_6,
  MR_Word check_hlds__inst_test__BoundInsts_7,
  MR_Word check_hlds__inst_test__ModuleInfo_8,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_16,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_17)
{
  {
    MR_bool check_hlds__inst_test__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResults_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_test__InstResults_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_4_p_0(check_hlds__inst_test__BoundInsts_7, check_hlds__inst_test__ModuleInfo_8, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_16, check_hlds__inst_test__STATE_VARIABLE_Expansions_17);
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_17 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_16;
              check_hlds__inst_test__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_test__GroundnessResult_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_6, (MR_Integer) 0)));
          MR_Word check_hlds__inst_test__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_6, (MR_Integer) 1)));
          MR_Word check_hlds__inst_test__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_6, (MR_Integer) 2)));
          MR_Word check_hlds__inst_test__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_6, (MR_Integer) 3)));
          MR_Word check_hlds__inst_test__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_6, (MR_Integer) 4)));
          MR_Word check_hlds__inst_test__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_6, (MR_Integer) 5)));

          switch (check_hlds__inst_test__GroundnessResult_10) {
            default:
              check_hlds__inst_test__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_4_p_0(check_hlds__inst_test__BoundInsts_7, check_hlds__inst_test__ModuleInfo_8, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_16, check_hlds__inst_test__STATE_VARIABLE_Expansions_17);
              }
              break;
            case (MR_Integer) 1:
              {
                *check_hlds__inst_test__STATE_VARIABLE_Expansions_17 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_16;
                check_hlds__inst_test__succeeded = MR_TRUE;
              }
              break;
          }
        }
        break;
    }
    return check_hlds__inst_test__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(
  MR_Word check_hlds__inst_test__InstResults_7,
  MR_Word check_hlds__inst_test__BoundInsts_8,
  MR_Word check_hlds__inst_test__MaybeType_9,
  MR_Word check_hlds__inst_test__ModuleInfo_10,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_18,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_19)
{
  {
    MR_bool check_hlds__inst_test__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResults_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_test__InstResults_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_2_5_p_0(check_hlds__inst_test__BoundInsts_8, check_hlds__inst_test__MaybeType_9, check_hlds__inst_test__ModuleInfo_10, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_18, check_hlds__inst_test__STATE_VARIABLE_Expansions_19);
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_19 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_18;
              check_hlds__inst_test__succeeded = MR_TRUE;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_test__GroundnessResult_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_7, (MR_Integer) 0)));
          MR_Word check_hlds__inst_test__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_7, (MR_Integer) 1)));
          MR_Word check_hlds__inst_test__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_7, (MR_Integer) 2)));
          MR_Word check_hlds__inst_test__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_7, (MR_Integer) 3)));
          MR_Word check_hlds__inst_test__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_7, (MR_Integer) 4)));
          MR_Word check_hlds__inst_test__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_7, (MR_Integer) 5)));

          switch (check_hlds__inst_test__GroundnessResult_12) {
            default:
              check_hlds__inst_test__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_2_5_p_0(check_hlds__inst_test__BoundInsts_8, check_hlds__inst_test__MaybeType_9, check_hlds__inst_test__ModuleInfo_10, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_18, check_hlds__inst_test__STATE_VARIABLE_Expansions_19);
              }
              break;
            case (MR_Integer) 1:
              {
                *check_hlds__inst_test__STATE_VARIABLE_Expansions_19 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_18;
                check_hlds__inst_test__succeeded = MR_TRUE;
              }
              break;
          }
        }
        break;
    }
    return check_hlds__inst_test__succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_5,
  MR_Word check_hlds__inst_test__Inst_6,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_30)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_6)) {
          default:
            check_hlds__inst_test__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__inst_test__Inst_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
              check_hlds__inst_test__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__inst_test__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 0)));
              MR_Word check_hlds__inst_test__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

              switch (check_hlds__inst_test__V_44_44) {
                default:
                  check_hlds__inst_test__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
                    check_hlds__inst_test__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
                    check_hlds__inst_test__succeeded = MR_TRUE;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 0)))) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_test__Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__InstResult_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 3)));

                  switch (check_hlds__inst_test__Uniq_13) {
                    default:
                      check_hlds__inst_test__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      check_hlds__inst_test__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 0:
                      check_hlds__inst_test__succeeded = MR_TRUE;
                      break;
                  }
                  if (check_hlds__inst_test__succeeded)
                    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResult_14)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(check_hlds__inst_test__InstResult_14)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_4_p_0(check_hlds__inst_test__BoundInsts_15, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29, check_hlds__inst_test__STATE_VARIABLE_Expansions_30);
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
                              check_hlds__inst_test__succeeded = MR_TRUE;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_4_p_0(check_hlds__inst_test__BoundInsts_15, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29, check_hlds__inst_test__STATE_VARIABLE_Expansions_30);
                        }
                        break;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__inst_test__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));

                  switch (check_hlds__inst_test__V_46_46) {
                    default:
                      check_hlds__inst_test__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      {
                        *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
                        check_hlds__inst_test__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
                        check_hlds__inst_test__succeeded = MR_TRUE;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_not_fully_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
                  }
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_test__SubInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__SubInst_24;

                    check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_test__InstName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_31_31;

                  {
                    check_hlds__inst_test__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_6)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29, &check_hlds__inst_test__STATE_VARIABLE_Expansions_31_31);
                  }
                  if (check_hlds__inst_test__succeeded)
                    {
                      MR_Word check_hlds__inst_test__NextInst_26;

                      {
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__InstName_25, &check_hlds__inst_test__NextInst_26);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__NextInst_26;
                        MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_31_31;

                        check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_29;
                        check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
                      }
                      continue;
                    }
                  else
                    {
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_30 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_29;
                      check_hlds__inst_test__succeeded = MR_TRUE;
                    }
                }
                break;
            }
            break;
        }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_5,
  MR_Word check_hlds__inst_test__Inst_6,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_27)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_6)) {
          default:
            check_hlds__inst_test__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__inst_test__Inst_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
              check_hlds__inst_test__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__inst_test__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 0)));
              MR_Word check_hlds__inst_test__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

              check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_37_37 == (MR_Integer) 0);
              if (check_hlds__inst_test__succeeded)
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 0)))) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_test__InstResult_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__BoundInsts_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 3)));
                  MR_Word check_hlds__inst_test__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

                  check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_34_34 == (MR_Integer) 0);
                  if (check_hlds__inst_test__succeeded)
                    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResult_11)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(check_hlds__inst_test__InstResult_11)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_4_p_0(check_hlds__inst_test__BoundInsts_12, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26, check_hlds__inst_test__STATE_VARIABLE_Expansions_27);
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
                              check_hlds__inst_test__succeeded = MR_TRUE;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_4_p_0(check_hlds__inst_test__BoundInsts_12, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26, check_hlds__inst_test__STATE_VARIABLE_Expansions_27);
                        }
                        break;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__inst_test__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));

                  check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_36_36 == (MR_Integer) 0);
                  if (check_hlds__inst_test__succeeded)
                    {
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
                      check_hlds__inst_test__succeeded = MR_TRUE;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_not_partly_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
                  }
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_test__SubInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__SubInst_21;

                    check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_test__InstName_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_28_28;

                  {
                    check_hlds__inst_test__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_6)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26, &check_hlds__inst_test__STATE_VARIABLE_Expansions_28_28);
                  }
                  if (check_hlds__inst_test__succeeded)
                    {
                      MR_Word check_hlds__inst_test__NextInst_23;

                      {
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__InstName_22, &check_hlds__inst_test__NextInst_23);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__NextInst_23;
                        MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_28_28;

                        check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_26;
                        check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
                      }
                      continue;
                    }
                  else
                    {
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_26;
                      check_hlds__inst_test__succeeded = MR_TRUE;
                    }
                }
                break;
            }
            break;
        }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_5,
  MR_Word check_hlds__inst_test__Inst_6,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_29)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_6)) {
          default:
            check_hlds__inst_test__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__inst_test__Inst_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
              check_hlds__inst_test__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__inst_test__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 0)));
              MR_Word check_hlds__inst_test__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

              switch (check_hlds__inst_test__V_44_44) {
                default:
                  check_hlds__inst_test__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 2:
                  {
                    *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
                    check_hlds__inst_test__succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
                    check_hlds__inst_test__succeeded = MR_TRUE;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 0)))) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_test__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 3)));
                  MR_Word check_hlds__inst_test__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

                  check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_36_36 == (MR_Integer) 1);
                  if (check_hlds__inst_test__succeeded)
                    {
                      if ((((check_hlds__inst_test__InstResults_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_test__InstResults_13)) == (MR_mktag((MR_Integer) 1))))))
                        {
                          check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_4_p_0(check_hlds__inst_test__BoundInsts_14, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28, check_hlds__inst_test__STATE_VARIABLE_Expansions_29);
                        }
                      else
                        check_hlds__inst_test__succeeded = MR_FALSE;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__inst_test__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));

                  switch (check_hlds__inst_test__V_46_46) {
                    default:
                      check_hlds__inst_test__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 2:
                      {
                        *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
                        check_hlds__inst_test__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
                        check_hlds__inst_test__succeeded = MR_TRUE;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_mostly_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
                  }
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_test__SubInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__SubInst_23;

                    check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_test__InstName_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_30_30;

                  {
                    check_hlds__inst_test__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_6)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28, &check_hlds__inst_test__STATE_VARIABLE_Expansions_30_30);
                  }
                  if (check_hlds__inst_test__succeeded)
                    {
                      MR_Word check_hlds__inst_test__NextInst_25;

                      {
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__InstName_24, &check_hlds__inst_test__NextInst_25);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__NextInst_25;
                        MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_30_30;

                        check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_28;
                        check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
                      }
                      continue;
                    }
                  else
                    {
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_29 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_28;
                      check_hlds__inst_test__succeeded = MR_TRUE;
                    }
                }
                break;
            }
            break;
        }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_unique_2_4_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_5,
  MR_Word check_hlds__inst_test__Inst_6,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_28)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_6)) {
          default:
            check_hlds__inst_test__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__inst_test__Inst_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__inst_test__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 0)));
              MR_Word check_hlds__inst_test__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

              check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_44_44 == (MR_Integer) 1);
              if (check_hlds__inst_test__succeeded)
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 0)))) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_test__InstResults_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 3)));
                  MR_Word check_hlds__inst_test__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

                  check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_47_47 == (MR_Integer) 1);
                  if (check_hlds__inst_test__succeeded)
                    {
                      if ((((check_hlds__inst_test__InstResults_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) check_hlds__inst_test__InstResults_14)) == (MR_mktag((MR_Integer) 1))))))
                        {
                          check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_unique_2_4_p_0(check_hlds__inst_test__BoundInsts_15, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27, check_hlds__inst_test__STATE_VARIABLE_Expansions_28);
                        }
                      else
                        check_hlds__inst_test__succeeded = MR_FALSE;
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__inst_test__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));

                  check_hlds__inst_test__succeeded = (check_hlds__inst_test__V_49_49 == (MR_Integer) 1);
                  if (check_hlds__inst_test__succeeded)
                    {
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27;
                      check_hlds__inst_test__succeeded = MR_TRUE;
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_unique_2\'/4", (MR_String) "uninstantiated inst parameter");
                  }
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_test__SubInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__SubInst_24;

                    check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_test__InstName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_29_29;

                  {
                    check_hlds__inst_test__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_6)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27, &check_hlds__inst_test__STATE_VARIABLE_Expansions_29_29);
                  }
                  if (check_hlds__inst_test__succeeded)
                    {
                      MR_Word check_hlds__inst_test__NextInst_26;

                      {
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__InstName_25, &check_hlds__inst_test__NextInst_26);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__NextInst_26;
                        MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_29_29;

                        check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_27;
                        check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
                      }
                      continue;
                    }
                  else
                    {
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_28 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_27;
                      check_hlds__inst_test__succeeded = MR_TRUE;
                    }
                }
                break;
            }
            break;
        }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_5,
  MR_Word check_hlds__inst_test__Inst_6,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_24)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_6)) {
          default:
            check_hlds__inst_test__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__inst_test__Inst_6)) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_24 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            {
              *check_hlds__inst_test__STATE_VARIABLE_Expansions_24 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23;
              check_hlds__inst_test__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 0)))) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_test__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 3)));
                  MR_Word check_hlds__inst_test__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

                  {
                    check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_2_5_p_0(check_hlds__inst_test__InstResults_13, check_hlds__inst_test__BoundInsts_14, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23, check_hlds__inst_test__STATE_VARIABLE_Expansions_24);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_24 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_ground_or_any_2\'/4", (MR_String) "uninstantiated inst parameter");
                  }
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_test__SubInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__SubInst_20;

                    check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_test__InstName_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_6, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_25_25;

                  {
                    check_hlds__inst_test__succeeded = mercury__set__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_6)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23, &check_hlds__inst_test__STATE_VARIABLE_Expansions_25_25);
                  }
                  if (check_hlds__inst_test__succeeded)
                    {
                      MR_Word check_hlds__inst_test__NextInst_22;

                      {
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__InstName_21, &check_hlds__inst_test__NextInst_22);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__inst_test__Inst__tmp_copy_6 = check_hlds__inst_test__NextInst_22;
                        MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_23 = check_hlds__inst_test__STATE_VARIABLE_Expansions_25_25;

                        check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_23;
                        check_hlds__inst_test__Inst_6 = check_hlds__inst_test__Inst__tmp_copy_6;
                      }
                      continue;
                    }
                  else
                    {
                      *check_hlds__inst_test__STATE_VARIABLE_Expansions_24 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_23;
                      check_hlds__inst_test__succeeded = MR_TRUE;
                    }
                }
                break;
            }
            break;
        }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_6,
  MR_Word check_hlds__inst_test__MaybeType_7,
  MR_Word check_hlds__inst_test__Inst_8,
  MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25,
  MR_Word * check_hlds__inst_test__STATE_VARIABLE_Expansions_26)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_8)) {
          default:
            check_hlds__inst_test__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__inst_test__Inst_8)) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__inst_test__Uniq_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_8, (MR_Integer) 0)));
              MR_Word check_hlds__inst_test__HOInstInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_8, (MR_Integer) 1)));
              MR_Word check_hlds__inst_test__NextInst_34;
              MR_Word check_hlds__inst_test__V_41_41;
              MR_Word check_hlds__inst_test__V_42_42;

              {
                check_hlds__inst_test__succeeded = check_hlds__inst_test__maybe_any_to_bound_5_p_0(check_hlds__inst_test__MaybeType_7, check_hlds__inst_test__ModuleInfo_6, check_hlds__inst_test__Uniq_20, check_hlds__inst_test__HOInstInfo_21, &check_hlds__inst_test__NextInst_34);
              }
              if (check_hlds__inst_test__succeeded)
                {
                  check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__NextInst_34)) == (MR_mktag((MR_Integer) 2)));
                  if (check_hlds__inst_test__succeeded)
                    {
                      check_hlds__inst_test__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__NextInst_34, (MR_Integer) 0)));
                      check_hlds__inst_test__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__NextInst_34, (MR_Integer) 1)));
                      {
                        check_hlds__inst_test__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, ((MR_Box) (check_hlds__inst_test__NextInst_34)));
                      }
                      if (check_hlds__inst_test__succeeded)
                        {
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
                          check_hlds__inst_test__succeeded = MR_TRUE;
                        }
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_8 = check_hlds__inst_test__NextInst_34;

                            check_hlds__inst_test__Inst_8 = check_hlds__inst_test__Inst__tmp_copy_8;
                          }
                          continue;
                        }
                    }
                  else
                    {
                      MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_44;

                      {
                        check_hlds__inst_test__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__NextInst_34)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_44);
                      }
                      if (check_hlds__inst_test__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_8 = check_hlds__inst_test__NextInst_34;
                            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_25 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_44;

                            check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_25;
                            check_hlds__inst_test__Inst_8 = check_hlds__inst_test__Inst__tmp_copy_8;
                          }
                          continue;
                        }
                      else
                        {
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
                          check_hlds__inst_test__succeeded = MR_TRUE;
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 0)))) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_test__InstResults_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 3)));
                  MR_Word check_hlds__inst_test__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 1)));

                  {
                    check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_2_6_p_0(check_hlds__inst_test__InstResults_14, check_hlds__inst_test__BoundInsts_15, check_hlds__inst_test__MaybeType_7, check_hlds__inst_test__ModuleInfo_6, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, check_hlds__inst_test__STATE_VARIABLE_Expansions_26);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_ground_mt_2\'/5", (MR_String) "uninstantiated inst parameter");
                  }
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_test__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__V_54_54;
                  MR_Word check_hlds__inst_test__V_55_55;

                  check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__SubInst_17)) == (MR_mktag((MR_Integer) 2)));
                  if (check_hlds__inst_test__succeeded)
                    {
                      check_hlds__inst_test__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__SubInst_17, (MR_Integer) 0)));
                      check_hlds__inst_test__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__SubInst_17, (MR_Integer) 1)));
                      {
                        check_hlds__inst_test__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, ((MR_Box) (check_hlds__inst_test__SubInst_17)));
                      }
                      if (check_hlds__inst_test__succeeded)
                        {
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
                          check_hlds__inst_test__succeeded = MR_TRUE;
                        }
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_8 = check_hlds__inst_test__SubInst_17;

                            check_hlds__inst_test__Inst_8 = check_hlds__inst_test__Inst__tmp_copy_8;
                          }
                          continue;
                        }
                    }
                  else
                    {
                      MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_57;

                      {
                        check_hlds__inst_test__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__SubInst_17)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_57);
                      }
                      if (check_hlds__inst_test__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_8 = check_hlds__inst_test__SubInst_17;
                            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_25 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_57;

                            check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_25;
                            check_hlds__inst_test__Inst_8 = check_hlds__inst_test__Inst__tmp_copy_8;
                          }
                          continue;
                        }
                      else
                        {
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
                          check_hlds__inst_test__succeeded = MR_TRUE;
                        }
                    }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_test__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_8, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__NextInst_19;
                  MR_Word check_hlds__inst_test__V_67_67;
                  MR_Word check_hlds__inst_test__V_68_68;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_6, check_hlds__inst_test__InstName_18, &check_hlds__inst_test__NextInst_19);
                  }
                  check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__NextInst_19)) == (MR_mktag((MR_Integer) 2)));
                  if (check_hlds__inst_test__succeeded)
                    {
                      check_hlds__inst_test__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__NextInst_19, (MR_Integer) 0)));
                      check_hlds__inst_test__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__NextInst_19, (MR_Integer) 1)));
                      {
                        check_hlds__inst_test__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, ((MR_Box) (check_hlds__inst_test__NextInst_19)));
                      }
                      if (check_hlds__inst_test__succeeded)
                        {
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
                          check_hlds__inst_test__succeeded = MR_TRUE;
                        }
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_8 = check_hlds__inst_test__NextInst_19;

                            check_hlds__inst_test__Inst_8 = check_hlds__inst_test__Inst__tmp_copy_8;
                          }
                          continue;
                        }
                    }
                  else
                    {
                      MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_70;

                      {
                        check_hlds__inst_test__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__NextInst_19)), check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_70);
                      }
                      if (check_hlds__inst_test__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word check_hlds__inst_test__Inst__tmp_copy_8 = check_hlds__inst_test__NextInst_19;
                            MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_25 = check_hlds__inst_test__STATE_VARIABLE_Expansions_15_70;

                            check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0__tmp_copy_25;
                            check_hlds__inst_test__Inst_8 = check_hlds__inst_test__Inst__tmp_copy_8;
                          }
                          continue;
                        }
                      else
                        {
                          *check_hlds__inst_test__STATE_VARIABLE_Expansions_26 = check_hlds__inst_test__STATE_VARIABLE_Expansions_0_25;
                          check_hlds__inst_test__succeeded = MR_TRUE;
                        }
                    }
                }
                break;
            }
            break;
        }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

static void MR_CALL 
check_hlds__inst_test__record_inst_is_ground_2_p_0(
  MR_Word check_hlds__inst_test__Inst_1,
  MR_Word check_hlds__inst_test__IsGround_2)
{
  {
    MR_bool check_hlds__inst_test__succeeded;

{
#define MR_PROC_LABEL check_hlds__inst_test__record_inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word IsGround;

	Inst =  check_hlds__inst_test__Inst_1 ;
	IsGround =  check_hlds__inst_test__IsGround_2 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
check_hlds__inst_test__lookup_inst_is_ground_3_p_0(
  MR_Word check_hlds__inst_test__Inst_1,
  MR_Word * check_hlds__inst_test__Found_2,
  MR_Word * check_hlds__inst_test__IsGround_3)
{
  {
    MR_bool check_hlds__inst_test__succeeded;

{
#define MR_PROC_LABEL check_hlds__inst_test__lookup_inst_is_ground_3_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word IsGround;

	Inst =  check_hlds__inst_test__Inst_1 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;

    if (inst_is_ground_cache[hash].iig_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        IsGround = inst_is_ground_cache[hash].iig_is_ground;
    } else {
        Found = MR_BOOL_NO;
    }


		;}
#undef MR_PROC_LABEL
	 *check_hlds__inst_test__Found_2  = Found;
	 *check_hlds__inst_test__IsGround_3  = IsGround;
}
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__maybe_any_to_bound_5_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_7,
  MR_Word check_hlds__inst_test__Uniq_8,
  MR_Word check_hlds__inst_test__HeadVar__4_4,
  MR_Word * check_hlds__inst_test__Inst_9)
{
  {
    MR_bool check_hlds__inst_test__succeeded = (check_hlds__inst_test__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word check_hlds__inst_test__Type_6;
    MR_Word check_hlds__inst_test__Constructors_10;

    if (check_hlds__inst_test__succeeded)
      {
        check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__inst_test__succeeded)
          {
            check_hlds__inst_test__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            {
              check_hlds__inst_test__succeeded = check_hlds__type_util__type_is_solver_type_2_p_0(check_hlds__inst_test__ModuleInfo_7, check_hlds__inst_test__Type_6);
            }
            check_hlds__inst_test__succeeded = !(check_hlds__inst_test__succeeded);
            if (check_hlds__inst_test__succeeded)
              {
                {
                  check_hlds__inst_test__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__inst_test__ModuleInfo_7, check_hlds__inst_test__Type_6, &check_hlds__inst_test__Constructors_10);
                }
                if (check_hlds__inst_test__succeeded)
                  {
                    MR_Word check_hlds__inst_test__TypeCtor_11;
                    MR_Word check_hlds__inst_test__BoundInsts0_12;
                    MR_Word check_hlds__inst_test__BoundInsts_13;
                    MR_Word check_hlds__inst_test__InstResult_14;
                    MR_Word check_hlds__inst_test__V_17_17;
                    MR_Word check_hlds__inst_test__V_18_18;
                    MR_Word check_hlds__inst_test__V_19_19;
                    MR_Word check_hlds__inst_test__V_20_20;
                    MR_Word check_hlds__inst_test__V_21_21;
                    MR_Word check_hlds__inst_test__V_22_22;
                    MR_Word check_hlds__inst_test__V_23_23;

                    {
                      parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__inst_test__Type_6, &check_hlds__inst_test__TypeCtor_11);
                    }
                    {
                      check_hlds__mode_util__constructors_to_bound_any_insts_5_p_0(check_hlds__inst_test__ModuleInfo_7, check_hlds__inst_test__Uniq_8, check_hlds__inst_test__TypeCtor_11, check_hlds__inst_test__Constructors_10, &check_hlds__inst_test__BoundInsts0_12);
                    }
                    {
                      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__inst_test__BoundInsts0_12, &check_hlds__inst_test__BoundInsts_13);
                    }
                    {
                      check_hlds__inst_test__V_18_18 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
                    }
                    {
                      check_hlds__inst_test__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__V_17_17, 0) = ((MR_Box) (check_hlds__inst_test__V_18_18));
                    }
                    {
                      check_hlds__inst_test__V_20_20 = mercury__set__init_0_f_0((MR_Word) &check_hlds__inst_test_scalar_common_1[0]);
                    }
                    {
                      check_hlds__inst_test__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__V_19_19, 0) = ((MR_Box) (check_hlds__inst_test__V_20_20));
                    }
                    {
                      check_hlds__inst_test__V_22_22 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
                    }
                    {
                      check_hlds__inst_test__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__V_21_21, 0) = ((MR_Box) (check_hlds__inst_test__V_22_22));
                    }
                    check_hlds__inst_test__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) check_hlds__inst_test__TypeCtor_11);
                    {
                      check_hlds__inst_test__InstResult_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResult_14, 0) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResult_14, 1) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResult_14, 2) = ((MR_Box) (check_hlds__inst_test__V_17_17));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResult_14, 3) = ((MR_Box) (check_hlds__inst_test__V_19_19));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResult_14, 4) = ((MR_Box) (check_hlds__inst_test__V_21_21));
                      MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResult_14, 5) = ((MR_Box) (check_hlds__inst_test__V_23_23));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *check_hlds__inst_test__Inst_9 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_test__Uniq_8));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__inst_test__InstResult_14));
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__inst_test__BoundInsts_13));
                    }
                    check_hlds__inst_test__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word check_hlds__inst_test__TypeCtorCat_31;

                    {
                      check_hlds__inst_test__TypeCtorCat_31 = check_hlds__type_util__classify_type_2_f_0(check_hlds__inst_test__ModuleInfo_7, check_hlds__inst_test__Type_6);
                    }
                    switch (MR_tag((MR_Word) check_hlds__inst_test__TypeCtorCat_31)) {
                      default:
                        check_hlds__inst_test__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(check_hlds__inst_test__TypeCtorCat_31)) {
                          default:
                            check_hlds__inst_test__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 1:
                            check_hlds__inst_test__succeeded = MR_TRUE;
                            break;
                          case (MR_Integer) 3:
                            check_hlds__inst_test__succeeded = MR_TRUE;
                            break;
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__TypeCtorCat_31, (MR_Integer) 0)))) {
                          default:
                            check_hlds__inst_test__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word check_hlds__inst_test__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__TypeCtorCat_31, (MR_Integer) 1)));

                              switch (check_hlds__inst_test__V_41_41) {
                                default:
                                  check_hlds__inst_test__succeeded = MR_FALSE;
                                  break;
                                case (MR_Integer) 2:
                                  check_hlds__inst_test__succeeded = MR_TRUE;
                                  break;
                                case (MR_Integer) 1:
                                  check_hlds__inst_test__succeeded = MR_TRUE;
                                  break;
                              }
                            }
                            break;
                        }
                        break;
                    }
                    if (check_hlds__inst_test__succeeded)
                      check_hlds__inst_test__succeeded = MR_FALSE;
                    else
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          *check_hlds__inst_test__Inst_9 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__inst_test__Uniq_8));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        check_hlds__inst_test__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return check_hlds__inst_test__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_contains_inst_name_3_p_0(
  MR_Word check_hlds__inst_test__Inst_4,
  MR_Word check_hlds__inst_test__ModuleInfo_5,
  MR_Word check_hlds__inst_test__InstName_6)
{
  {
    MR_bool check_hlds__inst_test__succeeded;
    MR_Word check_hlds__inst_test__Expansions0_7;
    MR_Word check_hlds__inst_test__V_11_11;
    MR_Word check_hlds__inst_test___Expansions_8;

    {
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, &check_hlds__inst_test__Expansions0_7);
    }
    {
      check_hlds__inst_test__inst_contains_inst_name_2_6_p_0(check_hlds__inst_test__Inst_4, check_hlds__inst_test__ModuleInfo_5, check_hlds__inst_test__InstName_6, &check_hlds__inst_test__V_11_11, check_hlds__inst_test__Expansions0_7, &check_hlds__inst_test___Expansions_8);
    }
    check_hlds__inst_test__succeeded = ((MR_Integer) 1 == check_hlds__inst_test__V_11_11);
    return check_hlds__inst_test__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_or_dead_3_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2,
  MR_Word check_hlds__inst_test__ModuleInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = (check_hlds__inst_test__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        else
          {
            MR_Word check_hlds__inst_test__Inst_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Live_7;
            MR_Word check_hlds__inst_test__Lives_8;

            check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_test__succeeded)
              {
                check_hlds__inst_test__Live_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__inst_test__Lives_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 1)));
                switch (check_hlds__inst_test__Live_7) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    check_hlds__inst_test__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word check_hlds__inst_test__Expansions0_12;
                      MR_Word check_hlds__inst_test___Expansions_13;

                      {
                        mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_12);
                      }
                      {
                        check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_5, check_hlds__inst_test__Expansions0_12, &check_hlds__inst_test___Expansions_13);
                      }
                    }
                    break;
                }
                if (check_hlds__inst_test__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_6;
                      MR_Word check_hlds__inst_test__HeadVar__2__tmp_copy_2 = check_hlds__inst_test__Lives_8;

                      check_hlds__inst_test__HeadVar__2_2 = check_hlds__inst_test__HeadVar__2__tmp_copy_2;
                      check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_dead_3_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__HeadVar__2_2,
  MR_Word check_hlds__inst_test__ModuleInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = (check_hlds__inst_test__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        else
          {
            MR_Word check_hlds__inst_test__Inst_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Live_7;
            MR_Word check_hlds__inst_test__Lives_8;

            check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__inst_test__succeeded)
              {
                check_hlds__inst_test__Live_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 0)));
                check_hlds__inst_test__Lives_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__2_2, (MR_Integer) 1)));
                switch (check_hlds__inst_test__Live_7) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    check_hlds__inst_test__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 0:
                    {
                      check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_5);
                    }
                    break;
                }
                if (check_hlds__inst_test__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_6;
                      MR_Word check_hlds__inst_test__HeadVar__2__tmp_copy_2 = check_hlds__inst_test__Lives_8;

                      check_hlds__inst_test__HeadVar__2_2 = check_hlds__inst_test__HeadVar__2__tmp_copy_2;
                      check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_free_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_fully_unique_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Expansions0_9;
            MR_Word check_hlds__inst_test___Expansions_10;

            {
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_9);
            }
            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_9, &check_hlds__inst_test___Expansions_10);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_not_partly_unique_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Expansions0_9;
            MR_Word check_hlds__inst_test___Expansions_10;

            {
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_9);
            }
            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_9, &check_hlds__inst_test___Expansions_10);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_mostly_unique_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Expansions0_9;
            MR_Word check_hlds__inst_test___Expansions_10;

            {
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_9);
            }
            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_9, &check_hlds__inst_test___Expansions_10);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_unique_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Expansions0_9;
            MR_Word check_hlds__inst_test___Expansions_10;

            {
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_9);
            }
            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_9, &check_hlds__inst_test___Expansions_10);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_or_any_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Expansions0_9;
            MR_Word check_hlds__inst_test___Expansions_10;

            {
              mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_9);
            }
            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_9, &check_hlds__inst_test___Expansions_10);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_list_is_ground_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__Inst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__Insts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_2_p_0(check_hlds__inst_test__ModuleInfo_2, check_hlds__inst_test__Inst_4);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__Insts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_free_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 0)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_free_2_p_0(check_hlds__inst_test__Args_8, check_hlds__inst_test__ModuleInfo_2);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_fully_unique_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 0)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_not_fully_unique_2_p_0(check_hlds__inst_test__Args_8, check_hlds__inst_test__ModuleInfo_2);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_not_partly_unique_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 0)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_not_partly_unique_2_p_0(check_hlds__inst_test__Args_8, check_hlds__inst_test__ModuleInfo_2);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_mostly_unique_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 0)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_mostly_unique_2_p_0(check_hlds__inst_test__Args_8, check_hlds__inst_test__ModuleInfo_2);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__bound_inst_list_is_unique_2_p_0(
  MR_Word check_hlds__inst_test__HeadVar__1_1,
  MR_Word check_hlds__inst_test__ModuleInfo_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        if ((check_hlds__inst_test__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          check_hlds__inst_test__succeeded = MR_TRUE;
        else
          {
            MR_Word check_hlds__inst_test__BoundInst_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__inst_test__BoundInsts_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 1)));
            MR_Word check_hlds__inst_test___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__inst_test__BoundInst_4, (MR_Integer) 0)));

            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_list_is_unique_2_p_0(check_hlds__inst_test__Args_8, check_hlds__inst_test__ModuleInfo_2);
            }
            if (check_hlds__inst_test__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__inst_test__HeadVar__1__tmp_copy_1 = check_hlds__inst_test__BoundInsts_5;

                  check_hlds__inst_test__HeadVar__1_1 = check_hlds__inst_test__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_or_any_3_p_0(
  MR_Word check_hlds__inst_test__InstResults_4,
  MR_Word check_hlds__inst_test__BoundInsts_5,
  MR_Word check_hlds__inst_test__ModuleInfo_6)
{
  {
    MR_bool check_hlds__inst_test__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResults_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_test__InstResults_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_p_0(check_hlds__inst_test__BoundInsts_5, check_hlds__inst_test__ModuleInfo_6);
            }
            break;
          case (MR_Integer) 1:
            check_hlds__inst_test__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_test__GroundnessResult_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 0)));
          MR_Word check_hlds__inst_test__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 1)));
          MR_Word check_hlds__inst_test__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 2)));
          MR_Word check_hlds__inst_test__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 3)));
          MR_Word check_hlds__inst_test__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 4)));
          MR_Word check_hlds__inst_test__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 5)));

          switch (check_hlds__inst_test__GroundnessResult_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 0:
              {
                check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_or_any_2_p_0(check_hlds__inst_test__BoundInsts_5, check_hlds__inst_test__ModuleInfo_6);
              }
              break;
            case (MR_Integer) 1:
              check_hlds__inst_test__succeeded = MR_TRUE;
              break;
          }
        }
        break;
    }
    return check_hlds__inst_test__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_mt_4_p_0(
  MR_Word check_hlds__inst_test__InstResults_5,
  MR_Word check_hlds__inst_test__BoundInsts_6,
  MR_Word check_hlds__inst_test__MaybeType_7,
  MR_Word check_hlds__inst_test__ModuleInfo_8)
{
  {
    MR_bool check_hlds__inst_test__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResults_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_test__InstResults_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(check_hlds__inst_test__BoundInsts_6, check_hlds__inst_test__MaybeType_7, check_hlds__inst_test__ModuleInfo_8);
            }
            break;
          case (MR_Integer) 1:
            check_hlds__inst_test__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_test__GroundnessResult_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_5, (MR_Integer) 0)));
          MR_Word check_hlds__inst_test__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_5, (MR_Integer) 1)));
          MR_Word check_hlds__inst_test__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_5, (MR_Integer) 2)));
          MR_Word check_hlds__inst_test__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_5, (MR_Integer) 3)));
          MR_Word check_hlds__inst_test__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_5, (MR_Integer) 4)));
          MR_Word check_hlds__inst_test__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_5, (MR_Integer) 5)));

          switch (check_hlds__inst_test__GroundnessResult_9) {
            default:
              check_hlds__inst_test__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(check_hlds__inst_test__BoundInsts_6, check_hlds__inst_test__MaybeType_7, check_hlds__inst_test__ModuleInfo_8);
              }
              break;
            case (MR_Integer) 1:
              check_hlds__inst_test__succeeded = MR_TRUE;
              break;
          }
        }
        break;
    }
    return check_hlds__inst_test__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_results_bound_inst_list_is_ground_3_p_0(
  MR_Word check_hlds__inst_test__InstResults_4,
  MR_Word check_hlds__inst_test__BoundInsts_5,
  MR_Word check_hlds__inst_test__ModuleInfo_6)
{
  {
    MR_bool check_hlds__inst_test__succeeded;

    switch (MR_tag((MR_Word) check_hlds__inst_test__InstResults_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(check_hlds__inst_test__InstResults_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(check_hlds__inst_test__BoundInsts_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_test__ModuleInfo_6);
              }
            }
            break;
          case (MR_Integer) 1:
            check_hlds__inst_test__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__inst_test__GroundnessResult_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 0)));
          MR_Word check_hlds__inst_test__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 1)));
          MR_Word check_hlds__inst_test__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 2)));
          MR_Word check_hlds__inst_test__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 3)));
          MR_Word check_hlds__inst_test__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 4)));
          MR_Word check_hlds__inst_test__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__inst_test__InstResults_4, (MR_Integer) 5)));

          switch (check_hlds__inst_test__GroundnessResult_7) {
            default:
              check_hlds__inst_test__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                {
                  check_hlds__inst_test__succeeded = check_hlds__inst_test__bound_inst_list_is_ground_mt_3_p_0(check_hlds__inst_test__BoundInsts_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__inst_test__ModuleInfo_6);
                }
              }
              break;
            case (MR_Integer) 1:
              check_hlds__inst_test__succeeded = MR_TRUE;
              break;
          }
        }
        break;
    }
    return check_hlds__inst_test__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_4,
  MR_Word check_hlds__inst_test__Inst_5,
  MR_Word * check_hlds__inst_test__Functors_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_5)) {
          default:
            check_hlds__inst_test__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 0)))) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_test___Uniq_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test___InstResult_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 2)));

                  *check_hlds__inst_test__Functors_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 3)));
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_bound_to_functors\'/3", (MR_String) "uninstantiated inst parameter");
                  }
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_test__SubInst_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_5 = check_hlds__inst_test__SubInst_11;

                    check_hlds__inst_test__Inst_5 = check_hlds__inst_test__Inst__tmp_copy_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_test__InstName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_5, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__NextInst_13;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_4, check_hlds__inst_test__InstName_12, &check_hlds__inst_test__NextInst_13);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_5 = check_hlds__inst_test__NextInst_13;

                    check_hlds__inst_test__Inst_5 = check_hlds__inst_test__Inst__tmp_copy_5;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_bound_2_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__Inst_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_4)) {
          default:
            check_hlds__inst_test__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__inst_test__Inst_4)) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                check_hlds__inst_test__succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 2:
            check_hlds__inst_test__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                check_hlds__inst_test__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 1:
                check_hlds__inst_test__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_bound\'/2", (MR_String) "uninstantiated inst parameter");
                  }
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_test__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__SubInst_17;

                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_test__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__NextInst_19;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__InstName_18, &check_hlds__inst_test__NextInst_19);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__NextInst_19;

                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 5:
                check_hlds__inst_test__succeeded = MR_TRUE;
                break;
            }
            break;
        }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_any_2_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__Inst_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_4)) {
          default:
            check_hlds__inst_test__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            check_hlds__inst_test__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 0)))) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_any\'/2", (MR_String) "uninstantiated inst parameter");
                  }
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_test__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__SubInst_17;

                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_test__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__NextInst_19;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__InstName_18, &check_hlds__inst_test__NextInst_19);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__NextInst_19;

                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_free_2_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__Inst_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_4)) {
          default:
            check_hlds__inst_test__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(check_hlds__inst_test__Inst_4)) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                check_hlds__inst_test__succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            check_hlds__inst_test__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 0)))) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_free\'/2", (MR_String) "uninstantiated inst parameter");
                  }
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_test__SubInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__SubInst_17;

                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_test__InstName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__NextInst_19;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__InstName_18, &check_hlds__inst_test__NextInst_19);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__NextInst_19;

                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_clobbered_2_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__Inst_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__inst_test__succeeded;

        switch (MR_tag((MR_Word) check_hlds__inst_test__Inst_4)) {
          default:
            check_hlds__inst_test__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__inst_test__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_4, (MR_Integer) 0)));
              MR_Word check_hlds__inst_test__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));

              switch (check_hlds__inst_test__V_31_31) {
                default:
                  check_hlds__inst_test__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 3:
                  check_hlds__inst_test__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 4:
                  check_hlds__inst_test__succeeded = MR_TRUE;
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 0)))) {
              default:
                check_hlds__inst_test__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__inst_test__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 3)));
                  MR_Word check_hlds__inst_test__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 2)));

                  switch (check_hlds__inst_test__V_34_34) {
                    default:
                      check_hlds__inst_test__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 3:
                      check_hlds__inst_test__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 4:
                      check_hlds__inst_test__succeeded = MR_TRUE;
                      break;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__inst_test__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 2)));

                  switch (check_hlds__inst_test__V_36_36) {
                    default:
                      check_hlds__inst_test__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 3:
                      check_hlds__inst_test__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 4:
                      check_hlds__inst_test__succeeded = MR_TRUE;
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.inst_test", (MR_String) "predicate \140check_hlds.inst_test.inst_is_clobbered\'/2", (MR_String) "uninstantiated inst parameter");
                  }
                  check_hlds__inst_test__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__inst_test__SubInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 2)));
                  MR_Word check_hlds__inst_test__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__SubInst_18;

                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__inst_test__InstName_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
                  MR_Word check_hlds__inst_test__NextInst_20;

                  {
                    check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__InstName_19, &check_hlds__inst_test__NextInst_20);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__inst_test__Inst__tmp_copy_4 = check_hlds__inst_test__NextInst_20;

                    check_hlds__inst_test__Inst_4 = check_hlds__inst_test__Inst__tmp_copy_4;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return check_hlds__inst_test__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_fully_unique_2_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__Inst_4)
{
  {
    MR_bool check_hlds__inst_test__succeeded;
    MR_Word check_hlds__inst_test__Expansions0_5;
    MR_Word check_hlds__inst_test___Expansions_6;

    {
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_5);
    }
    {
      check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_not_fully_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_5, &check_hlds__inst_test___Expansions_6);
    }
    return check_hlds__inst_test__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__Inst_4)
{
  {
    MR_bool check_hlds__inst_test__succeeded;
    MR_Word check_hlds__inst_test__Expansions0_5;
    MR_Word check_hlds__inst_test___Expansions_6;

    {
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_5);
    }
    {
      check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_5, &check_hlds__inst_test___Expansions_6);
    }
    return check_hlds__inst_test__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_mostly_unique_2_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__Inst_4)
{
  {
    MR_bool check_hlds__inst_test__succeeded;
    MR_Word check_hlds__inst_test__Expansions0_5;
    MR_Word check_hlds__inst_test___Expansions_6;

    {
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_5);
    }
    {
      check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_mostly_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_5, &check_hlds__inst_test___Expansions_6);
    }
    return check_hlds__inst_test__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_unique_2_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__Inst_4)
{
  {
    MR_bool check_hlds__inst_test__succeeded;
    MR_Word check_hlds__inst_test__Expansions0_5;
    MR_Word check_hlds__inst_test___Expansions_6;

    {
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_5);
    }
    {
      check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_unique_2_4_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_5, &check_hlds__inst_test___Expansions_6);
    }
    return check_hlds__inst_test__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_or_any_2_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__Inst_4)
{
  {
    MR_bool check_hlds__inst_test__succeeded;
    MR_Word check_hlds__inst_test__Expansions0_5;
    MR_Word check_hlds__inst_test___Expansions_6;

    {
      mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, &check_hlds__inst_test__Expansions0_5);
    }
    {
      check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_or_any_2_4_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_5, &check_hlds__inst_test___Expansions_6);
    }
    return check_hlds__inst_test__succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__inst_test__inst_is_ground_2_p_0(
  MR_Word check_hlds__inst_test__ModuleInfo_3,
  MR_Word check_hlds__inst_test__Inst_4)
{
  {
    MR_bool check_hlds__inst_test__succeeded;
    MR_Word check_hlds__inst_test__Found_5;
    MR_Word check_hlds__inst_test__OldIsGround_6;

{
#define MR_PROC_LABEL check_hlds__inst_test__inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word Found;
	MR_Word IsGround;

	Inst =  check_hlds__inst_test__Inst_4 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;

    if (inst_is_ground_cache[hash].iig_inst_addr == Inst) {
        Found = MR_BOOL_YES;
        IsGround = inst_is_ground_cache[hash].iig_is_ground;
    } else {
        Found = MR_BOOL_NO;
    }


		;}
#undef MR_PROC_LABEL
	 check_hlds__inst_test__Found_5  = Found;
	 check_hlds__inst_test__OldIsGround_6  = IsGround;
}
    switch (check_hlds__inst_test__Found_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__inst_test__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word check_hlds__inst_test__Expansions0_21;
          MR_Word check_hlds__inst_test__V_30_30;
          MR_Word check_hlds__inst_test__V_31_31;

          {
            check_hlds__inst_test__Expansions0_21 = mercury__set_tree234__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
          }
          check_hlds__inst_test__succeeded = ((MR_tag((MR_Word) check_hlds__inst_test__Inst_4)) == (MR_mktag((MR_Integer) 2)));
          if (check_hlds__inst_test__succeeded)
            {
              check_hlds__inst_test__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_4, (MR_Integer) 0)));
              check_hlds__inst_test__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__inst_test__Inst_4, (MR_Integer) 1)));
              {
                check_hlds__inst_test__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__inst_test__Expansions0_21, ((MR_Box) (check_hlds__inst_test__Inst_4)));
              }
              if (check_hlds__inst_test__succeeded)
                check_hlds__inst_test__succeeded = MR_TRUE;
              else
                {
                  MR_Word check_hlds__inst_test___Expansions_37;

                  {
                    check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__V_11_11, check_hlds__inst_test__Inst_4, check_hlds__inst_test__Expansions0_21, &check_hlds__inst_test___Expansions_37);
                  }
                }
            }
          else
            {
              MR_Word check_hlds__inst_test__STATE_VARIABLE_Expansions_15_33;

              {
                check_hlds__inst_test__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__inst_test__Inst_4)), check_hlds__inst_test__Expansions0_21, &check_hlds__inst_test__STATE_VARIABLE_Expansions_15_33);
              }
              if (check_hlds__inst_test__succeeded)
                {
                  MR_Word check_hlds__inst_test___Expansions_38;

                  {
                    check_hlds__inst_test__succeeded = check_hlds__inst_test__inst_is_ground_mt_2_5_p_0(check_hlds__inst_test__ModuleInfo_3, check_hlds__inst_test__V_11_11, check_hlds__inst_test__Inst_4, check_hlds__inst_test__STATE_VARIABLE_Expansions_15_33, &check_hlds__inst_test___Expansions_38);
                  }
                }
              else
                check_hlds__inst_test__succeeded = MR_TRUE;
            }
          if (check_hlds__inst_test__succeeded)
            {
{
#define MR_PROC_LABEL check_hlds__inst_test__inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word IsGround;

	Inst =  check_hlds__inst_test__Inst_4 ;
	IsGround =  (MR_Integer) 1 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;


		;}
#undef MR_PROC_LABEL
}
              check_hlds__inst_test__succeeded = MR_TRUE;
            }
          else
            {
{
#define MR_PROC_LABEL check_hlds__inst_test__inst_is_ground_2_p_0

	MR_Word Inst;
	MR_Word IsGround;

	Inst =  check_hlds__inst_test__Inst_4 ;
	IsGround =  (MR_Integer) 0 ;
		{

    MR_Unsigned hash;

    hash = (MR_Unsigned) Inst;
    hash = hash >> MR_LOW_TAG_BITS;
    hash = hash % INST_IS_GROUND_CACHE_SIZE;
    /* We overwrite any existing entry in the slot. */
    inst_is_ground_cache[hash].iig_inst_addr = Inst;
    inst_is_ground_cache[hash].iig_is_ground = IsGround;


		;}
#undef MR_PROC_LABEL
}
              check_hlds__inst_test__succeeded = MR_FALSE;
            }
        }
        break;
      case (MR_Integer) 1:
        check_hlds__inst_test__succeeded = (check_hlds__inst_test__OldIsGround_6 == (MR_Integer) 1);
        break;
    }
    return check_hlds__inst_test__succeeded;
  }
}

void mercury__check_hlds__inst_test__init(void)
{
}

void mercury__check_hlds__inst_test__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__inst_test__check_hlds__inst_test__type_ctor_info_inst_names_0);
}

void mercury__check_hlds__inst_test__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.inst_test. */
