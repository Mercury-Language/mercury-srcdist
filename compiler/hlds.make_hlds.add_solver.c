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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 148 "hlds.make_hlds.add_solver.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 151 "hlds.make_hlds.add_solver.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 154 "hlds.make_hlds.add_solver.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 157 "hlds.make_hlds.add_solver.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_types_solver_aux_pred_info_0_0[7];

#line 160 "hlds.make_hlds.add_solver.c"
static const MR_DuFunctorDesc hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0;

#line 163 "hlds.make_hlds.add_solver.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_stag_ordered_solver_aux_pred_info_0_0[1];

#line 166 "hlds.make_hlds.add_solver.c"
static const MR_DuPtagLayout hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_ptag_ordered_solver_aux_pred_info_0[1];

#line 169 "hlds.make_hlds.add_solver.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_name_ordered_solver_aux_pred_info_0[1];

#line 172 "hlds.make_hlds.add_solver.c"
static const MR_Integer hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__functor_number_map_solver_aux_pred_info_0[1];

#line 175 "hlds.make_hlds.add_solver.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0_10001(
#line 178 "hlds.make_hlds.add_solver.c"
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_1,
#line 180 "hlds.make_hlds.add_solver.c"
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_2);

#line 183 "hlds.make_hlds.add_solver.c"
static void MR_CALL 
hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0_10001(
#line 186 "hlds.make_hlds.add_solver.c"
  MR_Box * hlds__make_hlds__add_solver__wrapper_arg_1,
#line 188 "hlds.make_hlds.add_solver.c"
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_2,
#line 190 "hlds.make_hlds.add_solver.c"
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_3);

#line 342 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
#line 342 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 342 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 337 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
#line 337 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 337 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 332 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
#line 332 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 332 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 327 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
#line 327 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 327 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5);

#line 186 "add_solver.m"
static void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_7_p_0(
#line 186 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SolverAuxPredInfo_8,
#line 186 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_59,
#line 186 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_60,
#line 186 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_61,
#line 186 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_62,
#line 186 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_63,
#line 186 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_64);


static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__make_hlds__add_solver_scalar_common_2[1][1];


#line 218 "add_solver.m"
/* sealed */ struct hlds__make_hlds__add_solver__vector_common_type_3_0_s {
#line 218 "add_solver.m"
  const MR_Word hlds__make_hlds__add_solver__vector_common_type_3_0__vct_3_f_0;
#line 218 "add_solver.m"
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



#line 306 "hlds.make_hlds.add_solver.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 314 "hlds.make_hlds.add_solver.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__add_solver__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 322 "hlds.make_hlds.add_solver.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 330 "hlds.make_hlds.add_solver.c"
static const MR_PseudoTypeInfo hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__field_types_solver_aux_pred_info_0_0[7] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_solver__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_solver__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_solver_type_details_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_mercury_status_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0
};

#line 341 "hlds.make_hlds.add_solver.c"
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
  NULL
};

#line 356 "hlds.make_hlds.add_solver.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_stag_ordered_solver_aux_pred_info_0_0[1] = {
  &hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0
};

#line 361 "hlds.make_hlds.add_solver.c"
static const MR_DuPtagLayout hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_ptag_ordered_solver_aux_pred_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_stag_ordered_solver_aux_pred_info_0_0
  }
};

#line 370 "hlds.make_hlds.add_solver.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_name_ordered_solver_aux_pred_info_0[1] = {
  &hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__du_functor_desc_solver_aux_pred_info_0_0
};

#line 375 "hlds.make_hlds.add_solver.c"
static const MR_Integer hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__functor_number_map_solver_aux_pred_info_0[1] = {
  (MR_Integer) 0
};

#line 380 "hlds.make_hlds.add_solver.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 397 "hlds.make_hlds.add_solver.c"
static MR_bool MR_CALL 
hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0_10001(
#line 400 "hlds.make_hlds.add_solver.c"
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_1,
#line 402 "hlds.make_hlds.add_solver.c"
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_2)
#line 404 "hlds.make_hlds.add_solver.c"
{
#line 406 "hlds.make_hlds.add_solver.c"
  {
#line 408 "hlds.make_hlds.add_solver.c"
    MR_bool hlds__make_hlds__add_solver__succeeded;

#line 411 "hlds.make_hlds.add_solver.c"
    {
#line 413 "hlds.make_hlds.add_solver.c"
      hlds__make_hlds__add_solver__succeeded = hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0(((MR_Word) hlds__make_hlds__add_solver__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_solver__wrapper_arg_2));
    }
#line 416 "hlds.make_hlds.add_solver.c"
    return hlds__make_hlds__add_solver__succeeded;
#line 418 "hlds.make_hlds.add_solver.c"
  }
#line 420 "hlds.make_hlds.add_solver.c"
}

#line 423 "hlds.make_hlds.add_solver.c"
static void MR_CALL 
hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0_10001(
#line 426 "hlds.make_hlds.add_solver.c"
  MR_Box * hlds__make_hlds__add_solver__wrapper_arg_1,
#line 428 "hlds.make_hlds.add_solver.c"
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_2,
#line 430 "hlds.make_hlds.add_solver.c"
  MR_Box hlds__make_hlds__add_solver__wrapper_arg_3)
#line 432 "hlds.make_hlds.add_solver.c"
{
#line 434 "hlds.make_hlds.add_solver.c"
  {
#line 436 "hlds.make_hlds.add_solver.c"
    MR_Word hlds__make_hlds__add_solver__conv0_HeadVar__1_1;

#line 439 "hlds.make_hlds.add_solver.c"
    {
#line 441 "hlds.make_hlds.add_solver.c"
      hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0(&hlds__make_hlds__add_solver__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_solver__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_solver__wrapper_arg_3));
    }
#line 444 "hlds.make_hlds.add_solver.c"
    *hlds__make_hlds__add_solver__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_solver__conv0_HeadVar__1_1));
#line 446 "hlds.make_hlds.add_solver.c"
  }
#line 448 "hlds.make_hlds.add_solver.c"
}

#line 22 "add_solver.m"
void MR_CALL 
hlds__make_hlds__add_solver____Compare____solver_aux_pred_info_0_0(
#line 22 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__HeadVar__1_1,
#line 22 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__HeadVar__2_2,
#line 22 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__HeadVar__3_3)
#line 22 "add_solver.m"
{
#line 22 "add_solver.m"
  {
#line 22 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 22 "add_solver.m"
    MR_Integer hlds__make_hlds__add_solver__CastX_24 = (MR_Integer) hlds__make_hlds__add_solver__HeadVar__2_2;
#line 22 "add_solver.m"
    MR_Integer hlds__make_hlds__add_solver__CastY_25 = (MR_Integer) hlds__make_hlds__add_solver__HeadVar__3_3;

#line 22 "add_solver.m"
    hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__CastX_24 == hlds__make_hlds__add_solver__CastY_25);
#line 22 "add_solver.m"
    if (hlds__make_hlds__add_solver__succeeded)
#line 475 "hlds.make_hlds.add_solver.c"
      *hlds__make_hlds__add_solver__HeadVar__1_1 = (MR_Integer) 0;
#line 22 "add_solver.m"
    else
#line 22 "add_solver.m"
      {
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 0)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 1)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 2)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 3)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 4)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 5)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 6)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 0)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 1)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 2)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 3)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 4)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 5)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, (MR_Integer) 6)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_18_18;

#line 22 "add_solver.m"
        {
#line 22 "add_solver.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__make_hlds__add_solver__V_18_18, hlds__make_hlds__add_solver__V_4_4, hlds__make_hlds__add_solver__V_11_11);
        }
#line 517 "hlds.make_hlds.add_solver.c"
        hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__V_18_18 == (MR_Integer) 0);
#line 22 "add_solver.m"
        hlds__make_hlds__add_solver__succeeded = !(hlds__make_hlds__add_solver__succeeded);
#line 22 "add_solver.m"
        if (hlds__make_hlds__add_solver__succeeded)
#line 22 "add_solver.m"
          *hlds__make_hlds__add_solver__HeadVar__1_1 = hlds__make_hlds__add_solver__V_18_18;
#line 22 "add_solver.m"
        else
#line 22 "add_solver.m"
          {
#line 22 "add_solver.m"
            MR_Word hlds__make_hlds__add_solver__V_19_19;

#line 22 "add_solver.m"
            {
#line 22 "add_solver.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[1], &hlds__make_hlds__add_solver__V_19_19, ((MR_Box) (hlds__make_hlds__add_solver__V_5_5)), ((MR_Box) (hlds__make_hlds__add_solver__V_12_12)));
            }
#line 537 "hlds.make_hlds.add_solver.c"
            hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__V_19_19 == (MR_Integer) 0);
#line 22 "add_solver.m"
            hlds__make_hlds__add_solver__succeeded = !(hlds__make_hlds__add_solver__succeeded);
#line 22 "add_solver.m"
            if (hlds__make_hlds__add_solver__succeeded)
#line 22 "add_solver.m"
              *hlds__make_hlds__add_solver__HeadVar__1_1 = hlds__make_hlds__add_solver__V_19_19;
#line 22 "add_solver.m"
            else
#line 22 "add_solver.m"
              {
#line 22 "add_solver.m"
                MR_Word hlds__make_hlds__add_solver__V_20_20;

#line 22 "add_solver.m"
                {
#line 22 "add_solver.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[2], &hlds__make_hlds__add_solver__V_20_20, ((MR_Box) (hlds__make_hlds__add_solver__V_6_6)), ((MR_Box) (hlds__make_hlds__add_solver__V_13_13)));
                }
#line 557 "hlds.make_hlds.add_solver.c"
                hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__V_20_20 == (MR_Integer) 0);
#line 22 "add_solver.m"
                hlds__make_hlds__add_solver__succeeded = !(hlds__make_hlds__add_solver__succeeded);
#line 22 "add_solver.m"
                if (hlds__make_hlds__add_solver__succeeded)
#line 22 "add_solver.m"
                  *hlds__make_hlds__add_solver__HeadVar__1_1 = hlds__make_hlds__add_solver__V_20_20;
#line 22 "add_solver.m"
                else
#line 22 "add_solver.m"
                  {
#line 22 "add_solver.m"
                    MR_Word hlds__make_hlds__add_solver__V_21_21;

#line 22 "add_solver.m"
                    {
#line 22 "add_solver.m"
                      parse_tree__prog_data____Compare____solver_type_details_0_0(&hlds__make_hlds__add_solver__V_21_21, hlds__make_hlds__add_solver__V_7_7, hlds__make_hlds__add_solver__V_14_14);
                    }
#line 577 "hlds.make_hlds.add_solver.c"
                    hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__V_21_21 == (MR_Integer) 0);
#line 22 "add_solver.m"
                    hlds__make_hlds__add_solver__succeeded = !(hlds__make_hlds__add_solver__succeeded);
#line 22 "add_solver.m"
                    if (hlds__make_hlds__add_solver__succeeded)
#line 22 "add_solver.m"
                      *hlds__make_hlds__add_solver__HeadVar__1_1 = hlds__make_hlds__add_solver__V_21_21;
#line 22 "add_solver.m"
                    else
#line 22 "add_solver.m"
                      {
#line 22 "add_solver.m"
                        MR_Word hlds__make_hlds__add_solver__V_22_22;

#line 22 "add_solver.m"
                        {
#line 22 "add_solver.m"
                          mercury__term____Compare____context_0_0(&hlds__make_hlds__add_solver__V_22_22, hlds__make_hlds__add_solver__V_8_8, hlds__make_hlds__add_solver__V_15_15);
                        }
#line 597 "hlds.make_hlds.add_solver.c"
                        hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__V_22_22 == (MR_Integer) 0);
#line 22 "add_solver.m"
                        hlds__make_hlds__add_solver__succeeded = !(hlds__make_hlds__add_solver__succeeded);
#line 22 "add_solver.m"
                        if (hlds__make_hlds__add_solver__succeeded)
#line 22 "add_solver.m"
                          *hlds__make_hlds__add_solver__HeadVar__1_1 = hlds__make_hlds__add_solver__V_22_22;
#line 22 "add_solver.m"
                        else
#line 22 "add_solver.m"
                          {
#line 22 "add_solver.m"
                            MR_Word hlds__make_hlds__add_solver__V_23_23;

#line 22 "add_solver.m"
                            {
#line 22 "add_solver.m"
                              hlds__status____Compare____item_mercury_status_0_0(&hlds__make_hlds__add_solver__V_23_23, hlds__make_hlds__add_solver__V_9_9, hlds__make_hlds__add_solver__V_16_16);
                            }
#line 617 "hlds.make_hlds.add_solver.c"
                            hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__V_23_23 == (MR_Integer) 0);
#line 22 "add_solver.m"
                            hlds__make_hlds__add_solver__succeeded = !(hlds__make_hlds__add_solver__succeeded);
#line 22 "add_solver.m"
                            if (hlds__make_hlds__add_solver__succeeded)
#line 22 "add_solver.m"
                              *hlds__make_hlds__add_solver__HeadVar__1_1 = hlds__make_hlds__add_solver__V_23_23;
#line 22 "add_solver.m"
                            else
#line 22 "add_solver.m"
                              {
#line 22 "add_solver.m"
                                MR_Integer hlds__make_hlds__add_solver__V_33_33 = (MR_Integer) hlds__make_hlds__add_solver__V_10_10;
#line 22 "add_solver.m"
                                MR_Integer hlds__make_hlds__add_solver__V_34_34 = (MR_Integer) hlds__make_hlds__add_solver__V_17_17;

#line 22 "add_solver.m"
                                {
#line 22 "add_solver.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__add_solver__HeadVar__1_1, hlds__make_hlds__add_solver__V_33_33, hlds__make_hlds__add_solver__V_34_34);
                                }
#line 22 "add_solver.m"
                              }
#line 22 "add_solver.m"
                          }
#line 22 "add_solver.m"
                      }
#line 22 "add_solver.m"
                  }
#line 22 "add_solver.m"
              }
#line 22 "add_solver.m"
          }
#line 22 "add_solver.m"
      }
#line 22 "add_solver.m"
  }
#line 22 "add_solver.m"
}

#line 22 "add_solver.m"
MR_bool MR_CALL 
hlds__make_hlds__add_solver____Unify____solver_aux_pred_info_0_0(
#line 22 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__HeadVar__1_1,
#line 22 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__HeadVar__2_2)
#line 22 "add_solver.m"
{
#line 22 "add_solver.m"
  {
#line 22 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 22 "add_solver.m"
    MR_Integer hlds__make_hlds__add_solver__CastX_17 = (MR_Integer) hlds__make_hlds__add_solver__HeadVar__1_1;
#line 22 "add_solver.m"
    MR_Integer hlds__make_hlds__add_solver__CastY_18 = (MR_Integer) hlds__make_hlds__add_solver__HeadVar__2_2;

#line 22 "add_solver.m"
    hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__CastX_17 == hlds__make_hlds__add_solver__CastY_18);
#line 22 "add_solver.m"
    if (hlds__make_hlds__add_solver__succeeded)
#line 22 "add_solver.m"
      hlds__make_hlds__add_solver__succeeded = MR_TRUE;
#line 22 "add_solver.m"
    else
#line 22 "add_solver.m"
      {
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__TypeInfo_20_20;
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__TypeInfo_21_21;
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 0)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 1)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 2)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 3)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 4)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 5)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__1_1, (MR_Integer) 6)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 0)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 1)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 2)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 3)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 4)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 5)));
#line 22 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__2_2, (MR_Integer) 6)));

#line 719 "hlds.make_hlds.add_solver.c"
        {
#line 721 "hlds.make_hlds.add_solver.c"
          hlds__make_hlds__add_solver__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_solver__V_3_3, hlds__make_hlds__add_solver__V_10_10);
        }
#line 22 "add_solver.m"
        if (hlds__make_hlds__add_solver__succeeded)
#line 22 "add_solver.m"
          {
#line 728 "hlds.make_hlds.add_solver.c"
            hlds__make_hlds__add_solver__TypeInfo_20_20 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[1];
#line 730 "hlds.make_hlds.add_solver.c"
            {
#line 732 "hlds.make_hlds.add_solver.c"
              hlds__make_hlds__add_solver__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_solver__TypeInfo_20_20, ((MR_Box) (hlds__make_hlds__add_solver__V_4_4)), ((MR_Box) (hlds__make_hlds__add_solver__V_11_11)));
            }
#line 22 "add_solver.m"
            if (hlds__make_hlds__add_solver__succeeded)
#line 22 "add_solver.m"
              {
#line 739 "hlds.make_hlds.add_solver.c"
                hlds__make_hlds__add_solver__TypeInfo_21_21 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[2];
#line 741 "hlds.make_hlds.add_solver.c"
                {
#line 743 "hlds.make_hlds.add_solver.c"
                  hlds__make_hlds__add_solver__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_solver__TypeInfo_21_21, ((MR_Box) (hlds__make_hlds__add_solver__V_5_5)), ((MR_Box) (hlds__make_hlds__add_solver__V_12_12)));
                }
#line 22 "add_solver.m"
                if (hlds__make_hlds__add_solver__succeeded)
#line 22 "add_solver.m"
                  {
#line 750 "hlds.make_hlds.add_solver.c"
                    {
#line 752 "hlds.make_hlds.add_solver.c"
                      hlds__make_hlds__add_solver__succeeded = parse_tree__prog_data____Unify____solver_type_details_0_0(hlds__make_hlds__add_solver__V_6_6, hlds__make_hlds__add_solver__V_13_13);
                    }
#line 22 "add_solver.m"
                    if (hlds__make_hlds__add_solver__succeeded)
#line 22 "add_solver.m"
                      {
#line 759 "hlds.make_hlds.add_solver.c"
                        {
#line 761 "hlds.make_hlds.add_solver.c"
                          hlds__make_hlds__add_solver__succeeded = mercury__term____Unify____context_0_0(hlds__make_hlds__add_solver__V_7_7, hlds__make_hlds__add_solver__V_14_14);
                        }
#line 22 "add_solver.m"
                        if (hlds__make_hlds__add_solver__succeeded)
#line 22 "add_solver.m"
                          {
#line 768 "hlds.make_hlds.add_solver.c"
                            {
#line 770 "hlds.make_hlds.add_solver.c"
                              hlds__make_hlds__add_solver__succeeded = hlds__status____Unify____item_mercury_status_0_0(hlds__make_hlds__add_solver__V_8_8, hlds__make_hlds__add_solver__V_15_15);
                            }
#line 22 "add_solver.m"
                            if (hlds__make_hlds__add_solver__succeeded)
#line 775 "hlds.make_hlds.add_solver.c"
                              hlds__make_hlds__add_solver__succeeded = (hlds__make_hlds__add_solver__V_9_9 == hlds__make_hlds__add_solver__V_16_16);
#line 22 "add_solver.m"
                          }
#line 22 "add_solver.m"
                      }
#line 22 "add_solver.m"
                  }
#line 22 "add_solver.m"
              }
#line 22 "add_solver.m"
          }
#line 22 "add_solver.m"
      }
#line 22 "add_solver.m"
    return hlds__make_hlds__add_solver__succeeded;
#line 22 "add_solver.m"
  }
#line 22 "add_solver.m"
}

#line 342 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(
#line 342 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 342 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 342 "add_solver.m"
{
#line 344 "add_solver.m"
  {
#line 344 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 344 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 349 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 351 "add_solver.m"
      {
#line 351 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 352 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 352 "add_solver.m"
        }
#line 351 "add_solver.m"
      }
#line 349 "add_solver.m"
    else
#line 349 "add_solver.m"
      {
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation to any ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 350 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 350 "add_solver.m"
        }
#line 349 "add_solver.m"
      }
#line 344 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 344 "add_solver.m"
  }
#line 342 "add_solver.m"
}

#line 337 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(
#line 337 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 337 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 337 "add_solver.m"
{
#line 339 "add_solver.m"
  {
#line 339 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 339 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 349 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 351 "add_solver.m"
      {
#line 351 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 352 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 352 "add_solver.m"
        }
#line 351 "add_solver.m"
      }
#line 349 "add_solver.m"
    else
#line 349 "add_solver.m"
      {
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation to ground ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 350 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 350 "add_solver.m"
        }
#line 349 "add_solver.m"
      }
#line 339 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 339 "add_solver.m"
  }
#line 337 "add_solver.m"
}

#line 332 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(
#line 332 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 332 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 332 "add_solver.m"
{
#line 334 "add_solver.m"
  {
#line 334 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 334 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 349 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 351 "add_solver.m"
      {
#line 351 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 352 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 352 "add_solver.m"
        }
#line 351 "add_solver.m"
      }
#line 349 "add_solver.m"
    else
#line 349 "add_solver.m"
      {
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation of any ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 350 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 350 "add_solver.m"
        }
#line 349 "add_solver.m"
      }
#line 334 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 334 "add_solver.m"
  }
#line 332 "add_solver.m"
}

#line 327 "add_solver.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(
#line 327 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SymName_4,
#line 327 "add_solver.m"
  MR_Integer hlds__make_hlds__add_solver__Arity_5)
#line 327 "add_solver.m"
{
#line 329 "add_solver.m"
  {
#line 329 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 329 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__HeadVar__3_3;

#line 349 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__SymName_4)) == (MR_mktag((MR_Integer) 1))))
#line 351 "add_solver.m"
      {
#line 351 "add_solver.m"
        MR_Word hlds__make_hlds__add_solver__ModuleNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 1)));
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_19_19;
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_20_20;
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_21_21;
#line 351 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_23_23;

#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_23_23 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_23_23);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_20_20 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_17, hlds__make_hlds__add_solver__V_21_21);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", hlds__make_hlds__add_solver__V_20_20);
        }
#line 352 "add_solver.m"
        {
#line 352 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__ModuleNames_16));
#line 352 "add_solver.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_19_19));
#line 352 "add_solver.m"
        }
#line 351 "add_solver.m"
      }
#line 349 "add_solver.m"
    else
#line 349 "add_solver.m"
      {
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SymName_4, (MR_Integer) 0)));
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_10_10;
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_11_11;
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_12_12;
#line 349 "add_solver.m"
        MR_String hlds__make_hlds__add_solver__V_14_14;

#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__make_hlds__add_solver__Arity_5);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "/", hlds__make_hlds__add_solver__V_14_14);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_11_11 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_solver__Name_8, hlds__make_hlds__add_solver__V_12_12);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "representation of ground ", hlds__make_hlds__add_solver__V_11_11);
        }
#line 350 "add_solver.m"
        {
#line 350 "add_solver.m"
          hlds__make_hlds__add_solver__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 350 "add_solver.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_10_10));
#line 350 "add_solver.m"
        }
#line 349 "add_solver.m"
      }
#line 329 "add_solver.m"
    return hlds__make_hlds__add_solver__HeadVar__3_3;
#line 329 "add_solver.m"
  }
#line 327 "add_solver.m"
}

#line 186 "add_solver.m"
static void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_7_p_0(
#line 186 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SolverAuxPredInfo_8,
#line 186 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_59,
#line 186 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_60,
#line 186 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_61,
#line 186 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_62,
#line 186 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_63,
#line 186 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_64)
#line 186 "add_solver.m"
{
#line 191 "add_solver.m"
  {
#line 191 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TypeCtorInfo_131_131;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TypeSymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 0)));
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 1)));
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__SolverTypeDetails_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 3)));
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 4)));
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ItemMercuryStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 5)));
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__PredStatus_19;
#line 191 "add_solver.m"
    MR_Integer hlds__make_hlds__add_solver__Arity_20;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__AnyInst_21;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__GroundInst_22;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InAnyMode_23;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InGroundMode_24;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutAnyMode_25;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutGroundMode_26;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ProgVarSet0_27;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__X_28;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ProgVarSet1_29;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Y_30;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ProgVarSet_31;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InstVarSet_32;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Globals_33;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Target_34;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Lang_35;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Attrs_37;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Impl_38;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnSymName_39;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XTGPragmaVar_40;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YTGPragmaVar_41;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnArgs_42;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnSymName_44;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XTAPragmaVar_45;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YTAPragmaVar_46;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnArgs_47;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnSymName_49;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XFGPragmaVar_50;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YFGPragmaVar_51;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnArgs_52;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnSymName_54;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__XFAPragmaVar_55;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__YFAPragmaVar_56;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnArgs_57;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_65_65;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_67_67;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_69_69;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_71_71;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_79_79;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_83_83;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_87_87;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_88_88;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_90_90;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_94_94;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_98_98;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_99_99;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_103_103;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_105_105;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_109_109;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_110_110;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_114_114;
#line 191 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_116_116;
#line 192 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver___TVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 2)));
#line 192 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver___NeedQual_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 6)));
#line 198 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_122_122;
#line 198 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_123_123;
#line 198 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_125_125;

#line 194 "add_solver.m"
    {
#line 194 "add_solver.m"
      hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_solver__ItemMercuryStatus_17, &hlds__make_hlds__add_solver__PredStatus_19);
    }
#line 196 "add_solver.m"
    {
#line 196 "add_solver.m"
      hlds__make_hlds__add_solver__Arity_20 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[0], hlds__make_hlds__add_solver__TypeParams_13);
    }
#line 198 "add_solver.m"
    hlds__make_hlds__add_solver__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 0)));
#line 198 "add_solver.m"
    hlds__make_hlds__add_solver__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 1)));
#line 198 "add_solver.m"
    hlds__make_hlds__add_solver__GroundInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 2)));
#line 198 "add_solver.m"
    hlds__make_hlds__add_solver__AnyInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 3)));
#line 198 "add_solver.m"
    hlds__make_hlds__add_solver__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_15, (MR_Integer) 4)));
#line 201 "add_solver.m"
    {
#line 201 "add_solver.m"
      hlds__make_hlds__add_solver__InAnyMode_23 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_21);
    }
#line 202 "add_solver.m"
    {
#line 202 "add_solver.m"
      hlds__make_hlds__add_solver__InGroundMode_24 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_22);
    }
#line 204 "add_solver.m"
    {
#line 204 "add_solver.m"
      hlds__make_hlds__add_solver__OutAnyMode_25 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_21);
    }
#line 205 "add_solver.m"
    {
#line 205 "add_solver.m"
      hlds__make_hlds__add_solver__OutGroundMode_26 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_22);
    }
#line 1464 "hlds.make_hlds.add_solver.c"
    hlds__make_hlds__add_solver__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 207 "add_solver.m"
    {
#line 207 "add_solver.m"
      hlds__make_hlds__add_solver__ProgVarSet0_27 = mercury__varset__init_0_f_0(hlds__make_hlds__add_solver__TypeCtorInfo_131_131);
    }
#line 208 "add_solver.m"
    {
#line 208 "add_solver.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__add_solver__TypeCtorInfo_131_131, &hlds__make_hlds__add_solver__X_28, hlds__make_hlds__add_solver__ProgVarSet0_27, &hlds__make_hlds__add_solver__ProgVarSet1_29);
    }
#line 209 "add_solver.m"
    {
#line 209 "add_solver.m"
      mercury__varset__new_var_3_p_0(hlds__make_hlds__add_solver__TypeCtorInfo_131_131, &hlds__make_hlds__add_solver__Y_30, hlds__make_hlds__add_solver__ProgVarSet1_29, &hlds__make_hlds__add_solver__ProgVarSet_31);
    }
#line 211 "add_solver.m"
    {
#line 211 "add_solver.m"
      hlds__make_hlds__add_solver__InstVarSet_32 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 213 "add_solver.m"
    {
#line 213 "add_solver.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_59, &hlds__make_hlds__add_solver__Globals_33);
    }
#line 214 "add_solver.m"
    {
#line 214 "add_solver.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_solver__Globals_33, &hlds__make_hlds__add_solver__Target_34);
    }
#line 218 "add_solver.m"
    hlds__make_hlds__add_solver__Lang_35 = ((&hlds__make_hlds__add_solver_vector_common_3[0 + hlds__make_hlds__add_solver__Target_34]))->hlds__make_hlds__add_solver__vector_common_type_3_0__vct_3_f_0;
#line 229 "add_solver.m"
    {
#line 229 "add_solver.m"
      hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_65_65 = parse_tree__prog_data__default_attributes_1_f_0(hlds__make_hlds__add_solver__Lang_35);
    }
#line 232 "add_solver.m"
    {
#line 232 "add_solver.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_65_65, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_67_67);
    }
#line 233 "add_solver.m"
    {
#line 233 "add_solver.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_67_67, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_69_69);
    }
#line 234 "add_solver.m"
    {
#line 234 "add_solver.m"
      parse_tree__prog_data__set_terminates_3_p_0((MR_Integer) 0, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_69_69, &hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_71_71);
    }
#line 235 "add_solver.m"
    {
#line 235 "add_solver.m"
      parse_tree__prog_data__set_may_modify_trail_3_p_0((MR_Integer) 1, hlds__make_hlds__add_solver__STATE_VARIABLE_Attrs_71_71, &hlds__make_hlds__add_solver__Attrs_37);
    }
#line 245 "add_solver.m"
#line 245 "add_solver.m"
    switch (hlds__make_hlds__add_solver__Lang_35) {
#line 245 "add_solver.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 245 "add_solver.m"
      case (MR_Integer) 0:
#line 245 "add_solver.m"
      case (MR_Integer) 1:
#line 245 "add_solver.m"
      case (MR_Integer) 2:
#line 243 "add_solver.m"
        {
#line 243 "add_solver.m"
          MR_Word hlds__make_hlds__add_solver__V_77_77;

#line 244 "add_solver.m"
          {
#line 244 "add_solver.m"
            hlds__make_hlds__add_solver__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 244 "add_solver.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Context_16));
#line 244 "add_solver.m"
          }
#line 244 "add_solver.m"
          {
#line 244 "add_solver.m"
            hlds__make_hlds__add_solver__Impl_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "add_solver.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_38, 0) = ((MR_Box) ((MR_String) "Y = X;"));
#line 244 "add_solver.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_38, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_77_77));
#line 244 "add_solver.m"
          }
#line 243 "add_solver.m"
        }
#line 245 "add_solver.m"
        break;
#line 245 "add_solver.m"
      case (MR_Integer) 3:
#line 246 "add_solver.m"
        {
#line 246 "add_solver.m"
          MR_Word hlds__make_hlds__add_solver__V_75_75;

#line 247 "add_solver.m"
          {
#line 247 "add_solver.m"
            hlds__make_hlds__add_solver__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 247 "add_solver.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Context_16));
#line 247 "add_solver.m"
          }
#line 247 "add_solver.m"
          {
#line 247 "add_solver.m"
            hlds__make_hlds__add_solver__Impl_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 247 "add_solver.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_38, 0) = ((MR_Box) ((MR_String) "Y = X"));
#line 247 "add_solver.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__Impl_38, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_75_75));
#line 247 "add_solver.m"
          }
#line 246 "add_solver.m"
        }
#line 245 "add_solver.m"
        break;
#line 245 "add_solver.m"
    }
#line 252 "add_solver.m"
    {
#line 252 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnSymName_39 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
#line 253 "add_solver.m"
    {
#line 253 "add_solver.m"
      hlds__make_hlds__add_solver__V_79_79 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 253 "add_solver.m"
    {
#line 253 "add_solver.m"
      hlds__make_hlds__add_solver__XTGPragmaVar_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 253 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_40, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
#line 253 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_40, 1) = ((MR_Box) ((MR_String) "X"));
#line 253 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_40, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_79_79));
#line 253 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTGPragmaVar_40, 3) = ((MR_Box) ((MR_Integer) 0));
#line 253 "add_solver.m"
    }
#line 254 "add_solver.m"
    {
#line 254 "add_solver.m"
      hlds__make_hlds__add_solver__YTGPragmaVar_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 254 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_41, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
#line 254 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_41, 1) = ((MR_Box) ((MR_String) "Y"));
#line 254 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_41, 2) = ((MR_Box) (hlds__make_hlds__add_solver__OutGroundMode_26));
#line 254 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTGPragmaVar_41, 3) = ((MR_Box) ((MR_Integer) 0));
#line 254 "add_solver.m"
    }
#line 255 "add_solver.m"
    {
#line 255 "add_solver.m"
      hlds__make_hlds__add_solver__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YTGPragmaVar_41));
#line 255 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "add_solver.m"
    }
#line 255 "add_solver.m"
    {
#line 255 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnArgs_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgs_42, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XTGPragmaVar_40));
#line 255 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgs_42, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_83_83));
#line 255 "add_solver.m"
    }
#line 256 "add_solver.m"
    {
#line 256 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_37));
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToGroundRepnSymName_39));
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 2) = ((MR_Box) ((MR_Integer) 1));
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 3) = ((MR_Box) (hlds__make_hlds__add_solver__ToGroundRepnArgs_42));
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
#line 256 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_38));
#line 256 "add_solver.m"
    }
#line 265 "add_solver.m"
    {
#line 265 "add_solver.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__ToGroundRepnFPInfo_43, hlds__make_hlds__add_solver__PredStatus_19, hlds__make_hlds__add_solver__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_59, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_63, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_88_88);
    }
#line 270 "add_solver.m"
    {
#line 270 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnSymName_44 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
#line 271 "add_solver.m"
    {
#line 271 "add_solver.m"
      hlds__make_hlds__add_solver__V_90_90 = parse_tree__prog_mode__in_any_mode_0_f_0();
    }
#line 271 "add_solver.m"
    {
#line 271 "add_solver.m"
      hlds__make_hlds__add_solver__XTAPragmaVar_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 271 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_45, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
#line 271 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_45, 1) = ((MR_Box) ((MR_String) "X"));
#line 271 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_45, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_90_90));
#line 271 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XTAPragmaVar_45, 3) = ((MR_Box) ((MR_Integer) 0));
#line 271 "add_solver.m"
    }
#line 272 "add_solver.m"
    {
#line 272 "add_solver.m"
      hlds__make_hlds__add_solver__YTAPragmaVar_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 272 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_46, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
#line 272 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_46, 1) = ((MR_Box) ((MR_String) "Y"));
#line 272 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_46, 2) = ((MR_Box) (hlds__make_hlds__add_solver__OutAnyMode_25));
#line 272 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YTAPragmaVar_46, 3) = ((MR_Box) ((MR_Integer) 0));
#line 272 "add_solver.m"
    }
#line 273 "add_solver.m"
    {
#line 273 "add_solver.m"
      hlds__make_hlds__add_solver__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YTAPragmaVar_46));
#line 273 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "add_solver.m"
    }
#line 273 "add_solver.m"
    {
#line 273 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnArgs_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgs_47, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XTAPragmaVar_45));
#line 273 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgs_47, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_94_94));
#line 273 "add_solver.m"
    }
#line 274 "add_solver.m"
    {
#line 274 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_37));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 1) = ((MR_Box) (hlds__make_hlds__add_solver__ToAnyRepnSymName_44));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 2) = ((MR_Box) ((MR_Integer) 1));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 3) = ((MR_Box) (hlds__make_hlds__add_solver__ToAnyRepnArgs_47));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
#line 274 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_38));
#line 274 "add_solver.m"
    }
#line 283 "add_solver.m"
    {
#line 283 "add_solver.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__ToAnyRepnFPInfo_48, hlds__make_hlds__add_solver__PredStatus_19, hlds__make_hlds__add_solver__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_87_87, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_98_98, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_88_88, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_99_99);
    }
#line 288 "add_solver.m"
    {
#line 288 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnSymName_49 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
#line 289 "add_solver.m"
    {
#line 289 "add_solver.m"
      hlds__make_hlds__add_solver__XFGPragmaVar_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 289 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_50, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
#line 289 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_50, 1) = ((MR_Box) ((MR_String) "X"));
#line 289 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_50, 2) = ((MR_Box) (hlds__make_hlds__add_solver__InGroundMode_24));
#line 289 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFGPragmaVar_50, 3) = ((MR_Box) ((MR_Integer) 0));
#line 289 "add_solver.m"
    }
#line 290 "add_solver.m"
    {
#line 290 "add_solver.m"
      hlds__make_hlds__add_solver__V_103_103 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 290 "add_solver.m"
    {
#line 290 "add_solver.m"
      hlds__make_hlds__add_solver__YFGPragmaVar_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 290 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_51, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
#line 290 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_51, 1) = ((MR_Box) ((MR_String) "Y"));
#line 290 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_51, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_103_103));
#line 290 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFGPragmaVar_51, 3) = ((MR_Box) ((MR_Integer) 0));
#line 290 "add_solver.m"
    }
#line 291 "add_solver.m"
    {
#line 291 "add_solver.m"
      hlds__make_hlds__add_solver__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_105_105, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YFGPragmaVar_51));
#line 291 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "add_solver.m"
    }
#line 291 "add_solver.m"
    {
#line 291 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnArgs_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgs_52, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XFGPragmaVar_50));
#line 291 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgs_52, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_105_105));
#line 291 "add_solver.m"
    }
#line 292 "add_solver.m"
    {
#line 292 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 292 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_37));
#line 292 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromGroundRepnSymName_49));
#line 292 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 2) = ((MR_Box) ((MR_Integer) 1));
#line 292 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 3) = ((MR_Box) (hlds__make_hlds__add_solver__FromGroundRepnArgs_52));
#line 292 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
#line 292 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
#line 292 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_38));
#line 292 "add_solver.m"
    }
#line 301 "add_solver.m"
    {
#line 301 "add_solver.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__FromGroundRepnFPInfo_53, hlds__make_hlds__add_solver__PredStatus_19, hlds__make_hlds__add_solver__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_98_98, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_99_99, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_110_110);
    }
#line 306 "add_solver.m"
    {
#line 306 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnSymName_54 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_12, hlds__make_hlds__add_solver__Arity_20);
    }
#line 307 "add_solver.m"
    {
#line 307 "add_solver.m"
      hlds__make_hlds__add_solver__XFAPragmaVar_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 307 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_55, 0) = ((MR_Box) (hlds__make_hlds__add_solver__X_28));
#line 307 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_55, 1) = ((MR_Box) ((MR_String) "X"));
#line 307 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_55, 2) = ((MR_Box) (hlds__make_hlds__add_solver__InAnyMode_23));
#line 307 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__XFAPragmaVar_55, 3) = ((MR_Box) ((MR_Integer) 0));
#line 307 "add_solver.m"
    }
#line 308 "add_solver.m"
    {
#line 308 "add_solver.m"
      hlds__make_hlds__add_solver__V_114_114 = parse_tree__prog_mode__out_any_mode_0_f_0();
    }
#line 308 "add_solver.m"
    {
#line 308 "add_solver.m"
      hlds__make_hlds__add_solver__YFAPragmaVar_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 308 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_56, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Y_30));
#line 308 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_56, 1) = ((MR_Box) ((MR_String) "Y"));
#line 308 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_56, 2) = ((MR_Box) (hlds__make_hlds__add_solver__V_114_114));
#line 308 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__YFAPragmaVar_56, 3) = ((MR_Box) ((MR_Integer) 0));
#line 308 "add_solver.m"
    }
#line 309 "add_solver.m"
    {
#line 309 "add_solver.m"
      hlds__make_hlds__add_solver__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_solver__YFAPragmaVar_56));
#line 309 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "add_solver.m"
    }
#line 309 "add_solver.m"
    {
#line 309 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnArgs_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgs_57, 0) = ((MR_Box) (hlds__make_hlds__add_solver__XFAPragmaVar_55));
#line 309 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgs_57, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_116_116));
#line 309 "add_solver.m"
    }
#line 310 "add_solver.m"
    {
#line 310 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 310 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 0) = ((MR_Box) (hlds__make_hlds__add_solver__Attrs_37));
#line 310 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 1) = ((MR_Box) (hlds__make_hlds__add_solver__FromAnyRepnSymName_54));
#line 310 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 2) = ((MR_Box) ((MR_Integer) 1));
#line 310 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 3) = ((MR_Box) (hlds__make_hlds__add_solver__FromAnyRepnArgs_57));
#line 310 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 4) = ((MR_Box) (hlds__make_hlds__add_solver__ProgVarSet_31));
#line 310 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 5) = ((MR_Box) (hlds__make_hlds__add_solver__InstVarSet_32));
#line 310 "add_solver.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, 6) = ((MR_Box) (hlds__make_hlds__add_solver__Impl_38));
#line 310 "add_solver.m"
    }
#line 319 "add_solver.m"
    {
#line 319 "add_solver.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_solver__FromAnyRepnFPInfo_58, hlds__make_hlds__add_solver__PredStatus_19, hlds__make_hlds__add_solver__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_109_109, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_60, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_110_110, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_64);
    }
#line 191 "add_solver.m"
    *hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_62 = hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_61;
#line 191 "add_solver.m"
  }
#line 186 "add_solver.m"
}

#line 64 "add_solver.m"
void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_if_local_7_p_0(
#line 64 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SolverAuxPredInfo_8,
#line 64 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_21,
#line 64 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_22,
#line 64 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_23,
#line 64 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_24,
#line 64 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_25,
#line 64 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_26)
#line 64 "add_solver.m"
{
#line 175 "add_solver.m"
  {
#line 175 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 175 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ItemMercuryStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 5)));
#line 176 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver___TypeSymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 0)));
#line 176 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver___TypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 1)));
#line 176 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver___TVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 2)));
#line 176 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver___SolverTypeDetails_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 3)));
#line 176 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 4)));
#line 176 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver___NeedQual_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_8, (MR_Integer) 6)));

#line 182 "add_solver.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_solver__ItemMercuryStatus_17)) == (MR_mktag((MR_Integer) 1))))
#line 183 "add_solver.m"
      {
#line 183 "add_solver.m"
        *hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_22 = hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_21;
#line 183 "add_solver.m"
        *hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_24 = hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_23;
#line 183 "add_solver.m"
        *hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_26 = hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_25;
#line 183 "add_solver.m"
      }
#line 182 "add_solver.m"
    else
#line 180 "add_solver.m"
      {
#line 180 "add_solver.m"
        hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_7_p_0(hlds__make_hlds__add_solver__SolverAuxPredInfo_8, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_22, hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_0_23, hlds__make_hlds__add_solver__STATE_VARIABLE_QualInfo_24, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_25, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_26);
      }
#line 175 "add_solver.m"
  }
#line 64 "add_solver.m"
}

#line 56 "add_solver.m"
void MR_CALL 
hlds__make_hlds__add_solver__add_solver_type_aux_pred_decls_5_p_0(
#line 56 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__SolverAuxPredInfo_6,
#line 56 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_46,
#line 56 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_47,
#line 56 "add_solver.m"
  MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_48,
#line 56 "add_solver.m"
  MR_Word * hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_49)
#line 56 "add_solver.m"
{
#line 85 "add_solver.m"
  {
#line 85 "add_solver.m"
    MR_bool hlds__make_hlds__add_solver__succeeded;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TypeInfo_124_124;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TypeSymName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 0)));
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TypeParams_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 1)));
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__TVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 2)));
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__SolverTypeDetails_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 3)));
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 4)));
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ItemMercuryStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 5)));
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__NeedQual_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverAuxPredInfo_6, (MR_Integer) 6)));
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__PredStatus_16;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__Args_17;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__SolverType_18;
#line 85 "add_solver.m"
    MR_Integer hlds__make_hlds__add_solver__Arity_19;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__RepnType_20;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__AnyInst_21;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__GroundInst_22;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InAnyMode_23;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InGroundMode_24;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutAnyMode_25;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__OutGroundMode_26;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__InstVarSet_27;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ExistQTVars_28;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__NoMarkers_29;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnSymName_30;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundRepnArgTypes_31;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToGroundOrigin_32;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnSymName_34;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyRepnArgTypes_35;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__ToAnyOrigin_36;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnSymName_38;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundRepnArgTypes_39;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromGroundOrigin_40;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnSymName_42;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyRepnArgTypes_43;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__FromAnyOrigin_44;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_50_50;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_52_52;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_53_53;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_54_54;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_55_55;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_59_59;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_61_61;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_62_62;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_63_63;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_67_67;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_68_68;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_69_69;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_70_70;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_77_77;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_78_78;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_82_82;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_83_83;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_84_84;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_85_85;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_92_92;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_93_93;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_97_97;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_98_98;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_99_99;
#line 85 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_100_100;
#line 97 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_112_112;
#line 97 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_115_115;
#line 122 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_33_33;
#line 137 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_37_37;
#line 152 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_41_41;
#line 167 "add_solver.m"
    MR_Word hlds__make_hlds__add_solver__V_45_45;

#line 88 "add_solver.m"
    {
#line 88 "add_solver.m"
      hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__add_solver__ItemMercuryStatus_14, &hlds__make_hlds__add_solver__PredStatus_16);
    }
#line 2148 "hlds.make_hlds.add_solver.c"
    hlds__make_hlds__add_solver__TypeInfo_124_124 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[0];
#line 93 "add_solver.m"
    {
#line 93 "add_solver.m"
      hlds__make_hlds__add_solver__V_50_50 = mercury__map__init_0_f_0(hlds__make_hlds__add_solver__TypeInfo_124_124, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 93 "add_solver.m"
    {
#line 93 "add_solver.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_solver__V_50_50, hlds__make_hlds__add_solver__TypeParams_10, &hlds__make_hlds__add_solver__Args_17);
    }
#line 94 "add_solver.m"
    {
#line 94 "add_solver.m"
      hlds__make_hlds__add_solver__SolverType_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 94 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_18, 0) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_9));
#line 94 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_18, 1) = ((MR_Box) (hlds__make_hlds__add_solver__Args_17));
#line 94 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__SolverType_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 94 "add_solver.m"
    }
#line 95 "add_solver.m"
    {
#line 95 "add_solver.m"
      hlds__make_hlds__add_solver__Arity_19 = mercury__list__length_1_f_0(hlds__make_hlds__add_solver__TypeInfo_124_124, hlds__make_hlds__add_solver__TypeParams_10);
    }
#line 97 "add_solver.m"
    hlds__make_hlds__add_solver__RepnType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_12, (MR_Integer) 0)));
#line 97 "add_solver.m"
    hlds__make_hlds__add_solver__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_12, (MR_Integer) 1)));
#line 97 "add_solver.m"
    hlds__make_hlds__add_solver__GroundInst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_12, (MR_Integer) 2)));
#line 97 "add_solver.m"
    hlds__make_hlds__add_solver__AnyInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_12, (MR_Integer) 3)));
#line 97 "add_solver.m"
    hlds__make_hlds__add_solver__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_solver__SolverTypeDetails_12, (MR_Integer) 4)));
#line 101 "add_solver.m"
    {
#line 101 "add_solver.m"
      hlds__make_hlds__add_solver__InAnyMode_23 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_21);
    }
#line 102 "add_solver.m"
    {
#line 102 "add_solver.m"
      hlds__make_hlds__add_solver__InGroundMode_24 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_22);
    }
#line 104 "add_solver.m"
    {
#line 104 "add_solver.m"
      hlds__make_hlds__add_solver__OutAnyMode_25 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__AnyInst_21);
    }
#line 105 "add_solver.m"
    {
#line 105 "add_solver.m"
      hlds__make_hlds__add_solver__OutGroundMode_26 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_solver__GroundInst_22);
    }
#line 107 "add_solver.m"
    {
#line 107 "add_solver.m"
      hlds__make_hlds__add_solver__InstVarSet_27 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 108 "add_solver.m"
    hlds__make_hlds__add_solver__ExistQTVars_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 110 "add_solver.m"
    {
#line 110 "add_solver.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_solver__NoMarkers_29);
    }
#line 116 "add_solver.m"
    {
#line 116 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnSymName_30 = hlds__make_hlds__add_solver__solver_to_ground_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_9, hlds__make_hlds__add_solver__Arity_19);
    }
#line 118 "add_solver.m"
    {
#line 118 "add_solver.m"
      hlds__make_hlds__add_solver__V_53_53 = parse_tree__prog_mode__in_mode_0_f_0();
    }
#line 118 "add_solver.m"
    {
#line 118 "add_solver.m"
      hlds__make_hlds__add_solver__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_18));
#line 118 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_53_53));
#line 118 "add_solver.m"
    }
#line 119 "add_solver.m"
    {
#line 119 "add_solver.m"
      hlds__make_hlds__add_solver__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_20));
#line 119 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_solver__OutGroundMode_26));
#line 119 "add_solver.m"
    }
#line 119 "add_solver.m"
    {
#line 119 "add_solver.m"
      hlds__make_hlds__add_solver__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_55_55));
#line 119 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "add_solver.m"
    }
#line 118 "add_solver.m"
    {
#line 118 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundRepnArgTypes_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgTypes_31, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_52_52));
#line 118 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToGroundRepnArgTypes_31, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_54_54));
#line 118 "add_solver.m"
    }
#line 120 "add_solver.m"
    {
#line 120 "add_solver.m"
      hlds__make_hlds__add_solver__ToGroundOrigin_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 120 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 120 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_32, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_9));
#line 120 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_32, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_19));
#line 120 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToGroundOrigin_32, 3) = ((MR_Box) ((MR_Integer) 0));
#line 120 "add_solver.m"
    }
#line 124 "add_solver.m"
    hlds__make_hlds__add_solver__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_solver_scalar_common_2[0]);
#line 124 "add_solver.m"
    hlds__make_hlds__add_solver__V_61_61 = (MR_Word) &hlds__make_hlds__add_solver_scalar_common_1[3];
#line 122 "add_solver.m"
    {
#line 122 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_solver__ToGroundOrigin_32, hlds__make_hlds__add_solver__TVarSet_11, hlds__make_hlds__add_solver__InstVarSet_27, hlds__make_hlds__add_solver__ExistQTVars_28, (MR_Integer) 1, hlds__make_hlds__add_solver__ToGroundRepnSymName_30, hlds__make_hlds__add_solver__ToGroundRepnArgTypes_31, hlds__make_hlds__add_solver__V_59_59, (MR_Integer) 2, hlds__make_hlds__add_solver__V_61_61, hlds__make_hlds__add_solver__NoMarkers_29, hlds__make_hlds__add_solver__Context_13, hlds__make_hlds__add_solver__PredStatus_16, hlds__make_hlds__add_solver__NeedQual_15, &hlds__make_hlds__add_solver__V_33_33, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_62_62, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_0_48, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_63_63);
    }
#line 131 "add_solver.m"
    {
#line 131 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnSymName_34 = hlds__make_hlds__add_solver__solver_to_any_repn_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_9, hlds__make_hlds__add_solver__Arity_19);
    }
#line 133 "add_solver.m"
    {
#line 133 "add_solver.m"
      hlds__make_hlds__add_solver__V_68_68 = parse_tree__prog_mode__in_any_mode_0_f_0();
    }
#line 133 "add_solver.m"
    {
#line 133 "add_solver.m"
      hlds__make_hlds__add_solver__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_18));
#line 133 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_68_68));
#line 133 "add_solver.m"
    }
#line 134 "add_solver.m"
    {
#line 134 "add_solver.m"
      hlds__make_hlds__add_solver__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 134 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_20));
#line 134 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_solver__OutAnyMode_25));
#line 134 "add_solver.m"
    }
#line 134 "add_solver.m"
    {
#line 134 "add_solver.m"
      hlds__make_hlds__add_solver__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 134 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_70_70));
#line 134 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 134 "add_solver.m"
    }
#line 133 "add_solver.m"
    {
#line 133 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyRepnArgTypes_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 133 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgTypes_35, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_67_67));
#line 133 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__ToAnyRepnArgTypes_35, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_69_69));
#line 133 "add_solver.m"
    }
#line 135 "add_solver.m"
    {
#line 135 "add_solver.m"
      hlds__make_hlds__add_solver__ToAnyOrigin_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 135 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 135 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_36, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_9));
#line 135 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_36, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_19));
#line 135 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__ToAnyOrigin_36, 3) = ((MR_Box) ((MR_Integer) 1));
#line 135 "add_solver.m"
    }
#line 137 "add_solver.m"
    {
#line 137 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_solver__ToAnyOrigin_36, hlds__make_hlds__add_solver__TVarSet_11, hlds__make_hlds__add_solver__InstVarSet_27, hlds__make_hlds__add_solver__ExistQTVars_28, (MR_Integer) 1, hlds__make_hlds__add_solver__ToAnyRepnSymName_34, hlds__make_hlds__add_solver__ToAnyRepnArgTypes_35, hlds__make_hlds__add_solver__V_59_59, (MR_Integer) 2, hlds__make_hlds__add_solver__V_61_61, hlds__make_hlds__add_solver__NoMarkers_29, hlds__make_hlds__add_solver__Context_13, hlds__make_hlds__add_solver__PredStatus_16, hlds__make_hlds__add_solver__NeedQual_15, &hlds__make_hlds__add_solver__V_37_37, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_62_62, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_77_77, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_63_63, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_78_78);
    }
#line 146 "add_solver.m"
    {
#line 146 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnSymName_38 = hlds__make_hlds__add_solver__repn_to_ground_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_9, hlds__make_hlds__add_solver__Arity_19);
    }
#line 148 "add_solver.m"
    {
#line 148 "add_solver.m"
      hlds__make_hlds__add_solver__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_20));
#line 148 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_82_82, 1) = ((MR_Box) (hlds__make_hlds__add_solver__InGroundMode_24));
#line 148 "add_solver.m"
    }
#line 149 "add_solver.m"
    {
#line 149 "add_solver.m"
      hlds__make_hlds__add_solver__V_85_85 = parse_tree__prog_mode__out_mode_0_f_0();
    }
#line 149 "add_solver.m"
    {
#line 149 "add_solver.m"
      hlds__make_hlds__add_solver__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_18));
#line 149 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_85_85));
#line 149 "add_solver.m"
    }
#line 149 "add_solver.m"
    {
#line 149 "add_solver.m"
      hlds__make_hlds__add_solver__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_84_84));
#line 149 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "add_solver.m"
    }
#line 148 "add_solver.m"
    {
#line 148 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundRepnArgTypes_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgTypes_39, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_82_82));
#line 148 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromGroundRepnArgTypes_39, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_83_83));
#line 148 "add_solver.m"
    }
#line 150 "add_solver.m"
    {
#line 150 "add_solver.m"
      hlds__make_hlds__add_solver__FromGroundOrigin_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 150 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 150 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_40, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_9));
#line 150 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_40, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_19));
#line 150 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromGroundOrigin_40, 3) = ((MR_Box) ((MR_Integer) 2));
#line 150 "add_solver.m"
    }
#line 152 "add_solver.m"
    {
#line 152 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_solver__FromGroundOrigin_40, hlds__make_hlds__add_solver__TVarSet_11, hlds__make_hlds__add_solver__InstVarSet_27, hlds__make_hlds__add_solver__ExistQTVars_28, (MR_Integer) 1, hlds__make_hlds__add_solver__FromGroundRepnSymName_38, hlds__make_hlds__add_solver__FromGroundRepnArgTypes_39, hlds__make_hlds__add_solver__V_59_59, (MR_Integer) 2, hlds__make_hlds__add_solver__V_61_61, hlds__make_hlds__add_solver__NoMarkers_29, hlds__make_hlds__add_solver__Context_13, hlds__make_hlds__add_solver__PredStatus_16, hlds__make_hlds__add_solver__NeedQual_15, &hlds__make_hlds__add_solver__V_41_41, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_77_77, &hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_92_92, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_78_78, &hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_93_93);
    }
#line 161 "add_solver.m"
    {
#line 161 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnSymName_42 = hlds__make_hlds__add_solver__repn_to_any_solver_symname_2_f_0(hlds__make_hlds__add_solver__TypeSymName_9, hlds__make_hlds__add_solver__Arity_19);
    }
#line 163 "add_solver.m"
    {
#line 163 "add_solver.m"
      hlds__make_hlds__add_solver__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_97_97, 0) = ((MR_Box) (hlds__make_hlds__add_solver__RepnType_20));
#line 163 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_97_97, 1) = ((MR_Box) (hlds__make_hlds__add_solver__InAnyMode_23));
#line 163 "add_solver.m"
    }
#line 164 "add_solver.m"
    {
#line 164 "add_solver.m"
      hlds__make_hlds__add_solver__V_100_100 = parse_tree__prog_mode__out_any_mode_0_f_0();
    }
#line 164 "add_solver.m"
    {
#line 164 "add_solver.m"
      hlds__make_hlds__add_solver__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_solver__SolverType_18));
#line 164 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_100_100));
#line 164 "add_solver.m"
    }
#line 164 "add_solver.m"
    {
#line 164 "add_solver.m"
      hlds__make_hlds__add_solver__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_99_99));
#line 164 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 164 "add_solver.m"
    }
#line 163 "add_solver.m"
    {
#line 163 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyRepnArgTypes_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgTypes_43, 0) = ((MR_Box) (hlds__make_hlds__add_solver__V_97_97));
#line 163 "add_solver.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_solver__FromAnyRepnArgTypes_43, 1) = ((MR_Box) (hlds__make_hlds__add_solver__V_98_98));
#line 163 "add_solver.m"
    }
#line 165 "add_solver.m"
    {
#line 165 "add_solver.m"
      hlds__make_hlds__add_solver__FromAnyOrigin_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 165 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 165 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_44, 1) = ((MR_Box) (hlds__make_hlds__add_solver__TypeSymName_9));
#line 165 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_44, 2) = ((MR_Box) (hlds__make_hlds__add_solver__Arity_19));
#line 165 "add_solver.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_solver__FromAnyOrigin_44, 3) = ((MR_Box) ((MR_Integer) 3));
#line 165 "add_solver.m"
    }
#line 167 "add_solver.m"
    {
#line 167 "add_solver.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_solver__FromAnyOrigin_44, hlds__make_hlds__add_solver__TVarSet_11, hlds__make_hlds__add_solver__InstVarSet_27, hlds__make_hlds__add_solver__ExistQTVars_28, (MR_Integer) 1, hlds__make_hlds__add_solver__FromAnyRepnSymName_42, hlds__make_hlds__add_solver__FromAnyRepnArgTypes_43, hlds__make_hlds__add_solver__V_59_59, (MR_Integer) 2, hlds__make_hlds__add_solver__V_61_61, hlds__make_hlds__add_solver__NoMarkers_29, hlds__make_hlds__add_solver__Context_13, hlds__make_hlds__add_solver__PredStatus_16, hlds__make_hlds__add_solver__NeedQual_15, &hlds__make_hlds__add_solver__V_45_45, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_92_92, hlds__make_hlds__add_solver__STATE_VARIABLE_ModuleInfo_47, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_93_93, hlds__make_hlds__add_solver__STATE_VARIABLE_Specs_49);
    }
#line 85 "add_solver.m"
  }
#line 56 "add_solver.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_solver. */
