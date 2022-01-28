/*
** Automatically generated from `saved_vars.m'
** by the Mercury compiler,
** version rotd-2022-01-28
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


// :- module ll_backend.saved_vars.
// :- implementation.

/*
INIT mercury__ll_backend__saved_vars__init
ENDINIT
*/

#include "ll_backend.saved_vars.mih"


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
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
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
#include "check_hlds.recompute_instmap_deltas.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s {
  MR_bool ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded;
  MR_Word ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Features_27;
  jmp_buf ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__commit_0;
  MR_Word ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28;
  MR_Box ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__conv0_Feature_28;
};


static const MR_FA_TypeInfo_Struct1 ll_backend__saved_vars__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__saved_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__saved_vars__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo ll_backend__saved_vars__ll_backend__saved_vars__field_types_slot_info_0_0[4];

static const MR_DuArgLocn ll_backend__saved_vars__ll_backend__saved_vars__field_locns_slot_info_0_0[4];

static const MR_DuFunctorDesc ll_backend__saved_vars__ll_backend__saved_vars__du_functor_desc_slot_info_0_0;

static const MR_DuFunctorDescPtr ll_backend__saved_vars__ll_backend__saved_vars__du_stag_ordered_slot_info_0_0[1];

static const MR_DuPtagLayout ll_backend__saved_vars__ll_backend__saved_vars__du_ptag_ordered_slot_info_0[1];

static const MR_DuFunctorDescPtr ll_backend__saved_vars__ll_backend__saved_vars__du_name_ordered_slot_info_0[1];

static const MR_Integer ll_backend__saved_vars__ll_backend__saved_vars__functor_number_map_slot_info_0[1];

static void MR_CALL 
ll_backend__saved_vars____Compare____slot_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__saved_vars____Unify____slot_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__saved_vars__push_into_goal_rename_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word Construct_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_SlotInfo_0_19,
  MR_Word * STATE_VARIABLE_SlotInfo_20);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Goals_2,
  MR_Word Construct_3,
  MR_Word HeadVar__4_4,
  MR_Word IsNonLocal_5,
  MR_Word STATE_VARIABLE_SlotInfo_0_6,
  MR_Word * STATE_VARIABLE_SlotInfo_7);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word NonLocals_3,
  MR_Word STATE_VARIABLE_SlotInfo_0_4,
  MR_Word * STATE_VARIABLE_SlotInfo_5);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_switch_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SlotInfo_0_3,
  MR_Word * STATE_VARIABLE_SlotInfo_4);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SlotInfo_0_3,
  MR_Word * STATE_VARIABLE_SlotInfo_4);

static void MR_CALL 
ll_backend__saved_vars__push_into_cases_rename_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_SlotInfo_0_5,
  MR_Word * STATE_VARIABLE_SlotInfo_6);

static void MR_CALL 
ll_backend__saved_vars__push_into_goals_rename_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_SlotInfo_0_5,
  MR_Word * STATE_VARIABLE_SlotInfo_6);

static void MR_CALL 
ll_backend__saved_vars__push_into_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word Construct_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_SlotInfo_0_17,
  MR_Word * STATE_VARIABLE_SlotInfo_18);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_SlotInfo_0_56,
  MR_Word * STATE_VARIABLE_SlotInfo_57);

static void MR_CALL 
ll_backend__saved_vars__saved_vars_rename_var_5_p_0(
  MR_Word Var_6,
  MR_Word * NewVar_7,
  MR_Word * Substitution_8,
  MR_Word STATE_VARIABLE_SlotInfo_0_18,
  MR_Word * STATE_VARIABLE_SlotInfo_19);

static MR_Word MR_CALL 
ll_backend__saved_vars__can_push_2_f_0(
  MR_Word Var_4,
  MR_Word Goal_5);

static void MR_CALL 
ll_backend__saved_vars__skip_constant_constructs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__saved_vars____Unify____slot_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__saved_vars____Compare____slot_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__saved_vars_scalar_common_1[2][2];




static /* final */ const MR_Box ll_backend__saved_vars_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 ll_backend__saved_vars__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__saved_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__saved_vars__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&ll_backend__saved_vars__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo ll_backend__saved_vars__ll_backend__saved_vars__field_types_slot_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&ll_backend__saved_vars__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&ll_backend__saved_vars__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_DuArgLocn ll_backend__saved_vars__ll_backend__saved_vars__field_locns_slot_info_0_0[4] = {
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
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ll_backend__saved_vars__ll_backend__saved_vars__du_functor_desc_slot_info_0_0 = {
  (MR_String) "slot_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__saved_vars__ll_backend__saved_vars__field_types_slot_info_0_0,
  NULL,
  ll_backend__saved_vars__ll_backend__saved_vars__field_locns_slot_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__saved_vars__ll_backend__saved_vars__du_stag_ordered_slot_info_0_0[1] = {
  &ll_backend__saved_vars__ll_backend__saved_vars__du_functor_desc_slot_info_0_0
};

static const MR_DuPtagLayout ll_backend__saved_vars__ll_backend__saved_vars__du_ptag_ordered_slot_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__saved_vars__ll_backend__saved_vars__du_stag_ordered_slot_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__saved_vars__ll_backend__saved_vars__du_name_ordered_slot_info_0[1] = {
  &ll_backend__saved_vars__ll_backend__saved_vars__du_functor_desc_slot_info_0_0
};

static const MR_Integer ll_backend__saved_vars__ll_backend__saved_vars__functor_number_map_slot_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__saved_vars__ll_backend__saved_vars__type_ctor_info_slot_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__saved_vars____Unify____slot_info_0_0_10001)),
  ((MR_Box) (ll_backend__saved_vars____Compare____slot_info_0_0_10001)),
  (MR_String) "ll_backend.saved_vars",
  (MR_String) "slot_info",
  {     ll_backend__saved_vars__ll_backend__saved_vars__du_name_ordered_slot_info_0 },
  {     ll_backend__saved_vars__ll_backend__saved_vars__du_ptag_ordered_slot_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ll_backend__saved_vars__ll_backend__saved_vars__functor_number_map_slot_info_0,

};

static void MR_CALL 
ll_backend__saved_vars____Compare____slot_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&ll_backend__saved_vars_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Integer Var_21 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_22 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_21 < Var_22);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_21 > Var_22);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__saved_vars____Unify____slot_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeCtorInfo_14_14;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__saved_vars_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeCtorInfo_14_14 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
        succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__saved_vars__saved_vars_proc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ProcInfo_0_35,
  MR_Word * STATE_VARIABLE_ProcInfo_36,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38)
{
  {
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Globals_11;
    MR_Word PredInfo_12;
    MR_Word TypeInfoLiveness_13;
    MR_Word Goal0_14;
    MR_Word Varset0_15;
    MR_Word VarTypes0_16;
    MR_Word RttiVarMaps0_17;
    MR_Word SlotInfo0_18;
    MR_Word Goal1_19;
    MR_Word SlotInfo_20;
    MR_Word Varset1_21;
    MR_Word VarTypes1_22;
    MR_Word RttiVarMaps1_23;
    MR_Word HeadVars_24;
    MR_Word Goal2_26;
    MR_Word Varset_27;
    MR_Word VarTypes_28;
    MR_Word RttiVarMaps_29;
    MR_Word InstMap0_30;
    MR_Word InstVarSet_31;
    MR_Word Goal_32;
    MR_Word STATE_VARIABLE_ProcInfo_66_66;
    MR_Word STATE_VARIABLE_ProcInfo_67_67;
    MR_Word STATE_VARIABLE_ProcInfo_68_68;
    MR_Word _Warnings_25;

    hlds__passes_aux__write_proc_progress_message_6_p_0(STATE_VARIABLE_ModuleInfo_0_37, (MR_String) "Minimizing saved vars in", PredId_6, ProcId_7);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &Globals_11);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_37, PredId_6, &PredInfo_12);
    hlds__hlds_pred__body_should_use_typeinfo_liveness_3_p_0(PredInfo_12, Globals_11, &TypeInfoLiveness_13);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_35, &Goal0_14);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_35, &Varset0_15);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_35, &VarTypes0_16);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_0_35, &RttiVarMaps0_17);
    {
      SlotInfo0_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SlotInfo0_18, 0) = ((MR_Box) (Varset0_15));
      MR_hl_field(MR_mktag(0), SlotInfo0_18, 1) = ((MR_Box) (VarTypes0_16));
      MR_hl_field(MR_mktag(0), SlotInfo0_18, 2) = ((MR_Box) (RttiVarMaps0_17));
      MR_hl_field(MR_mktag(0), SlotInfo0_18, 3) = (MR_Box) ((MR_Unsigned) (TypeInfoLiveness_13));
    }
    ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Goal0_14, &Goal1_19, SlotInfo0_18, &SlotInfo_20);
    Varset1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotInfo_20, (MR_Integer) 0))));
    VarTypes1_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotInfo_20, (MR_Integer) 1))));
    RttiVarMaps1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SlotInfo_20, (MR_Integer) 2))));
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_35, &HeadVars_24);
    hlds__quantification__implicitly_quantify_clause_body_general_11_p_0((MR_Integer) 1, HeadVars_24, &_Warnings_25, Goal1_19, &Goal2_26, Varset1_21, &Varset_27, VarTypes1_22, &VarTypes_28, RttiVarMaps1_23, &RttiVarMaps_29);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ProcInfo_0_35, &InstMap0_30);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(STATE_VARIABLE_ProcInfo_0_35, &InstVarSet_31);
    check_hlds__recompute_instmap_deltas__recompute_instmap_delta_8_p_0((MR_Integer) 1, Goal2_26, &Goal_32, VarTypes_28, InstVarSet_31, InstMap0_30, STATE_VARIABLE_ModuleInfo_0_37, STATE_VARIABLE_ModuleInfo_38);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_32, STATE_VARIABLE_ProcInfo_0_35, &STATE_VARIABLE_ProcInfo_66_66);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(Varset_27, STATE_VARIABLE_ProcInfo_66_66, &STATE_VARIABLE_ProcInfo_67_67);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_28, STATE_VARIABLE_ProcInfo_67_67, &STATE_VARIABLE_ProcInfo_68_68);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_29, STATE_VARIABLE_ProcInfo_68_68, STATE_VARIABLE_ProcInfo_36);
  }
}

static void MR_CALL 
ll_backend__saved_vars__push_into_goal_rename_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word Construct_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_SlotInfo_0_19,
  MR_Word * STATE_VARIABLE_SlotInfo_20)
{
  {
    MR_bool succeeded;
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));
    MR_Word NonLocals_14;

    NonLocals_14 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_13);
    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_14, Var_10);
    if (succeeded)
    {
      MR_Word NewVar_15;
      MR_Word Subst_16;
      MR_Word NewConstruct_17;
      MR_Word Goal1_18;
      MR_Word STATE_VARIABLE_SlotInfo_21_21;
      MR_Word Varset0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_19, (MR_Integer) 0))));
      MR_Word VarTypes0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_19, (MR_Integer) 1))));
      MR_Word RttiVarMaps0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_19, (MR_Integer) 2))));
      MR_Word TypeInfoLiveness_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_19, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word Varset_35;
      MR_Word Type_36;
      MR_Word VarTypes_37;
      MR_Word RttiVarMaps_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Goal1_52;
      MR_Word GoalInfo1_54;
      MR_Word Conj1_55;
      MR_Word Conj_56;
      MR_Word STATE_VARIABLE_SlotInfo_19_57;

      mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NewVar_15, Varset0_31, &Varset_35);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (NewVar_15));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__from_assoc_list_2_p_0((MR_Word) (&ll_backend__saved_vars_scalar_common_1[0]), (MR_Word) (&ll_backend__saved_vars_scalar_common_1[0]), Var_39, &Subst_16);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_32, Var_10, &Type_36);
      hlds__vartypes__add_var_type_4_p_0(NewVar_15, Type_36, VarTypes0_32, &VarTypes_37);
      hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(Var_10, NewVar_15, RttiVarMaps0_33, &RttiVarMaps_38);
      {
        STATE_VARIABLE_SlotInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_21_21, 0) = ((MR_Box) (Varset_35));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_21_21, 1) = ((MR_Box) (VarTypes_37));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_21_21, 2) = ((MR_Box) (RttiVarMaps_38));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_21_21, 3) = (MR_Box) ((MR_Unsigned) (TypeInfoLiveness_34));
      }
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_16, Construct_9, &NewConstruct_17);
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_16, Goal0_7, &Goal1_18);
      ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Goal1_18, &Goal1_52, STATE_VARIABLE_SlotInfo_21_21, &STATE_VARIABLE_SlotInfo_19_57);
      GoalInfo1_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_52, (MR_Integer) 1))));
      hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal1_52, &Conj1_55);
      ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Conj1_55, &Conj_56, NewConstruct_17, NewVar_15, (MR_Integer) 0, STATE_VARIABLE_SlotInfo_19_57, STATE_VARIABLE_SlotInfo_20);
      hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_56, GoalInfo1_54, Goal_8);
    }
    else
      ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Goal0_7, Goal_8, STATE_VARIABLE_SlotInfo_0_19, STATE_VARIABLE_SlotInfo_20);
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Goals_2,
  MR_Word Construct_3,
  MR_Word HeadVar__4_4,
  MR_Word IsNonLocal_5,
  MR_Word STATE_VARIABLE_SlotInfo_0_6,
  MR_Word * STATE_VARIABLE_SlotInfo_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      switch (IsNonLocal_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Goals_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Goals_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Construct_3));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          break;
      }
      *STATE_VARIABLE_SlotInfo_7 = STATE_VARIABLE_SlotInfo_0_6;
    }
    else
    {
      MR_Word Goal0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal0Expr_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_16, (MR_Integer) 0))));
      MR_Word Goal0Info_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_16, (MR_Integer) 1))));
      MR_Word Goal0NonLocals_25;

      Goal0NonLocals_25 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(Goal0Info_24);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Goal0NonLocals_25, HeadVar__4_4);
      if (succeeded)
        switch (MR_tag((MR_Word) Goal0Expr_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word NegGoal0_62 = (MR_Word) ((MR_Word) (Goal0Expr_23));
              MR_Word NegGoal1_63;
              MR_Word NegGoal_64;
              MR_Word STATE_VARIABLE_SlotInfo_96_96;
              MR_Word STATE_VARIABLE_SlotInfo_97_97;
              MR_Word Var_98;
              MR_Word Subst_150;
              MR_Word NewConstruct_151;
              MR_Word Goal1_152;
              MR_Word Goals1_153;
              MR_Word NewVar_154;

              ll_backend__saved_vars__saved_vars_rename_var_5_p_0(HeadVar__4_4, &NewVar_154, &Subst_150, STATE_VARIABLE_SlotInfo_0_6, &STATE_VARIABLE_SlotInfo_96_96);
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_150, Construct_3, &NewConstruct_151);
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_150, NegGoal0_62, &NegGoal1_63);
              ll_backend__saved_vars__push_into_goal_6_p_0(NegGoal1_63, &NegGoal_64, NewConstruct_151, NewVar_154, STATE_VARIABLE_SlotInfo_96_96, &STATE_VARIABLE_SlotInfo_97_97);
              Var_98 = (MR_Word) ((MR_Word) (NegGoal_64));
              {
                Goal1_152 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Goal1_152, 0) = ((MR_Box) (Var_98));
                MR_hl_field(MR_mktag(0), Goal1_152, 1) = ((MR_Box) (Goal0Info_24));
              }
              ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Goals0_17, &Goals1_153, Construct_3, HeadVar__4_4, IsNonLocal_5, STATE_VARIABLE_SlotInfo_97_97, STATE_VARIABLE_SlotInfo_7);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Goals_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal1_152));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_153));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Subst_32;
              MR_Word NewConstruct_33;
              MR_Word Goal1_34;
              MR_Word Goals1_35;
              MR_Word STATE_VARIABLE_SlotInfo_117_117;
              MR_Word Var_119;
              MR_Word _NewVar_31;

              ll_backend__saved_vars__saved_vars_rename_var_5_p_0(HeadVar__4_4, &_NewVar_31, &Subst_32, STATE_VARIABLE_SlotInfo_0_6, &STATE_VARIABLE_SlotInfo_117_117);
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_32, Construct_3, &NewConstruct_33);
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_32, Goal0_16, &Goal1_34);
              ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Goals0_17, &Goals1_35, Construct_3, HeadVar__4_4, IsNonLocal_5, STATE_VARIABLE_SlotInfo_117_117, STATE_VARIABLE_SlotInfo_7);
              {
                Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Goal1_34));
                MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Goals1_35));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Goals_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NewConstruct_33));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_119));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_SlotInfo_114_114;
              MR_Word Var_116;
              MR_Word Subst_123;
              MR_Word NewConstruct_124;
              MR_Word Goal1_125;
              MR_Word Goals1_126;
              MR_Word _NewVar_121;

              ll_backend__saved_vars__saved_vars_rename_var_5_p_0(HeadVar__4_4, &_NewVar_121, &Subst_123, STATE_VARIABLE_SlotInfo_0_6, &STATE_VARIABLE_SlotInfo_114_114);
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_123, Construct_3, &NewConstruct_124);
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_123, Goal0_16, &Goal1_125);
              ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Goals0_17, &Goals1_126, Construct_3, HeadVar__4_4, IsNonLocal_5, STATE_VARIABLE_SlotInfo_114_114, STATE_VARIABLE_SlotInfo_7);
              {
                Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Goal1_125));
                MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Goals1_126));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Goals_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NewConstruct_124));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_116));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word STATE_VARIABLE_SlotInfo_111_111;
                  MR_Word Var_113;
                  MR_Word Subst_129;
                  MR_Word NewConstruct_130;
                  MR_Word Goal1_131;
                  MR_Word Goals1_132;
                  MR_Word _NewVar_127;

                  ll_backend__saved_vars__saved_vars_rename_var_5_p_0(HeadVar__4_4, &_NewVar_127, &Subst_129, STATE_VARIABLE_SlotInfo_0_6, &STATE_VARIABLE_SlotInfo_111_111);
                  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_129, Construct_3, &NewConstruct_130);
                  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_129, Goal0_16, &Goal1_131);
                  ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Goals0_17, &Goals1_132, Construct_3, HeadVar__4_4, IsNonLocal_5, STATE_VARIABLE_SlotInfo_111_111, STATE_VARIABLE_SlotInfo_7);
                  {
                    Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Goal1_131));
                    MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Goals1_132));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Goals_2 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NewConstruct_130));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_113));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word STATE_VARIABLE_SlotInfo_108_108;
                  MR_Word Var_110;
                  MR_Word Subst_135;
                  MR_Word NewConstruct_136;
                  MR_Word Goal1_137;
                  MR_Word Goals1_138;
                  MR_Word _NewVar_133;

                  ll_backend__saved_vars__saved_vars_rename_var_5_p_0(HeadVar__4_4, &_NewVar_133, &Subst_135, STATE_VARIABLE_SlotInfo_0_6, &STATE_VARIABLE_SlotInfo_108_108);
                  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_135, Construct_3, &NewConstruct_136);
                  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_135, Goal0_16, &Goal1_137);
                  ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Goals0_17, &Goals1_138, Construct_3, HeadVar__4_4, IsNonLocal_5, STATE_VARIABLE_SlotInfo_108_108, STATE_VARIABLE_SlotInfo_7);
                  {
                    Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Goal1_137));
                    MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Goals1_138));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Goals_2 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NewConstruct_136));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_110));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ConjType_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word Conj0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 2))));

                  switch (ConjType_54) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word Conj_56;
                        MR_Word STATE_VARIABLE_SlotInfo_104_104;
                        MR_Word Var_105;
                        MR_Word Goal1_140;
                        MR_Word Goals1_141;

                        ll_backend__saved_vars__push_into_goals_rename_6_p_0(Conj0_55, &Conj_56, Construct_3, HeadVar__4_4, STATE_VARIABLE_SlotInfo_0_6, &STATE_VARIABLE_SlotInfo_104_104);
                        {
                          Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                          MR_hl_field(MR_mktag(3), Var_105, 1) = (MR_Box) ((MR_Unsigned) (ConjType_54));
                          MR_hl_field(MR_mktag(3), Var_105, 2) = ((MR_Box) (Conj_56));
                        }
                        {
                          Goal1_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Goal1_140, 0) = ((MR_Box) (Var_105));
                          MR_hl_field(MR_mktag(0), Goal1_140, 1) = ((MR_Box) (Goal0Info_24));
                        }
                        ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Goals0_17, &Goals1_141, Construct_3, HeadVar__4_4, IsNonLocal_5, STATE_VARIABLE_SlotInfo_104_104, STATE_VARIABLE_SlotInfo_7);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          *Goals_2 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal1_140));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_141));
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word Goals1_139;
                        MR_Word next_value_of_HeadVar__1_1;

                        mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Conj0_55, Goals0_17, &Goals1_139);
                        // direct tailcall eliminated
                        ;
                        next_value_of_HeadVar__1_1 = Goals1_139;
                        HeadVar__1_1 = next_value_of_HeadVar__1_1;
                        continue;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word Disjuncts0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 1))));
                  MR_Word Disjuncts_66;
                  MR_Word STATE_VARIABLE_SlotInfo_93_93;
                  MR_Word Var_94;
                  MR_Word Goal1_155;
                  MR_Word Goals1_156;

                  ll_backend__saved_vars__push_into_goals_rename_6_p_0(Disjuncts0_65, &Disjuncts_66, Construct_3, HeadVar__4_4, STATE_VARIABLE_SlotInfo_0_6, &STATE_VARIABLE_SlotInfo_93_93);
                  {
                    Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (Disjuncts_66));
                  }
                  {
                    Goal1_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Goal1_155, 0) = ((MR_Box) (Var_94));
                    MR_hl_field(MR_mktag(0), Goal1_155, 1) = ((MR_Box) (Goal0Info_24));
                  }
                  ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Goals0_17, &Goals1_156, Construct_3, HeadVar__4_4, IsNonLocal_5, STATE_VARIABLE_SlotInfo_93_93, STATE_VARIABLE_SlotInfo_7);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Goals_2 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal1_155));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_156));
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word SwitchVar_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 1))));
                  MR_Word CF_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 2))) & (MR_Integer) 1);
                  MR_Word Cases0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 3))));

                  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__saved_vars_scalar_common_1[0]), ((MR_Box) (SwitchVar_67)), ((MR_Box) (HeadVar__4_4)));
                  if (succeeded)
                  {
                    MR_Word Var_89;
                    MR_Word Goals1_157;

                    ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Goals0_17, &Goals1_157, Construct_3, HeadVar__4_4, IsNonLocal_5, STATE_VARIABLE_SlotInfo_0_6, STATE_VARIABLE_SlotInfo_7);
                    {
                      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Goal0_16));
                      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Goals1_157));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Goals_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Construct_3));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_89));
                    }
                  }
                  else
                  {
                    MR_Word Cases_70;
                    MR_Word STATE_VARIABLE_SlotInfo_90_90;
                    MR_Word Var_91;
                    MR_Word Goal1_158;
                    MR_Word Goals1_159;

                    ll_backend__saved_vars__push_into_cases_rename_6_p_0(Cases0_69, &Cases_70, Construct_3, HeadVar__4_4, STATE_VARIABLE_SlotInfo_0_6, &STATE_VARIABLE_SlotInfo_90_90);
                    {
                      Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (SwitchVar_67));
                      MR_hl_field(MR_mktag(3), Var_91, 2) = (MR_Box) ((MR_Unsigned) (CF_68));
                      MR_hl_field(MR_mktag(3), Var_91, 3) = ((MR_Box) (Cases_70));
                    }
                    {
                      Goal1_158 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Goal1_158, 0) = ((MR_Box) (Var_91));
                      MR_hl_field(MR_mktag(0), Goal1_158, 1) = ((MR_Box) (Goal0Info_24));
                    }
                    ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Goals0_17, &Goals1_159, Construct_3, HeadVar__4_4, IsNonLocal_5, STATE_VARIABLE_SlotInfo_90_90, STATE_VARIABLE_SlotInfo_7);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Goals_2 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal1_158));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_159));
                    }
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 1))));
                  MR_Word SomeGoal0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 2))));
                  MR_Word NewVar_59;
                  MR_Word SomeGoal1_60;
                  MR_Word SomeGoal_61;
                  MR_Word STATE_VARIABLE_SlotInfo_100_100;
                  MR_Word STATE_VARIABLE_SlotInfo_101_101;
                  MR_Word Var_102;
                  MR_Word Subst_146;
                  MR_Word NewConstruct_147;
                  MR_Word Goal1_148;
                  MR_Word Goals1_149;

                  ll_backend__saved_vars__saved_vars_rename_var_5_p_0(HeadVar__4_4, &NewVar_59, &Subst_146, STATE_VARIABLE_SlotInfo_0_6, &STATE_VARIABLE_SlotInfo_100_100);
                  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_146, Construct_3, &NewConstruct_147);
                  hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_146, SomeGoal0_58, &SomeGoal1_60);
                  ll_backend__saved_vars__push_into_goal_6_p_0(SomeGoal1_60, &SomeGoal_61, NewConstruct_147, NewVar_59, STATE_VARIABLE_SlotInfo_100_100, &STATE_VARIABLE_SlotInfo_101_101);
                  {
                    Var_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_102, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), Var_102, 1) = ((MR_Box) (Reason_57));
                    MR_hl_field(MR_mktag(3), Var_102, 2) = ((MR_Box) (SomeGoal_61));
                  }
                  {
                    Goal1_148 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Goal1_148, 0) = ((MR_Box) (Var_102));
                    MR_hl_field(MR_mktag(0), Goal1_148, 1) = ((MR_Box) (Goal0Info_24));
                  }
                  ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Goals0_17, &Goals1_149, Construct_3, HeadVar__4_4, IsNonLocal_5, STATE_VARIABLE_SlotInfo_101_101, STATE_VARIABLE_SlotInfo_7);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Goals_2 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal1_148));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_149));
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word V_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 1))));
                  MR_Word Cond0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 2))));
                  MR_Word Then0_73 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 3))));
                  MR_Word Else0_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal0Expr_23, (MR_Integer) 4))));
                  MR_Word Cond_75;
                  MR_Word Then_76;
                  MR_Word Else_77;
                  MR_Word STATE_VARIABLE_SlotInfo_83_83;
                  MR_Word STATE_VARIABLE_SlotInfo_84_84;
                  MR_Word STATE_VARIABLE_SlotInfo_85_85;
                  MR_Word Var_86;
                  MR_Word Goal1_164;
                  MR_Word Goals1_165;

                  ll_backend__saved_vars__push_into_goal_rename_6_p_0(Cond0_72, &Cond_75, Construct_3, HeadVar__4_4, STATE_VARIABLE_SlotInfo_0_6, &STATE_VARIABLE_SlotInfo_83_83);
                  ll_backend__saved_vars__push_into_goal_rename_6_p_0(Then0_73, &Then_76, Construct_3, HeadVar__4_4, STATE_VARIABLE_SlotInfo_83_83, &STATE_VARIABLE_SlotInfo_84_84);
                  ll_backend__saved_vars__push_into_goal_rename_6_p_0(Else0_74, &Else_77, Construct_3, HeadVar__4_4, STATE_VARIABLE_SlotInfo_84_84, &STATE_VARIABLE_SlotInfo_85_85);
                  {
                    Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (V_71));
                    MR_hl_field(MR_mktag(3), Var_86, 2) = ((MR_Box) (Cond_75));
                    MR_hl_field(MR_mktag(3), Var_86, 3) = ((MR_Box) (Then_76));
                    MR_hl_field(MR_mktag(3), Var_86, 4) = ((MR_Box) (Else_77));
                  }
                  {
                    Goal1_164 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Goal1_164, 0) = ((MR_Box) (Var_86));
                    MR_hl_field(MR_mktag(0), Goal1_164, 1) = ((MR_Box) (Goal0Info_24));
                  }
                  ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Goals0_17, &Goals1_165, Construct_3, HeadVar__4_4, IsNonLocal_5, STATE_VARIABLE_SlotInfo_85_85, STATE_VARIABLE_SlotInfo_7);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Goals_2 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal1_164));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_165));
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.saved_vars.saved_vars_delay_goal\'/7", (MR_String) "shorthand");
                  return;
                }
                break;
            }
            break;
        }
      else
      {
        MR_Word Goals1_166;

        ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Goals0_17, &Goals1_166, Construct_3, HeadVar__4_4, IsNonLocal_5, STATE_VARIABLE_SlotInfo_0_6, STATE_VARIABLE_SlotInfo_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Goals_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal0_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_166));
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s * env_ptr = (struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s * env_ptr = (struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28 = ((MR_Word) ((env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__conv0_Feature_28));
    ll_backend__saved_vars__saved_vars_in_conj_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s * env_ptr = (struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s *) (env_ptr_arg);

    if (((MR_Unsigned) 301973506U & (((MR_Integer) 1 << (env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Feature_28))))
      (env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = MR_TRUE;
    else
      (env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = MR_FALSE;
    (env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = !((env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded);
    if ((env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
      ll_backend__saved_vars__saved_vars_in_conj_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s * env_ptr = (struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__commit_0) == 0)
      {
        mercury__set__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0), &(env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__conv0_Feature_28, (env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Features_27, ll_backend__saved_vars__saved_vars_in_conj_5_p_0_3, env_ptr);
        (env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word NonLocals_3,
  MR_Word STATE_VARIABLE_SlotInfo_0_4,
  MR_Word * STATE_VARIABLE_SlotInfo_5)
{
  {
    struct ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0_s env;

    while (MR_TRUE)
    {
      // setup for model_det tailcalls optimized into a loop
      ;
      if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SlotInfo_5 = STATE_VARIABLE_SlotInfo_0_4;
      }
      else
      {
        MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word Var_21;
        MR_Word Constants_29;
        MR_Word OtherGoals_30;
        MR_Word Unif_18;
        MR_Word GoalInfo_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 1))));
        MR_Word First_31;
        MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 0))));
        MR_Word Var_40;
        MR_Word Var_42;
        MR_Word Var_15;
        MR_Word Var_16;
        MR_Word Var_17;
        MR_Word Var_19;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Unsigned packed_word_0;
        MR_Word VarTypes_54;
        MR_Word TypeInfoLiveness_56;
        MR_Word Type_57;
        MR_Word Var_53;
        MR_Word Var_55;
        MR_Unsigned packed_word_1;
        MR_Word _Rest_32;

        (env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_39)) == (MR_Integer) 1);
        if ((env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 0))));
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 1))));
          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 2))));
          Unif_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 3))));
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_39, (MR_Integer) 4))));
          (env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) Unif_18)) == (MR_Integer) 0);
          if ((env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
          {
            Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_18, (MR_Integer) 0))));
            Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_18, (MR_Integer) 1))));
            Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_18, (MR_Integer) 2))));
            Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_18, (MR_Integer) 3))));
            Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_18, (MR_Integer) 4))));
            packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unif_18, (MR_Integer) 5)));
            Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Unif_18, (MR_Integer) 5))) & (MR_Integer) 1);
            Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_18, (MR_Integer) 6))));
            (env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = (Var_40 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
            {
              (env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__Features_27 = hlds__hlds_goal__goal_info_get_features_1_f_0(GoalInfo_20);
              ll_backend__saved_vars__saved_vars_in_conj_5_p_0_4(&env);
              (env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = !((env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded);
              if ((env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
              {
                Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 0))));
                VarTypes_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 1))));
                Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 2))));
                packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 3)));
                TypeInfoLiveness_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_4, (MR_Integer) 3))) & (MR_Integer) 1);
                (env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = (TypeInfoLiveness_56 == (MR_Integer) 1);
                if ((env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
                {
                  hlds__vartypes__lookup_var_type_3_p_0(VarTypes_54, Var_21, &Type_57);
                  (env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = parse_tree__builtin_lib_types__type_is_type_info_or_ctor_type_1_p_0(Type_57);
                }
                (env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = !((env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded);
                if ((env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
                {
                  ll_backend__saved_vars__skip_constant_constructs_3_p_0(Goals0_11, &Constants_29, &OtherGoals_30);
                  (env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = (OtherGoals_30 != (MR_Word) ((MR_Unsigned) 0U));
                  if ((env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
                  {
                    First_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherGoals_30, (MR_Integer) 0))));
                    _Rest_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OtherGoals_30, (MR_Integer) 1))));
                    Var_42 = ll_backend__saved_vars__can_push_2_f_0(Var_21, First_31);
                    (env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded = (Var_42 == (MR_Integer) 1);
                  }
                }
              }
            }
          }
        }
        if ((env).ll_backend__saved_vars__saved_vars_in_conj_5_p_0_env_0__succeeded)
        {
          MR_Word IsNonLocal_33;
          MR_Word Goals1_34;
          MR_Word Goals2_35;
          MR_Word STATE_VARIABLE_SlotInfo_43_43;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_SlotInfo_0_4;

          parse_tree__set_of_var__is_member_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_3, Var_21, &IsNonLocal_33);
          ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(OtherGoals_30, &Goals1_34, Goal0_10, Var_21, IsNonLocal_33, STATE_VARIABLE_SlotInfo_0_4, &STATE_VARIABLE_SlotInfo_43_43);
          mercury__list__append_3_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Constants_29, Goals1_34, &Goals2_35);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Goals2_35;
          next_value_of_STATE_VARIABLE_SlotInfo_0_4 = STATE_VARIABLE_SlotInfo_43_43;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_SlotInfo_0_4 = next_value_of_STATE_VARIABLE_SlotInfo_0_4;
          continue;
        }
        else
        {
          MR_Word Goal1_36;
          MR_Word STATE_VARIABLE_SlotInfo_45_45;
          MR_Word Goals1_47;

          ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Goal0_10, &Goal1_36, STATE_VARIABLE_SlotInfo_0_4, &STATE_VARIABLE_SlotInfo_45_45);
          ll_backend__saved_vars__saved_vars_in_conj_5_p_0(Goals0_11, &Goals1_47, NonLocals_3, STATE_VARIABLE_SlotInfo_45_45, STATE_VARIABLE_SlotInfo_5);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal1_36));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_47));
          }
        }
      }
      break;
    }
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_switch_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SlotInfo_0_3,
  MR_Word * STATE_VARIABLE_SlotInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SlotInfo_4 = STATE_VARIABLE_SlotInfo_0_3;
  }
  else
  {
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word STATE_VARIABLE_SlotInfo_19_19;

    ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Goal0_15, &Goal_16, STATE_VARIABLE_SlotInfo_0_3, &STATE_VARIABLE_SlotInfo_19_19);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(MR_mktag(0), Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(MR_mktag(0), Case_10, 2) = ((MR_Box) (Goal_16));
    }
    ll_backend__saved_vars__saved_vars_in_switch_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_SlotInfo_19_19, STATE_VARIABLE_SlotInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_11));
    }
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SlotInfo_0_3,
  MR_Word * STATE_VARIABLE_SlotInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SlotInfo_4 = STATE_VARIABLE_SlotInfo_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word STATE_VARIABLE_SlotInfo_15_15;

    ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Goal0_8, &Goal_10, STATE_VARIABLE_SlotInfo_0_3, &STATE_VARIABLE_SlotInfo_15_15);
    ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_SlotInfo_15_15, STATE_VARIABLE_SlotInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

static void MR_CALL 
ll_backend__saved_vars__push_into_cases_rename_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_SlotInfo_0_5,
  MR_Word * STATE_VARIABLE_SlotInfo_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_SlotInfo_6 = STATE_VARIABLE_SlotInfo_0_5;
    }
    else
    {
      MR_Word Case0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Case_14;
      MR_Word Cases_15;
      MR_Word MainConsId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_12, (MR_Integer) 0))));
      MR_Word OtherConsIds_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_12, (MR_Integer) 1))));
      MR_Word Goal0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_12, (MR_Integer) 2))));
      MR_Word Goal_22;
      MR_Word STATE_VARIABLE_SlotInfo_25_25;
      MR_Word GoalInfo0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_21, (MR_Integer) 1))));
      MR_Word NonLocals_36;

      NonLocals_36 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_35);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_36, HeadVar__4_4);
      if (succeeded)
      {
        MR_Word NewVar_37;
        MR_Word Subst_38;
        MR_Word NewConstruct_39;
        MR_Word Goal1_40;
        MR_Word STATE_VARIABLE_SlotInfo_21_41;
        MR_Word Varset0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_5, (MR_Integer) 0))));
        MR_Word VarTypes0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_5, (MR_Integer) 1))));
        MR_Word RttiVarMaps0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_5, (MR_Integer) 2))));
        MR_Word TypeInfoLiveness_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_5, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word Varset_55;
        MR_Word Type_56;
        MR_Word VarTypes_57;
        MR_Word RttiVarMaps_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Goal1_72;
        MR_Word GoalInfo1_74;
        MR_Word Conj1_75;
        MR_Word Conj_76;
        MR_Word STATE_VARIABLE_SlotInfo_19_77;

        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NewVar_37, Varset0_51, &Varset_55);
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (HeadVar__4_4));
          MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (NewVar_37));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__from_assoc_list_2_p_0((MR_Word) (&ll_backend__saved_vars_scalar_common_1[0]), (MR_Word) (&ll_backend__saved_vars_scalar_common_1[0]), Var_59, &Subst_38);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_52, HeadVar__4_4, &Type_56);
        hlds__vartypes__add_var_type_4_p_0(NewVar_37, Type_56, VarTypes0_52, &VarTypes_57);
        hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(HeadVar__4_4, NewVar_37, RttiVarMaps0_53, &RttiVarMaps_58);
        {
          STATE_VARIABLE_SlotInfo_21_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_21_41, 0) = ((MR_Box) (Varset_55));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_21_41, 1) = ((MR_Box) (VarTypes_57));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_21_41, 2) = ((MR_Box) (RttiVarMaps_58));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_21_41, 3) = (MR_Box) ((MR_Unsigned) (TypeInfoLiveness_54));
        }
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_38, HeadVar__3_3, &NewConstruct_39);
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_38, Goal0_21, &Goal1_40);
        ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Goal1_40, &Goal1_72, STATE_VARIABLE_SlotInfo_21_41, &STATE_VARIABLE_SlotInfo_19_77);
        GoalInfo1_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_72, (MR_Integer) 1))));
        hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal1_72, &Conj1_75);
        ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Conj1_75, &Conj_76, NewConstruct_39, NewVar_37, (MR_Integer) 0, STATE_VARIABLE_SlotInfo_19_77, &STATE_VARIABLE_SlotInfo_25_25);
        hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_76, GoalInfo1_74, &Goal_22);
      }
      else
        ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Goal0_21, &Goal_22, STATE_VARIABLE_SlotInfo_0_5, &STATE_VARIABLE_SlotInfo_25_25);
      {
        Case_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Case_14, 0) = ((MR_Box) (MainConsId_19));
        MR_hl_field(MR_mktag(0), Case_14, 1) = ((MR_Box) (OtherConsIds_20));
        MR_hl_field(MR_mktag(0), Case_14, 2) = ((MR_Box) (Goal_22));
      }
      ll_backend__saved_vars__push_into_cases_rename_6_p_0(Cases0_13, &Cases_15, HeadVar__3_3, HeadVar__4_4, STATE_VARIABLE_SlotInfo_25_25, STATE_VARIABLE_SlotInfo_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_15));
      }
    }
  }
}

static void MR_CALL 
ll_backend__saved_vars__push_into_goals_rename_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_SlotInfo_0_5,
  MR_Word * STATE_VARIABLE_SlotInfo_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_SlotInfo_6 = STATE_VARIABLE_SlotInfo_0_5;
    }
    else
    {
      MR_Word Goal0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_14;
      MR_Word Goals_15;
      MR_Word STATE_VARIABLE_SlotInfo_21_21;
      MR_Word GoalInfo0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_12, (MR_Integer) 1))));
      MR_Word NonLocals_32;

      NonLocals_32 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_31);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_32, HeadVar__4_4);
      if (succeeded)
      {
        MR_Word NewVar_33;
        MR_Word Subst_34;
        MR_Word NewConstruct_35;
        MR_Word Goal1_36;
        MR_Word STATE_VARIABLE_SlotInfo_21_37;
        MR_Word Varset0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_5, (MR_Integer) 0))));
        MR_Word VarTypes0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_5, (MR_Integer) 1))));
        MR_Word RttiVarMaps0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_5, (MR_Integer) 2))));
        MR_Word TypeInfoLiveness_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_5, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word Varset_51;
        MR_Word Type_52;
        MR_Word VarTypes_53;
        MR_Word RttiVarMaps_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Goal1_68;
        MR_Word GoalInfo1_70;
        MR_Word Conj1_71;
        MR_Word Conj_72;
        MR_Word STATE_VARIABLE_SlotInfo_19_73;

        mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &NewVar_33, Varset0_47, &Varset_51);
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (HeadVar__4_4));
          MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (NewVar_33));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__from_assoc_list_2_p_0((MR_Word) (&ll_backend__saved_vars_scalar_common_1[0]), (MR_Word) (&ll_backend__saved_vars_scalar_common_1[0]), Var_55, &Subst_34);
        hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_48, HeadVar__4_4, &Type_52);
        hlds__vartypes__add_var_type_4_p_0(NewVar_33, Type_52, VarTypes0_48, &VarTypes_53);
        hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(HeadVar__4_4, NewVar_33, RttiVarMaps0_49, &RttiVarMaps_54);
        {
          STATE_VARIABLE_SlotInfo_21_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_21_37, 0) = ((MR_Box) (Varset_51));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_21_37, 1) = ((MR_Box) (VarTypes_53));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_21_37, 2) = ((MR_Box) (RttiVarMaps_54));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_21_37, 3) = (MR_Box) ((MR_Unsigned) (TypeInfoLiveness_50));
        }
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_34, HeadVar__3_3, &NewConstruct_35);
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Subst_34, Goal0_12, &Goal1_36);
        ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Goal1_36, &Goal1_68, STATE_VARIABLE_SlotInfo_21_37, &STATE_VARIABLE_SlotInfo_19_73);
        GoalInfo1_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_68, (MR_Integer) 1))));
        hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal1_68, &Conj1_71);
        ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Conj1_71, &Conj_72, NewConstruct_35, NewVar_33, (MR_Integer) 0, STATE_VARIABLE_SlotInfo_19_73, &STATE_VARIABLE_SlotInfo_21_21);
        hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_72, GoalInfo1_70, &Goal_14);
      }
      else
        ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Goal0_12, &Goal_14, STATE_VARIABLE_SlotInfo_0_5, &STATE_VARIABLE_SlotInfo_21_21);
      ll_backend__saved_vars__push_into_goals_rename_6_p_0(Goals0_13, &Goals_15, HeadVar__3_3, HeadVar__4_4, STATE_VARIABLE_SlotInfo_21_21, STATE_VARIABLE_SlotInfo_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_15));
      }
    }
  }
}

static void MR_CALL 
ll_backend__saved_vars__push_into_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word Construct_9,
  MR_Word Var_10,
  MR_Word STATE_VARIABLE_SlotInfo_0_17,
  MR_Word * STATE_VARIABLE_SlotInfo_18)
{
  {
    MR_Word Goal1_12;
    MR_Word GoalInfo1_14;
    MR_Word Conj1_15;
    MR_Word Conj_16;
    MR_Word STATE_VARIABLE_SlotInfo_19_19;

    ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Goal0_7, &Goal1_12, STATE_VARIABLE_SlotInfo_0_17, &STATE_VARIABLE_SlotInfo_19_19);
    GoalInfo1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_12, (MR_Integer) 1))));
    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal1_12, &Conj1_15);
    ll_backend__saved_vars__saved_vars_delay_goal_7_p_0(Conj1_15, &Conj_16, Construct_9, Var_10, (MR_Integer) 0, STATE_VARIABLE_SlotInfo_19_19, STATE_VARIABLE_SlotInfo_18);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_16, GoalInfo1_14, Goal_8);
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_SlotInfo_0_56,
  MR_Word * STATE_VARIABLE_SlotInfo_57)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word NegGoal0_15 = (MR_Word) ((MR_Word) (GoalExpr0_8));
          MR_Word NegGoal_16;
          MR_Word GoalExpr_74;

          ll_backend__saved_vars__saved_vars_in_goal_4_p_0(NegGoal0_15, &NegGoal_16, STATE_VARIABLE_SlotInfo_0_56, STATE_VARIABLE_SlotInfo_57);
          GoalExpr_74 = (MR_Word) ((MR_Word) (NegGoal_16));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_74));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Goal_6 = Goal0_5;
          *STATE_VARIABLE_SlotInfo_57 = STATE_VARIABLE_SlotInfo_0_56;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_6 = Goal0_5;
              *STATE_VARIABLE_SlotInfo_57 = STATE_VARIABLE_SlotInfo_0_56;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));

              switch (ConjType_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Var_69;
                    MR_Word Goals_71;

                    ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(Goals0_11, &Goals_71, STATE_VARIABLE_SlotInfo_0_56, STATE_VARIABLE_SlotInfo_57);
                    {
                      Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Var_69, 1) = (MR_Box) ((MR_Unsigned) (ConjType_10));
                      MR_hl_field(MR_mktag(3), Var_69, 2) = ((MR_Box) (Goals_71));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_69));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word NonLocals_12;
                    MR_Word Goals_13;

                    NonLocals_12 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_9);
                    ll_backend__saved_vars__saved_vars_in_conj_5_p_0(Goals0_11, &Goals_13, NonLocals_12, STATE_VARIABLE_SlotInfo_0_56, STATE_VARIABLE_SlotInfo_57);
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_13, GoalInfo0_9, Goal_6);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word GoalExpr_14;
              MR_Word Goals0_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Goals_73;

              ll_backend__saved_vars__saved_vars_in_independent_goals_4_p_0(Goals0_72, &Goals_73, STATE_VARIABLE_SlotInfo_0_56, STATE_VARIABLE_SlotInfo_57);
              {
                GoalExpr_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_14, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_14, 1) = ((MR_Box) (Goals_73));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_14));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word CanFail_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Cases_20;
              MR_Word GoalExpr_75;

              ll_backend__saved_vars__saved_vars_in_switch_4_p_0(Cases0_19, &Cases_20, STATE_VARIABLE_SlotInfo_0_56, STATE_VARIABLE_SlotInfo_57);
              {
                GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 1) = ((MR_Box) (Var_17));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 2) = (MR_Box) ((MR_Unsigned) (CanFail_18));
                MR_hl_field(MR_mktag(3), GoalExpr_75, 3) = ((MR_Box) (Cases_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_75));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word SubGoal0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word SubGoal_31;
              MR_Word GoalExpr_77;
              MR_Word Var_60;

              succeeded = ((((MR_tag((MR_Word) Reason_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_28, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_28, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_60 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                SubGoal_31 = SubGoal0_29;
                *STATE_VARIABLE_SlotInfo_57 = STATE_VARIABLE_SlotInfo_0_56;
              }
              else
                ll_backend__saved_vars__saved_vars_in_goal_4_p_0(SubGoal0_29, &SubGoal_31, STATE_VARIABLE_SlotInfo_0_56, STATE_VARIABLE_SlotInfo_57);
              {
                GoalExpr_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_77, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), GoalExpr_77, 1) = ((MR_Box) (Reason_28));
                MR_hl_field(MR_mktag(3), GoalExpr_77, 2) = ((MR_Box) (SubGoal_31));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_77));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Cond0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Then0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Else0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Cond_25;
              MR_Word Then_26;
              MR_Word Else_27;
              MR_Word STATE_VARIABLE_SlotInfo_62_62;
              MR_Word STATE_VARIABLE_SlotInfo_63_63;
              MR_Word GoalExpr_76;

              ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Cond0_22, &Cond_25, STATE_VARIABLE_SlotInfo_0_56, &STATE_VARIABLE_SlotInfo_62_62);
              ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Then0_23, &Then_26, STATE_VARIABLE_SlotInfo_62_62, &STATE_VARIABLE_SlotInfo_63_63);
              ll_backend__saved_vars__saved_vars_in_goal_4_p_0(Else0_24, &Else_27, STATE_VARIABLE_SlotInfo_63_63, STATE_VARIABLE_SlotInfo_57);
              {
                GoalExpr_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_76, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_76, 1) = ((MR_Box) (Vars_21));
                MR_hl_field(MR_mktag(3), GoalExpr_76, 2) = ((MR_Box) (Cond_25));
                MR_hl_field(MR_mktag(3), GoalExpr_76, 3) = ((MR_Box) (Then_26));
                MR_hl_field(MR_mktag(3), GoalExpr_76, 4) = ((MR_Box) (Else_27));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_76));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.saved_vars.saved_vars_in_goal\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__saved_vars__saved_vars_rename_var_5_p_0(
  MR_Word Var_6,
  MR_Word * NewVar_7,
  MR_Word * Substitution_8,
  MR_Word STATE_VARIABLE_SlotInfo_0_18,
  MR_Word * STATE_VARIABLE_SlotInfo_19)
{
  {
    MR_Word Varset0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_18, (MR_Integer) 0))));
    MR_Word VarTypes0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_18, (MR_Integer) 1))));
    MR_Word RttiVarMaps0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_18, (MR_Integer) 2))));
    MR_Word TypeInfoLiveness_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SlotInfo_0_18, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word Varset_14;
    MR_Word Type_15;
    MR_Word VarTypes_16;
    MR_Word RttiVarMaps_17;
    MR_Word Var_20;
    MR_Word Var_21;

    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewVar_7, Varset0_10, &Varset_14);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (*NewVar_7));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__from_assoc_list_2_p_0((MR_Word) (&ll_backend__saved_vars_scalar_common_1[0]), (MR_Word) (&ll_backend__saved_vars_scalar_common_1[0]), Var_20, Substitution_8);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes0_11, Var_6, &Type_15);
    hlds__vartypes__add_var_type_4_p_0(*NewVar_7, Type_15, VarTypes0_11, &VarTypes_16);
    hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(Var_6, *NewVar_7, RttiVarMaps0_12, &RttiVarMaps_17);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_SlotInfo_19 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Varset_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (VarTypes_16));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (RttiVarMaps_17));
      MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (TypeInfoLiveness_13));
    }
  }
}

static MR_Word MR_CALL 
ll_backend__saved_vars__can_push_2_f_0(
  MR_Word Var_4,
  MR_Word Goal_5)
{
  {
    MR_bool succeeded;
    MR_Word CanPush_6;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
    MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
    MR_Word NonLocals_9;

    NonLocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_8);
    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_9, Var_4);
    if (succeeded)
      switch (MR_tag((MR_Word) GoalExpr_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          CanPush_6 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          CanPush_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          CanPush_6 = (MR_Integer) 0;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CanPush_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              CanPush_6 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);

                switch (Var_89) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    CanPush_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    CanPush_6 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              CanPush_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 4:
              {
                MR_Word SwitchVar_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ll_backend__saved_vars_scalar_common_1[0]), ((MR_Box) (Var_4)), ((MR_Box) (SwitchVar_67)));
                if (succeeded)
                  CanPush_6 = (MR_Integer) 0;
                else
                  CanPush_6 = (MR_Integer) 1;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) Reason_41)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    CanPush_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    CanPush_6 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    CanPush_6 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_41, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        CanPush_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 1:
                        mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "unexpected scope");
                        break;
                      case (MR_Integer) 2:
                        mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "unexpected scope");
                        break;
                      case (MR_Integer) 3:
                        mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "unexpected scope");
                        break;
                      case (MR_Integer) 4:
                        CanPush_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 5:
                        CanPush_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word Var_90 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_41, (MR_Integer) 2))) & (MR_Integer) 3);

                          switch (Var_90) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              CanPush_6 = (MR_Integer) 0;
                              break;
                            case (MR_Integer) 2:
                              CanPush_6 = (MR_Integer) 1;
                              break;
                            case (MR_Integer) 0:
                              mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "unexpected scope");
                              break;
                            case (MR_Integer) 3:
                              CanPush_6 = (MR_Integer) 1;
                              break;
                          }
                        }
                        break;
                      case (MR_Integer) 7:
                        CanPush_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 8:
                        CanPush_6 = (MR_Integer) 0;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              CanPush_6 = (MR_Integer) 1;
              break;
            case (MR_Integer) 7:
              mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.saved_vars.can_push\'/2", (MR_String) "shorthand");
              break;
          }
          break;
      }
    else
      CanPush_6 = (MR_Integer) 1;
    return CanPush_6;
  }
}

static void MR_CALL 
ll_backend__saved_vars__skip_constant_constructs_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Goal0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Unif_11;
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_4, (MR_Integer) 0))));
      MR_Word Var_22;

      succeeded = ((MR_tag((MR_Word) Var_21)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unif_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_21, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unif_11)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Unif_11, (MR_Integer) 2))));
          succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
      {
        MR_Word Constants1_20;

        ll_backend__saved_vars__skip_constant_constructs_3_p_0(Goals0_5, &Constants1_20, HeadVar__3_3);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal0_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Constants1_20));
        }
      }
      else
      {
        *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__3_3 = HeadVar__1_1;
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__saved_vars____Unify____slot_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__saved_vars____Unify____slot_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__saved_vars____Compare____slot_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__saved_vars____Compare____slot_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__saved_vars__init(void)
{
}

void mercury__ll_backend__saved_vars__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__saved_vars__ll_backend__saved_vars__type_ctor_info_slot_info_0);
}

void mercury__ll_backend__saved_vars__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__saved_vars__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.saved_vars.
