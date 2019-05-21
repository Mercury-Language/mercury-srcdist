/*
** Automatically generated from `autopar_costs.m'
** by the Mercury compiler,
** version rotd-2017-07-15
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


/* :- module mdprof_fb.automatic_parallelism.autopar_costs. */
/* :- implementation. */

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_costs__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_costs.mih"


#include "analysis_utils.mih"
#include "coverage.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "message.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "report.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lazy.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_types.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_costs__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_costs__maybe__pti_maybe_1__plain_measurements__type_ctor_info_recursion_depth_0;

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_8_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_9,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_10,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__MaybeCurDepth_11,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_12,
  MR_Float mdprof_fb__automatic_parallelism__autopar_costs__Cost_13,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_14,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__ArgNum_15,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Use_16);

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_7,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RevGoalPath_8,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_9,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Args_10,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_8,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_9,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Args_10,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Cost_12,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_13,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Uses_14);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__find_earliest_use_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CurEarliest_1,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure_arg);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_nondet_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Calls_2,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_semidet_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Calls_2,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_1[2][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_2[1][9];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_3[1][11];




static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__lazy__lazy__type_ctor_info_lazy_1)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_2[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_3[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs__maybe__pti_maybe_1__plain_measurements__type_ctor_info_recursion_depth_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
};



#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_costs__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_costs__maybe__pti_maybe_1__plain_measurements__type_ctor_info_recursion_depth_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_recursion_depth_0
  }
};

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_8_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_9,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_10,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__MaybeCurDepth_11,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_12,
  MR_Float mdprof_fb__automatic_parallelism__autopar_costs__Cost_13,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_14,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__ArgNum_15,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Use_16)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Deep_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_9, (MR_Integer) 0)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CliquePtr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_9, (MR_Integer) 3)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__FollowCallsAcrossModules_19;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseOptions_20;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__MaybeUse_21;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_26;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_9, (MR_Integer) 1)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_9, (MR_Integer) 2)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_9, (MR_Integer) 4)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_9, (MR_Integer) 5)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_9, (MR_Integer) 6)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_9, (MR_Integer) 7)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_9, (MR_Integer) 8)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_9, (MR_Integer) 9)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_9, (MR_Integer) 10)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_9, (MR_Integer) 11)));

    {
      mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Info_9, &mdprof_fb__automatic_parallelism__autopar_costs__FollowCallsAcrossModules_19);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_costs__VarUseOptions_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__VarUseOptions_20, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Deep_17));
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__VarUseOptions_20, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__FollowCallsAcrossModules_19));
      MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__VarUseOptions_20, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_12));
    }
    {
      mdprof_fb__automatic_parallelism__autopar_costs__Var_26 = mercury__set__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0);
    }
    {
      var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_1(mdprof_fb__automatic_parallelism__autopar_costs__CliquePtr_18, mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_14, mdprof_fb__automatic_parallelism__autopar_costs__ArgNum_15, mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_10, mdprof_fb__automatic_parallelism__autopar_costs__MaybeCurDepth_11, mdprof_fb__automatic_parallelism__autopar_costs__Cost_13, mdprof_fb__automatic_parallelism__autopar_costs__Var_26, mdprof_fb__automatic_parallelism__autopar_costs__VarUseOptions_20, &mdprof_fb__automatic_parallelism__autopar_costs__MaybeUse_21);
    }
    if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__MaybeUse_21)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdprof_fb__automatic_parallelism__autopar_costs__Error_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__MaybeUse_21, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Messages_23;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_27;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_28;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_29;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Stderr_25;

        {
          var_use_analysis__pessimistic_var_use_info_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_12, mdprof_fb__automatic_parallelism__autopar_costs__Cost_13, mdprof_fb__automatic_parallelism__autopar_costs__Use_16);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_costs__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_costs__Var_27, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_14));
        }
        {
          mdprof_fb__automatic_parallelism__autopar_costs__Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_costs__Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), mdprof_fb__automatic_parallelism__autopar_costs__Var_28, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Error_22));
        }
        {
          mdprof_fb__automatic_parallelism__autopar_costs__Var_29 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
        }
        {
          message__append_message_4_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Var_27, mdprof_fb__automatic_parallelism__autopar_costs__Var_28, mdprof_fb__automatic_parallelism__autopar_costs__Var_29, &mdprof_fb__automatic_parallelism__autopar_costs__Messages_23);
        }
        {
          mercury__io__stderr_stream_3_p_0(&mdprof_fb__automatic_parallelism__autopar_costs__Stderr_25);
        }
        {
          message__write_out_messages_4_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Stderr_25, mdprof_fb__automatic_parallelism__autopar_costs__Messages_23);
        }
      }
    else
      *mdprof_fb__automatic_parallelism__autopar_costs__Use_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__MaybeUse_21, (MR_Integer) 0)));
  }
}

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_7,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RevGoalPath_8,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_9,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Args_10,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__EarliestUse_12;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_72_72 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CliquePtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 3)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Cost_16;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Uses_17;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 4)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 0)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 1)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 2)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 5)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 6)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 7)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 8)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 9)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 10)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 11)));
    MR_Box mdprof_fb__automatic_parallelism__autopar_costs__conv0_CostAndCallee_14;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RecCost_15;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_74_74;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_24;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_58;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_59;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_60;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_61;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_62;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_63;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_64;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_65;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_66;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_67;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_68;
    MR_Box mdprof_fb__automatic_parallelism__autopar_costs__conv1_RecCost_15;

    {
      mercury__map__lookup_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_72_72, (MR_Word) &mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_1[1], mdprof_fb__automatic_parallelism__autopar_costs__Var_39, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__RevGoalPath_8)), &mdprof_fb__automatic_parallelism__autopar_costs__conv0_CostAndCallee_14);
    }
    mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__conv0_CostAndCallee_14);
    {
      mdprof_fb__automatic_parallelism__autopar_costs__succeeded = analysis_utils__cost_and_callees_is_recursive_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__CliquePtr_13, mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14);
    }
    if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
      {
        mdprof_fb__automatic_parallelism__autopar_costs__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 0)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 1)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 2)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 3)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 4)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 5)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 6)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 7)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 8)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 9)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 10)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_7, (MR_Integer) 11)));
        mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_74_74 = (MR_Word) &measurements__measurements__type_ctor_info_cs_cost_csq_0;
        {
          mdprof_fb__automatic_parallelism__autopar_costs__succeeded = mercury__map__search_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_72_72, mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_74_74, mdprof_fb__automatic_parallelism__autopar_costs__Var_24, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__RevGoalPath_8)), &mdprof_fb__automatic_parallelism__autopar_costs__conv1_RecCost_15);
        }
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
          {
            mdprof_fb__automatic_parallelism__autopar_costs__RecCost_15 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__conv1_RecCost_15);
            mdprof_fb__automatic_parallelism__autopar_costs__succeeded = MR_TRUE;
          }
      }
    if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
      mdprof_fb__automatic_parallelism__autopar_costs__Cost_16 = mdprof_fb__automatic_parallelism__autopar_costs__RecCost_15;
    else
      {
        MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_69;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_70;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_71;

        mdprof_fb__automatic_parallelism__autopar_costs__Cost_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14, (MR_Integer) 0)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14, (MR_Integer) 1)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14, (MR_Integer) 2)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14, (MR_Integer) 3)));
      }
    {
      mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Info_7, mdprof_fb__automatic_parallelism__autopar_costs__Var_9, mdprof_fb__automatic_parallelism__autopar_costs__Args_10, mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_14, mdprof_fb__automatic_parallelism__autopar_costs__Cost_16, mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11, &mdprof_fb__automatic_parallelism__autopar_costs__Uses_17);
    }
    switch (mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((mdprof_fb__automatic_parallelism__autopar_costs__Uses_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_costs", (MR_String) "function \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy\'/5", (MR_String) "No uses");
            }
          }
        else
          {
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__FirstUse_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__Uses_17, (MR_Integer) 0)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__OtherUses_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__Uses_17, (MR_Integer) 1)));

            {
              mdprof_fb__automatic_parallelism__autopar_costs__find_earliest_use_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__FirstUse_18, mdprof_fb__automatic_parallelism__autopar_costs__OtherUses_19, &mdprof_fb__automatic_parallelism__autopar_costs__EarliestUse_12);
            }
          }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        if ((mdprof_fb__automatic_parallelism__autopar_costs__Uses_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_costs", (MR_String) "function \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy\'/5", (MR_String) "No uses");
            }
          }
        else
          {
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__Uses_17, (MR_Integer) 1)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__Uses_17, (MR_Integer) 0)));

            if ((mdprof_fb__automatic_parallelism__autopar_costs__Var_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mdprof_fb__automatic_parallelism__autopar_costs__EarliestUse_12 = mdprof_fb__automatic_parallelism__autopar_costs__Var_76;
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_costs", (MR_String) "function \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy\'/5", (MR_String) "Too many uses");
                }
              }
          }
        break;
    }
    return mdprof_fb__automatic_parallelism__autopar_costs__EarliestUse_12;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure_arg,
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1,
  MR_Box * mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_2)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure = mdprof_fb__automatic_parallelism__autopar_costs__closure_arg;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__conv1_Use_16;

    {
      mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 6))), MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 8))), ((MR_Integer) mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1), &mdprof_fb__automatic_parallelism__autopar_costs__conv1_Use_16);
    }
    *mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_2 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__conv1_Use_16));
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_8,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_9,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Args_10,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Cost_12,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_13,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Uses_14)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
    MR_Float mdprof_fb__automatic_parallelism__autopar_costs__Var_28;

    {
      mdprof_fb__automatic_parallelism__autopar_costs__Var_28 = measurements__cs_cost_get_calls_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Cost_12);
    }
    mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (((MR_Float) 0.0000000000000000) < mdprof_fb__automatic_parallelism__autopar_costs__Var_28);
    if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_64_64;
        MR_Float mdprof_fb__automatic_parallelism__autopar_costs__CostPercall_15;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__ArgNums_16;

        {
          mdprof_fb__automatic_parallelism__autopar_costs__CostPercall_15 = measurements__cs_cost_get_percall_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Cost_12);
        }
        mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_64_64 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__list__member_indexes0_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_64_64, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Var_9)), mdprof_fb__automatic_parallelism__autopar_costs__Args_10, &mdprof_fb__automatic_parallelism__autopar_costs__ArgNums_16);
        }
        if ((mdprof_fb__automatic_parallelism__autopar_costs__ArgNums_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_13 == (MR_Integer) 1);
            if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
              {
                MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_29;

                {
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, 0) = MR_box_float((MR_Float) 0.0000000000000000);
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, 1) = MR_box_float(mdprof_fb__automatic_parallelism__autopar_costs__CostPercall_15);
                  MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_13));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mdprof_fb__automatic_parallelism__autopar_costs__Uses_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Var_29));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_costs", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy_arg\'/7", (MR_String) "Var use type most be consumption if \\+ member(Var, Args)");
                  return;
                }
              }
          }
        else
          {
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HigherOrder_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11, (MR_Integer) 3)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11, (MR_Integer) 0)));
            MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11, (MR_Integer) 1)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11, (MR_Integer) 2)));

            switch (mdprof_fb__automatic_parallelism__autopar_costs__HigherOrder_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_68_68;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Callee_22;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_23;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_24;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__MaybeCurDepth_25;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Uses0_26;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_41;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CalleePrime_21;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11, (MR_Integer) 2)));
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11, (MR_Integer) 0)));
                  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11, (MR_Integer) 1)));
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CostAndCallee_11, (MR_Integer) 3)));
                  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__conv0_CalleePrime_21;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_52;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_53;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_54;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_55;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_56;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_57;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_58;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_59;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_60;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_61;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_62;
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_63;

                  {
                    mdprof_fb__automatic_parallelism__autopar_costs__succeeded = mercury__set__is_singleton_2_p_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, mdprof_fb__automatic_parallelism__autopar_costs__Var_37, &mdprof_fb__automatic_parallelism__autopar_costs__conv0_CalleePrime_21);
                  }
                  if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
                    {
                      mdprof_fb__automatic_parallelism__autopar_costs__CalleePrime_21 = ((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__conv0_CalleePrime_21);
                      mdprof_fb__automatic_parallelism__autopar_costs__succeeded = MR_TRUE;
                    }
                  if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
                    mdprof_fb__automatic_parallelism__autopar_costs__Callee_22 = mdprof_fb__automatic_parallelism__autopar_costs__CalleePrime_21;
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "mdprof_fb.automatic_parallelism.autopar_costs", (MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy_arg\'/7", (MR_String) "first-order call site has wrong number of CSDs");
                        return;
                      }
                    }
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Callee_22, (MR_Integer) 0)));
                  mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Callee_22, (MR_Integer) 1)));
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_8, (MR_Integer) 0)));
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_8, (MR_Integer) 1)));
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_8, (MR_Integer) 2)));
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_8, (MR_Integer) 3)));
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_8, (MR_Integer) 4)));
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_8, (MR_Integer) 5)));
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_8, (MR_Integer) 6)));
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_8, (MR_Integer) 7)));
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_8, (MR_Integer) 8)));
                  mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_8, (MR_Integer) 9)));
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_8, (MR_Integer) 10)));
                  mdprof_fb__automatic_parallelism__autopar_costs__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_8, (MR_Integer) 11)));
                  {
                    mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_1(mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_24, &mdprof_fb__automatic_parallelism__autopar_costs__MaybeCurDepth_25);
                  }
                  {
                    mdprof_fb__automatic_parallelism__autopar_costs__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_41, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_3[0]));
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_41, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_1));
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_41, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Info_8));
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_41, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_24));
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_41, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__MaybeCurDepth_25));
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_41, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_13));
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_41, 7) = MR_box_float(mdprof_fb__automatic_parallelism__autopar_costs__CostPercall_15);
                    MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_41, 8) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__CSDPtr_23));
                  }
                  mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_68_68 = (MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0;
                  {
                    mercury__list__map_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_64_64, mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_68_68, mdprof_fb__automatic_parallelism__autopar_costs__Var_41, mdprof_fb__automatic_parallelism__autopar_costs__ArgNums_16, &mdprof_fb__automatic_parallelism__autopar_costs__Uses0_26);
                  }
                  {
                    mercury__list__sort_and_remove_dups_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__TypeCtorInfo_68_68, mdprof_fb__automatic_parallelism__autopar_costs__Uses0_26, mdprof_fb__automatic_parallelism__autopar_costs__Uses_14);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Use_20;

                  {
                    var_use_analysis__pessimistic_var_use_info_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_13, mdprof_fb__automatic_parallelism__autopar_costs__CostPercall_15, &mdprof_fb__automatic_parallelism__autopar_costs__Use_20);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mdprof_fb__automatic_parallelism__autopar_costs__Uses_14 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Use_20));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                break;
            }
          }
      }
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Use_45;

        {
          var_use_analysis__pessimistic_var_use_info_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_13, (MR_Float) 0.0000000000000000, &mdprof_fb__automatic_parallelism__autopar_costs__Use_45);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdprof_fb__automatic_parallelism__autopar_costs__Uses_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Use_45));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__find_earliest_use_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CurEarliest_1,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

        if ((mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = mdprof_fb__automatic_parallelism__autopar_costs__CurEarliest_1;
        else
          {
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVarUse_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__TailVarUses_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2, (MR_Integer) 1)));
            MR_Float mdprof_fb__automatic_parallelism__autopar_costs__TimeCur_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CurEarliest_1, (MR_Integer) 0)));
            MR_Float mdprof_fb__automatic_parallelism__autopar_costs__TimeHead_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__HeadVarUse_6, (MR_Integer) 0)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__NextEarliest_11;
            MR_Float mdprof_fb__automatic_parallelism__autopar_costs__Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CurEarliest_1, (MR_Integer) 1)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__CurEarliest_1, (MR_Integer) 2)));
            MR_Float mdprof_fb__automatic_parallelism__autopar_costs__Var_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__HeadVarUse_6, (MR_Integer) 1)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__HeadVarUse_6, (MR_Integer) 2)));

            mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__TimeCur_9 < mdprof_fb__automatic_parallelism__autopar_costs__TimeHead_10);
            if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
              mdprof_fb__automatic_parallelism__autopar_costs__NextEarliest_11 = mdprof_fb__automatic_parallelism__autopar_costs__CurEarliest_1;
            else
              mdprof_fb__automatic_parallelism__autopar_costs__NextEarliest_11 = mdprof_fb__automatic_parallelism__autopar_costs__HeadVarUse_6;
            /* direct tailcall eliminated */
            {
              MR_Word mdprof_fb__automatic_parallelism__autopar_costs__next_value_of_CurEarliest_1 = mdprof_fb__automatic_parallelism__autopar_costs__NextEarliest_11;
              MR_Word mdprof_fb__automatic_parallelism__autopar_costs__next_value_of_HeadVar__2_2 = mdprof_fb__automatic_parallelism__autopar_costs__TailVarUses_7;

              mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2 = mdprof_fb__automatic_parallelism__autopar_costs__next_value_of_HeadVar__2_2;
              mdprof_fb__automatic_parallelism__autopar_costs__CurEarliest_1 = mdprof_fb__automatic_parallelism__autopar_costs__next_value_of_CurEarliest_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_1(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_3,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

    switch (MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_17;

          {
            mdprof_fb__automatic_parallelism__autopar_costs__Var_17 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Var_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_15;

          {
            mdprof_fb__automatic_parallelism__autopar_costs__Var_15 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 2.0000000000000000);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Var_15));
          }
        }
        break;
      case (MR_Integer) 2:
        *mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        *mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_3,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

    if ((mdprof_fb__automatic_parallelism__autopar_costs__RecursionType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_17;

        {
          mdprof_fb__automatic_parallelism__autopar_costs__Var_17 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Var_17));
        }
      }
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_15;

        {
          mdprof_fb__automatic_parallelism__autopar_costs__Var_15 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 2.0000000000000000);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdprof_fb__automatic_parallelism__autopar_costs__MaybeDepth_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Var_15));
        }
      }
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_3,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__FollowCallsAcrossModules_4)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__IntermoduleVarUse_5;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 2)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 11)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 0)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 1)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 3)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 4)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 5)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 6)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 7)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 8)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 9)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Info_3, (MR_Integer) 10)));
    MR_Float mdprof_fb__automatic_parallelism__autopar_costs__Var_30 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 0)));
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_31;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_32;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_33;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_34;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_35;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_36;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_37;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_38;
    MR_Float mdprof_fb__automatic_parallelism__autopar_costs__Var_39;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_40;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_41;

    mdprof_fb__automatic_parallelism__autopar_costs__IntermoduleVarUse_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 1)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 2)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 3)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 4)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 5)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 6)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 7)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 8)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 9)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_39 = MR_unbox_float((MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 10)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 11)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 12)));
    switch (mdprof_fb__automatic_parallelism__autopar_costs__IntermoduleVarUse_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String mdprof_fb__automatic_parallelism__autopar_costs__Module_9;

          if (((MR_tag((MR_Word) mdprof_fb__automatic_parallelism__autopar_costs__Var_29)) == (MR_mktag((MR_Integer) 0))))
            {
              MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, (MR_Integer) 0)));
              MR_String mdprof_fb__automatic_parallelism__autopar_costs__Var_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, (MR_Integer) 1)));
              MR_String mdprof_fb__automatic_parallelism__autopar_costs__Var_10;
              MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_11;
              MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_12;

              mdprof_fb__automatic_parallelism__autopar_costs__Module_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, (MR_Integer) 2)));
              mdprof_fb__automatic_parallelism__autopar_costs__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, (MR_Integer) 3)));
              mdprof_fb__automatic_parallelism__autopar_costs__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, (MR_Integer) 4)));
              mdprof_fb__automatic_parallelism__autopar_costs__Var_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, (MR_Integer) 5)));
            }
          else
            {
              MR_String mdprof_fb__automatic_parallelism__autopar_costs__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, (MR_Integer) 0)));
              MR_String mdprof_fb__automatic_parallelism__autopar_costs__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, (MR_Integer) 1)));
              MR_String mdprof_fb__automatic_parallelism__autopar_costs__Var_15;
              MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_16;
              MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_17;

              mdprof_fb__automatic_parallelism__autopar_costs__Module_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, (MR_Integer) 2)));
              mdprof_fb__automatic_parallelism__autopar_costs__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, (MR_Integer) 3)));
              mdprof_fb__automatic_parallelism__autopar_costs__Var_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, (MR_Integer) 4)));
              mdprof_fb__automatic_parallelism__autopar_costs__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__Var_29, (MR_Integer) 5)));
            }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdprof_fb__automatic_parallelism__autopar_costs__FollowCallsAcrossModules_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Module_9));
          }
        }
        break;
      case (MR_Integer) 1:
        *mdprof_fb__automatic_parallelism__autopar_costs__FollowCallsAcrossModules_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0_1(
  MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure_arg)
{
  {
    MR_Box mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1;
    MR_Box mdprof_fb__automatic_parallelism__autopar_costs__closure = mdprof_fb__automatic_parallelism__autopar_costs__closure_arg;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__conv0_EarliestUse_12;

    {
      mdprof_fb__automatic_parallelism__autopar_costs__conv0_EarliestUse_12 = mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__closure, (MR_Integer) 7))));
    }
    mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1 = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__conv0_EarliestUse_12));
    return mdprof_fb__automatic_parallelism__autopar_costs__wrapper_arg_1;
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__AtomicGoal_8,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__RevGoalPath_9,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Info_10,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_12,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Map_0_18,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Map_19)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__IsCall_14;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__LazyUse_16;

    {
      program_representation_utils__atomic_goal_is_call_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__AtomicGoal_8, &mdprof_fb__automatic_parallelism__autopar_costs__IsCall_14);
    }
    if ((mdprof_fb__automatic_parallelism__autopar_costs__IsCall_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Float mdprof_fb__automatic_parallelism__autopar_costs__CostUntilUse_15;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_22;

        switch (mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mdprof_fb__automatic_parallelism__autopar_costs__CostUntilUse_15 = (MR_Float) 0.0000000000000000;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 0:
            mdprof_fb__automatic_parallelism__autopar_costs__CostUntilUse_15 = (MR_Float) 1.0000000000000000;
            break;
        }
        {
          mdprof_fb__automatic_parallelism__autopar_costs__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_22, 0) = MR_box_float(mdprof_fb__automatic_parallelism__autopar_costs__CostUntilUse_15);
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_22, 1) = MR_box_float((MR_Float) 1.0000000000000000);
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_22, 2) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11));
        }
        {
          mdprof_fb__automatic_parallelism__autopar_costs__LazyUse_16 = mercury__lazy__val_1_f_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Var_22)));
        }
      }
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__IsCall_14, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_20;

        {
          mdprof_fb__automatic_parallelism__autopar_costs__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_20, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_20, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0_1));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_20, 3) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Info_10));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_20, 4) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__RevGoalPath_9));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_20, 5) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Var_12));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_20, 6) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__Args_17));
          MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_20, 7) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__VarUseType_11));
        }
        {
          mdprof_fb__automatic_parallelism__autopar_costs__LazyUse_16 = mercury__lazy__delay_1_f_0((MR_Word) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0, mdprof_fb__automatic_parallelism__autopar_costs__Var_20);
        }
      }
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_1[0], mdprof_fb__automatic_parallelism__autopar_costs__Var_12, ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__LazyUse_16)), mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Map_0_18, mdprof_fb__automatic_parallelism__autopar_costs__STATE_VARIABLE_Map_19);
    }
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Cond_5,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Then_6,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Else_7,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Cost_8)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CondCost_9;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__ThenCost_10;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__ElseCost_11;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Coverage_12;
    MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Before_13;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__ThenElseCost_14;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Cond_5, (MR_Integer) 2)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_16;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_17;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Cond_5, (MR_Integer) 0)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Cond_5, (MR_Integer) 1)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_15, (MR_Integer) 0)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_15, (MR_Integer) 1)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_15, (MR_Integer) 2)));
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_25;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_26;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_27;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_28;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_29;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_30;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_31;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_32;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_33;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_34;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_35;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_36;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_37;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_38;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_39;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_40;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_41;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_42;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_43;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_44;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_45;

    mdprof_fb__automatic_parallelism__autopar_costs__Coverage_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_15, (MR_Integer) 3)));
    mdprof_fb__automatic_parallelism__autopar_costs__CondCost_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_15, (MR_Integer) 4)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_15, (MR_Integer) 5)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_15, (MR_Integer) 6)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_15, (MR_Integer) 7)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Then_6, (MR_Integer) 0)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Then_6, (MR_Integer) 1)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Then_6, (MR_Integer) 2)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_16, (MR_Integer) 0)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_16, (MR_Integer) 1)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_16, (MR_Integer) 2)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_16, (MR_Integer) 3)));
    mdprof_fb__automatic_parallelism__autopar_costs__ThenCost_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_16, (MR_Integer) 4)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_16, (MR_Integer) 5)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_16, (MR_Integer) 6)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_16, (MR_Integer) 7)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Else_7, (MR_Integer) 0)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Else_7, (MR_Integer) 1)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Else_7, (MR_Integer) 2)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 0)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 1)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 2)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 3)));
    mdprof_fb__automatic_parallelism__autopar_costs__ElseCost_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 4)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 5)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 6)));
    mdprof_fb__automatic_parallelism__autopar_costs__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 7)));
    {
      coverage__get_coverage_before_det_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Coverage_12, &mdprof_fb__automatic_parallelism__autopar_costs__Before_13);
    }
    {
      mdprof_fb__automatic_parallelism__autopar_costs__ThenElseCost_14 = measurements__add_goal_costs_branch_3_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Before_13, mdprof_fb__automatic_parallelism__autopar_costs__ThenCost_10, mdprof_fb__automatic_parallelism__autopar_costs__ElseCost_11);
    }
    {
      *mdprof_fb__automatic_parallelism__autopar_costs__Cost_8 = measurements__add_goal_costs_seq_2_f_0(mdprof_fb__automatic_parallelism__autopar_costs__CondCost_9, mdprof_fb__automatic_parallelism__autopar_costs__ThenElseCost_14);
    }
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

    if ((mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2 == (MR_Integer) 0);
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
          {
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
        else
          {
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__atomic_goal_cost_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2);
          }
      }
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Case_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 1)));

        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2 == (MR_Integer) 0);
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
          {
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
        else
          {
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9;
            MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__CaseCalls_10;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CasesCost_11;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__CaseCost_12;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Case_5, (MR_Integer) 2)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 2)));
            MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Var_15;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_16;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_17;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Case_5, (MR_Integer) 0)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Case_5, (MR_Integer) 1)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 0)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 1)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 0)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 1)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 2)));
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_25;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_26;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_27;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_28;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_29;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_30;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_31;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_32;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_33;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_34;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_35;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_36;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_37;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_38;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_39;

            mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 3)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 4)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 5)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 6)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 7)));
            {
              coverage__get_coverage_before_det_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9, &mdprof_fb__automatic_parallelism__autopar_costs__CaseCalls_10);
            }
            mdprof_fb__automatic_parallelism__autopar_costs__Var_15 = (mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2 - mdprof_fb__automatic_parallelism__autopar_costs__CaseCalls_10);
            {
              mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Cases_6, mdprof_fb__automatic_parallelism__autopar_costs__Var_15, &mdprof_fb__automatic_parallelism__autopar_costs__CasesCost_11);
            }
            mdprof_fb__automatic_parallelism__autopar_costs__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Case_5, (MR_Integer) 0)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Case_5, (MR_Integer) 1)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Case_5, (MR_Integer) 2)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_16, (MR_Integer) 0)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_16, (MR_Integer) 1)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_16, (MR_Integer) 2)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 0)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 1)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 2)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 3)));
            mdprof_fb__automatic_parallelism__autopar_costs__CaseCost_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 4)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 5)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 6)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_17, (MR_Integer) 7)));
            {
              *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__add_goal_costs_branch_3_f_0(mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__2_2, mdprof_fb__automatic_parallelism__autopar_costs__CaseCost_12, mdprof_fb__automatic_parallelism__autopar_costs__CasesCost_11);
            }
          }
      }
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_4_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Detism_5,
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Disjs_6,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Calls_7,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__Cost_8)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;
    MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Solutions_9;

    {
      mdprof_fb__automatic_parallelism__autopar_costs__Solutions_9 = mdbcomp__program_representation__detism_get_solutions_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Detism_5);
    }
    switch (mdprof_fb__automatic_parallelism__autopar_costs__Solutions_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_nondet_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Disjs_6, mdprof_fb__automatic_parallelism__autopar_costs__Calls_7, mdprof_fb__automatic_parallelism__autopar_costs__Cost_8);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 0:
        {
          mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_semidet_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Disjs_6, mdprof_fb__automatic_parallelism__autopar_costs__Calls_7, mdprof_fb__automatic_parallelism__autopar_costs__Cost_8);
        }
        break;
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_nondet_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Calls_2,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

    if ((mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__Calls_2 == (MR_Integer) 0);
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
          {
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
        else
          {
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__atomic_goal_cost_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Calls_2);
          }
      }
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Disjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9;
        MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Before_10;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 2)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 1)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 1)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 2)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_20;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_21;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_22;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_23;

        mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 3)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 4)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 5)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 6)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 7)));
        {
          coverage__get_coverage_before_det_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9, &mdprof_fb__automatic_parallelism__autopar_costs__Before_10);
        }
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__Before_10 == (MR_Integer) 0);
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
          {
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
        else
          {
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__DisjunctsCost_11;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__DisjunctCost_12;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_14;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_24;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_25;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_26;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_27;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_28;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_29;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_30;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_31;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_32;

            {
              mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_nondet_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Disjuncts_6, mdprof_fb__automatic_parallelism__autopar_costs__Calls_2, &mdprof_fb__automatic_parallelism__autopar_costs__DisjunctsCost_11);
            }
            mdprof_fb__automatic_parallelism__autopar_costs__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 0)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 1)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 2)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 0)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 1)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 2)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 3)));
            mdprof_fb__automatic_parallelism__autopar_costs__DisjunctCost_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 4)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 5)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 6)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 7)));
            {
              *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__add_goal_costs_seq_2_f_0(mdprof_fb__automatic_parallelism__autopar_costs__DisjunctCost_12, mdprof_fb__automatic_parallelism__autopar_costs__DisjunctsCost_11);
            }
          }
      }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_semidet_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Calls_2,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

    if ((mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__Calls_2 == (MR_Integer) 0);
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
          {
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
        else
          {
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__atomic_goal_cost_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Calls_2);
          }
      }
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Disjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9;
        MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Before_10;
        MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__After_11;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 2)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 1)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 1)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 2)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_25;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_26;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_27;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_28;

        mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 3)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 4)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 5)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 6)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_18, (MR_Integer) 7)));
        {
          coverage__get_coverage_before_and_after_det_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9, &mdprof_fb__automatic_parallelism__autopar_costs__Before_10, &mdprof_fb__automatic_parallelism__autopar_costs__After_11);
        }
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__Before_10 == (MR_Integer) 0);
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
          {
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
        else
          {
            MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Failures_13 = (mdprof_fb__automatic_parallelism__autopar_costs__Before_10 - mdprof_fb__automatic_parallelism__autopar_costs__After_11);
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__FailureCost_14;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__DisjunctCost_15;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__SuccessCost_16;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__BranchCost_17;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_19;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_29;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_30;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_31;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_32;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_33;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_34;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_35;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_36;
            MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_37;

            {
              mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_semidet_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Disjuncts_6, mdprof_fb__automatic_parallelism__autopar_costs__Failures_13, &mdprof_fb__automatic_parallelism__autopar_costs__FailureCost_14);
            }
            mdprof_fb__automatic_parallelism__autopar_costs__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 0)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 1)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Disjunct_5, (MR_Integer) 2)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_19, (MR_Integer) 0)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_19, (MR_Integer) 1)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_19, (MR_Integer) 2)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_19, (MR_Integer) 3)));
            mdprof_fb__automatic_parallelism__autopar_costs__DisjunctCost_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_19, (MR_Integer) 4)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_19, (MR_Integer) 5)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_19, (MR_Integer) 6)));
            mdprof_fb__automatic_parallelism__autopar_costs__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_19, (MR_Integer) 7)));
            {
              mdprof_fb__automatic_parallelism__autopar_costs__SuccessCost_16 = measurements__atomic_goal_cost_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__After_11);
            }
            {
              mdprof_fb__automatic_parallelism__autopar_costs__BranchCost_17 = measurements__add_goal_costs_branch_3_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Before_10, mdprof_fb__automatic_parallelism__autopar_costs__FailureCost_14, mdprof_fb__automatic_parallelism__autopar_costs__SuccessCost_16);
            }
            {
              *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__add_goal_costs_seq_2_f_0(mdprof_fb__automatic_parallelism__autopar_costs__DisjunctCost_15, mdprof_fb__automatic_parallelism__autopar_costs__BranchCost_17);
            }
          }
      }
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(
  MR_Word mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1,
  MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__Calls_2,
  MR_Word * mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3)
{
  {
    MR_bool mdprof_fb__automatic_parallelism__autopar_costs__succeeded;

    if ((mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mdprof_fb__automatic_parallelism__autopar_costs__succeeded = (mdprof_fb__automatic_parallelism__autopar_costs__Calls_2 == (MR_Integer) 0);
        if (mdprof_fb__automatic_parallelism__autopar_costs__succeeded)
          {
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
          }
        else
          {
            *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__atomic_goal_cost_1_f_0(mdprof_fb__automatic_parallelism__autopar_costs__Calls_2);
          }
      }
    else
      {
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Conjuncts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9;
        MR_Integer mdprof_fb__automatic_parallelism__autopar_costs__After_10;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__ConjunctsCost_11;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__ConjunctCost_12;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5, (MR_Integer) 2)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_14;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5, (MR_Integer) 1)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 0)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 1)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 2)));
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_20;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_21;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_22;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_23;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_24;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_25;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_26;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_27;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_28;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_29;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_30;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_31;
        MR_Word mdprof_fb__automatic_parallelism__autopar_costs__Var_32;

        mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 3)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 4)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 5)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 6)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_13, (MR_Integer) 7)));
        {
          coverage__get_coverage_after_det_2_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Coverage_9, &mdprof_fb__automatic_parallelism__autopar_costs__After_10);
        }
        {
          mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(mdprof_fb__automatic_parallelism__autopar_costs__Conjuncts_6, mdprof_fb__automatic_parallelism__autopar_costs__After_10, &mdprof_fb__automatic_parallelism__autopar_costs__ConjunctsCost_11);
        }
        mdprof_fb__automatic_parallelism__autopar_costs__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5, (MR_Integer) 0)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5, (MR_Integer) 1)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Conjunct_5, (MR_Integer) 2)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 0)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 1)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 2)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 3)));
        mdprof_fb__automatic_parallelism__autopar_costs__ConjunctCost_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 4)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 5)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 6)));
        mdprof_fb__automatic_parallelism__autopar_costs__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_fb__automatic_parallelism__autopar_costs__Var_14, (MR_Integer) 7)));
        {
          *mdprof_fb__automatic_parallelism__autopar_costs__HeadVar__3_3 = measurements__add_goal_costs_seq_2_f_0(mdprof_fb__automatic_parallelism__autopar_costs__ConjunctCost_12, mdprof_fb__automatic_parallelism__autopar_costs__ConjunctsCost_11);
        }
      }
  }
}

void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_type_tables(void)
{
}

void mercury__mdprof_fb__automatic_parallelism__autopar_costs__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_fb__automatic_parallelism__autopar_costs__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mdprof_fb.automatic_parallelism.autopar_costs. */
