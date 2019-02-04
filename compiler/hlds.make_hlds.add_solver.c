/*
** Automatically generated from `add_solver.m'
** by the Mercury compiler,
** version DEV
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


/* :- module hlds.make_hlds.add_solver. */
/* :- implementation. */

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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_types_solver_aux_pred_info_0_0[7];

static const MR_DuFunctorDesc hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_stag_ordered_solver_aux_pred_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_ptag_ordered_solver_aux_pred_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_name_ordered_solver_aux_pred_info_0[1];

static const MR_Integer hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__functor_number_map_solver_aux_pred_info_0[1];

static MR_bool MR_CALL 
hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0_10001(
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0_10001(
  MR_Box * hlds__make_hlds__add_solver__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_3);

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
  MR_Word hlds__make_hlds__add_solver__SymName_4,
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
  MR_Word hlds__make_hlds__add_solver__SymName_4,
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
  MR_Word hlds__make_hlds__add_solver__SymName_4,
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
  MR_Word hlds__make_hlds__add_solver__SymName_4,
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

static void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_7_p_0(
  MR_Word hlds__make_hlds__add_solver__SolverAuxPredInfo_8,
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_59,
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_60,
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_61,
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_62,
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_63,
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_64);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__add_solver__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_types_solver_aux_pred_info_0_0[7] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_mercury_status_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0
};

static const MR_DuFunctorDesc hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0 = {
  (MR_String) "solver_aux_pred_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_types_solver_aux_pred_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_stag_ordered_solver_aux_pred_info_0_0[1] = {
  &hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_ptag_ordered_solver_aux_pred_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_stag_ordered_solver_aux_pred_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_solver",
  (MR_String) "solver_aux_pred_info",
  {     hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_name_ordered_solver_aux_pred_info_0 },
  {     hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_ptag_ordered_solver_aux_pred_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__functor_number_map_solver_aux_pred_info_0
};

static MR_bool MR_CALL 
hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0_10001(
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__add_solver__succeeded;

    {
      hlds__make_hlds__add_solver__succeeded = hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0(((MR_Word) hlds__make_hlds__add_solver__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_solver__wrapper_arg_2));
    }
    return hlds__make_hlds__add_solver__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0_10001(
  MR_Box * hlds__make_hlds__add_solver__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__add_solver__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0(&hlds__make_hlds__add_solver__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_solver__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_solver__wrapper_arg_3));
    }
    *hlds__make_hlds__add_solver__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_solver__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0(
  MR_Word * hlds__make_hlds__add_solver__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_solver__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_solver__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__add_solver__succeeded;
    MR_Integer hlds__make_hlds__add_solver__CastX_24 = (MR_Integer) hlds__make_hlds__add_solver__HeadVar__2_2;
    MR_Integer hlds__make_hlds__add_solver__CastY_25 = (MR_Integer) hlds__make_hlds__add_solver__HeadVar__3_3;

    hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__CastX_24 == hlds__make_hlds__add_solver__CastY_25);
    if (hlds__make_hlds__add_solver__succeeded)
      *hlds__make_hlds__add_solver__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__make_hlds__add_solver__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_solver__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_solver__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__add_solver__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__add_solver__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__add_solver__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__add_solver__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word hlds__make_hlds__add_solver__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_solver__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_solver__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__add_solver__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__add_solver__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__add_solver__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__add_solver__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word hlds__make_hlds__add_solver__Var_18;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__make_hlds__add_solver__Var_18, hlds__make_hlds__add_solver__Var_4, hlds__make_hlds__add_solver__Var_11);
        }
        hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__Var_18 == (MR_Integer) 0);
        hlds__make_hlds__add_solver__succeeded = !(hlds__make_hlds__add_solver__succeeded);
        if (hlds__make_hlds__add_solver__succeeded)
          *hlds__make_hlds__add_solver__HeadVar__1_1 = hlds__make_hlds__add_solver__Var_18;
        else
          {
            MR_Word hlds__make_hlds__add_solver__Var_19;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[1], &hlds__make_hlds__add_solver__Var_19, ((MR_Box) (hlds__make_hlds__add_solver__Var_5)), ((MR_Box) (hlds__make_hlds__add_solver__Var_12)));
            }
            hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__Var_19 == (MR_Integer) 0);
            hlds__make_hlds__add_solver__succeeded = !(hlds__make_hlds__add_solver__succeeded);
            if (hlds__make_hlds__add_solver__succeeded)
              *hlds__make_hlds__add_solver__HeadVar__1_1 = hlds__make_hlds__add_solver__Var_19;
            else
              {
                MR_Word hlds__make_hlds__add_solver__Var_20;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[2], &hlds__make_hlds__add_solver__Var_20, ((MR_Box) (hlds__make_hlds__add_solver__Var_6)), ((MR_Box) (hlds__make_hlds__add_solver__Var_13)));
                }
                hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__Var_20 == (MR_Integer) 0);
                hlds__make_hlds__add_solver__succeeded = !(hlds__make_hlds__add_solver__succeeded);
                if (hlds__make_hlds__add_solver__succeeded)
                  *hlds__make_hlds__add_solver__HeadVar__1_1 = hlds__make_hlds__add_solver__Var_20;
                else
                  {
                    MR_Word hlds__make_hlds__add_solver__Var_21;

                    {
                      parse_tree__prog_data____Compare____solver_type_details_0_0(&hlds__make_hlds__add_solver__Var_21, hlds__make_hlds__add_solver__Var_7, hlds__make_hlds__add_solver__Var_14);
                    }
                    hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__Var_21 == (MR_Integer) 0);
                    hlds__make_hlds__add_solver__succeeded = !(hlds__make_hlds__add_solver__succeeded);
                    if (hlds__make_hlds__add_solver__succeeded)
                      *hlds__make_hlds__add_solver__HeadVar__1_1 = hlds__make_hlds__add_solver__Var_21;
                    else
                      {
                        MR_Word hlds__make_hlds__add_solver__Var_22;

                        {
                          mercury__term____Compare____context_0_0(&hlds__make_hlds__add_solver__Var_22, hlds__make_hlds__add_solver__Var_8, hlds__make_hlds__add_solver__Var_15);
                        }
                        hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__Var_22 == (MR_Integer) 0);
                        hlds__make_hlds__add_solver__succeeded = !(hlds__make_hlds__add_solver__succeeded);
                        if (hlds__make_hlds__add_solver__succeeded)
                          *hlds__make_hlds__add_solver__HeadVar__1_1 = hlds__make_hlds__add_solver__Var_22;
                        else
                          {
                            MR_Word hlds__make_hlds__add_solver__Var_23;

                            {
                              hlds__status____Compare____item_mercury_status_0_0(&hlds__make_hlds__add_solver__Var_23, hlds__make_hlds__add_solver__Var_9, hlds__make_hlds__add_solver__Var_16);
                            }
                            hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__Var_23 == (MR_Integer) 0);
                            hlds__make_hlds__add_solver__succeeded = !(hlds__make_hlds__add_solver__succeeded);
                            if (hlds__make_hlds__add_solver__succeeded)
                              *hlds__make_hlds__add_solver__HeadVar__1_1 = hlds__make_hlds__add_solver__Var_23;
                            else
                              {
                                MR_Integer hlds__make_hlds__add_solver__Var_33 = (MR_Integer) hlds__make_hlds__add_solver__Var_10;
                                MR_Integer hlds__make_hlds__add_solver__Var_34 = (MR_Integer) hlds__make_hlds__add_solver__Var_17;

                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_solver__HeadVar__1_1, hlds__make_hlds__add_solver__Var_33, hlds__make_hlds__add_solver__Var_34);
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
  MR_Word hlds__make_hlds__add_solver__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_solver__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__add_solver__succeeded;
    MR_Integer hlds__make_hlds__add_solver__CastX_17 = (MR_Integer) hlds__make_hlds__add_solver__HeadVar__1_1;
    MR_Integer hlds__make_hlds__add_solver__CastY_18 = (MR_Integer) hlds__make_hlds__add_solver__HeadVar__2_2;

    hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__CastX_17 == hlds__make_hlds__add_solver__CastY_18);
    if (hlds__make_hlds__add_solver__succeeded)
      hlds__make_hlds__add_solver__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__make_hlds__add_solver__TypeInfo_20_20;
        MR_Word hlds__make_hlds__add_solver__TypeInfo_21_21;
        MR_Word hlds__make_hlds__add_solver__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_solver__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_solver__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__add_solver__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__add_solver__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__add_solver__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__add_solver__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word hlds__make_hlds__add_solver__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_solver__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_solver__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__add_solver__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__add_solver__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__add_solver__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__add_solver__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 6)));

        {
          hlds__make_hlds__add_solver__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_solver__Var_3, hlds__make_hlds__add_solver__Var_10);
        }
        if (hlds__make_hlds__add_solver__succeeded)
          {
            hlds__make_hlds__add_solver__TypeInfo_20_20 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[1];
            {
              hlds__make_hlds__add_solver__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_solver__TypeInfo_20_20, ((MR_Box) (hlds__make_hlds__add_solver__Var_4)), ((MR_Box) (hlds__make_hlds__add_solver__Var_11)));
            }
            if (hlds__make_hlds__add_solver__succeeded)
              {
                hlds__make_hlds__add_solver__TypeInfo_21_21 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[2];
                {
                  hlds__make_hlds__add_solver__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_solver__TypeInfo_21_21, ((MR_Box) (hlds__make_hlds__add_solver__Var_5)), ((MR_Box) (hlds__make_hlds__add_solver__Var_12)));
                }
                if (hlds__make_hlds__add_solver__succeeded)
                  {
                    {
                      hlds__make_hlds__add_solver__succeeded = parse_tree__prog_data____Unify____solver_type_details_0_0(hlds__make_hlds__add_solver__Var_6, hlds__make_hlds__add_solver__Var_13);
                    }
                    if (hlds__make_hlds__add_solver__succeeded)
                      {
                        {
                          hlds__make_hlds__add_solver__succeeded = mercury__term____Unify____context_0_0(hlds__make_hlds__add_solver__Var_7, hlds__make_hlds__add_solver__Var_14);
                        }
                        if (hlds__make_hlds__add_solver__succeeded)
                          {
                            {
                              hlds__make_hlds__add_solver__succeeded = hlds__status____Unify____item_mercury_status_0_0(hlds__make_hlds__add_solver__Var_8, hlds__make_hlds__add_solver__Var_15);
                            }
                            if (hlds__make_hlds__add_solver__succeeded)
                              hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__Var_9 == hlds__make_hlds__add_solver__Var_16);
                          }
                      }
                  }
              }
          }
      }
    return hlds__make_hlds__add_solver__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
  MR_Word hlds__make_hlds__add_solver__SymName_4,
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
{
  {
    MR_bool hlds__make_hlds__add_solver__succeeded;
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
        MR_String hlds__make_hlds__add_solver__Var_19;
        MR_String hlds__make_hlds__add_solver__Var_20;
        MR_String hlds__make_hlds__add_solver__Var_21;
        MR_String hlds__make_hlds__add_solver__Var_23;

        {
          hlds__make_hlds__add_solver__Var_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
        {
          hlds__make_hlds__add_solver__Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__Var_23);
        }
        {
          hlds__make_hlds__add_solver__Var_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__Var_21);
        }
        {
          hlds__make_hlds__add_solver__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", hlds__make_hlds__add_solver__Var_20);
        }
        {
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_19));
        }
      }
    else
      {
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_solver__Var_10;
        MR_String hlds__make_hlds__add_solver__Var_11;
        MR_String hlds__make_hlds__add_solver__Var_12;
        MR_String hlds__make_hlds__add_solver__Var_14;

        {
          hlds__make_hlds__add_solver__Var_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
        {
          hlds__make_hlds__add_solver__Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__Var_14);
        }
        {
          hlds__make_hlds__add_solver__Var_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__Var_12);
        }
        {
          hlds__make_hlds__add_solver__Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", hlds__make_hlds__add_solver__Var_11);
        }
        {
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Var_10));
        }
      }
    return hlds__make_hlds__add_solver__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
  MR_Word hlds__make_hlds__add_solver__SymName_4,
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
{
  {
    MR_bool hlds__make_hlds__add_solver__succeeded;
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
        MR_String hlds__make_hlds__add_solver__Var_19;
        MR_String hlds__make_hlds__add_solver__Var_20;
        MR_String hlds__make_hlds__add_solver__Var_21;
        MR_String hlds__make_hlds__add_solver__Var_23;

        {
          hlds__make_hlds__add_solver__Var_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
        {
          hlds__make_hlds__add_solver__Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__Var_23);
        }
        {
          hlds__make_hlds__add_solver__Var_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__Var_21);
        }
        {
          hlds__make_hlds__add_solver__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", hlds__make_hlds__add_solver__Var_20);
        }
        {
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_19));
        }
      }
    else
      {
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_solver__Var_10;
        MR_String hlds__make_hlds__add_solver__Var_11;
        MR_String hlds__make_hlds__add_solver__Var_12;
        MR_String hlds__make_hlds__add_solver__Var_14;

        {
          hlds__make_hlds__add_solver__Var_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
        {
          hlds__make_hlds__add_solver__Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__Var_14);
        }
        {
          hlds__make_hlds__add_solver__Var_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__Var_12);
        }
        {
          hlds__make_hlds__add_solver__Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", hlds__make_hlds__add_solver__Var_11);
        }
        {
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Var_10));
        }
      }
    return hlds__make_hlds__add_solver__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
  MR_Word hlds__make_hlds__add_solver__SymName_4,
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
{
  {
    MR_bool hlds__make_hlds__add_solver__succeeded;
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
        MR_String hlds__make_hlds__add_solver__Var_19;
        MR_String hlds__make_hlds__add_solver__Var_20;
        MR_String hlds__make_hlds__add_solver__Var_21;
        MR_String hlds__make_hlds__add_solver__Var_23;

        {
          hlds__make_hlds__add_solver__Var_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
        {
          hlds__make_hlds__add_solver__Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__Var_23);
        }
        {
          hlds__make_hlds__add_solver__Var_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__Var_21);
        }
        {
          hlds__make_hlds__add_solver__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", hlds__make_hlds__add_solver__Var_20);
        }
        {
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_19));
        }
      }
    else
      {
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_solver__Var_10;
        MR_String hlds__make_hlds__add_solver__Var_11;
        MR_String hlds__make_hlds__add_solver__Var_12;
        MR_String hlds__make_hlds__add_solver__Var_14;

        {
          hlds__make_hlds__add_solver__Var_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
        {
          hlds__make_hlds__add_solver__Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__Var_14);
        }
        {
          hlds__make_hlds__add_solver__Var_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__Var_12);
        }
        {
          hlds__make_hlds__add_solver__Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", hlds__make_hlds__add_solver__Var_11);
        }
        {
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Var_10));
        }
      }
    return hlds__make_hlds__add_solver__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
  MR_Word hlds__make_hlds__add_solver__SymName_4,
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
{
  {
    MR_bool hlds__make_hlds__add_solver__succeeded;
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
        MR_String hlds__make_hlds__add_solver__Var_19;
        MR_String hlds__make_hlds__add_solver__Var_20;
        MR_String hlds__make_hlds__add_solver__Var_21;
        MR_String hlds__make_hlds__add_solver__Var_23;

        {
          hlds__make_hlds__add_solver__Var_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
        {
          hlds__make_hlds__add_solver__Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__Var_23);
        }
        {
          hlds__make_hlds__add_solver__Var_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__Var_21);
        }
        {
          hlds__make_hlds__add_solver__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", hlds__make_hlds__add_solver__Var_20);
        }
        {
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_19));
        }
      }
    else
      {
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_solver__Var_10;
        MR_String hlds__make_hlds__add_solver__Var_11;
        MR_String hlds__make_hlds__add_solver__Var_12;
        MR_String hlds__make_hlds__add_solver__Var_14;

        {
          hlds__make_hlds__add_solver__Var_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
        {
          hlds__make_hlds__add_solver__Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__Var_14);
        }
        {
          hlds__make_hlds__add_solver__Var_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__Var_12);
        }
        {
          hlds__make_hlds__add_solver__Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", hlds__make_hlds__add_solver__Var_11);
        }
        {
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Var_10));
        }
      }
    return hlds__make_hlds__add_solver__HeadVar__3_3;
  }
}

static void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_7_p_0(
  MR_Word hlds__make_hlds__add_solver__SolverAuxPredInfo_8,
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_59,
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_60,
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_61,
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_62,
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_63,
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_64)
{
  {
    MR_bool hlds__make_hlds__add_solver__succeeded;
    MR_Word hlds__make_hlds__add_solver__TypeCtorInfo_129_129;
    MR_Word hlds__make_hlds__add_solver__TypeSymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_solver__TypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_solver__SolverTypeDetails_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_solver__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_solver__ItemMercuryStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_solver__PredStatus_19;
    MR_Integer hlds__make_hlds__add_solver__Arity_20;
    MR_Word hlds__make_hlds__add_solver__AnyInst_21;
    MR_Word hlds__make_hlds__add_solver__GroundInst_22;
    MR_Word hlds__make_hlds__add_solver__InAnyMode_23;
    MR_Word hlds__make_hlds__add_solver__InGroundMode_24;
    MR_Word hlds__make_hlds__add_solver__OutAnyMode_25;
    MR_Word hlds__make_hlds__add_solver__OutGroundMode_26;
    MR_Word hlds__make_hlds__add_solver__ProgVarSet0_27;
    MR_Word hlds__make_hlds__add_solver__X_28;
    MR_Word hlds__make_hlds__add_solver__ProgVarSet1_29;
    MR_Word hlds__make_hlds__add_solver__Y_30;
    MR_Word hlds__make_hlds__add_solver__ProgVarSet_31;
    MR_Word hlds__make_hlds__add_solver__InstVarSet_32;
    MR_Word hlds__make_hlds__add_solver__Globals_33;
    MR_Word hlds__make_hlds__add_solver__Target_34;
    MR_Word hlds__make_hlds__add_solver__Lang_35;
    MR_Word hlds__make_hlds__add_solver__Attrs_37;
    MR_Word hlds__make_hlds__add_solver__Impl_38;
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnSymName_39;
    MR_Word hlds__make_hlds__add_solver__XTGPragmaVar_40;
    MR_Word hlds__make_hlds__add_solver__YTGPragmaVar_41;
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnArgs_42;
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43;
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnSymName_44;
    MR_Word hlds__make_hlds__add_solver__XTAPragmaVar_45;
    MR_Word hlds__make_hlds__add_solver__YTAPragmaVar_46;
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnArgs_47;
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48;
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnSymName_49;
    MR_Word hlds__make_hlds__add_solver__XFGPragmaVar_50;
    MR_Word hlds__make_hlds__add_solver__YFGPragmaVar_51;
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnArgs_52;
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53;
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnSymName_54;
    MR_Word hlds__make_hlds__add_solver__XFAPragmaVar_55;
    MR_Word hlds__make_hlds__add_solver__YFAPragmaVar_56;
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnArgs_57;
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_65_65;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_67_67;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_69_69;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_71_71;
    MR_Word hlds__make_hlds__add_solver__Var_79;
    MR_Word hlds__make_hlds__add_solver__Var_83;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_87_87;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_88_88;
    MR_Word hlds__make_hlds__add_solver__Var_90;
    MR_Word hlds__make_hlds__add_solver__Var_94;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_98_98;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_99_99;
    MR_Word hlds__make_hlds__add_solver__Var_103;
    MR_Word hlds__make_hlds__add_solver__Var_105;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_109_109;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_110_110;
    MR_Word hlds__make_hlds__add_solver__Var_114;
    MR_Word hlds__make_hlds__add_solver__Var_116;
    MR_Word hlds__make_hlds__add_solver___TVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_solver___NeedQual_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_solver__Var_122;
    MR_Word hlds__make_hlds__add_solver__Var_124;

    {
      hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_solver__ItemMercuryStatus_17, &hlds__make_hlds__add_solver__PredStatus_19);
    }
    {
      hlds__make_hlds__add_solver__Arity_20 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[0], hlds__make_hlds__add_solver__TypeParams_13);
    }
    hlds__make_hlds__add_solver__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 0)));
    hlds__make_hlds__add_solver__GroundInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 1)));
    hlds__make_hlds__add_solver__AnyInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 2)));
    hlds__make_hlds__add_solver__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 3)));
    {
      hlds__make_hlds__add_solver__InAnyMode_23 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_21);
    }
    {
      hlds__make_hlds__add_solver__InGroundMode_24 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_22);
    }
    {
      hlds__make_hlds__add_solver__OutAnyMode_25 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_21);
    }
    {
      hlds__make_hlds__add_solver__OutGroundMode_26 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_22);
    }
    hlds__make_hlds__add_solver__TypeCtorInfo_129_129 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      hlds__make_hlds__add_solver__ProgVarSet0_27 = mercury__varset__init_0_f_0(hlds__make_hlds__add_solver__TypeCtorInfo_129_129);
    }
    {
      mercury__varset__new_var_3_p_0(hlds__make_hlds__add_solver__TypeCtorInfo_129_129, &hlds__make_hlds__add_solver__X_28, hlds__make_hlds__add_solver__ProgVarSet0_27, &hlds__make_hlds__add_solver__ProgVarSet1_29);
    }
    {
      mercury__varset__new_var_3_p_0(hlds__make_hlds__add_solver__TypeCtorInfo_129_129, &hlds__make_hlds__add_solver__Y_30, hlds__make_hlds__add_solver__ProgVarSet1_29, &hlds__make_hlds__add_solver__ProgVarSet_31);
    }
    {
      hlds__make_hlds__add_solver__InstVarSet_32 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_59, &hlds__make_hlds__add_solver__Globals_33);
    }
    {
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_solver__Globals_33, &hlds__make_hlds__add_solver__Target_34);
    }
    hlds__make_hlds__add_solver__Lang_35 = ((&hlds__make_hlds__add_solver_vector_common_3[0 + hlds__make_hlds__add_solver__Target_34]))->hlds__make_hlds__add_solver__vector_common_type_3_0__vct_3_f_0;
    {
      hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_65_65 = parse_tree__prog_data_foreign__default_attributes_1_f_0(hlds__make_hlds__add_solver__Lang_35);
    }
    {
      parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_65_65, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_67_67);
    }
    {
      parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_67_67, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_69_69);
    }
    {
      parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_69_69, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_71_71);
    }
    {
      parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_71_71, &hlds__make_hlds__add_solver__Attrs_37);
    }
    switch (hlds__make_hlds__add_solver__Lang_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word hlds__make_hlds__add_solver__Var_77;

          {
            hlds__make_hlds__add_solver__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_77, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Context_16));
          }
          {
            hlds__make_hlds__add_solver__Impl_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_38, 0) = ((MR_Box) ((MR_String) "Y = X;"));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_38, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_77));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word hlds__make_hlds__add_solver__Var_75;

          {
            hlds__make_hlds__add_solver__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_75, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Context_16));
          }
          {
            hlds__make_hlds__add_solver__Impl_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_38, 0) = ((MR_Box) ((MR_String) "Y = X"));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_38, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_75));
          }
        }
        break;
    }
    {
      hlds__make_hlds__add_solver__ToGroundRepnSymName_39 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
    {
      hlds__make_hlds__add_solver__Var_79 = parse_tree__prog_mode__in_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_solver__XTGPragmaVar_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_40, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_40, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_40, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Var_79));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_40, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__add_solver__YTGPragmaVar_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_41, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_41, 1) = ((MR_Box) ((MR_String) "Y"));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_41, 2) = ((MR_Box) (hlds__make_hlds__add_solver__OutGroundMode_26));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_41, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__add_solver__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_83, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YTGPragmaVar_41));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_solver__ToGroundRepnArgs_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgs_42, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XTGPragmaVar_40));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgs_42, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_83));
    }
    {
      hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_37));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToGroundRepnSymName_39));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 3) = ((MR_Box) (hlds__make_hlds__add_solver__ToGroundRepnArgs_42));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_38));
    }
    {
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, hlds__make_hlds__add_solver__PredStatus_19, hlds__make_hlds__add_solver__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_59, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_63, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_88_88);
    }
    {
      hlds__make_hlds__add_solver__ToAnyRepnSymName_44 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
    {
      hlds__make_hlds__add_solver__Var_90 = parse_tree__prog_mode__in_any_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_solver__XTAPragmaVar_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_45, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_45, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_45, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Var_90));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_45, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__add_solver__YTAPragmaVar_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_46, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_46, 1) = ((MR_Box) ((MR_String) "Y"));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_46, 2) = ((MR_Box) (hlds__make_hlds__add_solver__OutAnyMode_25));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_46, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__add_solver__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_94, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YTAPragmaVar_46));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_solver__ToAnyRepnArgs_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgs_47, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XTAPragmaVar_45));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgs_47, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_94));
    }
    {
      hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_37));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToAnyRepnSymName_44));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 3) = ((MR_Box) (hlds__make_hlds__add_solver__ToAnyRepnArgs_47));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_38));
    }
    {
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, hlds__make_hlds__add_solver__PredStatus_19, hlds__make_hlds__add_solver__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_87_87, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_98_98, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_88_88, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_99_99);
    }
    {
      hlds__make_hlds__add_solver__FromGroundRepnSymName_49 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
    {
      hlds__make_hlds__add_solver__XFGPragmaVar_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_50, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_50, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_50, 2) = ((MR_Box) (hlds__make_hlds__add_solver__InGroundMode_24));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_50, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__add_solver__Var_103 = parse_tree__prog_mode__out_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_solver__YFGPragmaVar_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_51, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_51, 1) = ((MR_Box) ((MR_String) "Y"));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_51, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Var_103));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_51, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__add_solver__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_105, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YFGPragmaVar_51));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_solver__FromGroundRepnArgs_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgs_52, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XFGPragmaVar_50));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgs_52, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_105));
    }
    {
      hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_37));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromGroundRepnSymName_49));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_solver__FromGroundRepnArgs_52));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_38));
    }
    {
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, hlds__make_hlds__add_solver__PredStatus_19, hlds__make_hlds__add_solver__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_98_98, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_99_99, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_110_110);
    }
    {
      hlds__make_hlds__add_solver__FromAnyRepnSymName_54 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
    {
      hlds__make_hlds__add_solver__XFAPragmaVar_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_55, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_55, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_55, 2) = ((MR_Box) (hlds__make_hlds__add_solver__InAnyMode_23));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_55, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__add_solver__Var_114 = parse_tree__prog_mode__out_any_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_solver__YFAPragmaVar_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_56, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_56, 1) = ((MR_Box) ((MR_String) "Y"));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_56, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Var_114));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_56, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      hlds__make_hlds__add_solver__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_116, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YFAPragmaVar_56));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_solver__FromAnyRepnArgs_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgs_57, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XFAPragmaVar_55));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgs_57, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_116));
    }
    {
      hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_37));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromAnyRepnSymName_54));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 3) = ((MR_Box) (hlds__make_hlds__add_solver__FromAnyRepnArgs_57));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_38));
    }
    {
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, hlds__make_hlds__add_solver__PredStatus_19, hlds__make_hlds__add_solver__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_60, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_110_110, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_64);
    }
    *hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_62 = hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_61;
  }
}

void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_if_local_7_p_0(
  MR_Word hlds__make_hlds__add_solver__SolverAuxPredInfo_8,
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_22,
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_23,
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_24,
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_25,
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_26)
{
  {
    MR_bool hlds__make_hlds__add_solver__succeeded;
    MR_Word hlds__make_hlds__add_solver__ItemMercuryStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_solver___TypeSymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_solver___TypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_solver___TVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_solver___SolverTypeDetails_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_solver___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_solver___NeedQual_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 6)));

    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__ItemMercuryStatus_17)) == (MR_mktag((MR_Integer) 1))))
      {
        *hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_22 = hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_21;
        *hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_24 = hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_23;
        *hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_26 = hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_25;
      }
    else
      {
        hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_7_p_0(hlds__make_hlds__add_solver__SolverAuxPredInfo_8, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_22, hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_23, hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_24, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_26);
      }
  }
}

void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_decls_5_p_0(
  MR_Word hlds__make_hlds__add_solver__SolverAuxPredInfo_6,
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_50,
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_51,
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_52)
{
  {
    MR_bool hlds__make_hlds__add_solver__succeeded;
    MR_Word hlds__make_hlds__add_solver__TypeInfo_114_114;
    MR_Word hlds__make_hlds__add_solver__TypeSymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_solver__TypeParams_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_solver__TVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_solver__SolverTypeDetails_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_solver__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_solver__ItemMercuryStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_solver__NeedQual_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_solver__PredStatus_16;
    MR_Word hlds__make_hlds__add_solver__MaybeItemMercuryStatus_18;
    MR_Word hlds__make_hlds__add_solver__NoConstraints_19;
    MR_Word hlds__make_hlds__add_solver__Args_20;
    MR_Word hlds__make_hlds__add_solver__SolverType_21;
    MR_Integer hlds__make_hlds__add_solver__Arity_22;
    MR_Word hlds__make_hlds__add_solver__RepnType_23;
    MR_Word hlds__make_hlds__add_solver__AnyInst_24;
    MR_Word hlds__make_hlds__add_solver__GroundInst_25;
    MR_Word hlds__make_hlds__add_solver__InAnyMode_26;
    MR_Word hlds__make_hlds__add_solver__InGroundMode_27;
    MR_Word hlds__make_hlds__add_solver__OutAnyMode_28;
    MR_Word hlds__make_hlds__add_solver__OutGroundMode_29;
    MR_Word hlds__make_hlds__add_solver__InstVarSet_30;
    MR_Word hlds__make_hlds__add_solver__ExistQTVars_31;
    MR_Word hlds__make_hlds__add_solver__NoMarkers_32;
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnSymName_33;
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnArgTypesModes_34;
    MR_Word hlds__make_hlds__add_solver__ToGroundOrigin_35;
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnSymName_37;
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnArgTypesModes_38;
    MR_Word hlds__make_hlds__add_solver__ToAnyOrigin_39;
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnSymName_41;
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnArgTypesModes_42;
    MR_Word hlds__make_hlds__add_solver__FromGroundOrigin_43;
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnSymName_45;
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnArgTypesModes_46;
    MR_Word hlds__make_hlds__add_solver__FromAnyOrigin_47;
    MR_Word hlds__make_hlds__add_solver__Var_55;
    MR_Word hlds__make_hlds__add_solver__Var_57;
    MR_Word hlds__make_hlds__add_solver__Var_58;
    MR_Word hlds__make_hlds__add_solver__Var_59;
    MR_Word hlds__make_hlds__add_solver__Var_60;
    MR_Word hlds__make_hlds__add_solver__Var_64;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_66_66;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_67_67;
    MR_Word hlds__make_hlds__add_solver__Var_69;
    MR_Word hlds__make_hlds__add_solver__Var_70;
    MR_Word hlds__make_hlds__add_solver__Var_71;
    MR_Word hlds__make_hlds__add_solver__Var_72;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_78_78;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_79_79;
    MR_Word hlds__make_hlds__add_solver__Var_81;
    MR_Word hlds__make_hlds__add_solver__Var_82;
    MR_Word hlds__make_hlds__add_solver__Var_83;
    MR_Word hlds__make_hlds__add_solver__Var_84;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_90_90;
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_91_91;
    MR_Word hlds__make_hlds__add_solver__Var_93;
    MR_Word hlds__make_hlds__add_solver__Var_94;
    MR_Word hlds__make_hlds__add_solver__Var_95;
    MR_Word hlds__make_hlds__add_solver__Var_96;
    MR_Word hlds__make_hlds__add_solver__Var_107;
    MR_Word hlds__make_hlds__add_solver__Var_36;
    MR_Word hlds__make_hlds__add_solver__Var_40;
    MR_Word hlds__make_hlds__add_solver__Var_44;
    MR_Word hlds__make_hlds__add_solver__Var_48;

    {
      hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_solver__ItemMercuryStatus_14, &hlds__make_hlds__add_solver__PredStatus_16);
    }
    hlds__make_hlds__add_solver__MaybeItemMercuryStatus_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    hlds__make_hlds__add_solver__NoConstraints_19 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[3];
    hlds__make_hlds__add_solver__TypeInfo_114_114 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[0];
    {
      hlds__make_hlds__add_solver__Var_55 = mercury__map__init_0_f_0(hlds__make_hlds__add_solver__TypeInfo_114_114, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
    {
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_solver__Var_55, hlds__make_hlds__add_solver__TypeParams_10, &hlds__make_hlds__add_solver__Args_20);
    }
    {
      hlds__make_hlds__add_solver__SolverType_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_21, 0) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_9));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_21, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Args_20));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_solver__Arity_22 = mercury__list__length_1_f_0(hlds__make_hlds__add_solver__TypeInfo_114_114, hlds__make_hlds__add_solver__TypeParams_10);
    }
    hlds__make_hlds__add_solver__RepnType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_12, (MR_Integer) 0)));
    hlds__make_hlds__add_solver__GroundInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_12, (MR_Integer) 1)));
    hlds__make_hlds__add_solver__AnyInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_12, (MR_Integer) 2)));
    hlds__make_hlds__add_solver__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_12, (MR_Integer) 3)));
    {
      hlds__make_hlds__add_solver__InAnyMode_26 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_24);
    }
    {
      hlds__make_hlds__add_solver__InGroundMode_27 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_25);
    }
    {
      hlds__make_hlds__add_solver__OutAnyMode_28 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_24);
    }
    {
      hlds__make_hlds__add_solver__OutGroundMode_29 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_25);
    }
    {
      hlds__make_hlds__add_solver__InstVarSet_30 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
    hlds__make_hlds__add_solver__ExistQTVars_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_solver__NoMarkers_32);
    }
    {
      hlds__make_hlds__add_solver__ToGroundRepnSymName_33 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_9, hlds__make_hlds__add_solver__Arity_22);
    }
    {
      hlds__make_hlds__add_solver__Var_58 = parse_tree__prog_mode__in_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_solver__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_57, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_21));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_57, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_58));
    }
    {
      hlds__make_hlds__add_solver__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_60, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_60, 1) = ((MR_Box) (hlds__make_hlds__add_solver__OutGroundMode_29));
    }
    {
      hlds__make_hlds__add_solver__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_59, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Var_60));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_solver__ToGroundRepnArgTypesModes_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgTypesModes_34, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Var_57));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgTypesModes_34, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_59));
    }
    {
      hlds__make_hlds__add_solver__ToGroundOrigin_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_35, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_35, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_22));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_35, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    hlds__make_hlds__add_solver__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_solver_scalar_common_2[0]);
    {
      hlds__make_hlds__add_pred__module_add_pred_or_func_21_p_0(hlds__make_hlds__add_solver__ToGroundOrigin_35, hlds__make_hlds__add_solver__Context_13, (MR_Integer) -1, hlds__make_hlds__add_solver__MaybeItemMercuryStatus_18, hlds__make_hlds__add_solver__PredStatus_16, hlds__make_hlds__add_solver__NeedQual_15, (MR_Integer) 1, hlds__make_hlds__add_solver__ToGroundRepnSymName_33, hlds__make_hlds__add_solver__TVarSet_11, hlds__make_hlds__add_solver__InstVarSet_30, hlds__make_hlds__add_solver__ExistQTVars_31, hlds__make_hlds__add_solver__ToGroundRepnArgTypesModes_34, hlds__make_hlds__add_solver__NoConstraints_19, hlds__make_hlds__add_solver__Var_64, (MR_Integer) 2, hlds__make_hlds__add_solver__NoMarkers_32, &hlds__make_hlds__add_solver__Var_36, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_49, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_66_66, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_51, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_67_67);
    }
    {
      hlds__make_hlds__add_solver__ToAnyRepnSymName_37 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_9, hlds__make_hlds__add_solver__Arity_22);
    }
    {
      hlds__make_hlds__add_solver__Var_70 = parse_tree__prog_mode__in_any_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_solver__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_69, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_21));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_69, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_70));
    }
    {
      hlds__make_hlds__add_solver__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_72, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_72, 1) = ((MR_Box) (hlds__make_hlds__add_solver__OutAnyMode_28));
    }
    {
      hlds__make_hlds__add_solver__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_71, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Var_72));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_solver__ToAnyRepnArgTypesModes_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgTypesModes_38, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Var_69));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgTypesModes_38, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_71));
    }
    {
      hlds__make_hlds__add_solver__ToAnyOrigin_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_39, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_39, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_22));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_39, 3) = ((MR_Box) ((MR_Integer) 1));
    }
    {
      hlds__make_hlds__add_pred__module_add_pred_or_func_21_p_0(hlds__make_hlds__add_solver__ToAnyOrigin_39, hlds__make_hlds__add_solver__Context_13, (MR_Integer) -1, hlds__make_hlds__add_solver__MaybeItemMercuryStatus_18, hlds__make_hlds__add_solver__PredStatus_16, hlds__make_hlds__add_solver__NeedQual_15, (MR_Integer) 1, hlds__make_hlds__add_solver__ToAnyRepnSymName_37, hlds__make_hlds__add_solver__TVarSet_11, hlds__make_hlds__add_solver__InstVarSet_30, hlds__make_hlds__add_solver__ExistQTVars_31, hlds__make_hlds__add_solver__ToAnyRepnArgTypesModes_38, hlds__make_hlds__add_solver__NoConstraints_19, hlds__make_hlds__add_solver__Var_64, (MR_Integer) 2, hlds__make_hlds__add_solver__NoMarkers_32, &hlds__make_hlds__add_solver__Var_40, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_66_66, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_78_78, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_67_67, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_79_79);
    }
    {
      hlds__make_hlds__add_solver__FromGroundRepnSymName_41 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_9, hlds__make_hlds__add_solver__Arity_22);
    }
    {
      hlds__make_hlds__add_solver__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_81, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_81, 1) = ((MR_Box) (hlds__make_hlds__add_solver__InGroundMode_27));
    }
    {
      hlds__make_hlds__add_solver__Var_84 = parse_tree__prog_mode__out_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_solver__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_83, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_21));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_83, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_84));
    }
    {
      hlds__make_hlds__add_solver__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_82, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Var_83));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_solver__FromGroundRepnArgTypesModes_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgTypesModes_42, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Var_81));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgTypesModes_42, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_82));
    }
    {
      hlds__make_hlds__add_solver__FromGroundOrigin_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_43, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_43, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_22));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_43, 3) = ((MR_Box) ((MR_Integer) 2));
    }
    {
      hlds__make_hlds__add_pred__module_add_pred_or_func_21_p_0(hlds__make_hlds__add_solver__FromGroundOrigin_43, hlds__make_hlds__add_solver__Context_13, (MR_Integer) -1, hlds__make_hlds__add_solver__MaybeItemMercuryStatus_18, hlds__make_hlds__add_solver__PredStatus_16, hlds__make_hlds__add_solver__NeedQual_15, (MR_Integer) 1, hlds__make_hlds__add_solver__FromGroundRepnSymName_41, hlds__make_hlds__add_solver__TVarSet_11, hlds__make_hlds__add_solver__InstVarSet_30, hlds__make_hlds__add_solver__ExistQTVars_31, hlds__make_hlds__add_solver__FromGroundRepnArgTypesModes_42, hlds__make_hlds__add_solver__NoConstraints_19, hlds__make_hlds__add_solver__Var_64, (MR_Integer) 2, hlds__make_hlds__add_solver__NoMarkers_32, &hlds__make_hlds__add_solver__Var_44, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_78_78, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_90_90, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_79_79, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_91_91);
    }
    {
      hlds__make_hlds__add_solver__FromAnyRepnSymName_45 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_9, hlds__make_hlds__add_solver__Arity_22);
    }
    {
      hlds__make_hlds__add_solver__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_93, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_23));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_93, 1) = ((MR_Box) (hlds__make_hlds__add_solver__InAnyMode_26));
    }
    {
      hlds__make_hlds__add_solver__Var_96 = parse_tree__prog_mode__out_any_mode_0_f_0();
    }
    {
      hlds__make_hlds__add_solver__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_95, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_21));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_95, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_96));
    }
    {
      hlds__make_hlds__add_solver__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_94, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Var_95));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__Var_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_solver__FromAnyRepnArgTypesModes_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgTypesModes_46, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Var_93));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgTypesModes_46, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Var_94));
    }
    {
      hlds__make_hlds__add_solver__FromAnyOrigin_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_47, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_47, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_22));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_47, 3) = ((MR_Box) ((MR_Integer) 3));
    }
    {
      hlds__make_hlds__add_pred__module_add_pred_or_func_21_p_0(hlds__make_hlds__add_solver__FromAnyOrigin_47, hlds__make_hlds__add_solver__Context_13, (MR_Integer) -1, hlds__make_hlds__add_solver__MaybeItemMercuryStatus_18, hlds__make_hlds__add_solver__PredStatus_16, hlds__make_hlds__add_solver__NeedQual_15, (MR_Integer) 1, hlds__make_hlds__add_solver__FromAnyRepnSymName_45, hlds__make_hlds__add_solver__TVarSet_11, hlds__make_hlds__add_solver__InstVarSet_30, hlds__make_hlds__add_solver__ExistQTVars_31, hlds__make_hlds__add_solver__FromAnyRepnArgTypesModes_46, hlds__make_hlds__add_solver__NoConstraints_19, hlds__make_hlds__add_solver__Var_64, (MR_Integer) 2, hlds__make_hlds__add_solver__NoMarkers_32, &hlds__make_hlds__add_solver__Var_48, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_90_90, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_50, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_91_91, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_52);
    }
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

/* :- end_module hlds.make_hlds.add_solver. */
