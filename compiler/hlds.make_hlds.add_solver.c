/*
** Automatically generated from `add_solver.m'
** by the Mercury compiler,
** version rotd-2023-07-07
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


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.make_hlds.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"




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
hlds__make_hlds__add_solver__repn_to_any_solver_symname_1_f_0(
  MR_Word TypeCtor_3);

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_1_f_0(
  MR_Word TypeCtor_3);

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_1_f_0(
  MR_Word TypeCtor_3);

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_1_f_0(
  MR_Word TypeCtor_3);

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
  { ((MR_Box) ((MR_Integer) 0)) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__make_hlds__add_solver__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_types_solver_aux_pred_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
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

static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_stag_ordered_solver_aux_pred_info_0_0[1] = { &hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0 };

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

static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_name_ordered_solver_aux_pred_info_0[1] = { &hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0 };

static const MR_Integer hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__functor_number_map_solver_aux_pred_info_0[1] = { (MR_Integer) 0 };

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
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
            mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));

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
            succeeded = mercury__term_context____Unify____term_context_0_0(ArgX5_11, ArgY5_12);
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
  MR_Word TypeSymName_7 = ((MR_Word) ((MR_hl_field(0, SolverAuxPredInfo_5, (MR_Integer) 0))));
  MR_Word TypeParams_8 = ((MR_Word) ((MR_hl_field(0, SolverAuxPredInfo_5, (MR_Integer) 1))));
  MR_Word SolverTypeDetails_10 = ((MR_Word) ((MR_hl_field(0, SolverAuxPredInfo_5, (MR_Integer) 3))));
  MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, SolverAuxPredInfo_5, (MR_Integer) 4))));
  MR_Integer TypeArity_12;
  MR_Word TypeCtor_13;
  MR_Word AnyInst_14;
  MR_Word GroundInst_15;
  MR_Word InAnyMode_16;
  MR_Word InGroundMode_17;
  MR_Word OutAnyMode_18;
  MR_Word OutGroundMode_19;
  MR_Word ProgVarSet0_20;
  MR_Word X_21;
  MR_Word ProgVarSet1_22;
  MR_Word Y_23;
  MR_Word ProgVarSet_24;
  MR_Word InstVarSet_25;
  MR_Word Lang_26;
  MR_Word Attrs_28;
  MR_Word Impl_29;
  MR_Word ToGroundRepnSymName_30;
  MR_Word XTGPragmaVar_31;
  MR_Word YTGPragmaVar_32;
  MR_Word ToGroundRepnArgs_33;
  MR_Word ToGroundRepnFPInfo_34;
  MR_Word PragmaToGroundRepnFPInfo_35;
  MR_Word ToAnyRepnSymName_36;
  MR_Word XTAPragmaVar_37;
  MR_Word YTAPragmaVar_38;
  MR_Word ToAnyRepnArgs_39;
  MR_Word ToAnyRepnFPInfo_40;
  MR_Word PragmaToAnyRepnFPInfo_41;
  MR_Word FromGroundRepnSymName_42;
  MR_Word XFGPragmaVar_43;
  MR_Word YFGPragmaVar_44;
  MR_Word FromGroundRepnArgs_45;
  MR_Word FromGroundRepnFPInfo_46;
  MR_Word PragmaFromGroundRepnFPInfo_47;
  MR_Word FromAnyRepnSymName_48;
  MR_Word XFAPragmaVar_49;
  MR_Word YFAPragmaVar_50;
  MR_Word FromAnyRepnArgs_51;
  MR_Word FromAnyRepnFPInfo_52;
  MR_Word PragmaFromAnyRepnFPInfo_53;
  MR_Word STATE_VARIABLE_Attrs_54_54;
  MR_Word STATE_VARIABLE_Attrs_56_56;
  MR_Word STATE_VARIABLE_Attrs_58_58;
  MR_Word STATE_VARIABLE_Attrs_60_60;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_Word Var_70;
  MR_Word Var_75;
  MR_Word Var_79;
  MR_Word Var_86;
  MR_Word Var_88;
  MR_Word Var_95;
  MR_Word Var_97;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;

  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[0]), TypeParams_8, &TypeArity_12);
  {
    TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_13, 0) = ((MR_Box) (TypeSymName_7));
    MR_hl_field(0, TypeCtor_13, 1) = ((MR_Box) (TypeArity_12));
  }
  GroundInst_15 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_10, (MR_Integer) 1))));
  AnyInst_14 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_10, (MR_Integer) 2))));
  InAnyMode_16 = parse_tree__prog_mode__in_mode_1_f_0(AnyInst_14);
  InGroundMode_17 = parse_tree__prog_mode__in_mode_1_f_0(GroundInst_15);
  OutAnyMode_18 = parse_tree__prog_mode__out_mode_1_f_0(AnyInst_14);
  OutGroundMode_19 = parse_tree__prog_mode__out_mode_1_f_0(GroundInst_15);
  ProgVarSet0_20 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &X_21, ProgVarSet0_20, &ProgVarSet1_22);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Y_23, ProgVarSet1_22, &ProgVarSet_24);
  InstVarSet_25 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
  switch (Target_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Lang_26 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      Lang_26 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      Lang_26 = (MR_Integer) 2;
      break;
  }
  STATE_VARIABLE_Attrs_54_54 = parse_tree__prog_data_foreign__default_attributes_1_f_0(Lang_26);
  parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_54_54, &STATE_VARIABLE_Attrs_56_56);
  parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_56_56, &STATE_VARIABLE_Attrs_58_58);
  parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_58_58, &STATE_VARIABLE_Attrs_60_60);
  parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_60_60, &Attrs_28);
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Context_11));
  }
  {
    Impl_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Impl_29, 0) = ((MR_Box) ((MR_String) "Y = X;"));
    MR_hl_field(0, Impl_29, 1) = ((MR_Box) (Var_64));
  }
  ToGroundRepnSymName_30 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_1_f_0(TypeCtor_13);
  Var_66 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    XTGPragmaVar_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XTGPragmaVar_31, 0) = ((MR_Box) (X_21));
    MR_hl_field(0, XTGPragmaVar_31, 1) = ((MR_Box) ((MR_String) "X"));
    MR_hl_field(0, XTGPragmaVar_31, 2) = ((MR_Box) (Var_66));
    MR_hl_field(0, XTGPragmaVar_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    YTGPragmaVar_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, YTGPragmaVar_32, 0) = ((MR_Box) (Y_23));
    MR_hl_field(0, YTGPragmaVar_32, 1) = ((MR_Box) ((MR_String) "Y"));
    MR_hl_field(0, YTGPragmaVar_32, 2) = ((MR_Box) (OutGroundMode_19));
    MR_hl_field(0, YTGPragmaVar_32, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (YTGPragmaVar_32));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ToGroundRepnArgs_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ToGroundRepnArgs_33, 0) = ((MR_Box) (XTGPragmaVar_31));
    MR_hl_field(1, ToGroundRepnArgs_33, 1) = ((MR_Box) (Var_70));
  }
  {
    ToGroundRepnFPInfo_34 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ToGroundRepnFPInfo_34, 0) = ((MR_Box) (Attrs_28));
    MR_hl_field(0, ToGroundRepnFPInfo_34, 1) = ((MR_Box) (ToGroundRepnSymName_30));
    MR_hl_field(0, ToGroundRepnFPInfo_34, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ToGroundRepnFPInfo_34, 3) = ((MR_Box) (ToGroundRepnArgs_33));
    MR_hl_field(0, ToGroundRepnFPInfo_34, 4) = ((MR_Box) (ProgVarSet_24));
    MR_hl_field(0, ToGroundRepnFPInfo_34, 5) = ((MR_Box) (InstVarSet_25));
    MR_hl_field(0, ToGroundRepnFPInfo_34, 6) = ((MR_Box) (Impl_29));
  }
  {
    PragmaToGroundRepnFPInfo_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PragmaToGroundRepnFPInfo_35, 0) = ((MR_Box) (ToGroundRepnFPInfo_34));
    MR_hl_field(0, PragmaToGroundRepnFPInfo_35, 1) = ((MR_Box) (Context_11));
    MR_hl_field(0, PragmaToGroundRepnFPInfo_35, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ToAnyRepnSymName_36 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_1_f_0(TypeCtor_13);
  Var_75 = parse_tree__prog_mode__in_any_mode_0_f_0();
  {
    XTAPragmaVar_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XTAPragmaVar_37, 0) = ((MR_Box) (X_21));
    MR_hl_field(0, XTAPragmaVar_37, 1) = ((MR_Box) ((MR_String) "X"));
    MR_hl_field(0, XTAPragmaVar_37, 2) = ((MR_Box) (Var_75));
    MR_hl_field(0, XTAPragmaVar_37, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    YTAPragmaVar_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, YTAPragmaVar_38, 0) = ((MR_Box) (Y_23));
    MR_hl_field(0, YTAPragmaVar_38, 1) = ((MR_Box) ((MR_String) "Y"));
    MR_hl_field(0, YTAPragmaVar_38, 2) = ((MR_Box) (OutAnyMode_18));
    MR_hl_field(0, YTAPragmaVar_38, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (YTAPragmaVar_38));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ToAnyRepnArgs_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ToAnyRepnArgs_39, 0) = ((MR_Box) (XTAPragmaVar_37));
    MR_hl_field(1, ToAnyRepnArgs_39, 1) = ((MR_Box) (Var_79));
  }
  {
    ToAnyRepnFPInfo_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ToAnyRepnFPInfo_40, 0) = ((MR_Box) (Attrs_28));
    MR_hl_field(0, ToAnyRepnFPInfo_40, 1) = ((MR_Box) (ToAnyRepnSymName_36));
    MR_hl_field(0, ToAnyRepnFPInfo_40, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ToAnyRepnFPInfo_40, 3) = ((MR_Box) (ToAnyRepnArgs_39));
    MR_hl_field(0, ToAnyRepnFPInfo_40, 4) = ((MR_Box) (ProgVarSet_24));
    MR_hl_field(0, ToAnyRepnFPInfo_40, 5) = ((MR_Box) (InstVarSet_25));
    MR_hl_field(0, ToAnyRepnFPInfo_40, 6) = ((MR_Box) (Impl_29));
  }
  {
    PragmaToAnyRepnFPInfo_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PragmaToAnyRepnFPInfo_41, 0) = ((MR_Box) (ToAnyRepnFPInfo_40));
    MR_hl_field(0, PragmaToAnyRepnFPInfo_41, 1) = ((MR_Box) (Context_11));
    MR_hl_field(0, PragmaToAnyRepnFPInfo_41, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  FromGroundRepnSymName_42 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_1_f_0(TypeCtor_13);
  {
    XFGPragmaVar_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XFGPragmaVar_43, 0) = ((MR_Box) (X_21));
    MR_hl_field(0, XFGPragmaVar_43, 1) = ((MR_Box) ((MR_String) "X"));
    MR_hl_field(0, XFGPragmaVar_43, 2) = ((MR_Box) (InGroundMode_17));
    MR_hl_field(0, XFGPragmaVar_43, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_86 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    YFGPragmaVar_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, YFGPragmaVar_44, 0) = ((MR_Box) (Y_23));
    MR_hl_field(0, YFGPragmaVar_44, 1) = ((MR_Box) ((MR_String) "Y"));
    MR_hl_field(0, YFGPragmaVar_44, 2) = ((MR_Box) (Var_86));
    MR_hl_field(0, YFGPragmaVar_44, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (YFGPragmaVar_44));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    FromGroundRepnArgs_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FromGroundRepnArgs_45, 0) = ((MR_Box) (XFGPragmaVar_43));
    MR_hl_field(1, FromGroundRepnArgs_45, 1) = ((MR_Box) (Var_88));
  }
  {
    FromGroundRepnFPInfo_46 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FromGroundRepnFPInfo_46, 0) = ((MR_Box) (Attrs_28));
    MR_hl_field(0, FromGroundRepnFPInfo_46, 1) = ((MR_Box) (FromGroundRepnSymName_42));
    MR_hl_field(0, FromGroundRepnFPInfo_46, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, FromGroundRepnFPInfo_46, 3) = ((MR_Box) (FromGroundRepnArgs_45));
    MR_hl_field(0, FromGroundRepnFPInfo_46, 4) = ((MR_Box) (ProgVarSet_24));
    MR_hl_field(0, FromGroundRepnFPInfo_46, 5) = ((MR_Box) (InstVarSet_25));
    MR_hl_field(0, FromGroundRepnFPInfo_46, 6) = ((MR_Box) (Impl_29));
  }
  {
    PragmaFromGroundRepnFPInfo_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PragmaFromGroundRepnFPInfo_47, 0) = ((MR_Box) (FromGroundRepnFPInfo_46));
    MR_hl_field(0, PragmaFromGroundRepnFPInfo_47, 1) = ((MR_Box) (Context_11));
    MR_hl_field(0, PragmaFromGroundRepnFPInfo_47, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  FromAnyRepnSymName_48 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_1_f_0(TypeCtor_13);
  {
    XFAPragmaVar_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, XFAPragmaVar_49, 0) = ((MR_Box) (X_21));
    MR_hl_field(0, XFAPragmaVar_49, 1) = ((MR_Box) ((MR_String) "X"));
    MR_hl_field(0, XFAPragmaVar_49, 2) = ((MR_Box) (InAnyMode_16));
    MR_hl_field(0, XFAPragmaVar_49, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_95 = parse_tree__prog_mode__out_any_mode_0_f_0();
  {
    YFAPragmaVar_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, YFAPragmaVar_50, 0) = ((MR_Box) (Y_23));
    MR_hl_field(0, YFAPragmaVar_50, 1) = ((MR_Box) ((MR_String) "Y"));
    MR_hl_field(0, YFAPragmaVar_50, 2) = ((MR_Box) (Var_95));
    MR_hl_field(0, YFAPragmaVar_50, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (YFAPragmaVar_50));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    FromAnyRepnArgs_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FromAnyRepnArgs_51, 0) = ((MR_Box) (XFAPragmaVar_49));
    MR_hl_field(1, FromAnyRepnArgs_51, 1) = ((MR_Box) (Var_97));
  }
  {
    FromAnyRepnFPInfo_52 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FromAnyRepnFPInfo_52, 0) = ((MR_Box) (Attrs_28));
    MR_hl_field(0, FromAnyRepnFPInfo_52, 1) = ((MR_Box) (FromAnyRepnSymName_48));
    MR_hl_field(0, FromAnyRepnFPInfo_52, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, FromAnyRepnFPInfo_52, 3) = ((MR_Box) (FromAnyRepnArgs_51));
    MR_hl_field(0, FromAnyRepnFPInfo_52, 4) = ((MR_Box) (ProgVarSet_24));
    MR_hl_field(0, FromAnyRepnFPInfo_52, 5) = ((MR_Box) (InstVarSet_25));
    MR_hl_field(0, FromAnyRepnFPInfo_52, 6) = ((MR_Box) (Impl_29));
  }
  {
    PragmaFromAnyRepnFPInfo_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PragmaFromAnyRepnFPInfo_53, 0) = ((MR_Box) (FromAnyRepnFPInfo_52));
    MR_hl_field(0, PragmaFromAnyRepnFPInfo_53, 1) = ((MR_Box) (Context_11));
    MR_hl_field(0, PragmaFromAnyRepnFPInfo_53, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (PragmaFromAnyRepnFPInfo_53));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (PragmaFromGroundRepnFPInfo_47));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (PragmaToAnyRepnFPInfo_41));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *PragmaForeignProcs_6 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (PragmaToGroundRepnFPInfo_35));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_101));
  }
}

void MR_CALL 
hlds__make_hlds__add_solver__get_solver_type_aux_pred_decls_2_p_0(
  MR_Word SolverAuxPredInfo_3,
  MR_Word * PredDecls_4)
{
  MR_Word TypeSymName_5 = ((MR_Word) ((MR_hl_field(0, SolverAuxPredInfo_3, (MR_Integer) 0))));
  MR_Word TypeParams_6 = ((MR_Word) ((MR_hl_field(0, SolverAuxPredInfo_3, (MR_Integer) 1))));
  MR_Word TVarSet_7 = ((MR_Word) ((MR_hl_field(0, SolverAuxPredInfo_3, (MR_Integer) 2))));
  MR_Word SolverTypeDetails_8 = ((MR_Word) ((MR_hl_field(0, SolverAuxPredInfo_3, (MR_Integer) 3))));
  MR_Word Context_9 = ((MR_Word) ((MR_hl_field(0, SolverAuxPredInfo_3, (MR_Integer) 4))));
  MR_Word Args_10;
  MR_Word SolverType_11;
  MR_Integer TypeArity_12;
  MR_Word TypeCtor_13;
  MR_Word RepnType_14;
  MR_Word AnyInst_15;
  MR_Word GndInst_16;
  MR_Word InAnyMode_17;
  MR_Word InGndMode_18;
  MR_Word OutAnyMode_19;
  MR_Word OutGndMode_20;
  MR_Word DetismDet_23;
  MR_Word InstVarSet_24;
  MR_Word ToGndRepnSymName_27;
  MR_Word ToGndRepnArgTypesModes_28;
  MR_Word ToGndAttrs_29;
  MR_Word ToGndMaybeAttrs_30;
  MR_Word ToGndPredDecl_31;
  MR_Word ToAnyRepnSymName_32;
  MR_Word ToAnyRepnArgTypesModes_33;
  MR_Word ToAnyAttrs_34;
  MR_Word ToAnyMaybeAttrs_35;
  MR_Word ToAnyPredDecl_36;
  MR_Word FromGndRepnSymName_37;
  MR_Word FromGndRepnArgTypesModes_38;
  MR_Word FromGndAttrs_39;
  MR_Word FromGndMaybeAttrs_40;
  MR_Word FromGndPredDecl_41;
  MR_Word FromAnyRepnSymName_42;
  MR_Word FromAnyRepnArgTypesModes_43;
  MR_Word FromAnyAttrs_44;
  MR_Word FromAnyOrigin_45;
  MR_Word FromAnyPredDecl_46;
  MR_Word Var_47;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_77;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_87;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;

  Var_47 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_47, TypeParams_6, &Args_10);
  {
    SolverType_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SolverType_11, 0) = ((MR_Box) (TypeSymName_5));
    MR_hl_field(1, SolverType_11, 1) = ((MR_Box) (Args_10));
    MR_hl_field(1, SolverType_11, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[0]), TypeParams_6, &TypeArity_12);
  {
    TypeCtor_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeCtor_13, 0) = ((MR_Box) (TypeSymName_5));
    MR_hl_field(0, TypeCtor_13, 1) = ((MR_Box) (TypeArity_12));
  }
  RepnType_14 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_8, (MR_Integer) 0))));
  GndInst_16 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_8, (MR_Integer) 1))));
  AnyInst_15 = ((MR_Word) ((MR_hl_field(0, SolverTypeDetails_8, (MR_Integer) 2))));
  InAnyMode_17 = parse_tree__prog_mode__in_mode_1_f_0(AnyInst_15);
  InGndMode_18 = parse_tree__prog_mode__in_mode_1_f_0(GndInst_16);
  OutAnyMode_19 = parse_tree__prog_mode__out_mode_1_f_0(AnyInst_15);
  OutGndMode_20 = parse_tree__prog_mode__out_mode_1_f_0(GndInst_16);
  DetismDet_23 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_solver_scalar_common_2[0]));
  InstVarSet_24 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
  ToGndRepnSymName_27 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_1_f_0(TypeCtor_13);
  Var_53 = parse_tree__prog_mode__in_mode_0_f_0();
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (SolverType_11));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (RepnType_14));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (OutGndMode_20));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ToGndRepnArgTypesModes_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ToGndRepnArgTypesModes_28, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, ToGndRepnArgTypesModes_28, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_57, 0) = ((MR_Box) (TypeCtor_13));
    MR_hl_field(2, Var_57, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  ToGndAttrs_29 = (MR_Word) (Var_57);
  {
    ToGndMaybeAttrs_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ToGndMaybeAttrs_30, 0) = ((MR_Box) (ToGndAttrs_29));
  }
  {
    ToGndPredDecl_31 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ToGndPredDecl_31, 0) = ((MR_Box) (ToGndRepnSymName_27));
    MR_hl_field(0, ToGndPredDecl_31, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ToGndPredDecl_31, 2) = ((MR_Box) (ToGndRepnArgTypesModes_28));
    MR_hl_field(0, ToGndPredDecl_31, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ToGndPredDecl_31, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ToGndPredDecl_31, 5) = ((MR_Box) (DetismDet_23));
    MR_hl_field(0, ToGndPredDecl_31, 6) = ((MR_Box) (ToGndMaybeAttrs_30));
    MR_hl_field(0, ToGndPredDecl_31, 7) = ((MR_Box) (TVarSet_7));
    MR_hl_field(0, ToGndPredDecl_31, 8) = ((MR_Box) (InstVarSet_24));
    MR_hl_field(0, ToGndPredDecl_31, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ToGndPredDecl_31, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(0, ToGndPredDecl_31, 11) = ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[3]));
    MR_hl_field(0, ToGndPredDecl_31, 12) = ((MR_Box) (Context_9));
    MR_hl_field(0, ToGndPredDecl_31, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ToAnyRepnSymName_32 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_1_f_0(TypeCtor_13);
  Var_63 = parse_tree__prog_mode__in_any_mode_0_f_0();
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (SolverType_11));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (RepnType_14));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (OutAnyMode_19));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ToAnyRepnArgTypesModes_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ToAnyRepnArgTypesModes_33, 0) = ((MR_Box) (Var_62));
    MR_hl_field(1, ToAnyRepnArgTypesModes_33, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_67, 0) = ((MR_Box) (TypeCtor_13));
    MR_hl_field(2, Var_67, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  ToAnyAttrs_34 = (MR_Word) (Var_67);
  {
    ToAnyMaybeAttrs_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ToAnyMaybeAttrs_35, 0) = ((MR_Box) (ToAnyAttrs_34));
  }
  {
    ToAnyPredDecl_36 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ToAnyPredDecl_36, 0) = ((MR_Box) (ToAnyRepnSymName_32));
    MR_hl_field(0, ToAnyPredDecl_36, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, ToAnyPredDecl_36, 2) = ((MR_Box) (ToAnyRepnArgTypesModes_33));
    MR_hl_field(0, ToAnyPredDecl_36, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ToAnyPredDecl_36, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ToAnyPredDecl_36, 5) = ((MR_Box) (DetismDet_23));
    MR_hl_field(0, ToAnyPredDecl_36, 6) = ((MR_Box) (ToAnyMaybeAttrs_35));
    MR_hl_field(0, ToAnyPredDecl_36, 7) = ((MR_Box) (TVarSet_7));
    MR_hl_field(0, ToAnyPredDecl_36, 8) = ((MR_Box) (InstVarSet_24));
    MR_hl_field(0, ToAnyPredDecl_36, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ToAnyPredDecl_36, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(0, ToAnyPredDecl_36, 11) = ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[3]));
    MR_hl_field(0, ToAnyPredDecl_36, 12) = ((MR_Box) (Context_9));
    MR_hl_field(0, ToAnyPredDecl_36, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  FromGndRepnSymName_37 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_1_f_0(TypeCtor_13);
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (RepnType_14));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (InGndMode_18));
  }
  Var_75 = parse_tree__prog_mode__out_mode_0_f_0();
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (SolverType_11));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    FromGndRepnArgTypesModes_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FromGndRepnArgTypesModes_38, 0) = ((MR_Box) (Var_72));
    MR_hl_field(1, FromGndRepnArgTypesModes_38, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_77 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_77, 0) = ((MR_Box) (TypeCtor_13));
    MR_hl_field(2, Var_77, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
  }
  FromGndAttrs_39 = (MR_Word) (Var_77);
  {
    FromGndMaybeAttrs_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FromGndMaybeAttrs_40, 0) = ((MR_Box) (FromGndAttrs_39));
  }
  {
    FromGndPredDecl_41 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FromGndPredDecl_41, 0) = ((MR_Box) (FromGndRepnSymName_37));
    MR_hl_field(0, FromGndPredDecl_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, FromGndPredDecl_41, 2) = ((MR_Box) (FromGndRepnArgTypesModes_38));
    MR_hl_field(0, FromGndPredDecl_41, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, FromGndPredDecl_41, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, FromGndPredDecl_41, 5) = ((MR_Box) (DetismDet_23));
    MR_hl_field(0, FromGndPredDecl_41, 6) = ((MR_Box) (FromGndMaybeAttrs_40));
    MR_hl_field(0, FromGndPredDecl_41, 7) = ((MR_Box) (TVarSet_7));
    MR_hl_field(0, FromGndPredDecl_41, 8) = ((MR_Box) (InstVarSet_24));
    MR_hl_field(0, FromGndPredDecl_41, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, FromGndPredDecl_41, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(0, FromGndPredDecl_41, 11) = ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[3]));
    MR_hl_field(0, FromGndPredDecl_41, 12) = ((MR_Box) (Context_9));
    MR_hl_field(0, FromGndPredDecl_41, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  FromAnyRepnSymName_42 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_1_f_0(TypeCtor_13);
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (RepnType_14));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (InAnyMode_17));
  }
  Var_85 = parse_tree__prog_mode__out_any_mode_0_f_0();
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (SolverType_11));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    FromAnyRepnArgTypesModes_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FromAnyRepnArgTypesModes_43, 0) = ((MR_Box) (Var_82));
    MR_hl_field(1, FromAnyRepnArgTypesModes_43, 1) = ((MR_Box) (Var_83));
  }
  {
    Var_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_87, 0) = ((MR_Box) (TypeCtor_13));
    MR_hl_field(2, Var_87, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
  }
  FromAnyAttrs_44 = (MR_Word) (Var_87);
  {
    FromAnyOrigin_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FromAnyOrigin_45, 0) = ((MR_Box) (FromAnyAttrs_44));
  }
  {
    FromAnyPredDecl_46 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FromAnyPredDecl_46, 0) = ((MR_Box) (FromAnyRepnSymName_42));
    MR_hl_field(0, FromAnyPredDecl_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, FromAnyPredDecl_46, 2) = ((MR_Box) (FromAnyRepnArgTypesModes_43));
    MR_hl_field(0, FromAnyPredDecl_46, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, FromAnyPredDecl_46, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, FromAnyPredDecl_46, 5) = ((MR_Box) (DetismDet_23));
    MR_hl_field(0, FromAnyPredDecl_46, 6) = ((MR_Box) (FromAnyOrigin_45));
    MR_hl_field(0, FromAnyPredDecl_46, 7) = ((MR_Box) (TVarSet_7));
    MR_hl_field(0, FromAnyPredDecl_46, 8) = ((MR_Box) (InstVarSet_24));
    MR_hl_field(0, FromAnyPredDecl_46, 9) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, FromAnyPredDecl_46, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(0, FromAnyPredDecl_46, 11) = ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[3]));
    MR_hl_field(0, FromAnyPredDecl_46, 12) = ((MR_Box) (Context_9));
    MR_hl_field(0, FromAnyPredDecl_46, 13) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (FromAnyPredDecl_46));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (FromGndPredDecl_41));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (ToAnyPredDecl_36));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *PredDecls_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (ToGndPredDecl_31));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_92));
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_1_f_0(
  MR_Word TypeCtor_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeCtorSymName_5 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 0))));
  MR_Integer TypeCtorArity_6 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) TypeCtorSymName_5)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_5, (MR_Integer) 0))));
    MR_String Var_14;
    MR_String Var_15;
    MR_String Var_17;
    MR_String TypeCtorName_18 = ((MR_String) ((MR_hl_field(1, TypeCtorSymName_5, (MR_Integer) 1))));
    MR_String Name_19;

    Var_17 = mercury__string__int_to_string_1_f_0(TypeCtorArity_6);
    Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_17);
    Var_14 = mercury__string__f_43_43_2_f_0(TypeCtorName_18, Var_15);
    Name_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", Var_14);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Name_19));
    }
  }
  else
  {
    MR_String TypeCtorName_7 = ((MR_String) ((MR_hl_field(0, TypeCtorSymName_5, (MR_Integer) 0))));
    MR_String Name_8;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;

    Var_13 = mercury__string__int_to_string_1_f_0(TypeCtorArity_6);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_13);
    Var_10 = mercury__string__f_43_43_2_f_0(TypeCtorName_7, Var_11);
    Name_8 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", Var_10);
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Name_8));
    }
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_1_f_0(
  MR_Word TypeCtor_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeCtorSymName_5 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 0))));
  MR_Integer TypeCtorArity_6 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) TypeCtorSymName_5)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_5, (MR_Integer) 0))));
    MR_String Var_14;
    MR_String Var_15;
    MR_String Var_17;
    MR_String TypeCtorName_18 = ((MR_String) ((MR_hl_field(1, TypeCtorSymName_5, (MR_Integer) 1))));
    MR_String Name_19;

    Var_17 = mercury__string__int_to_string_1_f_0(TypeCtorArity_6);
    Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_17);
    Var_14 = mercury__string__f_43_43_2_f_0(TypeCtorName_18, Var_15);
    Name_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", Var_14);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Name_19));
    }
  }
  else
  {
    MR_String TypeCtorName_7 = ((MR_String) ((MR_hl_field(0, TypeCtorSymName_5, (MR_Integer) 0))));
    MR_String Name_8;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;

    Var_13 = mercury__string__int_to_string_1_f_0(TypeCtorArity_6);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_13);
    Var_10 = mercury__string__f_43_43_2_f_0(TypeCtorName_7, Var_11);
    Name_8 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", Var_10);
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Name_8));
    }
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_1_f_0(
  MR_Word TypeCtor_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeCtorSymName_5 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 0))));
  MR_Integer TypeCtorArity_6 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) TypeCtorSymName_5)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_5, (MR_Integer) 0))));
    MR_String Var_14;
    MR_String Var_15;
    MR_String Var_17;
    MR_String TypeCtorName_18 = ((MR_String) ((MR_hl_field(1, TypeCtorSymName_5, (MR_Integer) 1))));
    MR_String Name_19;

    Var_17 = mercury__string__int_to_string_1_f_0(TypeCtorArity_6);
    Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_17);
    Var_14 = mercury__string__f_43_43_2_f_0(TypeCtorName_18, Var_15);
    Name_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", Var_14);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Name_19));
    }
  }
  else
  {
    MR_String TypeCtorName_7 = ((MR_String) ((MR_hl_field(0, TypeCtorSymName_5, (MR_Integer) 0))));
    MR_String Name_8;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;

    Var_13 = mercury__string__int_to_string_1_f_0(TypeCtorArity_6);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_13);
    Var_10 = mercury__string__f_43_43_2_f_0(TypeCtorName_7, Var_11);
    Name_8 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", Var_10);
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Name_8));
    }
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_1_f_0(
  MR_Word TypeCtor_3)
{
  MR_Word HeadVar__2_2;
  MR_Word TypeCtorSymName_5 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 0))));
  MR_Integer TypeCtorArity_6 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) TypeCtorSymName_5)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_9 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_5, (MR_Integer) 0))));
    MR_String Var_14;
    MR_String Var_15;
    MR_String Var_17;
    MR_String TypeCtorName_18 = ((MR_String) ((MR_hl_field(1, TypeCtorSymName_5, (MR_Integer) 1))));
    MR_String Name_19;

    Var_17 = mercury__string__int_to_string_1_f_0(TypeCtorArity_6);
    Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_17);
    Var_14 = mercury__string__f_43_43_2_f_0(TypeCtorName_18, Var_15);
    Name_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", Var_14);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Name_19));
    }
  }
  else
  {
    MR_String TypeCtorName_7 = ((MR_String) ((MR_hl_field(0, TypeCtorSymName_5, (MR_Integer) 0))));
    MR_String Name_8;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;

    Var_13 = mercury__string__int_to_string_1_f_0(TypeCtorArity_6);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_13);
    Var_10 = mercury__string__f_43_43_2_f_0(TypeCtorName_7, Var_11);
    Name_8 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", Var_10);
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Name_8));
    }
  }
  return HeadVar__2_2;
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
