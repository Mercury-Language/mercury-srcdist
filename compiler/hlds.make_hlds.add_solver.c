/*
** Automatically generated from `add_solver.m'
** by the Mercury compiler,
** version rotd-2022-02-13
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


// :- module hlds.make_hlds.add_solver.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_solver__init
ENDINIT
*/

#include "hlds.make_hlds.add_solver.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"




static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_types_solver_aux_pred_info_0_0[5];

static const MR_DuFunctorDesc hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_stag_ordered_solver_aux_pred_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_ptag_ordered_solver_aux_pred_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_name_ordered_solver_aux_pred_info_0[1];

static const MR_Integer hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__functor_number_map_solver_aux_pred_info_0[1];

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
  MR_Word SymName_4,
  MR_Integer Arity_5);

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
  MR_Word SymName_4,
  MR_Integer Arity_5);

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
  MR_Word SymName_4,
  MR_Integer Arity_5);

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
  MR_Word SymName_4,
  MR_Integer Arity_5);

static MR_bool MR_CALL 
hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_2[1][1];




static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_2[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__make_hlds__add_solver__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_types_solver_aux_pred_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0 = {
  (MR_String) "solver_aux_pred_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_types_solver_aux_pred_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_stag_ordered_solver_aux_pred_info_0_0[1] = {
  &hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_ptag_ordered_solver_aux_pred_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_stag_ordered_solver_aux_pred_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_name_ordered_solver_aux_pred_info_0[1] = {
  &hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0
};

static const MR_Integer hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__functor_number_map_solver_aux_pred_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_solver",
  (MR_String) "solver_aux_pred_info",
  { hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_name_ordered_solver_aux_pred_info_0 },
  { hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_ptag_ordered_solver_aux_pred_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__functor_number_map_solver_aux_pred_info_0,

};

void MR_CALL 
hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__prog_data____Compare____solver_type_details_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
            mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____solver_type_details_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
            succeeded = mercury__term____Unify____context_0_0(ArgX5_11, ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_solver__get_solver_type_aux_pred_defns_3_p_0(
  MR_Word Target_4,
  MR_Word SolverAuxPredInfo_5,
  MR_Word * PragmaForeignProcs_6)
{
  MR_Word TypeSymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_5, (MR_Integer) 0))));
  MR_Word TypeParams_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_5, (MR_Integer) 1))));
  MR_Word SolverTypeDetails_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_5, (MR_Integer) 3))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_5, (MR_Integer) 4))));
  MR_Integer Arity_12;
  MR_Word AnyInst_13;
  MR_Word GroundInst_14;
  MR_Word InAnyMode_15;
  MR_Word InGroundMode_16;
  MR_Word OutAnyMode_17;
  MR_Word OutGroundMode_18;
  MR_Word ProgVarSet0_19;
  MR_Word X_20;
  MR_Word ProgVarSet1_21;
  MR_Word Y_22;
  MR_Word ProgVarSet_23;
  MR_Word InstVarSet_24;
  MR_Word Lang_25;
  MR_Word Attrs_27;
  MR_Word Impl_28;
  MR_Word ToGroundRepnSymName_29;
  MR_Word XTGPragmaVar_30;
  MR_Word YTGPragmaVar_31;
  MR_Word ToGroundRepnArgs_32;
  MR_Word ToGroundRepnFPInfo_33;
  MR_Word PragmaToGroundRepnFPInfo_34;
  MR_Word ToAnyRepnSymName_35;
  MR_Word XTAPragmaVar_36;
  MR_Word YTAPragmaVar_37;
  MR_Word ToAnyRepnArgs_38;
  MR_Word ToAnyRepnFPInfo_39;
  MR_Word PragmaToAnyRepnFPInfo_40;
  MR_Word FromGroundRepnSymName_41;
  MR_Word XFGPragmaVar_42;
  MR_Word YFGPragmaVar_43;
  MR_Word FromGroundRepnArgs_44;
  MR_Word FromGroundRepnFPInfo_45;
  MR_Word PragmaFromGroundRepnFPInfo_46;
  MR_Word FromAnyRepnSymName_47;
  MR_Word XFAPragmaVar_48;
  MR_Word YFAPragmaVar_49;
  MR_Word FromAnyRepnArgs_50;
  MR_Word FromAnyRepnFPInfo_51;
  MR_Word PragmaFromAnyRepnFPInfo_52;
  MR_Word STATE_VARIABLE_Attrs_53_53;
  MR_Word STATE_VARIABLE_Attrs_55_55;
  MR_Word STATE_VARIABLE_Attrs_57_57;
  MR_Word STATE_VARIABLE_Attrs_59_59;
  MR_Word Var_63;
  MR_Word Var_65;
  MR_Word Var_69;
  MR_Word Var_74;
  MR_Word Var_78;
  MR_Word Var_85;
  MR_Word Var_87;
  MR_Word Var_94;
  MR_Word Var_96;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;

  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[0]), TypeParams_8, &Arity_12);
  GroundInst_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_10, (MR_Integer) 1))));
  AnyInst_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_10, (MR_Integer) 2))));
  InAnyMode_15 = parse_tree__prog_mode__in_mode_1_f_0(AnyInst_13);
  InGroundMode_16 = parse_tree__prog_mode__in_mode_1_f_0(GroundInst_14);
  OutAnyMode_17 = parse_tree__prog_mode__out_mode_1_f_0(AnyInst_13);
  OutGroundMode_18 = parse_tree__prog_mode__out_mode_1_f_0(GroundInst_14);
  ProgVarSet0_19 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &X_20, ProgVarSet0_19, &ProgVarSet1_21);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Y_22, ProgVarSet1_21, &ProgVarSet_23);
  InstVarSet_24 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
  switch (Target_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Lang_25 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      Lang_25 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      Lang_25 = (MR_Integer) 2;
      break;
  }
  STATE_VARIABLE_Attrs_53_53 = parse_tree__prog_data_foreign__default_attributes_1_f_0(Lang_25);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_53_53, &STATE_VARIABLE_Attrs_55_55);
  parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_55_55, &STATE_VARIABLE_Attrs_57_57);
  parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_57_57, &STATE_VARIABLE_Attrs_59_59);
  parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_59_59, &Attrs_27);
  {
    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Context_11));
  }
  {
    Impl_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Impl_28, 0) = ((MR_Box) ((MR_String) "Y = X;"));
    MR_hl_field(MR_mktag(0), Impl_28, 1) = ((MR_Box) (Var_63));
  }
  ToGroundRepnSymName_29 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(TypeSymName_7, Arity_12);
  Var_65 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    XTGPragmaVar_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), XTGPragmaVar_30, 0) = ((MR_Box) (X_20));
    MR_hl_field(MR_mktag(0), XTGPragmaVar_30, 1) = ((MR_Box) ((MR_String) "X"));
    MR_hl_field(MR_mktag(0), XTGPragmaVar_30, 2) = ((MR_Box) (Var_65));
    MR_hl_field(MR_mktag(0), XTGPragmaVar_30, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    YTGPragmaVar_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), YTGPragmaVar_31, 0) = ((MR_Box) (Y_22));
    MR_hl_field(MR_mktag(0), YTGPragmaVar_31, 1) = ((MR_Box) ((MR_String) "Y"));
    MR_hl_field(MR_mktag(0), YTGPragmaVar_31, 2) = ((MR_Box) (OutGroundMode_18));
    MR_hl_field(MR_mktag(0), YTGPragmaVar_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (YTGPragmaVar_31));
    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ToGroundRepnArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ToGroundRepnArgs_32, 0) = ((MR_Box) (XTGPragmaVar_30));
    MR_hl_field(MR_mktag(1), ToGroundRepnArgs_32, 1) = ((MR_Box) (Var_69));
  }
  {
    ToGroundRepnFPInfo_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_33, 0) = ((MR_Box) (Attrs_27));
    MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_33, 1) = ((MR_Box) (ToGroundRepnSymName_29));
    MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_33, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_33, 3) = ((MR_Box) (ToGroundRepnArgs_32));
    MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_33, 4) = ((MR_Box) (ProgVarSet_23));
    MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_33, 5) = ((MR_Box) (InstVarSet_24));
    MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_33, 6) = ((MR_Box) (Impl_28));
  }
  {
    PragmaToGroundRepnFPInfo_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PragmaToGroundRepnFPInfo_34, 0) = ((MR_Box) (ToGroundRepnFPInfo_33));
    MR_hl_field(MR_mktag(0), PragmaToGroundRepnFPInfo_34, 1) = ((MR_Box) (Context_11));
    MR_hl_field(MR_mktag(0), PragmaToGroundRepnFPInfo_34, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ToAnyRepnSymName_35 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(TypeSymName_7, Arity_12);
  Var_74 = parse_tree__prog_mode__in_any_mode_0_f_0();
  {
    XTAPragmaVar_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), XTAPragmaVar_36, 0) = ((MR_Box) (X_20));
    MR_hl_field(MR_mktag(0), XTAPragmaVar_36, 1) = ((MR_Box) ((MR_String) "X"));
    MR_hl_field(MR_mktag(0), XTAPragmaVar_36, 2) = ((MR_Box) (Var_74));
    MR_hl_field(MR_mktag(0), XTAPragmaVar_36, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    YTAPragmaVar_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), YTAPragmaVar_37, 0) = ((MR_Box) (Y_22));
    MR_hl_field(MR_mktag(0), YTAPragmaVar_37, 1) = ((MR_Box) ((MR_String) "Y"));
    MR_hl_field(MR_mktag(0), YTAPragmaVar_37, 2) = ((MR_Box) (OutAnyMode_17));
    MR_hl_field(MR_mktag(0), YTAPragmaVar_37, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (YTAPragmaVar_37));
    MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ToAnyRepnArgs_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ToAnyRepnArgs_38, 0) = ((MR_Box) (XTAPragmaVar_36));
    MR_hl_field(MR_mktag(1), ToAnyRepnArgs_38, 1) = ((MR_Box) (Var_78));
  }
  {
    ToAnyRepnFPInfo_39 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_39, 0) = ((MR_Box) (Attrs_27));
    MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_39, 1) = ((MR_Box) (ToAnyRepnSymName_35));
    MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_39, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_39, 3) = ((MR_Box) (ToAnyRepnArgs_38));
    MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_39, 4) = ((MR_Box) (ProgVarSet_23));
    MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_39, 5) = ((MR_Box) (InstVarSet_24));
    MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_39, 6) = ((MR_Box) (Impl_28));
  }
  {
    PragmaToAnyRepnFPInfo_40 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PragmaToAnyRepnFPInfo_40, 0) = ((MR_Box) (ToAnyRepnFPInfo_39));
    MR_hl_field(MR_mktag(0), PragmaToAnyRepnFPInfo_40, 1) = ((MR_Box) (Context_11));
    MR_hl_field(MR_mktag(0), PragmaToAnyRepnFPInfo_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  FromGroundRepnSymName_41 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(TypeSymName_7, Arity_12);
  {
    XFGPragmaVar_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), XFGPragmaVar_42, 0) = ((MR_Box) (X_20));
    MR_hl_field(MR_mktag(0), XFGPragmaVar_42, 1) = ((MR_Box) ((MR_String) "X"));
    MR_hl_field(MR_mktag(0), XFGPragmaVar_42, 2) = ((MR_Box) (InGroundMode_16));
    MR_hl_field(MR_mktag(0), XFGPragmaVar_42, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_85 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    YFGPragmaVar_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), YFGPragmaVar_43, 0) = ((MR_Box) (Y_22));
    MR_hl_field(MR_mktag(0), YFGPragmaVar_43, 1) = ((MR_Box) ((MR_String) "Y"));
    MR_hl_field(MR_mktag(0), YFGPragmaVar_43, 2) = ((MR_Box) (Var_85));
    MR_hl_field(MR_mktag(0), YFGPragmaVar_43, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (YFGPragmaVar_43));
    MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    FromGroundRepnArgs_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), FromGroundRepnArgs_44, 0) = ((MR_Box) (XFGPragmaVar_42));
    MR_hl_field(MR_mktag(1), FromGroundRepnArgs_44, 1) = ((MR_Box) (Var_87));
  }
  {
    FromGroundRepnFPInfo_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_45, 0) = ((MR_Box) (Attrs_27));
    MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_45, 1) = ((MR_Box) (FromGroundRepnSymName_41));
    MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_45, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_45, 3) = ((MR_Box) (FromGroundRepnArgs_44));
    MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_45, 4) = ((MR_Box) (ProgVarSet_23));
    MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_45, 5) = ((MR_Box) (InstVarSet_24));
    MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_45, 6) = ((MR_Box) (Impl_28));
  }
  {
    PragmaFromGroundRepnFPInfo_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PragmaFromGroundRepnFPInfo_46, 0) = ((MR_Box) (FromGroundRepnFPInfo_45));
    MR_hl_field(MR_mktag(0), PragmaFromGroundRepnFPInfo_46, 1) = ((MR_Box) (Context_11));
    MR_hl_field(MR_mktag(0), PragmaFromGroundRepnFPInfo_46, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  FromAnyRepnSymName_47 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(TypeSymName_7, Arity_12);
  {
    XFAPragmaVar_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), XFAPragmaVar_48, 0) = ((MR_Box) (X_20));
    MR_hl_field(MR_mktag(0), XFAPragmaVar_48, 1) = ((MR_Box) ((MR_String) "X"));
    MR_hl_field(MR_mktag(0), XFAPragmaVar_48, 2) = ((MR_Box) (InAnyMode_15));
    MR_hl_field(MR_mktag(0), XFAPragmaVar_48, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_94 = parse_tree__prog_mode__out_any_mode_0_f_0();
  {
    YFAPragmaVar_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), YFAPragmaVar_49, 0) = ((MR_Box) (Y_22));
    MR_hl_field(MR_mktag(0), YFAPragmaVar_49, 1) = ((MR_Box) ((MR_String) "Y"));
    MR_hl_field(MR_mktag(0), YFAPragmaVar_49, 2) = ((MR_Box) (Var_94));
    MR_hl_field(MR_mktag(0), YFAPragmaVar_49, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (YFAPragmaVar_49));
    MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    FromAnyRepnArgs_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), FromAnyRepnArgs_50, 0) = ((MR_Box) (XFAPragmaVar_48));
    MR_hl_field(MR_mktag(1), FromAnyRepnArgs_50, 1) = ((MR_Box) (Var_96));
  }
  {
    FromAnyRepnFPInfo_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_51, 0) = ((MR_Box) (Attrs_27));
    MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_51, 1) = ((MR_Box) (FromAnyRepnSymName_47));
    MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_51, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_51, 3) = ((MR_Box) (FromAnyRepnArgs_50));
    MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_51, 4) = ((MR_Box) (ProgVarSet_23));
    MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_51, 5) = ((MR_Box) (InstVarSet_24));
    MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_51, 6) = ((MR_Box) (Impl_28));
  }
  {
    PragmaFromAnyRepnFPInfo_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PragmaFromAnyRepnFPInfo_52, 0) = ((MR_Box) (FromAnyRepnFPInfo_51));
    MR_hl_field(MR_mktag(0), PragmaFromAnyRepnFPInfo_52, 1) = ((MR_Box) (Context_11));
    MR_hl_field(MR_mktag(0), PragmaFromAnyRepnFPInfo_52, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (PragmaFromAnyRepnFPInfo_52));
    MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (PragmaFromGroundRepnFPInfo_46));
    MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (Var_102));
  }
  {
    Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (PragmaToAnyRepnFPInfo_40));
    MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_101));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *PragmaForeignProcs_6 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PragmaToGroundRepnFPInfo_34));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_100));
  }
}

void MR_CALL 
hlds__make_hlds__add_solver__get_solver_type_aux_pred_decls_2_p_0(
  MR_Word SolverAuxPredInfo_3,
  MR_Word * PredDecls_4)
{
  MR_Word TypeSymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_3, (MR_Integer) 0))));
  MR_Word TypeParams_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_3, (MR_Integer) 1))));
  MR_Word TVarSet_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_3, (MR_Integer) 2))));
  MR_Word SolverTypeDetails_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_3, (MR_Integer) 3))));
  MR_Word Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_3, (MR_Integer) 4))));
  MR_Word Args_10;
  MR_Word SolverType_11;
  MR_Integer Arity_12;
  MR_Word RepnType_13;
  MR_Word AnyInst_14;
  MR_Word GndInst_15;
  MR_Word InAnyMode_16;
  MR_Word InGndMode_17;
  MR_Word OutAnyMode_18;
  MR_Word OutGndMode_19;
  MR_Word DetismDet_22;
  MR_Word InstVarSet_23;
  MR_Word ToGndRepnSymName_26;
  MR_Word ToGndRepnArgTypesModes_27;
  MR_Word ToGndAttrs_28;
  MR_Word ToGndMaybeAttrs_29;
  MR_Word ToGndPredDecl_30;
  MR_Word ToAnyRepnSymName_31;
  MR_Word ToAnyRepnArgTypesModes_32;
  MR_Word ToAnyAttrs_33;
  MR_Word ToAnyMaybeAttrs_34;
  MR_Word ToAnyPredDecl_35;
  MR_Word FromGndRepnSymName_36;
  MR_Word FromGndRepnArgTypesModes_37;
  MR_Word FromGndAttrs_38;
  MR_Word FromGndMaybeAttrs_39;
  MR_Word FromGndPredDecl_40;
  MR_Word FromAnyRepnSymName_41;
  MR_Word FromAnyRepnArgTypesModes_42;
  MR_Word FromAnyAttrs_43;
  MR_Word FromAnyOrigin_44;
  MR_Word FromAnyPredDecl_45;
  MR_Word Var_46;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;

  Var_46 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_46, TypeParams_6, &Args_10);
  {
    SolverType_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), SolverType_11, 0) = ((MR_Box) (TypeSymName_5));
    MR_hl_field(MR_mktag(1), SolverType_11, 1) = ((MR_Box) (Args_10));
    MR_hl_field(MR_mktag(1), SolverType_11, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[0]), TypeParams_6, &Arity_12);
  RepnType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_8, (MR_Integer) 0))));
  GndInst_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_8, (MR_Integer) 1))));
  AnyInst_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_8, (MR_Integer) 2))));
  InAnyMode_16 = parse_tree__prog_mode__in_mode_1_f_0(AnyInst_14);
  InGndMode_17 = parse_tree__prog_mode__in_mode_1_f_0(GndInst_15);
  OutAnyMode_18 = parse_tree__prog_mode__out_mode_1_f_0(AnyInst_14);
  OutGndMode_19 = parse_tree__prog_mode__out_mode_1_f_0(GndInst_15);
  DetismDet_22 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_solver_scalar_common_2[0]));
  InstVarSet_23 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
  ToGndRepnSymName_26 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(TypeSymName_5, Arity_12);
  Var_52 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (SolverType_11));
    MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (RepnType_13));
    MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (OutGndMode_19));
  }
  {
    Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ToGndRepnArgTypesModes_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ToGndRepnArgTypesModes_27, 0) = ((MR_Box) (Var_51));
    MR_hl_field(MR_mktag(1), ToGndRepnArgTypesModes_27, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_56, 0) = ((MR_Box) (TypeSymName_5));
    MR_hl_field(MR_mktag(2), Var_56, 1) = ((MR_Box) (Arity_12));
    MR_hl_field(MR_mktag(2), Var_56, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  ToGndAttrs_28 = (MR_Word) (Var_56);
  {
    ToGndMaybeAttrs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ToGndMaybeAttrs_29, 0) = ((MR_Box) (ToGndAttrs_28));
  }
  {
    ToGndPredDecl_30 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 0) = ((MR_Box) (ToGndRepnSymName_26));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 2) = ((MR_Box) (ToGndRepnArgTypesModes_27));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 5) = ((MR_Box) (DetismDet_22));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 6) = ((MR_Box) (ToGndMaybeAttrs_29));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 7) = ((MR_Box) (TVarSet_7));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 8) = ((MR_Box) (InstVarSet_23));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 11) = ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[3]));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 12) = ((MR_Box) (Context_9));
    MR_hl_field(MR_mktag(0), ToGndPredDecl_30, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ToAnyRepnSymName_31 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(TypeSymName_5, Arity_12);
  Var_62 = parse_tree__prog_mode__in_any_mode_0_f_0();
  {
    Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (SolverType_11));
    MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (RepnType_13));
    MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (OutAnyMode_18));
  }
  {
    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ToAnyRepnArgTypesModes_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ToAnyRepnArgTypesModes_32, 0) = ((MR_Box) (Var_61));
    MR_hl_field(MR_mktag(1), ToAnyRepnArgTypesModes_32, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_66, 0) = ((MR_Box) (TypeSymName_5));
    MR_hl_field(MR_mktag(2), Var_66, 1) = ((MR_Box) (Arity_12));
    MR_hl_field(MR_mktag(2), Var_66, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  ToAnyAttrs_33 = (MR_Word) (Var_66);
  {
    ToAnyMaybeAttrs_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ToAnyMaybeAttrs_34, 0) = ((MR_Box) (ToAnyAttrs_33));
  }
  {
    ToAnyPredDecl_35 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 0) = ((MR_Box) (ToAnyRepnSymName_31));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 2) = ((MR_Box) (ToAnyRepnArgTypesModes_32));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 5) = ((MR_Box) (DetismDet_22));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 6) = ((MR_Box) (ToAnyMaybeAttrs_34));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 7) = ((MR_Box) (TVarSet_7));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 8) = ((MR_Box) (InstVarSet_23));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 11) = ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[3]));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 12) = ((MR_Box) (Context_9));
    MR_hl_field(MR_mktag(0), ToAnyPredDecl_35, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  FromGndRepnSymName_36 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(TypeSymName_5, Arity_12);
  {
    Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (RepnType_13));
    MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (InGndMode_17));
  }
  Var_74 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (SolverType_11));
    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_74));
  }
  {
    Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    FromGndRepnArgTypesModes_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), FromGndRepnArgTypesModes_37, 0) = ((MR_Box) (Var_71));
    MR_hl_field(MR_mktag(1), FromGndRepnArgTypesModes_37, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_76, 0) = ((MR_Box) (TypeSymName_5));
    MR_hl_field(MR_mktag(2), Var_76, 1) = ((MR_Box) (Arity_12));
    MR_hl_field(MR_mktag(2), Var_76, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
  }
  FromGndAttrs_38 = (MR_Word) (Var_76);
  {
    FromGndMaybeAttrs_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), FromGndMaybeAttrs_39, 0) = ((MR_Box) (FromGndAttrs_38));
  }
  {
    FromGndPredDecl_40 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 0) = ((MR_Box) (FromGndRepnSymName_36));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 2) = ((MR_Box) (FromGndRepnArgTypesModes_37));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 5) = ((MR_Box) (DetismDet_22));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 6) = ((MR_Box) (FromGndMaybeAttrs_39));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 7) = ((MR_Box) (TVarSet_7));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 8) = ((MR_Box) (InstVarSet_23));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 11) = ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[3]));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 12) = ((MR_Box) (Context_9));
    MR_hl_field(MR_mktag(0), FromGndPredDecl_40, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  FromAnyRepnSymName_41 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(TypeSymName_5, Arity_12);
  {
    Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (RepnType_13));
    MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (InAnyMode_16));
  }
  Var_84 = parse_tree__prog_mode__out_any_mode_0_f_0();
  {
    Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (SolverType_11));
    MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    FromAnyRepnArgTypesModes_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), FromAnyRepnArgTypesModes_42, 0) = ((MR_Box) (Var_81));
    MR_hl_field(MR_mktag(1), FromAnyRepnArgTypesModes_42, 1) = ((MR_Box) (Var_82));
  }
  {
    Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) (TypeSymName_5));
    MR_hl_field(MR_mktag(2), Var_86, 1) = ((MR_Box) (Arity_12));
    MR_hl_field(MR_mktag(2), Var_86, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
  }
  FromAnyAttrs_43 = (MR_Word) (Var_86);
  {
    FromAnyOrigin_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), FromAnyOrigin_44, 0) = ((MR_Box) (FromAnyAttrs_43));
  }
  {
    FromAnyPredDecl_45 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 0) = ((MR_Box) (FromAnyRepnSymName_41));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 2) = ((MR_Box) (FromAnyRepnArgTypesModes_42));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 5) = ((MR_Box) (DetismDet_22));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 6) = ((MR_Box) (FromAnyOrigin_44));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 7) = ((MR_Box) (TVarSet_7));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 8) = ((MR_Box) (InstVarSet_23));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 11) = ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[3]));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 12) = ((MR_Box) (Context_9));
    MR_hl_field(MR_mktag(0), FromAnyPredDecl_45, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (FromAnyPredDecl_45));
    MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (FromGndPredDecl_40));
    MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
  }
  {
    Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (ToAnyPredDecl_35));
    MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *PredDecls_4 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ToGndPredDecl_30));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_91));
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
  MR_Word SymName_4,
  MR_Integer Arity_5)
{
  MR_Word HeadVar__3_3;

  if (((MR_tag((MR_Word) SymName_4)) == (MR_Integer) 1))
  {
    MR_Word ModuleNames_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_4, (MR_Integer) 0))));
    MR_String Name_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_4, (MR_Integer) 1))));
    MR_String Var_19;
    MR_String Var_20;
    MR_String Var_21;
    MR_String Var_23;

    Var_23 = mercury__string__int_to_string_1_f_0(Arity_5);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_23);
    Var_20 = mercury__string__f_43_43_2_f_0(Name_17, Var_21);
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", Var_20);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleNames_16));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_19));
    }
  }
  else
  {
    MR_String Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_4, (MR_Integer) 0))));
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_14;

    Var_14 = mercury__string__int_to_string_1_f_0(Arity_5);
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_14);
    Var_11 = mercury__string__f_43_43_2_f_0(Name_8, Var_12);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", Var_11);
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_10));
    }
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
  MR_Word SymName_4,
  MR_Integer Arity_5)
{
  MR_Word HeadVar__3_3;

  if (((MR_tag((MR_Word) SymName_4)) == (MR_Integer) 1))
  {
    MR_Word ModuleNames_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_4, (MR_Integer) 0))));
    MR_String Name_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_4, (MR_Integer) 1))));
    MR_String Var_19;
    MR_String Var_20;
    MR_String Var_21;
    MR_String Var_23;

    Var_23 = mercury__string__int_to_string_1_f_0(Arity_5);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_23);
    Var_20 = mercury__string__f_43_43_2_f_0(Name_17, Var_21);
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", Var_20);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleNames_16));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_19));
    }
  }
  else
  {
    MR_String Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_4, (MR_Integer) 0))));
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_14;

    Var_14 = mercury__string__int_to_string_1_f_0(Arity_5);
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_14);
    Var_11 = mercury__string__f_43_43_2_f_0(Name_8, Var_12);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", Var_11);
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_10));
    }
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
  MR_Word SymName_4,
  MR_Integer Arity_5)
{
  MR_Word HeadVar__3_3;

  if (((MR_tag((MR_Word) SymName_4)) == (MR_Integer) 1))
  {
    MR_Word ModuleNames_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_4, (MR_Integer) 0))));
    MR_String Name_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_4, (MR_Integer) 1))));
    MR_String Var_19;
    MR_String Var_20;
    MR_String Var_21;
    MR_String Var_23;

    Var_23 = mercury__string__int_to_string_1_f_0(Arity_5);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_23);
    Var_20 = mercury__string__f_43_43_2_f_0(Name_17, Var_21);
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", Var_20);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleNames_16));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_19));
    }
  }
  else
  {
    MR_String Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_4, (MR_Integer) 0))));
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_14;

    Var_14 = mercury__string__int_to_string_1_f_0(Arity_5);
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_14);
    Var_11 = mercury__string__f_43_43_2_f_0(Name_8, Var_12);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", Var_11);
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_10));
    }
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
  MR_Word SymName_4,
  MR_Integer Arity_5)
{
  MR_Word HeadVar__3_3;

  if (((MR_tag((MR_Word) SymName_4)) == (MR_Integer) 1))
  {
    MR_Word ModuleNames_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_4, (MR_Integer) 0))));
    MR_String Name_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_4, (MR_Integer) 1))));
    MR_String Var_19;
    MR_String Var_20;
    MR_String Var_21;
    MR_String Var_23;

    Var_23 = mercury__string__int_to_string_1_f_0(Arity_5);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_23);
    Var_20 = mercury__string__f_43_43_2_f_0(Name_17, Var_21);
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", Var_20);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleNames_16));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_19));
    }
  }
  else
  {
    MR_String Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), SymName_4, (MR_Integer) 0))));
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_14;

    Var_14 = mercury__string__int_to_string_1_f_0(Arity_5);
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_14);
    Var_11 = mercury__string__f_43_43_2_f_0(Name_8, Var_12);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", Var_11);
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_10));
    }
  }
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__add_solver__init(void)
{
}

void mercury__hlds__make_hlds__add_solver__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0);
}

void mercury__hlds__make_hlds__add_solver__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_solver__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_solver.
