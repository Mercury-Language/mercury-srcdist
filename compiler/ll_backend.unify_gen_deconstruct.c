/*
** Automatically generated from `unify_gen_deconstruct.m'
** by the Mercury compiler,
** version rotd-2019-05-02
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


// :- module ll_backend.unify_gen_deconstruct.
// :- implementation.

/*
INIT mercury__ll_backend__unify_gen_deconstruct__init
ENDINIT
*/

#include "ll_backend.unify_gen_deconstruct.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_cons.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.unify_gen_test.mih"
#include "ll_backend.unify_gen_util.mih"
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
#include "counter.mih"
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
#include "uint.mih"
#include "uint8.mih"
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




static const MR_PseudoTypeInfo ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_uni_field_0_0[4];

static const MR_DuFunctorDesc ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_field_0_0;

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_uni_field_0_0[1];

static const MR_DuPtagLayout ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_ptag_ordered_uni_field_0[1];

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_name_ordered_uni_field_0[1];

static const MR_Integer ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__functor_number_map_uni_field_0[1];

static void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____uni_field_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____uni_field_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(
  MR_Word LHSVar_9,
  MR_Word ConsId_10,
  MR_Word RHSVars_11,
  MR_Word ArgModes_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_84,
  MR_Word * STATE_VARIABLE_CLD_85);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_8_p_0(
  MR_Word LHSVar_9,
  MR_Word RHSVar_10,
  MR_Word Ptag_11,
  MR_Word ArgMode_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_21,
  MR_Word * STATE_VARIABLE_CLD_22);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__take_tagword_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word FieldLvals_4,
  MR_Word STATE_VARIABLE_ToOrRvals_0_5,
  MR_Word * STATE_VARIABLE_ToOrRvals_6,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_7,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_8,
  MR_Word * HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_12_p_0(
  MR_Word LHSRval_13,
  MR_Word RHSVarWidth_14,
  MR_Word ArgMode_15,
  MR_Word FieldLvals_16,
  MR_Word STATE_VARIABLE_ToOrRvals_0_28,
  MR_Word * STATE_VARIABLE_ToOrRvals_29,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_30,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_31,
  MR_Word * Code_19,
  MR_Word CI_20,
  MR_Word STATE_VARIABLE_CLD_0_32,
  MR_Word * STATE_VARIABLE_CLD_33);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_assign_right_7_p_0(
  MR_Word LHSRval_8,
  MR_Word RHSVar_9,
  MR_Word ArgPosWidth_10,
  MR_Word FieldLvals_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CLD_0_39,
  MR_Word * STATE_VARIABLE_CLD_40);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(
  MR_Word VarTypes_1,
  MR_Word LHSRval_2,
  MR_Word Ptag_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_8_p_0(
  MR_Word LHSField_9,
  MR_Word RHSVar_10,
  MR_Word RHSType_11,
  MR_Word ArgMode_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_18,
  MR_Word * STATE_VARIABLE_CLD_19);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_left_6_p_0(
  MR_Word LHSField_7,
  MR_Word RHSVar_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_49,
  MR_Word * STATE_VARIABLE_CLD_50);

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_right_6_p_0(
  MR_Word RightField_7,
  MR_Word LeftVar_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41);

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____uni_field_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____uni_field_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_2[1][1];

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_4[1][3];




static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__unify_gen_deconstruct_scalar_common_2[0])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0)),
    ((MR_Box) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0))
  },
};

static /* final */ const MR_Box ll_backend__unify_gen_deconstruct_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__unify_gen_deconstruct_scalar_common_3[0])),
    ((MR_Box) (ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_uni_field_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_ptag_0),
  (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_pos_width_0)
};

static const MR_DuFunctorDesc ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_field_0_0 = {
  (MR_String) "uni_field",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__field_types_uni_field_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_uni_field_0_0[1] = {
  &ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_field_0_0
};

static const MR_DuPtagLayout ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_ptag_ordered_uni_field_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_stag_ordered_uni_field_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_name_ordered_uni_field_0[1] = {
  &ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_functor_desc_uni_field_0_0
};

static const MR_Integer ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__functor_number_map_uni_field_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__type_ctor_info_uni_field_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__unify_gen_deconstruct____Unify____uni_field_0_0_10001)),
  ((MR_Box) (ll_backend__unify_gen_deconstruct____Compare____uni_field_0_0_10001)),
  (MR_String) "ll_backend.unify_gen_deconstruct",
  (MR_String) "uni_field",
  {     ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_name_ordered_uni_field_0 },
  {     ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__du_ptag_ordered_uni_field_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__functor_number_map_uni_field_0
};

static void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____uni_field_0_0(
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
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;
      uint8_t Var_21 = (uint8_t) (ArgX1_4);
      uint8_t Var_22 = (uint8_t) (ArgY1_5);

      succeeded = (Var_21 < Var_22);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_21 > Var_22);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        ll_backend__llds____Compare____rval_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            parse_tree__prog_data____Compare____arg_pos_width_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____uni_field_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      uint8_t Var_16 = (uint8_t) (ArgX1_3);
      uint8_t Var_17 = (uint8_t) (ArgY1_4);

      succeeded = (Var_16 == Var_17);
      if (succeeded)
      {
        succeeded = ll_backend__llds____Unify____rval_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = parse_tree__prog_data____Unify____arg_pos_width_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    ll_backend__code_loc_dep__release_reg_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruction_unification_11_p_0(
  MR_Word LHSVar_12,
  MR_Word ConsId_13,
  MR_Word RHSVars_14,
  MR_Word ArgModes_15,
  MR_Word CanFail_16,
  MR_Word CanCGC_17,
  MR_Word * Code_18,
  MR_Word STATE_VARIABLE_CI_0_29,
  MR_Word * STATE_VARIABLE_CI_30,
  MR_Word STATE_VARIABLE_CLD_0_31,
  MR_Word * STATE_VARIABLE_CLD_32)
{
  {
    MR_bool succeeded;
    MR_Word DeconstructCode_21;
    MR_Word STATE_VARIABLE_CLD_35_35;

    switch (CanFail_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LHSVarCode_65;
          MR_Word LHSVarRval_66;
          MR_String LHSVarName_67;
          MR_Word LHSVarType_68;
          MR_Word CheaperTagTest_69;
          MR_Word SuccLabel_70;
          MR_Word TagTestCode_71;
          MR_Word AfterUnify_72;
          MR_Word FailCode_73;
          MR_Word DetDeconstructCode_74;
          MR_Word SuccessLabelCode_75;
          MR_Word STATE_VARIABLE_CLD_32_76;
          MR_Word STATE_VARIABLE_CI_34_78;
          MR_Word STATE_VARIABLE_CLD_36_80;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;

          ll_backend__code_loc_dep__produce_variable_6_p_0(LHSVar_12, &LHSVarCode_65, &LHSVarRval_66, STATE_VARIABLE_CI_0_29, STATE_VARIABLE_CLD_0_31, &STATE_VARIABLE_CLD_32_76);
          LHSVarName_67 = ll_backend__code_info__variable_name_2_f_0(STATE_VARIABLE_CI_0_29, LHSVar_12);
          LHSVarType_68 = ll_backend__code_info__variable_type_2_f_0(STATE_VARIABLE_CI_0_29, LHSVar_12);
          CheaperTagTest_69 = ll_backend__code_info__lookup_cheaper_tag_test_2_f_0(STATE_VARIABLE_CI_0_29, LHSVarType_68);
          ll_backend__unify_gen_test__generate_test_var_has_cons_id_9_p_0(LHSVarRval_66, LHSVarName_67, ConsId_13, CheaperTagTest_69, (MR_Integer) 0, &SuccLabel_70, &TagTestCode_71, STATE_VARIABLE_CI_0_29, &STATE_VARIABLE_CI_34_78);
          ll_backend__code_loc_dep__remember_position_2_p_0(STATE_VARIABLE_CLD_32_76, &AfterUnify_72);
          ll_backend__code_loc_dep__generate_failure_4_p_0(&FailCode_73, STATE_VARIABLE_CI_34_78, STATE_VARIABLE_CI_30, STATE_VARIABLE_CLD_32_76);
          ll_backend__code_loc_dep__reset_to_position_3_p_0(AfterUnify_72, *STATE_VARIABLE_CI_30, &STATE_VARIABLE_CLD_36_80);
          ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(LHSVar_12, ConsId_13, RHSVars_14, ArgModes_15, &DetDeconstructCode_74, *STATE_VARIABLE_CI_30, STATE_VARIABLE_CLD_36_80, &STATE_VARIABLE_CLD_35_35);
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (SuccLabel_70));
          }
          {
            Var_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(0), Var_82, 1) = ((MR_Box) ((MR_String) ""));
          }
          SuccessLabelCode_75 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_82)));
          Var_87 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SuccessLabelCode_75, DetDeconstructCode_74);
          Var_86 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), FailCode_73, Var_87);
          Var_85 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagTestCode_71, Var_86);
          DeconstructCode_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), LHSVarCode_65, Var_85);
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(LHSVar_12, ConsId_13, RHSVars_14, ArgModes_15, &DeconstructCode_21, STATE_VARIABLE_CI_0_29, STATE_VARIABLE_CLD_0_31, &STATE_VARIABLE_CLD_35_35);
          *STATE_VARIABLE_CI_30 = STATE_VARIABLE_CI_0_29;
        }
        break;
    }
    switch (CanCGC_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String LHSVarName_22;
          MR_Word ProduceVarCode_23;
          MR_Word VarRval_24;
          MR_Word STATE_VARIABLE_CLD_36_36;
          MR_Word VarLval_25;

          LHSVarName_22 = ll_backend__code_info__variable_name_2_f_0(*STATE_VARIABLE_CI_30, LHSVar_12);
          ll_backend__code_loc_dep__produce_variable_6_p_0(LHSVar_12, &ProduceVarCode_23, &VarRval_24, *STATE_VARIABLE_CI_30, STATE_VARIABLE_CLD_35_35, &STATE_VARIABLE_CLD_36_36);
          succeeded = ((MR_tag((MR_Word) VarRval_24)) == (MR_Integer) 0);
          if (succeeded)
          {
            VarLval_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VarRval_24, (MR_Integer) 0))));
            {
              MR_Word SaveArgsCode_26;
              MR_Word Regs_27;
              MR_Word FreeVarCode_28;
              MR_Word STATE_VARIABLE_CLD_37_37;
              MR_Word Var_40;
              MR_Word Var_41;
              MR_Word Var_42;
              MR_String Var_44;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Box conv1_STATE_VARIABLE_CLD_32;

              ll_backend__code_loc_dep__save_reused_cell_fields_7_p_0(LHSVar_12, VarLval_25, &SaveArgsCode_26, &Regs_27, *STATE_VARIABLE_CI_30, STATE_VARIABLE_CLD_36_36, &STATE_VARIABLE_CLD_37_37);
              mercury__list__foldl_4_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), (MR_Word) (&ll_backend__code_loc_dep__ll_backend__code_loc_dep__type_ctor_info_code_loc_dep_0), (MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_4[0]), Regs_27, ((MR_Box) (STATE_VARIABLE_CLD_37_37)), &conv1_STATE_VARIABLE_CLD_32);
              *STATE_VARIABLE_CLD_32 = ((MR_Word) (conv1_STATE_VARIABLE_CLD_32));
              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Var_42, 2) = ((MR_Box) (VarRval_24));
              }
              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
              }
              Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "Free ", LHSVarName_22);
              {
                Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_41));
                MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (Var_44));
              }
              FreeVarCode_28 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_40)));
              Var_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), SaveArgsCode_26, FreeVarCode_28);
              Var_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceVarCode_23, Var_47);
              *Code_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), DeconstructCode_21, Var_46);
            }
          }
          else
          {
            *Code_18 = DeconstructCode_21;
            *STATE_VARIABLE_CLD_32 = STATE_VARIABLE_CLD_36_36;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *Code_18 = DeconstructCode_21;
          *STATE_VARIABLE_CLD_32 = STATE_VARIABLE_CLD_35_35;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_det_deconstruction_8_p_0(
  MR_Word LHSVar_9,
  MR_Word ConsId_10,
  MR_Word RHSVars_11,
  MR_Word ArgModes_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_84,
  MR_Word * STATE_VARIABLE_CLD_85)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16;
    MR_Word ConsTag_17;

    ll_backend__code_info__get_module_info_2_p_0(CI_14, &ModuleInfo_16);
    ConsTag_17 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(ModuleInfo_16, ConsId_10);
    switch (MR_tag((MR_Word) ConsTag_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ConsTag_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CLD_85 = STATE_VARIABLE_CLD_0_84;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RHSVar_45;
              MR_Word ArgMode_46;
              MR_Word VarType_47;
              MR_Word IsDummy_48;
              MR_Box conv3_RHSVar_45;
              MR_Box conv2_ArgMode_46;

              hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_11, ArgModes_12, &conv3_RHSVar_45, &conv2_ArgMode_46);
              RHSVar_45 = ((MR_Word) (conv3_RHSVar_45));
              ArgMode_46 = ((MR_Word) (conv2_ArgMode_46));
              VarType_47 = ll_backend__code_info__variable_type_2_f_0(CI_14, LHSVar_9);
              IsDummy_48 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_16, VarType_47);
              switch (IsDummy_48) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_84, RHSVar_45);
                    if (succeeded)
                    {
                      ll_backend__code_loc_dep__assign_const_to_var_5_p_0(RHSVar_45, (MR_Word) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[2])), CI_14, STATE_VARIABLE_CLD_0_84, STATE_VARIABLE_CLD_85);
                    }
                    else
                      *STATE_VARIABLE_CLD_85 = STATE_VARIABLE_CLD_0_84;
                    *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word RHSType_49;

                    RHSType_49 = ll_backend__code_info__variable_type_2_f_0(CI_14, RHSVar_45);
                    ll_backend__unify_gen_deconstruct__generate_deconstruct_no_tag_unify_arg_8_p_0(LHSVar_9, RHSVar_45, RHSType_49, ArgMode_46, Code_13, CI_14, STATE_VARIABLE_CLD_0_84, STATE_VARIABLE_CLD_85);
                  }
                  break;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_85 = STATE_VARIABLE_CLD_0_84;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 14:
            {
              *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CLD_85 = STATE_VARIABLE_CLD_0_84;
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 10:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_det_deconstruction\'/8", (MR_String) "unexpected tag");
                return;
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word RemoteArgsTagInfo_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word LHSRval_52;
              MR_Word VarTypes_53;
              MR_Word RHSVarsWidths_54;

              {
                LHSRval_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), LHSRval_52, 0) = ((MR_Box) (LHSVar_9));
              }
              ll_backend__code_info__get_vartypes_2_p_0(CI_14, &VarTypes_53);
              ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), ModuleInfo_16, ConsId_10, RHSVars_11, &RHSVarsWidths_54);
              switch (MR_tag((MR_Word) RemoteArgsTagInfo_51)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTypes_53, LHSRval_52, (MR_Word) (((MR_Box) (MR_Word) (UINT8_C(0)))), RHSVarsWidths_54, ArgModes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_84, STATE_VARIABLE_CLD_85);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Ptag_159 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoteArgsTagInfo_51, (MR_Integer) 0))));

                    ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTypes_53, LHSRval_52, Ptag_159, RHSVarsWidths_54, ArgModes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_84, STATE_VARIABLE_CLD_85);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word RemoteSectag_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_51, (MR_Integer) 1))));
                    MR_Word SectagSize_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RemoteSectag_55, (MR_Integer) 1))));
                    MR_Word Ptag_130 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RemoteArgsTagInfo_51, (MR_Integer) 0))));

                    if ((SectagSize_57 == (MR_Word) ((MR_Unsigned) 0U)))
                      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTypes_53, LHSRval_52, Ptag_130, RHSVarsWidths_54, ArgModes_12, Code_13, CI_14, STATE_VARIABLE_CLD_0_84, STATE_VARIABLE_CLD_85);
                    else
                    {
                      MR_Word TagwordRHSVarsWidths_59;
                      MR_Word TagwordArgModes_60;
                      MR_Word NonTagwordRHSVarsWidths_61;
                      MR_Word NonTagwordArgModes_62;
                      MR_Word LHSSectagWordLval_63;
                      MR_Word LHSSectagWordRval_65;
                      MR_Word MaterializeTagwordCode_66;
                      MR_Word ToOrRvals_67;
                      MR_Unsigned ToOrMask_68;
                      MR_Word AssignRightCode_69;
                      MR_Word TagwordCode_70;
                      MR_Word NonTagwordCode_81;
                      MR_Word Var_94;
                      MR_Word Var_98;
                      MR_Word STATE_VARIABLE_CLD_101_101;
                      MR_Word STATE_VARIABLE_CLD_103_103;

                      ll_backend__unify_gen_deconstruct__take_tagword_args_6_p_0(RHSVarsWidths_54, ArgModes_12, &TagwordRHSVarsWidths_59, &TagwordArgModes_60, &NonTagwordRHSVarsWidths_61, &NonTagwordArgModes_62);
                      {
                        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Ptag_130));
                      }
                      {
                        LHSSectagWordLval_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), LHSSectagWordLval_63, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                        MR_hl_field(MR_mktag(3), LHSSectagWordLval_63, 1) = ((MR_Box) (Var_94));
                        MR_hl_field(MR_mktag(3), LHSSectagWordLval_63, 2) = ((MR_Box) (LHSRval_52));
                        MR_hl_field(MR_mktag(3), LHSSectagWordLval_63, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[2])));
                      }
                      {
                        LHSSectagWordRval_65 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), LHSSectagWordRval_65, 0) = ((MR_Box) (LHSSectagWordLval_63));
                      }
                      MaterializeTagwordCode_66 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
                      {
                        Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (LHSSectagWordLval_63));
                        MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(LHSSectagWordRval_65, TagwordRHSVarsWidths_59, TagwordArgModes_60, Var_98, (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_67, (MR_Unsigned) 0U, &ToOrMask_68, &AssignRightCode_69, CI_14, STATE_VARIABLE_CLD_0_84, &STATE_VARIABLE_CLD_101_101);
                      if ((ToOrRvals_67 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        TagwordCode_70 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeTagwordCode_66, AssignRightCode_69);
                        STATE_VARIABLE_CLD_103_103 = STATE_VARIABLE_CLD_101_101;
                      }
                      else
                      {
                        MR_Word HeadToOrRval_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_67, (MR_Integer) 0))));
                        MR_Word TailToOrRvals_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_67, (MR_Integer) 1))));
                        MR_Word ToOrRval0_73;
                        MR_Word ToOrRval_74;
                        MR_Word ToOrRvalCode_75;
                        MR_Word ComplementMask_76;
                        MR_Word MaskedOldSectagWordRval_77;
                        MR_Word NewSectagWordRval_78;
                        MR_Word AssignLeftCode_80;
                        MR_Word Var_104;
                        MR_Unsigned Var_105;
                        MR_Word Var_111;
                        MR_Word Var_112;
                        MR_Word Var_113;
                        MR_Word Var_114;

                        ToOrRval0_73 = ll_backend__unify_gen_util__bitwise_or_some_rvals_2_f_0(HeadToOrRval_71, TailToOrRvals_72);
                        ll_backend__code_loc_dep__materialize_vars_in_rval_6_p_0(ToOrRval0_73, &ToOrRval_74, &ToOrRvalCode_75, CI_14, STATE_VARIABLE_CLD_101_101, &STATE_VARIABLE_CLD_103_103);
                        Var_105 = ~(ToOrMask_68);
                        {
                          Var_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_104, 0) = ((MR_Box) (Var_105));
                        }
                        {
                          ComplementMask_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ComplementMask_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), ComplementMask_76, 1) = ((MR_Box) (Var_104));
                        }
                        {
                          MaskedOldSectagWordRval_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), MaskedOldSectagWordRval_77, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), MaskedOldSectagWordRval_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
                          MR_hl_field(MR_mktag(3), MaskedOldSectagWordRval_77, 2) = ((MR_Box) (LHSSectagWordRval_65));
                          MR_hl_field(MR_mktag(3), MaskedOldSectagWordRval_77, 3) = ((MR_Box) (ComplementMask_76));
                        }
                        {
                          NewSectagWordRval_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), NewSectagWordRval_78, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), NewSectagWordRval_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[3])));
                          MR_hl_field(MR_mktag(3), NewSectagWordRval_78, 2) = ((MR_Box) (MaskedOldSectagWordRval_77));
                          MR_hl_field(MR_mktag(3), NewSectagWordRval_78, 3) = ((MR_Box) (ToOrRval_74));
                        }
                        {
                          Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (LHSSectagWordLval_63));
                          MR_hl_field(MR_mktag(3), Var_112, 2) = ((MR_Box) (NewSectagWordRval_78));
                        }
                        {
                          Var_111 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (Var_112));
                          MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) ((MR_String) "updating tagword"));
                        }
                        AssignLeftCode_80 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_111)));
                        Var_114 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ToOrRvalCode_75, AssignLeftCode_80);
                        Var_113 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AssignRightCode_69, Var_114);
                        TagwordCode_70 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeTagwordCode_66, Var_113);
                      }
                      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTypes_53, LHSRval_52, Ptag_130, NonTagwordRHSVarsWidths_61, NonTagwordArgModes_62, &NonTagwordCode_81, CI_14, STATE_VARIABLE_CLD_103_103, STATE_VARIABLE_CLD_85);
                      *Code_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), TagwordCode_70, NonTagwordCode_81);
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_det_deconstruction\'/8", (MR_String) "remote_args_ctor");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word Var_86;
              MR_Word STATE_VARIABLE_CLD_90_90;
              MR_Word RHSVarsWidths_141;
              MR_Word ToOrRvals_142;
              MR_Unsigned ToOrMask_143;
              MR_Word AssignRightCode_144;

              ll_backend__unify_gen_util__associate_cons_id_args_with_widths_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), ModuleInfo_16, ConsId_10, RHSVars_11, &RHSVarsWidths_141);
              {
                Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (LHSVar_9));
              }
              ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(Var_86, RHSVarsWidths_141, ArgModes_12, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), &ToOrRvals_142, (MR_Unsigned) 0U, &ToOrMask_143, &AssignRightCode_144, CI_14, STATE_VARIABLE_CLD_0_84, &STATE_VARIABLE_CLD_90_90);
              if ((ToOrRvals_142 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *Code_13 = AssignRightCode_144;
                *STATE_VARIABLE_CLD_85 = STATE_VARIABLE_CLD_90_90;
              }
              else
              {
                MR_Word HeadToOrRval_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_142, (MR_Integer) 0))));
                MR_Word TailToOrRvals_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ToOrRvals_142, (MR_Integer) 1))));
                MR_Word ToOrRval_135;
                MR_Word AssignLeftCode_136;

                ToOrRval_135 = ll_backend__unify_gen_util__bitwise_or_some_rvals_2_f_0(HeadToOrRval_133, TailToOrRvals_134);
                ll_backend__code_loc_dep__reassign_tagword_var_7_p_0(LHSVar_9, ToOrMask_143, ToOrRval_135, &AssignLeftCode_136, CI_14, STATE_VARIABLE_CLD_90_90, STATE_VARIABLE_CLD_85);
                *Code_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), AssignRightCode_144, AssignLeftCode_136);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word Ptag_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ConsTag_17, (MR_Integer) 1))));
              MR_Word RHSVar_127;
              MR_Word ArgMode_128;
              MR_Box conv1_RHSVar_127;
              MR_Box conv0_ArgMode_128;

              hlds__goal_form__get_notag_or_direct_arg_arg_mode_4_p_0((MR_Word) (&ll_backend__unify_gen_deconstruct_scalar_common_1[0]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_mode_0), RHSVars_11, ArgModes_12, &conv1_RHSVar_127, &conv0_ArgMode_128);
              RHSVar_127 = ((MR_Word) (conv1_RHSVar_127));
              ArgMode_128 = ((MR_Word) (conv0_ArgMode_128));
              ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_8_p_0(LHSVar_9, RHSVar_127, Ptag_50, ArgMode_128, Code_13, CI_14, STATE_VARIABLE_CLD_0_84, STATE_VARIABLE_CLD_85);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_direct_arg_deconstruct_8_p_0(
  MR_Word LHSVar_9,
  MR_Word RHSVar_10,
  MR_Word Ptag_11,
  MR_Word ArgMode_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_21,
  MR_Word * STATE_VARIABLE_CLD_22)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16;
    MR_Word RHSType_17;
    MR_Word Dir_18;

    ll_backend__code_info__get_module_info_2_p_0(CI_14, &ModuleInfo_16);
    RHSType_17 = ll_backend__code_info__variable_type_2_f_0(CI_14, RHSVar_10);
    ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_16, ArgMode_12, RHSType_17, &Dir_18);
    switch (Dir_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_23;

          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (RHSVar_10));
          }
          ll_backend__code_loc_dep__reassign_mkword_hole_var_6_p_0(LHSVar_9, Ptag_11, Var_23, Code_13, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_21, RHSVar_10);
          if (succeeded)
          {
            uint8_t PtagUint8_19 = (uint8_t) (Ptag_11);

            succeeded = (PtagUint8_19 == UINT8_C(0));
            if (succeeded)
            {
              ll_backend__code_loc_dep__assign_var_to_var_4_p_0(RHSVar_10, LHSVar_9, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
              *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            }
            else
            {
              MR_Word LHSBodyRval_20;
              MR_Word Var_27;
              MR_Word Var_28;
              MR_Word Var_29;
              MR_Integer Var_30;

              {
                Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (LHSVar_9));
              }
              Var_30 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_19);
              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
              }
              {
                Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
              }
              {
                LHSBodyRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LHSBodyRval_20, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), LHSBodyRval_20, 1) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), LHSBodyRval_20, 2) = ((MR_Box) (Var_27));
                MR_hl_field(MR_mktag(3), LHSBodyRval_20, 3) = ((MR_Box) (Var_28));
              }
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(RHSVar_10, LHSBodyRval_20, Code_13, STATE_VARIABLE_CLD_0_21, STATE_VARIABLE_CLD_22);
            }
          }
          else
          {
            *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_22 = STATE_VARIABLE_CLD_0_21;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_22 = STATE_VARIABLE_CLD_0_21;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__take_tagword_args_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.take_tagword_args\'/6", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.take_tagword_args\'/6", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ArgMode_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgModes_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgPosWidth_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) ArgPosWidth_32)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__5_5 = HeadVar__1_1;
            *HeadVar__6_6 = HeadVar__2_2;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__5_5 = HeadVar__1_1;
            *HeadVar__6_6 = HeadVar__2_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_32, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
                *HeadVar__5_5 = HeadVar__1_1;
                *HeadVar__6_6 = HeadVar__2_2;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word TailTagwordVarsWidths_41;
                MR_Word TailTagwordArgModes_42;

                ll_backend__unify_gen_deconstruct__take_tagword_args_6_p_0(Var_54, ArgModes_26, &TailTagwordVarsWidths_41, &TailTagwordArgModes_42, HeadVar__5_5, HeadVar__6_6);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_55));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTagwordVarsWidths_41));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgMode_25));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailTagwordArgModes_42));
                }
              }
              break;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word FieldLvals_4,
  MR_Word STATE_VARIABLE_ToOrRvals_0_5,
  MR_Word * STATE_VARIABLE_ToOrRvals_6,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_7,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_8,
  MR_Word * HeadVar__9_9,
  MR_Word HeadVar__10_10,
  MR_Word STATE_VARIABLE_CLD_0_11,
  MR_Word * STATE_VARIABLE_CLD_12)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__9_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_12 = STATE_VARIABLE_CLD_0_11;
      *STATE_VARIABLE_ToOrMask_8 = STATE_VARIABLE_ToOrMask_0_7;
      *STATE_VARIABLE_ToOrRvals_6 = STATE_VARIABLE_ToOrRvals_0_5;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_unify_args\'/12", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_unify_args\'/12", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ArgMode_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgModes_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word HeadCode_70;
      MR_Word TailCode_71;
      MR_Word STATE_VARIABLE_ToOrRvals_78_78;
      MR_Unsigned STATE_VARIABLE_ToOrMask_79_79;
      MR_Word STATE_VARIABLE_CLD_80_80;

      ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_12_p_0(HeadVar__1_1, Var_87, ArgMode_62, FieldLvals_4, STATE_VARIABLE_ToOrRvals_0_5, &STATE_VARIABLE_ToOrRvals_78_78, STATE_VARIABLE_ToOrMask_0_7, &STATE_VARIABLE_ToOrMask_79_79, &HeadCode_70, HeadVar__10_10, STATE_VARIABLE_CLD_0_11, &STATE_VARIABLE_CLD_80_80);
      ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_args_12_p_0(HeadVar__1_1, Var_86, ArgModes_63, FieldLvals_4, STATE_VARIABLE_ToOrRvals_78_78, STATE_VARIABLE_ToOrRvals_6, STATE_VARIABLE_ToOrMask_79_79, STATE_VARIABLE_ToOrMask_8, &TailCode_71, HeadVar__10_10, STATE_VARIABLE_CLD_80_80, STATE_VARIABLE_CLD_12);
      *HeadVar__9_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCode_70, TailCode_71);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_unify_arg_12_p_0(
  MR_Word LHSRval_13,
  MR_Word RHSVarWidth_14,
  MR_Word ArgMode_15,
  MR_Word FieldLvals_16,
  MR_Word STATE_VARIABLE_ToOrRvals_0_28,
  MR_Word * STATE_VARIABLE_ToOrRvals_29,
  MR_Unsigned STATE_VARIABLE_ToOrMask_0_30,
  MR_Unsigned * STATE_VARIABLE_ToOrMask_31,
  MR_Word * Code_19,
  MR_Word CI_20,
  MR_Word STATE_VARIABLE_CLD_0_32,
  MR_Word * STATE_VARIABLE_CLD_33)
{
  {
    MR_bool succeeded;
    MR_Word RHSVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarWidth_14, (MR_Integer) 0))));
    MR_Word ArgPosWidth_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHSVarWidth_14, (MR_Integer) 1))));
    MR_Word ModuleInfo_24;
    MR_Word VarTypes_25;
    MR_Word RHSType_26;
    MR_Word Dir_27;

    ll_backend__code_info__get_module_info_2_p_0(CI_20, &ModuleInfo_24);
    ll_backend__code_info__get_vartypes_2_p_0(CI_20, &VarTypes_25);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_25, RHSVar_22, &RHSType_26);
    ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_24, ArgMode_15, RHSType_26, &Dir_27);
    switch (Dir_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          switch (MR_tag((MR_Word) ArgPosWidth_23)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_left\'/6", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_left\'/6", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                  return;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_23, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_left\'/6", (MR_String) "ArgPosWidth is not a packed arg_pos_width");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Shift_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_23, (MR_Integer) 3))));
                    MR_Word Mask_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_23, (MR_Integer) 5))));
                    MR_Word Fill_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_23, (MR_Integer) 6))) & (MR_Integer) 7);
                    MR_Integer ShiftInt_54 = (MR_Integer) (Shift_50);
                    MR_Integer MaskInt_55 = (MR_Integer) (Mask_52);
                    MR_Word LeftShiftedRHSRval_56;
                    MR_Word Var_72;
                    MR_Unsigned Var_75;
                    MR_Unsigned Var_76;

                    {
                      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (RHSVar_22));
                    }
                    LeftShiftedRHSRval_56 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(Var_72, Shift_50, Fill_53);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_ToOrRvals_29 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LeftShiftedRHSRval_56));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ToOrRvals_0_28));
                    }
                    Var_76 = mercury__uint__cast_from_int_1_f_0(MaskInt_55);
                    Var_75 = mercury__uint__f_60_60_2_f_0(Var_76, ShiftInt_54);
                    *STATE_VARIABLE_ToOrMask_31 = (Var_75 | STATE_VARIABLE_ToOrMask_0_30);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    *STATE_VARIABLE_ToOrRvals_29 = STATE_VARIABLE_ToOrRvals_0_28;
                    *STATE_VARIABLE_ToOrMask_31 = STATE_VARIABLE_ToOrMask_0_30;
                  }
                  break;
              }
              break;
          }
          *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_33 = STATE_VARIABLE_CLD_0_32;
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_32, RHSVar_22);
          if (succeeded)
            ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_assign_right_7_p_0(LHSRval_13, RHSVar_22, ArgPosWidth_23, FieldLvals_16, Code_19, STATE_VARIABLE_CLD_0_32, STATE_VARIABLE_CLD_33);
          else
          {
            *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_33 = STATE_VARIABLE_CLD_0_32;
          }
          *STATE_VARIABLE_ToOrRvals_29 = STATE_VARIABLE_ToOrRvals_0_28;
          *STATE_VARIABLE_ToOrMask_31 = STATE_VARIABLE_ToOrMask_0_30;
        }
        break;
      case (MR_Integer) 2:
        {
          *Code_19 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_ToOrRvals_29 = STATE_VARIABLE_ToOrRvals_0_28;
          *STATE_VARIABLE_ToOrMask_31 = STATE_VARIABLE_ToOrMask_0_30;
          *STATE_VARIABLE_CLD_33 = STATE_VARIABLE_CLD_0_32;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_tagword_assign_right_7_p_0(
  MR_Word LHSRval_8,
  MR_Word RHSVar_9,
  MR_Word ArgPosWidth_10,
  MR_Word FieldLvals_11,
  MR_Word * Code_12,
  MR_Word STATE_VARIABLE_CLD_0_39,
  MR_Word * STATE_VARIABLE_CLD_40)
{
  switch (MR_tag((MR_Word) ArgPosWidth_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_right\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
          return;
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_right\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
          return;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_tagword_assign_right\'/7", (MR_String) "ArgPosWidth does not belong in tagword");
              return;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Shift_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 3))));
            MR_Word Mask_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 5))));
            MR_Word Fill_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_10, (MR_Integer) 6))) & (MR_Integer) 7);
            MR_Word LeftRval0_20;
            MR_Integer MaskInt_21;
            MR_Word MaskedLeftRval0_22;
            MR_Word MaskedLeftRval_23;
            MR_Word Var_45;
            MR_Word Var_46;

            LeftRval0_20 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(LHSRval_8, Shift_16);
            MaskInt_21 = (MR_Integer) (Mask_18);
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MaskInt_21));
            }
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
            }
            {
              MaskedLeftRval0_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), MaskedLeftRval0_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), MaskedLeftRval0_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
              MR_hl_field(MR_mktag(3), MaskedLeftRval0_22, 2) = ((MR_Box) (LeftRval0_20));
              MR_hl_field(MR_mktag(3), MaskedLeftRval0_22, 3) = ((MR_Box) (Var_45));
            }
            ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_19, MaskedLeftRval0_22, &MaskedLeftRval_23);
            if ((FieldLvals_11 == (MR_Word) ((MR_Unsigned) 0U)))
              ll_backend__code_loc_dep__assign_expr_to_var_5_p_0(RHSVar_9, MaskedLeftRval_23, Code_12, STATE_VARIABLE_CLD_0_39, STATE_VARIABLE_CLD_40);
            else
              ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(RHSVar_9, FieldLvals_11, MaskedLeftRval_23, Code_12, STATE_VARIABLE_CLD_0_39, STATE_VARIABLE_CLD_40);
          }
          break;
        case (MR_Integer) 2:
          {
            *Code_12 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_40 = STATE_VARIABLE_CLD_0_39;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(
  MR_Word VarTypes_1,
  MR_Word LHSRval_2,
  MR_Word Ptag_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_CLD_0_8,
  MR_Word * STATE_VARIABLE_CLD_9)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
      *STATE_VARIABLE_CLD_9 = STATE_VARIABLE_CLD_0_8;
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_unify_args\'/9", (MR_String) "length mismatch");
        return;
      }
    }
  else
  {
    MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.unify_gen_deconstruct.generate_deconstruct_unify_args\'/9", (MR_String) "length mismatch");
        return;
      }
    }
    else
    {
      MR_Word ArgMode_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ArgModes_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word RHSVar_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_84, (MR_Integer) 0))));
      MR_Word ArgPosWidth_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_84, (MR_Integer) 1))));
      MR_Integer CellOffsetInt_68;
      MR_Word LHSField_69;
      MR_Word RHSType_70;
      MR_Word HeadCode_71;
      MR_Word TailCode_72;
      MR_Word STATE_VARIABLE_CLD_75_75;

      switch (MR_tag((MR_Word) ArgPosWidth_52)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          CellOffsetInt_68 = (MR_Integer) -1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word CellOffset_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ArgPosWidth_52, (MR_Integer) 1))));

            CellOffsetInt_68 = (MR_Integer) (CellOffset_79);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CellOffset_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ArgPosWidth_52, (MR_Integer) 1))));

            CellOffsetInt_68 = (MR_Integer) (CellOffset_54);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CellOffset_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));

                CellOffsetInt_68 = (MR_Integer) (CellOffset_81);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word CellOffset_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));

                CellOffsetInt_68 = (MR_Integer) (CellOffset_82);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word CellOffset_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_52, (MR_Integer) 2))));

                CellOffsetInt_68 = (MR_Integer) (CellOffset_80);
              }
              break;
          }
          break;
      }
      {
        LHSField_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), LHSField_69, 0) = ((MR_Box) (Ptag_3));
        MR_hl_field(MR_mktag(0), LHSField_69, 1) = ((MR_Box) (LHSRval_2));
        MR_hl_field(MR_mktag(0), LHSField_69, 2) = ((MR_Box) (CellOffsetInt_68));
        MR_hl_field(MR_mktag(0), LHSField_69, 3) = ((MR_Box) (ArgPosWidth_52));
      }
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_1, RHSVar_51, &RHSType_70);
      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_8_p_0(LHSField_69, RHSVar_51, RHSType_70, ArgMode_46, &HeadCode_71, HeadVar__7_7, STATE_VARIABLE_CLD_0_8, &STATE_VARIABLE_CLD_75_75);
      ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_args_9_p_0(VarTypes_1, LHSRval_2, Ptag_3, Var_83, ArgModes_47, &TailCode_72, HeadVar__7_7, STATE_VARIABLE_CLD_75_75, STATE_VARIABLE_CLD_9);
      *HeadVar__6_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), HeadCode_71, TailCode_72);
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_unify_arg_8_p_0(
  MR_Word LHSField_9,
  MR_Word RHSVar_10,
  MR_Word RHSType_11,
  MR_Word ArgMode_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_18,
  MR_Word * STATE_VARIABLE_CLD_19)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16;
    MR_Word Dir_17;

    ll_backend__code_info__get_module_info_2_p_0(CI_14, &ModuleInfo_16);
    ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_16, ArgMode_12, RHSType_11, &Dir_17);
    switch (Dir_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_left_6_p_0(LHSField_9, RHSVar_10, Code_13, CI_14, STATE_VARIABLE_CLD_0_18, STATE_VARIABLE_CLD_19);
        break;
      case (MR_Integer) 1:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_18, RHSVar_10);
          if (succeeded)
            ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_right_6_p_0(LHSField_9, RHSVar_10, Code_13, CI_14, STATE_VARIABLE_CLD_0_18, STATE_VARIABLE_CLD_19);
          else
          {
            *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_left_6_p_0(
  MR_Word LHSField_7,
  MR_Word RHSVar_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_49,
  MR_Word * STATE_VARIABLE_CLD_50)
{
  {
    MR_Word LHSPtag_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSField_7, (MR_Integer) 0))));
    MR_Word LHSBaseRval0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSField_7, (MR_Integer) 1))));
    MR_Integer LHSOffset_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LHSField_7, (MR_Integer) 2))));
    MR_Word ArgPosWidth_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LHSField_7, (MR_Integer) 3))));
    MR_Word ProduceRHSVarCode_16;
    MR_Word RHSRval_17;
    MR_Word LHSBaseRval_18;
    MR_Word MaterializeLHSBaseCode_19;
    MR_Word AssignCode_23;
    MR_Word STATE_VARIABLE_CLD_51_51;
    MR_Word Var_88;

    ll_backend__code_loc_dep__produce_variable_6_p_0(RHSVar_8, &ProduceRHSVarCode_16, &RHSRval_17, CI_10, STATE_VARIABLE_CLD_0_49, &STATE_VARIABLE_CLD_51_51);
    ll_backend__code_loc_dep__materialize_vars_in_rval_6_p_0(LHSBaseRval0_13, &LHSBaseRval_18, &MaterializeLHSBaseCode_19, CI_10, STATE_VARIABLE_CLD_51_51, STATE_VARIABLE_CLD_50);
    switch (MR_tag((MR_Word) ArgPosWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          AssignCode_23 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHSLval_22;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;

          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (LHSPtag_12));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (LHSOffset_14));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Var_84));
          }
          {
            LHSLval_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LHSLval_22, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), LHSLval_22, 1) = ((MR_Box) (Var_82));
            MR_hl_field(MR_mktag(3), LHSLval_22, 2) = ((MR_Box) (LHSBaseRval_18));
            MR_hl_field(MR_mktag(3), LHSLval_22, 3) = ((MR_Box) (Var_83));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (LHSLval_22));
            MR_hl_field(MR_mktag(3), Var_86, 2) = ((MR_Box) (RHSRval_17));
          }
          {
            Var_85 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(0), Var_85, 1) = ((MR_Box) ((MR_String) "Copy value"));
          }
          AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_85)));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word LHSLvalA_27;
          MR_Word LHSLvalB_28;
          MR_Word SrcA_29;
          MR_Word SrcB_30;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Integer Var_71;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;

          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (LHSPtag_12));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (LHSOffset_14));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
          }
          {
            LHSLvalA_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LHSLvalA_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), LHSLvalA_27, 1) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(3), LHSLvalA_27, 2) = ((MR_Box) (LHSBaseRval_18));
            MR_hl_field(MR_mktag(3), LHSLvalA_27, 3) = ((MR_Box) (Var_66));
          }
          Var_71 = (MR_Integer) ((MR_Unsigned) LHSOffset_14 + (MR_Unsigned) (MR_Integer) 1);
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
          }
          {
            LHSLvalB_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), LHSLvalB_28, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), LHSLvalB_28, 1) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(3), LHSLvalB_28, 2) = ((MR_Box) (LHSBaseRval_18));
            MR_hl_field(MR_mktag(3), LHSLvalB_28, 3) = ((MR_Box) (Var_69));
          }
          {
            SrcA_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SrcA_29, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), SrcA_29, 1) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(MR_mktag(3), SrcA_29, 2) = ((MR_Box) (RHSRval_17));
          }
          {
            SrcB_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), SrcB_30, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), SrcB_30, 1) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(MR_mktag(3), SrcB_30, 2) = ((MR_Box) (RHSRval_17));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) (LHSLvalA_27));
            MR_hl_field(MR_mktag(3), Var_77, 2) = ((MR_Box) (SrcA_29));
          }
          {
            Var_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) ((MR_String) "Update double word"));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (LHSLvalB_28));
            MR_hl_field(MR_mktag(3), Var_80, 2) = ((MR_Box) (SrcB_30));
          }
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) ((MR_String) "Update double word"));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
          }
          AssignCode_23 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Var_75);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Shift_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 3))));
              MR_Word Mask_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 5))));
              MR_Word Fill_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Integer ShiftInt_41 = (MR_Integer) (Shift_34);
              MR_Integer MaskInt_42 = (MR_Integer) (Mask_36);
              MR_Word ComplementMask_43;
              MR_Word MaskOld_44;
              MR_Word ShiftedRHSRval_45;
              MR_Word CombinedRval_46;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Integer Var_57;
              MR_Integer Var_58;
              MR_Word Var_61;
              MR_Word Var_62;
              MR_Word Var_63;
              MR_Word LHSLval_89;

              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (LHSPtag_12));
              }
              {
                Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (LHSOffset_14));
              }
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (Var_55));
              }
              {
                LHSLval_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LHSLval_89, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), LHSLval_89, 1) = ((MR_Box) (Var_53));
                MR_hl_field(MR_mktag(3), LHSLval_89, 2) = ((MR_Box) (LHSBaseRval_18));
                MR_hl_field(MR_mktag(3), LHSLval_89, 3) = ((MR_Box) (Var_54));
              }
              Var_58 = mercury__int__f_60_60_2_f_0(MaskInt_42, ShiftInt_41);
              Var_57 = ~(Var_58);
              {
                Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
              }
              {
                ComplementMask_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ComplementMask_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), ComplementMask_43, 1) = ((MR_Box) (Var_56));
              }
              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (LHSLval_89));
              }
              {
                MaskOld_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskOld_44, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), MaskOld_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
                MR_hl_field(MR_mktag(3), MaskOld_44, 2) = ((MR_Box) (Var_61));
                MR_hl_field(MR_mktag(3), MaskOld_44, 3) = ((MR_Box) (ComplementMask_43));
              }
              ShiftedRHSRval_45 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(RHSRval_17, Shift_34, Fill_37);
              CombinedRval_46 = ll_backend__unify_gen_util__bitwise_or_two_rvals_2_f_0(MaskOld_44, ShiftedRHSRval_45);
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (LHSLval_89));
                MR_hl_field(MR_mktag(3), Var_63, 2) = ((MR_Box) (CombinedRval_46));
              }
              {
                Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) ((MR_String) "Update part of word"));
              }
              AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_62)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 3))));
              MR_Word Mask_96 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 5))));
              MR_Word Fill_97 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Integer ShiftInt_98 = (MR_Integer) (Shift_95);
              MR_Integer MaskInt_99 = (MR_Integer) (Mask_96);
              MR_Word ComplementMask_100;
              MR_Word MaskOld_101;
              MR_Word ShiftedRHSRval_102;
              MR_Word CombinedRval_103;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Integer Var_108;
              MR_Integer Var_109;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word LHSLval_116;

              {
                Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (LHSPtag_12));
              }
              {
                Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (LHSOffset_14));
              }
              {
                Var_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_105, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_105, 1) = ((MR_Box) (Var_106));
              }
              {
                LHSLval_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), LHSLval_116, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), LHSLval_116, 1) = ((MR_Box) (Var_104));
                MR_hl_field(MR_mktag(3), LHSLval_116, 2) = ((MR_Box) (LHSBaseRval_18));
                MR_hl_field(MR_mktag(3), LHSLval_116, 3) = ((MR_Box) (Var_105));
              }
              Var_109 = mercury__int__f_60_60_2_f_0(MaskInt_99, ShiftInt_98);
              Var_108 = ~(Var_109);
              {
                Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
              }
              {
                ComplementMask_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ComplementMask_100, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), ComplementMask_100, 1) = ((MR_Box) (Var_107));
              }
              {
                Var_112 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (LHSLval_116));
              }
              {
                MaskOld_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskOld_101, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), MaskOld_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
                MR_hl_field(MR_mktag(3), MaskOld_101, 2) = ((MR_Box) (Var_112));
                MR_hl_field(MR_mktag(3), MaskOld_101, 3) = ((MR_Box) (ComplementMask_100));
              }
              ShiftedRHSRval_102 = ll_backend__unify_gen_util__left_shift_rval_3_f_0(RHSRval_17, Shift_95, Fill_97);
              CombinedRval_103 = ll_backend__unify_gen_util__bitwise_or_two_rvals_2_f_0(MaskOld_101, ShiftedRHSRval_102);
              {
                Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (LHSLval_116));
                MR_hl_field(MR_mktag(3), Var_114, 2) = ((MR_Box) (CombinedRval_103));
              }
              {
                Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_113, 0) = ((MR_Box) (Var_114));
                MR_hl_field(MR_mktag(0), Var_113, 1) = ((MR_Box) ((MR_String) "Update part of word"));
              }
              AssignCode_23 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_113)));
            }
            break;
          case (MR_Integer) 2:
            {
              AssignCode_23 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            }
            break;
        }
        break;
    }
    Var_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), MaterializeLHSBaseCode_19, AssignCode_23);
    *Code_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ProduceRHSVarCode_16, Var_88);
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_assign_right_6_p_0(
  MR_Word RightField_7,
  MR_Word LeftVar_8,
  MR_Word * Code_9,
  MR_Word CI_10,
  MR_Word STATE_VARIABLE_CLD_0_40,
  MR_Word * STATE_VARIABLE_CLD_41)
{
  {
    MR_Word RightPtag_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RightField_7, (MR_Integer) 0))));
    MR_Word RightBaseRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RightField_7, (MR_Integer) 1))));
    MR_Integer RightOffset_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RightField_7, (MR_Integer) 2))));
    MR_Word ArgPosWidth_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RightField_7, (MR_Integer) 3))));

    switch (MR_tag((MR_Word) ArgPosWidth_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_41 = STATE_VARIABLE_CLD_0_40;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RightLval_18;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;

          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (RightPtag_12));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (RightOffset_14));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
          }
          {
            RightLval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightLval_18, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), RightLval_18, 1) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(3), RightLval_18, 2) = ((MR_Box) (RightBaseRval_13));
            MR_hl_field(MR_mktag(3), RightLval_18, 3) = ((MR_Box) (Var_69));
          }
          ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(LeftVar_8, RightLval_18, Code_9, CI_10, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RightLvalA_22;
          MR_Word RightLvalB_23;
          MR_Word RightRval_24;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Integer Var_59;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_66;

          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (RightPtag_12));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (RightOffset_14));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (Var_55));
          }
          {
            RightLvalA_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightLvalA_22, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), RightLvalA_22, 1) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(3), RightLvalA_22, 2) = ((MR_Box) (RightBaseRval_13));
            MR_hl_field(MR_mktag(3), RightLvalA_22, 3) = ((MR_Box) (Var_54));
          }
          Var_59 = (MR_Integer) ((MR_Unsigned) RightOffset_14 + (MR_Unsigned) (MR_Integer) 1);
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
          }
          {
            RightLvalB_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightLvalB_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(MR_mktag(3), RightLvalB_23, 1) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(3), RightLvalB_23, 2) = ((MR_Box) (RightBaseRval_13));
            MR_hl_field(MR_mktag(3), RightLvalB_23, 3) = ((MR_Box) (Var_57));
          }
          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (RightLvalA_22));
          }
          {
            Var_63 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (RightLvalB_23));
          }
          {
            RightRval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), RightRval_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), RightRval_24, 1) = ((MR_Box) ((MR_Unsigned) 88U));
            MR_hl_field(MR_mktag(3), RightRval_24, 2) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(3), RightRval_24, 3) = ((MR_Box) (Var_63));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (RightLvalB_23));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (RightLvalA_22));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
          }
          ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(LeftVar_8, Var_64, RightRval_24, Code_9, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Shift_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 3))));
              MR_Word Mask_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 5))));
              MR_Word Fill_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Word RightRval0_34;
              MR_Integer MaskInt_35;
              MR_Word MaskedRightRval0_36;
              MR_Word MaskedRightRval_37;
              MR_Word Var_42;
              MR_Word Var_43;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word Var_50;
              MR_Word RightLval_72;

              {
                Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (RightPtag_12));
              }
              {
                Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (RightOffset_14));
              }
              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
              }
              {
                RightLval_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RightLval_72, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), RightLval_72, 1) = ((MR_Box) (Var_42));
                MR_hl_field(MR_mktag(3), RightLval_72, 2) = ((MR_Box) (RightBaseRval_13));
                MR_hl_field(MR_mktag(3), RightLval_72, 3) = ((MR_Box) (Var_43));
              }
              {
                Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (RightLval_72));
              }
              RightRval0_34 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(Var_45, Shift_27);
              MaskInt_35 = (MR_Integer) (Mask_29);
              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MaskInt_35));
              }
              {
                Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
              }
              {
                MaskedRightRval0_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_36, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_36, 2) = ((MR_Box) (RightRval0_34));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_36, 3) = ((MR_Box) (Var_48));
              }
              ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_30, MaskedRightRval0_36, &MaskedRightRval_37);
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (RightLval_72));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(LeftVar_8, Var_50, MaskedRightRval_37, Code_9, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Shift_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 3))));
              MR_Word Mask_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 5))));
              MR_Word Fill_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), ArgPosWidth_15, (MR_Integer) 6))) & (MR_Integer) 7);
              MR_Word RightRval0_77;
              MR_Integer MaskInt_78;
              MR_Word MaskedRightRval0_79;
              MR_Word MaskedRightRval_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;
              MR_Word Var_84;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Var_89;
              MR_Word RightLval_91;

              {
                Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (RightPtag_12));
              }
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (RightOffset_14));
              }
              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (Var_83));
              }
              {
                RightLval_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), RightLval_91, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), RightLval_91, 1) = ((MR_Box) (Var_81));
                MR_hl_field(MR_mktag(3), RightLval_91, 2) = ((MR_Box) (RightBaseRval_13));
                MR_hl_field(MR_mktag(3), RightLval_91, 3) = ((MR_Box) (Var_82));
              }
              {
                Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (RightLval_91));
              }
              RightRval0_77 = ll_backend__unify_gen_util__right_shift_rval_2_f_0(Var_84, Shift_74);
              MaskInt_78 = (MR_Integer) (Mask_75);
              {
                Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MaskInt_78));
              }
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_87, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_87, 1) = ((MR_Box) (Var_88));
              }
              {
                MaskedRightRval0_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_79, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__unify_gen_deconstruct_scalar_common_1[1])));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_79, 2) = ((MR_Box) (RightRval0_77));
                MR_hl_field(MR_mktag(3), MaskedRightRval0_79, 3) = ((MR_Box) (Var_87));
              }
              ll_backend__unify_gen_util__maybe_cast_masked_off_rval_3_p_0(Fill_76, MaskedRightRval0_79, &MaskedRightRval_80);
              {
                Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (RightLval_91));
                MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              ll_backend__code_loc_dep__assign_field_lval_expr_to_var_6_p_0(LeftVar_8, Var_89, MaskedRightRval_80, Code_9, STATE_VARIABLE_CLD_0_40, STATE_VARIABLE_CLD_41);
            }
            break;
          case (MR_Integer) 2:
            {
              *Code_9 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
              *STATE_VARIABLE_CLD_41 = STATE_VARIABLE_CLD_0_40;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__unify_gen_deconstruct__generate_deconstruct_no_tag_unify_arg_8_p_0(
  MR_Word LHSVar_9,
  MR_Word RHSVar_10,
  MR_Word RHSType_11,
  MR_Word ArgMode_12,
  MR_Word * Code_13,
  MR_Word CI_14,
  MR_Word STATE_VARIABLE_CLD_0_18,
  MR_Word * STATE_VARIABLE_CLD_19)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_16;
    MR_Word Dir_17;

    ll_backend__code_info__get_module_info_2_p_0(CI_14, &ModuleInfo_16);
    ll_backend__unify_gen_util__compute_assign_direction_4_p_0(ModuleInfo_16, ArgMode_12, RHSType_11, &Dir_17);
    switch (Dir_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_18, LHSVar_9);
          if (succeeded)
            ll_backend__code_loc_dep__assign_var_to_var_4_p_0(LHSVar_9, RHSVar_10, STATE_VARIABLE_CLD_0_18, STATE_VARIABLE_CLD_19);
          else
            *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ll_backend__code_loc_dep__variable_is_forward_live_2_p_0(STATE_VARIABLE_CLD_0_18, RHSVar_10);
          if (succeeded)
          {
            ll_backend__code_loc_dep__assign_var_to_var_4_p_0(RHSVar_10, LHSVar_9, STATE_VARIABLE_CLD_0_18, STATE_VARIABLE_CLD_19);
            *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          }
          else
          {
            *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
            *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *Code_13 = mercury__cord__empty_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0));
          *STATE_VARIABLE_CLD_19 = STATE_VARIABLE_CLD_0_18;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__unify_gen_deconstruct____Unify____uni_field_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__unify_gen_deconstruct____Unify____uni_field_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__unify_gen_deconstruct____Compare____uni_field_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__unify_gen_deconstruct____Compare____uni_field_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ll_backend__unify_gen_deconstruct__init(void)
{
}

void mercury__ll_backend__unify_gen_deconstruct__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__unify_gen_deconstruct__ll_backend__unify_gen_deconstruct__type_ctor_info_uni_field_0);
}

void mercury__ll_backend__unify_gen_deconstruct__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__unify_gen_deconstruct__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.unify_gen_deconstruct.
