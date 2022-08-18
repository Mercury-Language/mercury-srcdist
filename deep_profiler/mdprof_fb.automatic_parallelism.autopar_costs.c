/*
** Automatically generated from `autopar_costs.m'
** by the Mercury compiler,
** version rotd-2022-08-18
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


// :- module mdprof_fb.automatic_parallelism.autopar_costs.
// :- implementation.

/*
INIT mercury__mdprof_fb__automatic_parallelism__autopar_costs__init
ENDINIT
*/

#include "mdprof_fb.automatic_parallelism.autopar_costs.mih"


#include "analysis_utils.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "coverage.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "exclude.mih"
#include "float.mih"
#include "int.mih"
#include "io.mih"
#include "lazy.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "message.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "report.mih"
#include "require.mih"
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
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_types.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_costs__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_costs__maybe__pti_maybe_1__plain_measurements__type_ctor_info_recursion_depth_0;

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_8_p_0(
  MR_Word Info_9,
  MR_Word RecursionType_10,
  MR_Word MaybeCurDepth_11,
  MR_Word VarUseType_12,
  MR_Float Cost_13,
  MR_Word CSDPtr_14,
  MR_Integer ArgNum_15,
  MR_Word * Use_16);

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0(
  MR_Word Info_7,
  MR_Word RevGoalPath_8,
  MR_Integer Var_9,
  MR_Word Args_10,
  MR_Word VarUseType_11);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0(
  MR_Word Info_8,
  MR_Integer Var_9,
  MR_Word Args_10,
  MR_Word CostAndCallee_11,
  MR_Word Cost_12,
  MR_Word VarUseType_13,
  MR_Word * Uses_14);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__find_earliest_use_3_p_0(
  MR_Word CurEarliest_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_nondet_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Calls_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_semidet_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Calls_2,
  MR_Word * HeadVar__3_3);


static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_1[2][2];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_2[1][9];

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_3[1][11];




static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__lazy__lazy__type_ctor_info_lazy_1)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_2[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_types__mdprof_fb__automatic_parallelism__autopar_types__type_ctor_info_implicit_parallelism_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_type_0)),
    ((MR_Box) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0))
  },
};

static /* final */ const MR_Box mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_3[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_costs__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdprof_fb__automatic_parallelism__autopar_costs__maybe__pti_maybe_1__plain_measurements__type_ctor_info_recursion_depth_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_recursion_depth_0)
  }
};

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_8_p_0(
  MR_Word Info_9,
  MR_Word RecursionType_10,
  MR_Word MaybeCurDepth_11,
  MR_Word VarUseType_12,
  MR_Float Cost_13,
  MR_Word CSDPtr_14,
  MR_Integer ArgNum_15,
  MR_Word * Use_16)
{
  MR_Word Deep_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0))));
  MR_Word CliquePtr_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 3))));
  MR_Word FollowCallsAcrossModules_19;
  MR_Word VarUseOptions_20;
  MR_Word MaybeUse_21;
  MR_Word Var_26;

  mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_p_0(Info_9, &FollowCallsAcrossModules_19);
  {
    VarUseOptions_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), VarUseOptions_20, 0) = ((MR_Box) (Deep_17));
    MR_hl_field(MR_mktag(0), VarUseOptions_20, 1) = ((MR_Box) (FollowCallsAcrossModules_19));
    MR_hl_field(MR_mktag(0), VarUseOptions_20, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_12));
  }
  Var_26 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0));
  var_use_analysis__get_call_site_dynamic_var_use_info_rec_level_9_p_1(CliquePtr_18, CSDPtr_14, ArgNum_15, RecursionType_10, MaybeCurDepth_11, Cost_13, Var_26, VarUseOptions_20, &MaybeUse_21);
  if (((MR_tag((MR_Word) MaybeUse_21)) == (MR_Integer) 1))
  {
    MR_String Error_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeUse_21, (MR_Integer) 0))));
    MR_Word Messages_23;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Stderr_25;

    var_use_analysis__pessimistic_var_use_info_3_p_0(VarUseType_12, Cost_13, Use_16);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) (CSDPtr_14));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Error_22));
    }
    Var_29 = mercury__cord__empty_0_f_0((MR_Word) (&message__message__type_ctor_info_message_0));
    message__append_message_4_p_0(Var_27, Var_28, Var_29, &Messages_23);
    mercury__io__stderr_stream_3_p_0(&Stderr_25);
    message__write_out_messages_4_p_0(Stderr_25, Messages_23);
  }
  else
    *Use_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeUse_21, (MR_Integer) 0))));
}

static MR_Word MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0(
  MR_Word Info_7,
  MR_Word RevGoalPath_8,
  MR_Integer Var_9,
  MR_Word Args_10,
  MR_Word VarUseType_11)
{
  MR_bool succeeded;
  MR_Word EarliestUse_12;
  MR_Word CliquePtr_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 3))));
  MR_Word CostAndCallee_14;
  MR_Word Cost_16;
  MR_Word Uses_17;
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 4))));
  MR_Box conv0_CostAndCallee_14;
  MR_Word RecCost_15;
  MR_Word TypeCtorInfo_71_71;
  MR_Word Var_24;
  MR_Box conv1_RecCost_15;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_1[1]), Var_36, ((MR_Box) (RevGoalPath_8)), &conv0_CostAndCallee_14);
  CostAndCallee_14 = ((MR_Word) (conv0_CostAndCallee_14));
  succeeded = analysis_utils__cost_and_callees_is_recursive_2_p_0(CliquePtr_13, CostAndCallee_14);
  if (succeeded)
  {
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 5))));
    TypeCtorInfo_71_71 = (MR_Word) (&measurements__measurements__type_ctor_info_cs_cost_csq_0);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), TypeCtorInfo_71_71, Var_24, ((MR_Box) (RevGoalPath_8)), &conv1_RecCost_15);
    if (succeeded)
    {
      RecCost_15 = ((MR_Word) (conv1_RecCost_15));
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
    Cost_16 = RecCost_15;
  else
    Cost_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CostAndCallee_14, (MR_Integer) 0))));
  mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0(Info_7, Var_9, Args_10, CostAndCallee_14, Cost_16, VarUseType_11, &Uses_17);
  switch (VarUseType_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((Uses_17 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__require__unexpected_2_p_0((MR_String) "function \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy\'/5", (MR_String) "No uses");
      else
      {
        MR_Word FirstUse_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uses_17, (MR_Integer) 0))));
        MR_Word OtherUses_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uses_17, (MR_Integer) 1))));

        mdprof_fb__automatic_parallelism__autopar_costs__find_earliest_use_3_p_0(FirstUse_18, OtherUses_19, &EarliestUse_12);
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 0:
      if ((Uses_17 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__require__unexpected_2_p_0((MR_String) "function \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy\'/5", (MR_String) "No uses");
      else
      {
        MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uses_17, (MR_Integer) 1))));
        MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Uses_17, (MR_Integer) 0))));

        if ((Var_72 == (MR_Word) ((MR_Unsigned) 0U)))
          EarliestUse_12 = Var_73;
        else
          mercury__require__unexpected_2_p_0((MR_String) "function \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy\'/5", (MR_String) "Too many uses");
      }
      break;
  }
  return EarliestUse_12;
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Use_16;

  mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_2_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), MR_unbox_float((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Integer) (wrapper_arg_1)), &conv1_Use_16);
  *wrapper_arg_2 = ((MR_Box) (conv1_Use_16));
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0(
  MR_Word Info_8,
  MR_Integer Var_9,
  MR_Word Args_10,
  MR_Word CostAndCallee_11,
  MR_Word Cost_12,
  MR_Word VarUseType_13,
  MR_Word * Uses_14)
{
  MR_bool succeeded;
  MR_Float Var_28;

  Var_28 = measurements__cs_cost_get_calls_1_f_0(Cost_12);
  succeeded = (((MR_Float) 0.0000000000000000) < Var_28);
  if (succeeded)
  {
    MR_Float CostPercall_15;
    MR_Word ArgNums_16;

    CostPercall_15 = measurements__cs_cost_get_percall_1_f_0(Cost_12);
    mercury__list__member_indexes0_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Var_9)), Args_10, &ArgNums_16);
    if ((ArgNums_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (VarUseType_13 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Var_34;

        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_34, 0) = MR_box_float((MR_Float) 0.0000000000000000);
          MR_hl_field(MR_mktag(0), Var_34, 1) = MR_box_float(CostPercall_15);
          MR_hl_field(MR_mktag(0), Var_34, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Uses_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_String Var_38;

        Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "Var use type most be consumption if ", (MR_String) "\\+ member(Var, Args)");
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy_arg\'/7", Var_38);
          return;
        }
      }
    }
    else
    {
      MR_Word HigherOrder_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CostAndCallee_11, (MR_Integer) 3))) & (MR_Integer) 1);

      switch (HigherOrder_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Callee_22;
            MR_Word CSDPtr_23;
            MR_Word RecursionType_24;
            MR_Word MaybeCurDepth_25;
            MR_Word Uses0_26;
            MR_Word Var_33;
            MR_Word CalleePrime_21;
            MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CostAndCallee_11, (MR_Integer) 2))));
            MR_Box conv0_CalleePrime_21;

            succeeded = mercury__set__is_singleton_2_p_0((MR_Word) (&analysis_utils__analysis_utils__type_ctor_info_callee_0), Var_30, &conv0_CalleePrime_21);
            if (succeeded)
            {
              CalleePrime_21 = ((MR_Word) (conv0_CalleePrime_21));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              Callee_22 = CalleePrime_21;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdprof_fb.automatic_parallelism.autopar_costs.compute_var_use_lazy_arg\'/7", (MR_String) "first-order call site has wrong number of CSDs");
                return;
              }
            CSDPtr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Callee_22, (MR_Integer) 1))));
            RecursionType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 9))));
            mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_1(RecursionType_24, &MaybeCurDepth_25);
            {
              Var_33 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_3[0]));
              MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_arg_7_p_0_1));
              MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Info_8));
              MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (RecursionType_24));
              MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (MaybeCurDepth_25));
              MR_hl_field(MR_mktag(0), Var_33, 6) = ((MR_Box) (VarUseType_13));
              MR_hl_field(MR_mktag(0), Var_33, 7) = MR_box_float(CostPercall_15);
              MR_hl_field(MR_mktag(0), Var_33, 8) = ((MR_Box) (CSDPtr_23));
            }
            mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0), Var_33, ArgNums_16, &Uses0_26);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0), Uses0_26, Uses_14);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Use_20;

            var_use_analysis__pessimistic_var_use_info_3_p_0(VarUseType_13, CostPercall_15, &Use_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Uses_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Use_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
    }
  }
  else
  {
    MR_Word Use_43;

    var_use_analysis__pessimistic_var_use_info_3_p_0(VarUseType_13, (MR_Float) 0.0000000000000000, &Use_43);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Uses_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Use_43));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__find_earliest_use_3_p_0(
  MR_Word CurEarliest_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = CurEarliest_1;
    else
    {
      MR_Word HeadVarUse_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TailVarUses_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Float TimeCur_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), CurEarliest_1, (MR_Integer) 0)));
      MR_Float TimeHead_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVarUse_6, (MR_Integer) 0)));
      MR_Word NextEarliest_11;
      MR_Word next_value_of_CurEarliest_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (TimeCur_9 < TimeHead_10);
      if (succeeded)
        NextEarliest_11 = CurEarliest_1;
      else
        NextEarliest_11 = HeadVarUse_6;
      // direct tailcall eliminated
      ;
      next_value_of_CurEarliest_1 = NextEarliest_11;
      next_value_of_HeadVar__2_2 = TailVarUses_7;
      CurEarliest_1 = next_value_of_CurEarliest_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_1(
  MR_Word RecursionType_3,
  MR_Word * MaybeDepth_4)
{
  switch (MR_tag((MR_Word) RecursionType_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_15;

        Var_15 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeDepth_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_17;

        Var_17 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 2.0000000000000000);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeDepth_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
        }
      }
      break;
    case (MR_Integer) 2:
      *MaybeDepth_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      *MaybeDepth_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__recursion_type_get_interesting_parallelisation_depth_2_p_0(
  MR_Word RecursionType_3,
  MR_Word * MaybeDepth_4)
{
  if ((RecursionType_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_15;

    Var_15 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDepth_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
    }
  }
  else
  {
    MR_Word Var_17;

    Var_17 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 2.0000000000000000);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDepth_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
    }
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__implicit_par_info_intermodule_var_use_2_p_0(
  MR_Word Info_3,
  MR_Word * FollowCallsAcrossModules_4)
{
  MR_Word IntermoduleVarUse_5;
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 2))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 11))));

  IntermoduleVarUse_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))) & (MR_Integer) 1);
  switch (IntermoduleVarUse_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Module_9;

        if (((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0))
          Module_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 2))));
        else
          Module_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 2))));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *FollowCallsAcrossModules_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_9));
        }
      }
      break;
    case (MR_Integer) 1:
      *FollowCallsAcrossModules_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

static MR_Box MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0_1(
  MR_Box closure_arg)
{
  MR_Box wrapper_arg_1;
  MR_Box closure = closure_arg;
  MR_Word conv0_EarliestUse_12;

  conv0_EarliestUse_12 = mdprof_fb__automatic_parallelism__autopar_costs__compute_var_use_lazy_5_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))));
  wrapper_arg_1 = ((MR_Box) (conv0_EarliestUse_12));
  return wrapper_arg_1;
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0(
  MR_Word AtomicGoal_8,
  MR_Word RevGoalPath_9,
  MR_Word Info_10,
  MR_Word VarUseType_11,
  MR_Integer Var_12,
  MR_Word STATE_VARIABLE_Map_0_18,
  MR_Word * STATE_VARIABLE_Map_19)
{
  MR_Word IsCall_14;
  MR_Word LazyUse_16;

  program_representation_utils__atomic_goal_is_call_2_p_0(AtomicGoal_8, &IsCall_14);
  if ((IsCall_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Float CostUntilUse_15;
    MR_Word Var_20;

    switch (VarUseType_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CostUntilUse_15 = (MR_Float) 0.0000000000000000;
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 0:
        CostUntilUse_15 = (MR_Float) 1.0000000000000000;
        break;
    }
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = MR_box_float(CostUntilUse_15);
      MR_hl_field(MR_mktag(0), Var_20, 1) = MR_box_float((MR_Float) 1.0000000000000000);
      MR_hl_field(MR_mktag(0), Var_20, 2) = (MR_Box) ((MR_Unsigned) (VarUseType_11));
    }
    LazyUse_16 = mercury__lazy__val_1_f_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0), ((MR_Box) (Var_20)));
  }
  else
  {
    MR_Word Args_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IsCall_14, (MR_Integer) 0))));
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (mdprof_fb__automatic_parallelism__autopar_costs__atomic_goal_build_use_map_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (Info_10));
      MR_hl_field(MR_mktag(0), Var_22, 4) = ((MR_Box) (RevGoalPath_9));
      MR_hl_field(MR_mktag(0), Var_22, 5) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), Var_22, 6) = ((MR_Box) (Args_17));
      MR_hl_field(MR_mktag(0), Var_22, 7) = ((MR_Box) (VarUseType_11));
    }
    LazyUse_16 = mercury__lazy__delay_1_f_0((MR_Word) (&var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0), Var_22);
  }
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&mdprof_fb__automatic_parallelism__autopar_costs_scalar_common_1[0]), Var_12, ((MR_Box) (LazyUse_16)), STATE_VARIABLE_Map_0_18, STATE_VARIABLE_Map_19);
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__ite_calc_cost_4_p_0(
  MR_Word Cond_5,
  MR_Word Then_6,
  MR_Word Else_7,
  MR_Word * Cost_8)
{
  MR_Word CondCost_9;
  MR_Word ThenCost_10;
  MR_Word ElseCost_11;
  MR_Word Coverage_12;
  MR_Integer Before_13;
  MR_Word ThenElseCost_14;
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_5, (MR_Integer) 2))));
  MR_Word Var_16;
  MR_Word Var_17;

  Coverage_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 3))));
  CondCost_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 4))));
  Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then_6, (MR_Integer) 2))));
  ThenCost_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 4))));
  Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Else_7, (MR_Integer) 2))));
  ElseCost_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 4))));
  coverage__get_coverage_before_det_2_p_0(Coverage_12, &Before_13);
  ThenElseCost_14 = measurements__add_goal_costs_branch_3_f_0(Before_13, ThenCost_10, ElseCost_11);
  *Cost_8 = measurements__add_goal_costs_seq_2_f_0(CondCost_9, ThenElseCost_14);
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__2_2 == (MR_Integer) 0);
    if (succeeded)
      *HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
    else
      *HeadVar__3_3 = measurements__atomic_goal_cost_1_f_0(HeadVar__2_2);
  }
  else
  {
    MR_Word Case_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

    succeeded = (HeadVar__2_2 == (MR_Integer) 0);
    if (succeeded)
      *HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
    else
    {
      MR_Word Coverage_9;
      MR_Integer CaseCalls_10;
      MR_Word CasesCost_11;
      MR_Word CaseCost_12;
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_5, (MR_Integer) 2))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 2))));
      MR_Integer Var_15;
      MR_Word Var_16;
      MR_Word Var_17;

      Coverage_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 3))));
      coverage__get_coverage_before_det_2_p_0(Coverage_9, &CaseCalls_10);
      Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) CaseCalls_10);
      mdprof_fb__automatic_parallelism__autopar_costs__switch_calc_cost_3_p_0(Cases_6, Var_15, &CasesCost_11);
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_5, (MR_Integer) 2))));
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 2))));
      CaseCost_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 4))));
      *HeadVar__3_3 = measurements__add_goal_costs_branch_3_f_0(HeadVar__2_2, CaseCost_12, CasesCost_11);
    }
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_4_p_0(
  MR_Word Detism_5,
  MR_Word Disjs_6,
  MR_Integer Calls_7,
  MR_Word * Cost_8)
{
  MR_Word Solutions_9;

  Solutions_9 = mdbcomp__program_representation__detism_get_solutions_1_f_0(Detism_5);
  switch (Solutions_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_nondet_3_p_0(Disjs_6, Calls_7, Cost_8);
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_semidet_3_p_0(Disjs_6, Calls_7, Cost_8);
      break;
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_nondet_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Calls_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (Calls_2 == (MR_Integer) 0);
    if (succeeded)
      *HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
    else
      *HeadVar__3_3 = measurements__atomic_goal_cost_1_f_0(Calls_2);
  }
  else
  {
    MR_Word Disjunct_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Disjuncts_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Coverage_9;
    MR_Integer Before_10;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Disjunct_5, (MR_Integer) 2))));

    Coverage_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 3))));
    coverage__get_coverage_before_det_2_p_0(Coverage_9, &Before_10);
    succeeded = (Before_10 == (MR_Integer) 0);
    if (succeeded)
      *HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
    else
    {
      MR_Word DisjunctsCost_11;
      MR_Word DisjunctCost_12;
      MR_Word Var_14;

      mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_nondet_3_p_0(Disjuncts_6, Calls_2, &DisjunctsCost_11);
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Disjunct_5, (MR_Integer) 2))));
      DisjunctCost_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 4))));
      *HeadVar__3_3 = measurements__add_goal_costs_seq_2_f_0(DisjunctCost_12, DisjunctsCost_11);
    }
  }
}

static void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_semidet_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Calls_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (Calls_2 == (MR_Integer) 0);
    if (succeeded)
      *HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
    else
      *HeadVar__3_3 = measurements__atomic_goal_cost_1_f_0(Calls_2);
  }
  else
  {
    MR_Word Disjunct_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Disjuncts_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Coverage_9;
    MR_Integer Before_10;
    MR_Integer After_11;
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Disjunct_5, (MR_Integer) 2))));

    Coverage_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 3))));
    coverage__get_coverage_before_and_after_det_3_p_0(Coverage_9, &Before_10, &After_11);
    succeeded = (Before_10 == (MR_Integer) 0);
    if (succeeded)
      *HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
    else
    {
      MR_Integer Failures_13 = (MR_Integer) ((MR_Unsigned) Before_10 - (MR_Unsigned) After_11);
      MR_Word FailureCost_14;
      MR_Word DisjunctCost_15;
      MR_Word SuccessCost_16;
      MR_Word BranchCost_17;
      MR_Word Var_19;

      mdprof_fb__automatic_parallelism__autopar_costs__disj_calc_cost_semidet_3_p_0(Disjuncts_6, Failures_13, &FailureCost_14);
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Disjunct_5, (MR_Integer) 2))));
      DisjunctCost_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 4))));
      SuccessCost_16 = measurements__atomic_goal_cost_1_f_0(After_11);
      BranchCost_17 = measurements__add_goal_costs_branch_3_f_0(Before_10, FailureCost_14, SuccessCost_16);
      *HeadVar__3_3 = measurements__add_goal_costs_seq_2_f_0(DisjunctCost_15, BranchCost_17);
    }
  }
}

void MR_CALL 
mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Calls_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (Calls_2 == (MR_Integer) 0);
    if (succeeded)
      *HeadVar__3_3 = measurements__dead_goal_cost_0_f_0();
    else
      *HeadVar__3_3 = measurements__atomic_goal_cost_1_f_0(Calls_2);
  }
  else
  {
    MR_Word Conjunct_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Conjuncts_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Coverage_9;
    MR_Integer After_10;
    MR_Word ConjunctsCost_11;
    MR_Word ConjunctCost_12;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conjunct_5, (MR_Integer) 2))));
    MR_Word Var_14;

    Coverage_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 3))));
    coverage__get_coverage_after_det_2_p_0(Coverage_9, &After_10);
    mdprof_fb__automatic_parallelism__autopar_costs__conj_calc_cost_3_p_0(Conjuncts_6, After_10, &ConjunctsCost_11);
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conjunct_5, (MR_Integer) 2))));
    ConjunctCost_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 4))));
    *HeadVar__3_3 = measurements__add_goal_costs_seq_2_f_0(ConjunctCost_12, ConjunctsCost_11);
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

// :- end_module mdprof_fb.automatic_parallelism.autopar_costs.
