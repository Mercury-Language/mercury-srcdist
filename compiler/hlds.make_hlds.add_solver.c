/*
** Automatically generated from `add_solver.m'
** by the Mercury compiler,
** version rotd-2020-03-16
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.add_pred.mih"
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
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
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
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"




static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_types_solver_aux_pred_info_0_0[7];

static const MR_DuArgLocn hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_locns_solver_aux_pred_info_0_0[7];

static const MR_DuFunctorDesc hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_stag_ordered_solver_aux_pred_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_ptag_ordered_solver_aux_pred_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_name_ordered_solver_aux_pred_info_0[1];

static const MR_Integer hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__functor_number_map_solver_aux_pred_info_0[1];

static void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_7_p_0(
  MR_Word SolverAuxPredInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_59,
  MR_Word * STATE_VARIABLE_ModuleInfo_60,
  MR_Word STATE_VARIABLE_QualInfo_0_61,
  MR_Word * STATE_VARIABLE_QualInfo_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64);

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


/* sealed */ struct hlds__make_hlds__add_solver__vector_common_type_3_0_s {
  const MR_Word hlds__make_hlds__add_solver__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct hlds__make_hlds__add_solver__vector_common_type_3_0_s hlds__make_hlds__add_solver_vector_common_3[4];



static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct hlds__make_hlds__add_solver__vector_common_type_3_0_s hlds__make_hlds__add_solver_vector_common_3[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
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

static const MR_PseudoTypeInfo hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_types_solver_aux_pred_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)
};

static const MR_DuArgLocn hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_locns_solver_aux_pred_info_0_0[7] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0 = {
  (MR_String) "solver_aux_pred_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_types_solver_aux_pred_info_0_0,
  NULL,
  hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_locns_solver_aux_pred_info_0_0,
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_solver",
  (MR_String) "solver_aux_pred_info",
  {     hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_name_ordered_solver_aux_pred_info_0 },
  {     hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_ptag_ordered_solver_aux_pred_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__functor_number_map_solver_aux_pred_info_0
};

void MR_CALL 
hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
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
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) & (MR_Integer) 1);
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
            {
              MR_Word SubResult5_18;

              mercury__term____Compare____context_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                hlds__status____Compare____item_mercury_status_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Integer Var_33 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_34 = (MR_Integer) (ArgY7_23);

                  succeeded = (Var_33 < Var_34);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_33 > Var_34);
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
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
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
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            succeeded = parse_tree__prog_data____Unify____solver_type_details_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              succeeded = mercury__term____Unify____context_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                succeeded = hlds__status____Unify____item_mercury_status_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                  succeeded = (ArgX7_15 == ArgY7_16);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_if_local_7_p_0(
  MR_Word SolverAuxPredInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word STATE_VARIABLE_QualInfo_0_23,
  MR_Word * STATE_VARIABLE_QualInfo_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word ItemMercuryStatus_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_8, (MR_Integer) 5))));

    if (((MR_tag((MR_Word) ItemMercuryStatus_17)) == (MR_Integer) 1))
    {
      *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
      *STATE_VARIABLE_QualInfo_24 = STATE_VARIABLE_QualInfo_0_23;
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    }
    else
      hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_7_p_0(SolverAuxPredInfo_8, STATE_VARIABLE_ModuleInfo_0_21, STATE_VARIABLE_ModuleInfo_22, STATE_VARIABLE_QualInfo_0_23, STATE_VARIABLE_QualInfo_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
  }
}

static void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_7_p_0(
  MR_Word SolverAuxPredInfo_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_59,
  MR_Word * STATE_VARIABLE_ModuleInfo_60,
  MR_Word STATE_VARIABLE_QualInfo_0_61,
  MR_Word * STATE_VARIABLE_QualInfo_62,
  MR_Word STATE_VARIABLE_Specs_0_63,
  MR_Word * STATE_VARIABLE_Specs_64)
{
  {
    MR_Word TypeSymName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_8, (MR_Integer) 0))));
    MR_Word TypeParams_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_8, (MR_Integer) 1))));
    MR_Word SolverTypeDetails_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_8, (MR_Integer) 3))));
    MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_8, (MR_Integer) 4))));
    MR_Word ItemMercuryStatus_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_8, (MR_Integer) 5))));
    MR_Word PredStatus_19;
    MR_Integer Arity_20;
    MR_Word AnyInst_21;
    MR_Word GroundInst_22;
    MR_Word InAnyMode_23;
    MR_Word InGroundMode_24;
    MR_Word OutAnyMode_25;
    MR_Word OutGroundMode_26;
    MR_Word ProgVarSet0_27;
    MR_Word X_28;
    MR_Word ProgVarSet1_29;
    MR_Word Y_30;
    MR_Word ProgVarSet_31;
    MR_Word InstVarSet_32;
    MR_Word Globals_33;
    MR_Word Target_34;
    MR_Word Lang_35;
    MR_Word Attrs_37;
    MR_Word Impl_38;
    MR_Word ToGroundRepnSymName_39;
    MR_Word XTGPragmaVar_40;
    MR_Word YTGPragmaVar_41;
    MR_Word ToGroundRepnArgs_42;
    MR_Word ToGroundRepnFPInfo_43;
    MR_Word ToAnyRepnSymName_44;
    MR_Word XTAPragmaVar_45;
    MR_Word YTAPragmaVar_46;
    MR_Word ToAnyRepnArgs_47;
    MR_Word ToAnyRepnFPInfo_48;
    MR_Word FromGroundRepnSymName_49;
    MR_Word XFGPragmaVar_50;
    MR_Word YFGPragmaVar_51;
    MR_Word FromGroundRepnArgs_52;
    MR_Word FromGroundRepnFPInfo_53;
    MR_Word FromAnyRepnSymName_54;
    MR_Word XFAPragmaVar_55;
    MR_Word YFAPragmaVar_56;
    MR_Word FromAnyRepnArgs_57;
    MR_Word FromAnyRepnFPInfo_58;
    MR_Word STATE_VARIABLE_Attrs_65_65;
    MR_Word STATE_VARIABLE_Attrs_67_67;
    MR_Word STATE_VARIABLE_Attrs_69_69;
    MR_Word STATE_VARIABLE_Attrs_71_71;
    MR_Word Var_79;
    MR_Word Var_83;
    MR_Word STATE_VARIABLE_ModuleInfo_87_87;
    MR_Word STATE_VARIABLE_Specs_88_88;
    MR_Word Var_90;
    MR_Word Var_94;
    MR_Word STATE_VARIABLE_ModuleInfo_98_98;
    MR_Word STATE_VARIABLE_Specs_99_99;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_Word STATE_VARIABLE_ModuleInfo_109_109;
    MR_Word STATE_VARIABLE_Specs_110_110;
    MR_Word Var_114;
    MR_Word Var_116;

    hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_17, &PredStatus_19);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[0]), TypeParams_13, &Arity_20);
    GroundInst_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_15, (MR_Integer) 1))));
    AnyInst_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_15, (MR_Integer) 2))));
    InAnyMode_23 = parse_tree__prog_mode__in_mode_1_f_0(AnyInst_21);
    InGroundMode_24 = parse_tree__prog_mode__in_mode_1_f_0(GroundInst_22);
    OutAnyMode_25 = parse_tree__prog_mode__out_mode_1_f_0(AnyInst_21);
    OutGroundMode_26 = parse_tree__prog_mode__out_mode_1_f_0(GroundInst_22);
    ProgVarSet0_27 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &X_28, ProgVarSet0_27, &ProgVarSet1_29);
    mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &Y_30, ProgVarSet1_29, &ProgVarSet_31);
    InstVarSet_32 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_59, &Globals_33);
    libs__globals__get_target_2_p_0(Globals_33, &Target_34);
    Lang_35 = ((&hlds__make_hlds__add_solver_vector_common_3[0 + Target_34]))->hlds__make_hlds__add_solver__vector_common_type_3_0__vct_3_f_0;
    STATE_VARIABLE_Attrs_65_65 = parse_tree__prog_data_foreign__default_attributes_1_f_0(Lang_35);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_65_65, &STATE_VARIABLE_Attrs_67_67);
    parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_67_67, &STATE_VARIABLE_Attrs_69_69);
    parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_69_69, &STATE_VARIABLE_Attrs_71_71);
    parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_71_71, &Attrs_37);
    switch (Lang_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Var_77;

          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Context_16));
          }
          {
            Impl_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Impl_38, 0) = ((MR_Box) ((MR_String) "Y = X;"));
            MR_hl_field(MR_mktag(0), Impl_38, 1) = ((MR_Box) (Var_77));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_75;

          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Context_16));
          }
          {
            Impl_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Impl_38, 0) = ((MR_Box) ((MR_String) "Y = X"));
            MR_hl_field(MR_mktag(0), Impl_38, 1) = ((MR_Box) (Var_75));
          }
        }
        break;
    }
    ToGroundRepnSymName_39 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(TypeSymName_12, Arity_20);
    Var_79 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      XTGPragmaVar_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), XTGPragmaVar_40, 0) = ((MR_Box) (X_28));
      MR_hl_field(MR_mktag(0), XTGPragmaVar_40, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), XTGPragmaVar_40, 2) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), XTGPragmaVar_40, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      YTGPragmaVar_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), YTGPragmaVar_41, 0) = ((MR_Box) (Y_30));
      MR_hl_field(MR_mktag(0), YTGPragmaVar_41, 1) = ((MR_Box) ((MR_String) "Y"));
      MR_hl_field(MR_mktag(0), YTGPragmaVar_41, 2) = ((MR_Box) (OutGroundMode_26));
      MR_hl_field(MR_mktag(0), YTGPragmaVar_41, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (YTGPragmaVar_41));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ToGroundRepnArgs_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ToGroundRepnArgs_42, 0) = ((MR_Box) (XTGPragmaVar_40));
      MR_hl_field(MR_mktag(1), ToGroundRepnArgs_42, 1) = ((MR_Box) (Var_83));
    }
    {
      ToGroundRepnFPInfo_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_43, 0) = ((MR_Box) (Attrs_37));
      MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_43, 1) = ((MR_Box) (ToGroundRepnSymName_39));
      MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_43, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_43, 3) = ((MR_Box) (ToGroundRepnArgs_42));
      MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_43, 4) = ((MR_Box) (ProgVarSet_31));
      MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_43, 5) = ((MR_Box) (InstVarSet_32));
      MR_hl_field(MR_mktag(0), ToGroundRepnFPInfo_43, 6) = ((MR_Box) (Impl_38));
    }
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(ToGroundRepnFPInfo_43, PredStatus_19, Context_16, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_0_59, &STATE_VARIABLE_ModuleInfo_87_87, STATE_VARIABLE_Specs_0_63, &STATE_VARIABLE_Specs_88_88);
    ToAnyRepnSymName_44 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(TypeSymName_12, Arity_20);
    Var_90 = parse_tree__prog_mode__in_any_mode_0_f_0();
    {
      XTAPragmaVar_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), XTAPragmaVar_45, 0) = ((MR_Box) (X_28));
      MR_hl_field(MR_mktag(0), XTAPragmaVar_45, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), XTAPragmaVar_45, 2) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), XTAPragmaVar_45, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      YTAPragmaVar_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), YTAPragmaVar_46, 0) = ((MR_Box) (Y_30));
      MR_hl_field(MR_mktag(0), YTAPragmaVar_46, 1) = ((MR_Box) ((MR_String) "Y"));
      MR_hl_field(MR_mktag(0), YTAPragmaVar_46, 2) = ((MR_Box) (OutAnyMode_25));
      MR_hl_field(MR_mktag(0), YTAPragmaVar_46, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (YTAPragmaVar_46));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ToAnyRepnArgs_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ToAnyRepnArgs_47, 0) = ((MR_Box) (XTAPragmaVar_45));
      MR_hl_field(MR_mktag(1), ToAnyRepnArgs_47, 1) = ((MR_Box) (Var_94));
    }
    {
      ToAnyRepnFPInfo_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_48, 0) = ((MR_Box) (Attrs_37));
      MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_48, 1) = ((MR_Box) (ToAnyRepnSymName_44));
      MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_48, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_48, 3) = ((MR_Box) (ToAnyRepnArgs_47));
      MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_48, 4) = ((MR_Box) (ProgVarSet_31));
      MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_48, 5) = ((MR_Box) (InstVarSet_32));
      MR_hl_field(MR_mktag(0), ToAnyRepnFPInfo_48, 6) = ((MR_Box) (Impl_38));
    }
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(ToAnyRepnFPInfo_48, PredStatus_19, Context_16, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_87_87, &STATE_VARIABLE_ModuleInfo_98_98, STATE_VARIABLE_Specs_88_88, &STATE_VARIABLE_Specs_99_99);
    FromGroundRepnSymName_49 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(TypeSymName_12, Arity_20);
    {
      XFGPragmaVar_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), XFGPragmaVar_50, 0) = ((MR_Box) (X_28));
      MR_hl_field(MR_mktag(0), XFGPragmaVar_50, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), XFGPragmaVar_50, 2) = ((MR_Box) (InGroundMode_24));
      MR_hl_field(MR_mktag(0), XFGPragmaVar_50, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_103 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      YFGPragmaVar_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), YFGPragmaVar_51, 0) = ((MR_Box) (Y_30));
      MR_hl_field(MR_mktag(0), YFGPragmaVar_51, 1) = ((MR_Box) ((MR_String) "Y"));
      MR_hl_field(MR_mktag(0), YFGPragmaVar_51, 2) = ((MR_Box) (Var_103));
      MR_hl_field(MR_mktag(0), YFGPragmaVar_51, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (YFGPragmaVar_51));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FromGroundRepnArgs_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FromGroundRepnArgs_52, 0) = ((MR_Box) (XFGPragmaVar_50));
      MR_hl_field(MR_mktag(1), FromGroundRepnArgs_52, 1) = ((MR_Box) (Var_105));
    }
    {
      FromGroundRepnFPInfo_53 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_53, 0) = ((MR_Box) (Attrs_37));
      MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_53, 1) = ((MR_Box) (FromGroundRepnSymName_49));
      MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_53, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_53, 3) = ((MR_Box) (FromGroundRepnArgs_52));
      MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_53, 4) = ((MR_Box) (ProgVarSet_31));
      MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_53, 5) = ((MR_Box) (InstVarSet_32));
      MR_hl_field(MR_mktag(0), FromGroundRepnFPInfo_53, 6) = ((MR_Box) (Impl_38));
    }
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(FromGroundRepnFPInfo_53, PredStatus_19, Context_16, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_98_98, &STATE_VARIABLE_ModuleInfo_109_109, STATE_VARIABLE_Specs_99_99, &STATE_VARIABLE_Specs_110_110);
    FromAnyRepnSymName_54 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(TypeSymName_12, Arity_20);
    {
      XFAPragmaVar_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), XFAPragmaVar_55, 0) = ((MR_Box) (X_28));
      MR_hl_field(MR_mktag(0), XFAPragmaVar_55, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), XFAPragmaVar_55, 2) = ((MR_Box) (InAnyMode_23));
      MR_hl_field(MR_mktag(0), XFAPragmaVar_55, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_114 = parse_tree__prog_mode__out_any_mode_0_f_0();
    {
      YFAPragmaVar_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), YFAPragmaVar_56, 0) = ((MR_Box) (Y_30));
      MR_hl_field(MR_mktag(0), YFAPragmaVar_56, 1) = ((MR_Box) ((MR_String) "Y"));
      MR_hl_field(MR_mktag(0), YFAPragmaVar_56, 2) = ((MR_Box) (Var_114));
      MR_hl_field(MR_mktag(0), YFAPragmaVar_56, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    {
      Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (YFAPragmaVar_56));
      MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FromAnyRepnArgs_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FromAnyRepnArgs_57, 0) = ((MR_Box) (XFAPragmaVar_55));
      MR_hl_field(MR_mktag(1), FromAnyRepnArgs_57, 1) = ((MR_Box) (Var_116));
    }
    {
      FromAnyRepnFPInfo_58 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_58, 0) = ((MR_Box) (Attrs_37));
      MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_58, 1) = ((MR_Box) (FromAnyRepnSymName_54));
      MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_58, 3) = ((MR_Box) (FromAnyRepnArgs_57));
      MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_58, 4) = ((MR_Box) (ProgVarSet_31));
      MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_58, 5) = ((MR_Box) (InstVarSet_32));
      MR_hl_field(MR_mktag(0), FromAnyRepnFPInfo_58, 6) = ((MR_Box) (Impl_38));
    }
    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(FromAnyRepnFPInfo_58, PredStatus_19, Context_16, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ModuleInfo_109_109, STATE_VARIABLE_ModuleInfo_60, STATE_VARIABLE_Specs_110_110, STATE_VARIABLE_Specs_64);
    *STATE_VARIABLE_QualInfo_62 = STATE_VARIABLE_QualInfo_0_61;
  }
}

void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_decls_5_p_0(
  MR_Word SolverAuxPredInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_54,
  MR_Word * STATE_VARIABLE_ModuleInfo_55,
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  {
    MR_Word TypeSymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_6, (MR_Integer) 0))));
    MR_Word TypeParams_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_6, (MR_Integer) 1))));
    MR_Word TVarSet_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_6, (MR_Integer) 2))));
    MR_Word SolverTypeDetails_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_6, (MR_Integer) 3))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_6, (MR_Integer) 4))));
    MR_Word ItemMercuryStatus_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_6, (MR_Integer) 5))));
    MR_Word NeedQual_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), SolverAuxPredInfo_6, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word PredStatus_16;
    MR_Word Args_17;
    MR_Word SolverType_18;
    MR_Integer Arity_19;
    MR_Word RepnType_20;
    MR_Word AnyInst_21;
    MR_Word GndInst_22;
    MR_Word InAnyMode_23;
    MR_Word InGndMode_24;
    MR_Word OutAnyMode_25;
    MR_Word OutGndMode_26;
    MR_Word InstVarSet_27;
    MR_Word ToGndRepnSymName_30;
    MR_Word ToGndRepnArgTypesModes_31;
    MR_Word ToGndAttrs_32;
    MR_Word ToGndMaybeAttrs_33;
    MR_Word ToGndPredDecl_34;
    MR_Word ToAnyRepnSymName_35;
    MR_Word ToAnyRepnArgTypesModes_36;
    MR_Word ToAnyAttrs_37;
    MR_Word ToAnyMaybeAttrs_38;
    MR_Word ToAnyPredDecl_39;
    MR_Word FromGndRepnSymName_40;
    MR_Word FromGndRepnArgTypesModes_41;
    MR_Word FromGndAttrs_42;
    MR_Word FromGndMaybeAttrs_43;
    MR_Word FromGndPredDecl_44;
    MR_Word FromAnyRepnSymName_45;
    MR_Word FromAnyRepnArgTypesModes_46;
    MR_Word FromAnyAttrs_47;
    MR_Word FromAnyMaybeAttrs_48;
    MR_Word FromAnyPredDecl_49;
    MR_Word Var_58;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_67;
    MR_Word Var_72;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_81;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_95;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_109;
    MR_Word STATE_VARIABLE_ModuleInfo_118_118;
    MR_Word STATE_VARIABLE_Specs_119_119;
    MR_Word STATE_VARIABLE_ModuleInfo_120_120;
    MR_Word STATE_VARIABLE_Specs_121_121;
    MR_Word STATE_VARIABLE_ModuleInfo_122_122;
    MR_Word STATE_VARIABLE_Specs_123_123;
    MR_Word _MaybeToGndPredProcId_50;
    MR_Word _MaybeToAnyPredProcId_51;
    MR_Word _MaybeFromGndPredProcId_52;
    MR_Word _MaybeFromAnyPredProcId_53;

    hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_14, &PredStatus_16);
    Var_58 = mercury__map__init_0_f_0((MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
    parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_58, TypeParams_10, &Args_17);
    {
      SolverType_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SolverType_18, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(1), SolverType_18, 1) = ((MR_Box) (Args_17));
      MR_hl_field(MR_mktag(1), SolverType_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_solver_scalar_common_1[0]), TypeParams_10, &Arity_19);
    RepnType_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_12, (MR_Integer) 0))));
    GndInst_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_12, (MR_Integer) 1))));
    AnyInst_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SolverTypeDetails_12, (MR_Integer) 2))));
    InAnyMode_23 = parse_tree__prog_mode__in_mode_1_f_0(AnyInst_21);
    InGndMode_24 = parse_tree__prog_mode__in_mode_1_f_0(GndInst_22);
    OutAnyMode_25 = parse_tree__prog_mode__out_mode_1_f_0(AnyInst_21);
    OutGndMode_26 = parse_tree__prog_mode__out_mode_1_f_0(GndInst_22);
    InstVarSet_27 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    ToGndRepnSymName_30 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(TypeSymName_9, Arity_19);
    Var_63 = parse_tree__prog_mode__in_mode_0_f_0();
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (SolverType_18));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (RepnType_20));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (OutGndMode_26));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ToGndRepnArgTypesModes_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ToGndRepnArgTypesModes_31, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), ToGndRepnArgTypesModes_31, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_67, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(2), Var_67, 1) = ((MR_Box) (Arity_19));
      MR_hl_field(MR_mktag(2), Var_67, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    ToGndAttrs_32 = (MR_Word) (Var_67);
    {
      ToGndMaybeAttrs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ToGndMaybeAttrs_33, 0) = ((MR_Box) (ToGndAttrs_32));
    }
    Var_72 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_solver_scalar_common_2[0]));
    {
      ToGndPredDecl_34 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 0) = ((MR_Box) (ToGndRepnSymName_30));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 2) = ((MR_Box) (ToGndRepnArgTypesModes_31));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 5) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 6) = ((MR_Box) (ToGndMaybeAttrs_33));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 7) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 8) = ((MR_Box) (InstVarSet_27));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 11) = ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[3]));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 12) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), ToGndPredDecl_34, 13) = ((MR_Box) ((MR_Integer) -1));
    }
    ToAnyRepnSymName_35 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(TypeSymName_9, Arity_19);
    Var_77 = parse_tree__prog_mode__in_any_mode_0_f_0();
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (SolverType_18));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (RepnType_20));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (OutAnyMode_25));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ToAnyRepnArgTypesModes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ToAnyRepnArgTypesModes_36, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(1), ToAnyRepnArgTypesModes_36, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(2), Var_81, 1) = ((MR_Box) (Arity_19));
      MR_hl_field(MR_mktag(2), Var_81, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    ToAnyAttrs_37 = (MR_Word) (Var_81);
    {
      ToAnyMaybeAttrs_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ToAnyMaybeAttrs_38, 0) = ((MR_Box) (ToAnyAttrs_37));
    }
    {
      ToAnyPredDecl_39 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 0) = ((MR_Box) (ToAnyRepnSymName_35));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 2) = ((MR_Box) (ToAnyRepnArgTypesModes_36));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 5) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 6) = ((MR_Box) (ToAnyMaybeAttrs_38));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 7) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 8) = ((MR_Box) (InstVarSet_27));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 11) = ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[3]));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 12) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), ToAnyPredDecl_39, 13) = ((MR_Box) ((MR_Integer) -1));
    }
    FromGndRepnSymName_40 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(TypeSymName_9, Arity_19);
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (RepnType_20));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (InGndMode_24));
    }
    Var_93 = parse_tree__prog_mode__out_mode_0_f_0();
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (SolverType_18));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FromGndRepnArgTypesModes_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FromGndRepnArgTypesModes_41, 0) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(1), FromGndRepnArgTypesModes_41, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_95, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(2), Var_95, 1) = ((MR_Box) (Arity_19));
      MR_hl_field(MR_mktag(2), Var_95, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    FromGndAttrs_42 = (MR_Word) (Var_95);
    {
      FromGndMaybeAttrs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FromGndMaybeAttrs_43, 0) = ((MR_Box) (FromGndAttrs_42));
    }
    {
      FromGndPredDecl_44 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 0) = ((MR_Box) (FromGndRepnSymName_40));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 2) = ((MR_Box) (FromGndRepnArgTypesModes_41));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 5) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 6) = ((MR_Box) (FromGndMaybeAttrs_43));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 7) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 8) = ((MR_Box) (InstVarSet_27));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 11) = ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[3]));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 12) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), FromGndPredDecl_44, 13) = ((MR_Box) ((MR_Integer) -1));
    }
    FromAnyRepnSymName_45 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(TypeSymName_9, Arity_19);
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (RepnType_20));
      MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (InAnyMode_23));
    }
    Var_107 = parse_tree__prog_mode__out_any_mode_0_f_0();
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (SolverType_18));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_107));
    }
    {
      Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FromAnyRepnArgTypesModes_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FromAnyRepnArgTypesModes_46, 0) = ((MR_Box) (Var_104));
      MR_hl_field(MR_mktag(1), FromAnyRepnArgTypesModes_46, 1) = ((MR_Box) (Var_105));
    }
    {
      Var_109 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_109, 0) = ((MR_Box) (TypeSymName_9));
      MR_hl_field(MR_mktag(2), Var_109, 1) = ((MR_Box) (Arity_19));
      MR_hl_field(MR_mktag(2), Var_109, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
    }
    FromAnyAttrs_47 = (MR_Word) (Var_109);
    {
      FromAnyMaybeAttrs_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FromAnyMaybeAttrs_48, 0) = ((MR_Box) (FromAnyAttrs_47));
    }
    {
      FromAnyPredDecl_49 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 0) = ((MR_Box) (FromAnyRepnSymName_45));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 2) = ((MR_Box) (FromAnyRepnArgTypesModes_46));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 5) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 6) = ((MR_Box) (FromAnyMaybeAttrs_48));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 7) = ((MR_Box) (TVarSet_11));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 8) = ((MR_Box) (InstVarSet_27));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 10) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 11) = ((MR_Box) (&hlds__make_hlds__add_solver_scalar_common_1[3]));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 12) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), FromAnyPredDecl_49, 13) = ((MR_Box) ((MR_Integer) -1));
    }
    hlds__add_pred__module_add_pred_decl_8_p_0(PredStatus_16, NeedQual_15, ToGndPredDecl_34, &_MaybeToGndPredProcId_50, STATE_VARIABLE_ModuleInfo_0_54, &STATE_VARIABLE_ModuleInfo_118_118, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_119_119);
    hlds__add_pred__module_add_pred_decl_8_p_0(PredStatus_16, NeedQual_15, ToAnyPredDecl_39, &_MaybeToAnyPredProcId_51, STATE_VARIABLE_ModuleInfo_118_118, &STATE_VARIABLE_ModuleInfo_120_120, STATE_VARIABLE_Specs_119_119, &STATE_VARIABLE_Specs_121_121);
    hlds__add_pred__module_add_pred_decl_8_p_0(PredStatus_16, NeedQual_15, FromGndPredDecl_44, &_MaybeFromGndPredProcId_52, STATE_VARIABLE_ModuleInfo_120_120, &STATE_VARIABLE_ModuleInfo_122_122, STATE_VARIABLE_Specs_121_121, &STATE_VARIABLE_Specs_123_123);
    hlds__add_pred__module_add_pred_decl_8_p_0(PredStatus_16, NeedQual_15, FromAnyPredDecl_49, &_MaybeFromAnyPredProcId_53, STATE_VARIABLE_ModuleInfo_122_122, STATE_VARIABLE_ModuleInfo_55, STATE_VARIABLE_Specs_123_123, STATE_VARIABLE_Specs_57);
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
  MR_Word SymName_4,
  MR_Integer Arity_5)
{
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
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
  MR_Word SymName_4,
  MR_Integer Arity_5)
{
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
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
  MR_Word SymName_4,
  MR_Integer Arity_5)
{
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
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
  MR_Word SymName_4,
  MR_Integer Arity_5)
{
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
}

static MR_bool MR_CALL 
hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
