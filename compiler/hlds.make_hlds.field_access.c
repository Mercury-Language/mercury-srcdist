/*
** Automatically generated from `field_access.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module hlds.make_hlds.field_access. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__field_access__init
ENDINIT
*/

#include "hlds.make_hlds.field_access.mih"


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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "hlds.make_hlds.superhomogeneous.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 155 "hlds.make_hlds.field_access.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "hlds.make_hlds.field_access.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "hlds.make_hlds.field_access.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__field_access__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "hlds.make_hlds.field_access.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "hlds.make_hlds.field_access.c"
static MR_bool MR_CALL 
hlds__make_hlds__field_access____Unify____field_list_0_0_10001(
#line 170 "hlds.make_hlds.field_access.c"
  MR_Box hlds__make_hlds__field_access__wrapper_arg_1,
#line 172 "hlds.make_hlds.field_access.c"
  MR_Box hlds__make_hlds__field_access__wrapper_arg_2);

#line 175 "hlds.make_hlds.field_access.c"
static void MR_CALL 
hlds__make_hlds__field_access____Compare____field_list_0_0_10001(
#line 178 "hlds.make_hlds.field_access.c"
  MR_Box * hlds__make_hlds__field_access__wrapper_arg_1,
#line 180 "hlds.make_hlds.field_access.c"
  MR_Box hlds__make_hlds__field_access__wrapper_arg_2,
#line 182 "hlds.make_hlds.field_access.c"
  MR_Box hlds__make_hlds__field_access__wrapper_arg_3);

#line 323 "field_access.m"
static MR_Word MR_CALL 
hlds__make_hlds__field_access__make_field_list_error_4_f_0(
#line 323 "field_access.m"
  MR_Word hlds__make_hlds__field_access__VarSet_6,
#line 323 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Context_7,
#line 323 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Term_8,
#line 323 "field_access.m"
  MR_Word hlds__make_hlds__field_access__ContextPieces_9);

#line 269 "field_access.m"
static void MR_CALL 
hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0(
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__AccessType_13,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Context_14,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__MainContext_15,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__SubContext_16,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__FieldName_17,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__RetArg_18,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Args_19,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Purity_20,
#line 269 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Functor_21,
#line 269 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Goal_22,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_26,
#line 269 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_27);

#line 218 "field_access.m"
static void MR_CALL 
hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Context_1,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__MainContext_2,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__SubContext0_3,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__HeadVar__4_4,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__FieldValueVar_5,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__TermInputVar_6,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Purity_7,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Functor_8,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_9,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Goals_10,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_11,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_12,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_14,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_15,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_16,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_18,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_20,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_21,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_22);

#line 130 "field_access.m"
static void MR_CALL 
hlds__make_hlds__field_access__expand_set_field_function_call_2_22_p_0(
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Context_1,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__MainContext_2,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__SubContext0_3,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__HeadVar__4_4,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__FieldValueVar_5,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__TermInputVar_6,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__TermOutputVar_7,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Functor_8,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_9,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Goals_10,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_11,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_12,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_14,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_15,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_16,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_18,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_20,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_21,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_22);


static /* final */ const MR_Box hlds__make_hlds__field_access_scalar_common_1[8][2];

static /* final */ const MR_Box hlds__make_hlds__field_access_scalar_common_2[1][3];




static /* final */ const MR_Box hlds__make_hlds__field_access_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__field_access_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__field_access_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__field_access_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__field_access_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected field name at term"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__field_access_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__field_access_scalar_common_1[2]))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 390 "hlds.make_hlds.field_access.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 398 "hlds.make_hlds.field_access.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__field_access__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 406 "hlds.make_hlds.field_access.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__field_access__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &hlds__make_hlds__field_access__list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 415 "hlds.make_hlds.field_access.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__field_access__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 423 "hlds.make_hlds.field_access.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__field_access__hlds__make_hlds__field_access__type_ctor_info_field_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__field_access____Unify____field_list_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__field_access____Compare____field_list_0_0_10001)),
  (MR_String) "hlds.make_hlds.field_access",
  (MR_String) "field_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__make_hlds__field_access__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 440 "hlds.make_hlds.field_access.c"
static MR_bool MR_CALL 
hlds__make_hlds__field_access____Unify____field_list_0_0_10001(
#line 443 "hlds.make_hlds.field_access.c"
  MR_Box hlds__make_hlds__field_access__wrapper_arg_1,
#line 445 "hlds.make_hlds.field_access.c"
  MR_Box hlds__make_hlds__field_access__wrapper_arg_2)
#line 447 "hlds.make_hlds.field_access.c"
{
#line 449 "hlds.make_hlds.field_access.c"
  {
#line 451 "hlds.make_hlds.field_access.c"
    MR_bool hlds__make_hlds__field_access__succeeded;

#line 454 "hlds.make_hlds.field_access.c"
    {
#line 456 "hlds.make_hlds.field_access.c"
      hlds__make_hlds__field_access__succeeded = hlds__make_hlds__field_access____Unify____field_list_0_0(((MR_Word) hlds__make_hlds__field_access__wrapper_arg_1), ((MR_Word) hlds__make_hlds__field_access__wrapper_arg_2));
    }
#line 459 "hlds.make_hlds.field_access.c"
    return hlds__make_hlds__field_access__succeeded;
#line 461 "hlds.make_hlds.field_access.c"
  }
#line 463 "hlds.make_hlds.field_access.c"
}

#line 466 "hlds.make_hlds.field_access.c"
static void MR_CALL 
hlds__make_hlds__field_access____Compare____field_list_0_0_10001(
#line 469 "hlds.make_hlds.field_access.c"
  MR_Box * hlds__make_hlds__field_access__wrapper_arg_1,
#line 471 "hlds.make_hlds.field_access.c"
  MR_Box hlds__make_hlds__field_access__wrapper_arg_2,
#line 473 "hlds.make_hlds.field_access.c"
  MR_Box hlds__make_hlds__field_access__wrapper_arg_3)
#line 475 "hlds.make_hlds.field_access.c"
{
#line 477 "hlds.make_hlds.field_access.c"
  {
#line 479 "hlds.make_hlds.field_access.c"
    MR_Word hlds__make_hlds__field_access__conv0_HeadVar__1_1;

#line 482 "hlds.make_hlds.field_access.c"
    {
#line 484 "hlds.make_hlds.field_access.c"
      hlds__make_hlds__field_access____Compare____field_list_0_0(&hlds__make_hlds__field_access__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__field_access__wrapper_arg_2), ((MR_Word) hlds__make_hlds__field_access__wrapper_arg_3));
    }
#line 487 "hlds.make_hlds.field_access.c"
    *hlds__make_hlds__field_access__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__field_access__conv0_HeadVar__1_1));
#line 489 "hlds.make_hlds.field_access.c"
  }
#line 491 "hlds.make_hlds.field_access.c"
}

#line 34 "field_access.m"
void MR_CALL 
hlds__make_hlds__field_access____Compare____field_list_0_0(
#line 34 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__HeadVar__1_1,
#line 34 "field_access.m"
  MR_Word hlds__make_hlds__field_access__HeadVar__2_2,
#line 34 "field_access.m"
  MR_Word hlds__make_hlds__field_access__HeadVar__3_3)
#line 34 "field_access.m"
{
#line 34 "field_access.m"
  {
#line 34 "field_access.m"
    MR_bool hlds__make_hlds__field_access__succeeded;
#line 34 "field_access.m"
    MR_Word hlds__make_hlds__field_access__Cast_HeadVar1_4 = hlds__make_hlds__field_access__HeadVar__2_2;
#line 34 "field_access.m"
    MR_Word hlds__make_hlds__field_access__Cast_HeadVar2_5 = hlds__make_hlds__field_access__HeadVar__3_3;

#line 34 "field_access.m"
    {
#line 34 "field_access.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__field_access_scalar_common_1[3], hlds__make_hlds__field_access__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__field_access__Cast_HeadVar1_4)), ((MR_Box) (hlds__make_hlds__field_access__Cast_HeadVar2_5)));
    }
#line 34 "field_access.m"
  }
#line 34 "field_access.m"
}

#line 34 "field_access.m"
MR_bool MR_CALL 
hlds__make_hlds__field_access____Unify____field_list_0_0(
#line 34 "field_access.m"
  MR_Word hlds__make_hlds__field_access__HeadVar__1_1,
#line 34 "field_access.m"
  MR_Word hlds__make_hlds__field_access__HeadVar__2_2)
#line 34 "field_access.m"
{
#line 34 "field_access.m"
  {
#line 34 "field_access.m"
    MR_bool hlds__make_hlds__field_access__succeeded;
#line 34 "field_access.m"
    MR_Word hlds__make_hlds__field_access__Cast_HeadVar1_3 = hlds__make_hlds__field_access__HeadVar__1_1;
#line 34 "field_access.m"
    MR_Word hlds__make_hlds__field_access__Cast_HeadVar2_4 = hlds__make_hlds__field_access__HeadVar__2_2;

#line 34 "field_access.m"
    {
#line 34 "field_access.m"
      hlds__make_hlds__field_access__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__field_access_scalar_common_1[3], ((MR_Box) (hlds__make_hlds__field_access__Cast_HeadVar1_3)), ((MR_Box) (hlds__make_hlds__field_access__Cast_HeadVar2_4)));
    }
#line 34 "field_access.m"
    return hlds__make_hlds__field_access__succeeded;
#line 34 "field_access.m"
  }
#line 34 "field_access.m"
}

#line 323 "field_access.m"
static MR_Word MR_CALL 
hlds__make_hlds__field_access__make_field_list_error_4_f_0(
#line 323 "field_access.m"
  MR_Word hlds__make_hlds__field_access__VarSet_6,
#line 323 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Context_7,
#line 323 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Term_8,
#line 323 "field_access.m"
  MR_Word hlds__make_hlds__field_access__ContextPieces_9)
#line 323 "field_access.m"
{
#line 326 "field_access.m"
  {
#line 326 "field_access.m"
    MR_bool hlds__make_hlds__field_access__succeeded;
#line 326 "field_access.m"
    MR_Word hlds__make_hlds__field_access__Spec_10;
#line 326 "field_access.m"
    MR_String hlds__make_hlds__field_access__TermStr_11;
#line 326 "field_access.m"
    MR_Word hlds__make_hlds__field_access__Pieces_12;
#line 326 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_14_14;
#line 326 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_16_16;
#line 326 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_19_19;
#line 326 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_20_20;
#line 326 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_29_29;
#line 326 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_30_30;
#line 326 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_31_31;
#line 326 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_32_32;

#line 327 "field_access.m"
    {
#line 327 "field_access.m"
      hlds__make_hlds__field_access__TermStr_11 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__field_access__VarSet_6, (MR_Integer) 0, hlds__make_hlds__field_access__Term_8);
    }
#line 330 "field_access.m"
    {
#line 330 "field_access.m"
      hlds__make_hlds__field_access__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "field_access.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__field_access__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 330 "field_access.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__field_access__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__field_access__TermStr_11));
#line 330 "field_access.m"
    }
#line 330 "field_access.m"
    {
#line 330 "field_access.m"
      hlds__make_hlds__field_access__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_20_20));
#line 330 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__field_access_scalar_common_1[6])));
#line 330 "field_access.m"
    }
#line 329 "field_access.m"
    {
#line 329 "field_access.m"
      hlds__make_hlds__field_access__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__field_access_scalar_common_1[7])));
#line 329 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__field_access__V_19_19));
#line 329 "field_access.m"
    }
#line 328 "field_access.m"
    {
#line 328 "field_access.m"
      hlds__make_hlds__field_access__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_14_14, 1) = ((MR_Box) (hlds__make_hlds__field_access__V_16_16));
#line 328 "field_access.m"
    }
#line 328 "field_access.m"
    {
#line 328 "field_access.m"
      hlds__make_hlds__field_access__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__field_access__ContextPieces_9, hlds__make_hlds__field_access__V_14_14);
    }
#line 332 "field_access.m"
    {
#line 332 "field_access.m"
      hlds__make_hlds__field_access__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 332 "field_access.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__field_access__Pieces_12));
#line 332 "field_access.m"
    }
#line 332 "field_access.m"
    {
#line 332 "field_access.m"
      hlds__make_hlds__field_access__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_32_32));
#line 332 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "field_access.m"
    }
#line 332 "field_access.m"
    {
#line 332 "field_access.m"
      hlds__make_hlds__field_access__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "field_access.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__field_access__Context_7));
#line 332 "field_access.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__field_access__V_31_31));
#line 332 "field_access.m"
    }
#line 332 "field_access.m"
    {
#line 332 "field_access.m"
      hlds__make_hlds__field_access__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_30_30));
#line 332 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "field_access.m"
    }
#line 331 "field_access.m"
    {
#line 331 "field_access.m"
      hlds__make_hlds__field_access__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 331 "field_access.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "field_access.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 331 "field_access.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Spec_10, 2) = ((MR_Box) (hlds__make_hlds__field_access__V_29_29));
#line 331 "field_access.m"
    }
#line 326 "field_access.m"
    return hlds__make_hlds__field_access__Spec_10;
#line 326 "field_access.m"
  }
#line 323 "field_access.m"
}

#line 269 "field_access.m"
static void MR_CALL 
hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0(
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__AccessType_13,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Context_14,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__MainContext_15,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__SubContext_16,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__FieldName_17,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__RetArg_18,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Args_19,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Purity_20,
#line 269 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Functor_21,
#line 269 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Goal_22,
#line 269 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_26,
#line 269 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_27)
#line 269 "field_access.m"
{
#line 276 "field_access.m"
  {
#line 276 "field_access.m"
    MR_bool hlds__make_hlds__field_access__succeeded;
#line 276 "field_access.m"
    MR_Word hlds__make_hlds__field_access__FuncName_24;
#line 276 "field_access.m"
    MR_Integer hlds__make_hlds__field_access__Arity_25;
#line 276 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_28_28;
#line 276 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_29_29;

#line 277 "field_access.m"
    {
#line 277 "field_access.m"
      hlds__hlds_pred__field_access_function_name_3_p_0(hlds__make_hlds__field_access__AccessType_13, hlds__make_hlds__field_access__FieldName_17, &hlds__make_hlds__field_access__FuncName_24);
    }
#line 278 "field_access.m"
    {
#line 278 "field_access.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__field_access_scalar_common_1[0], hlds__make_hlds__field_access__Args_19, &hlds__make_hlds__field_access__Arity_25);
    }
#line 279 "field_access.m"
    {
#line 279 "field_access.m"
      hlds__make_hlds__field_access__V_28_28 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 279 "field_access.m"
    {
#line 279 "field_access.m"
      MR_Word base;
#line 279 "field_access.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 279 "field_access.m"
      *hlds__make_hlds__field_access__Functor_21 = base;
#line 279 "field_access.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 279 "field_access.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__field_access__FuncName_24));
#line 279 "field_access.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__field_access__Arity_25));
#line 279 "field_access.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__make_hlds__field_access__V_28_28));
#line 279 "field_access.m"
    }
#line 281 "field_access.m"
    {
#line 281 "field_access.m"
      hlds__make_hlds__field_access__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 281 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_29_29, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_21));
#line 281 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_29_29, 1) = ((MR_Box) ((MR_Integer) 0));
#line 281 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_29_29, 2) = ((MR_Box) (hlds__make_hlds__field_access__Args_19));
#line 281 "field_access.m"
    }
#line 280 "field_access.m"
    {
#line 280 "field_access.m"
      hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__field_access__RetArg_18, hlds__make_hlds__field_access__V_29_29, hlds__make_hlds__field_access__Context_14, hlds__make_hlds__field_access__MainContext_15, hlds__make_hlds__field_access__SubContext_16, hlds__make_hlds__field_access__Purity_20, hlds__make_hlds__field_access__Goal_22, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_26, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_27);
    }
#line 276 "field_access.m"
  }
#line 269 "field_access.m"
}

#line 218 "field_access.m"
static void MR_CALL 
hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Context_1,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__MainContext_2,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__SubContext0_3,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__HeadVar__4_4,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__FieldValueVar_5,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__TermInputVar_6,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Purity_7,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Functor_8,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_9,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Goals_10,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_11,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_12,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_14,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_15,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_16,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_18,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_20,
#line 218 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_21,
#line 218 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_22)
#line 218 "field_access.m"
{
#line 228 "field_access.m"
  {
#line 228 "field_access.m"
    MR_bool hlds__make_hlds__field_access__succeeded;

#line 228 "field_access.m"
    if ((hlds__make_hlds__field_access__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "field_access.m"
      {
#line 229 "field_access.m"
        {
#line 229 "field_access.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.field_access", (MR_String) "predicate \140hlds.make_hlds.field_access.expand_get_field_function_call_2\'/22", (MR_String) "empty list of field names");
#line 229 "field_access.m"
          return;
        }
#line 228 "field_access.m"
      }
#line 228 "field_access.m"
    else
#line 233 "field_access.m"
      {
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__TypeInfo_127_127;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__FieldName_56;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__FieldArgs_57;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__FieldNames_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__HeadVar__4_4, (MR_Integer) 1)));
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__FieldArgVars_71;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__GetArgVars_72;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__Goals2_82;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__ArgContext_83;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__GoalInfo_84;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__Conj0_85;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__Conj_86;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__HeadVar__4_4, (MR_Integer) 0)));
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_100_100;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_101_101;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_102_102;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__V_103_103;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_113_113;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_114_114;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_116_116;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_117_117;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_118_118;
#line 233 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_120_120;

#line 231 "field_access.m"
        hlds__make_hlds__field_access__FieldName_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_99_99, (MR_Integer) 0)));
#line 231 "field_access.m"
        hlds__make_hlds__field_access__FieldArgs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_99_99, (MR_Integer) 1)));
#line 234 "field_access.m"
        {
#line 234 "field_access.m"
          hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__field_access__FieldArgs_57, &hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_15, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_100_100, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_11, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_101_101, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_21, &hlds__make_hlds__field_access__STATE_VARIABLE_Specs_102_102);
        }
#line 925 "hlds.make_hlds.field_access.c"
        hlds__make_hlds__field_access__TypeInfo_127_127 = (MR_Word) &hlds__make_hlds__field_access_scalar_common_1[0];
#line 236 "field_access.m"
        {
#line 236 "field_access.m"
          hlds__make_hlds__field_access__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "field_access.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_103_103, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputVar_6));
#line 236 "field_access.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "field_access.m"
        }
#line 236 "field_access.m"
        {
#line 236 "field_access.m"
          hlds__make_hlds__field_access__GetArgVars_72 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__field_access__TypeInfo_127_127, hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__V_103_103);
        }
#line 253 "field_access.m"
        if ((hlds__make_hlds__field_access__FieldNames_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "field_access.m"
          {
#line 254 "field_access.m"
            MR_Word hlds__make_hlds__field_access__Goal_126;

#line 256 "field_access.m"
            {
#line 256 "field_access.m"
              hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 0, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext0_3, hlds__make_hlds__field_access__FieldName_56, hlds__make_hlds__field_access__FieldValueVar_5, hlds__make_hlds__field_access__GetArgVars_72, hlds__make_hlds__field_access__Purity_7, hlds__make_hlds__field_access__Functor_8, &hlds__make_hlds__field_access__Goal_126, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_117_117);
            }
#line 255 "field_access.m"
            {
#line 255 "field_access.m"
              MR_Word base;
#line 255 "field_access.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "field_access.m"
              *hlds__make_hlds__field_access__FieldSubContext_9 = base;
#line 255 "field_access.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_8));
#line 255 "field_access.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__field_access__SubContext0_3));
#line 255 "field_access.m"
            }
#line 259 "field_access.m"
            {
#line 259 "field_access.m"
              hlds__make_hlds__field_access__Goals2_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals2_82, 0) = ((MR_Box) (hlds__make_hlds__field_access__Goal_126));
#line 259 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals2_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "field_access.m"
            }
#line 254 "field_access.m"
            hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_113_113 = hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_101_101;
#line 254 "field_access.m"
            hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_114_114 = hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13;
#line 254 "field_access.m"
            hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115 = hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_100_100;
#line 254 "field_access.m"
            hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_116_116 = hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17;
#line 254 "field_access.m"
            hlds__make_hlds__field_access__STATE_VARIABLE_Specs_118_118 = hlds__make_hlds__field_access__STATE_VARIABLE_Specs_102_102;
#line 254 "field_access.m"
          }
#line 253 "field_access.m"
        else
#line 238 "field_access.m"
          {
#line 238 "field_access.m"
            MR_Word hlds__make_hlds__field_access__SubTermInputVar_75;
#line 238 "field_access.m"
            MR_Word hlds__make_hlds__field_access__Goal_76;
#line 238 "field_access.m"
            MR_Integer hlds__make_hlds__field_access__TermInputArgNumber_77;
#line 238 "field_access.m"
            MR_Word hlds__make_hlds__field_access__TermInputContext_78;
#line 238 "field_access.m"
            MR_Word hlds__make_hlds__field_access__SubContext_79;
#line 238 "field_access.m"
            MR_Word hlds__make_hlds__field_access__Goals1_81;
#line 238 "field_access.m"
            MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_108_108;
#line 238 "field_access.m"
            MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_110_110;
#line 238 "field_access.m"
            MR_Integer hlds__make_hlds__field_access__V_112_112;
#line 248 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_80_80;

#line 239 "field_access.m"
            {
#line 239 "field_access.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__make_hlds__field_access__SubTermInputVar_75, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_100_100, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_108_108);
            }
#line 240 "field_access.m"
            {
#line 240 "field_access.m"
              hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 0, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext0_3, hlds__make_hlds__field_access__FieldName_56, hlds__make_hlds__field_access__SubTermInputVar_75, hlds__make_hlds__field_access__GetArgVars_72, hlds__make_hlds__field_access__Purity_7, hlds__make_hlds__field_access__Functor_8, &hlds__make_hlds__field_access__Goal_76, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_110_110);
            }
#line 245 "field_access.m"
            {
#line 245 "field_access.m"
              hlds__make_hlds__field_access__V_112_112 = mercury__list__length_1_f_0(hlds__make_hlds__field_access__TypeInfo_127_127, hlds__make_hlds__field_access__FieldArgVars_71);
            }
#line 245 "field_access.m"
            hlds__make_hlds__field_access__TermInputArgNumber_77 = ((MR_Integer) 1 + hlds__make_hlds__field_access__V_112_112);
#line 246 "field_access.m"
            {
#line 246 "field_access.m"
              hlds__make_hlds__field_access__TermInputContext_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "field_access.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__TermInputContext_78, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_8));
#line 246 "field_access.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__TermInputContext_78, 1) = ((MR_Box) (hlds__make_hlds__field_access__TermInputArgNumber_77));
#line 246 "field_access.m"
            }
#line 247 "field_access.m"
            {
#line 247 "field_access.m"
              hlds__make_hlds__field_access__SubContext_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__SubContext_79, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputContext_78));
#line 247 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__SubContext_79, 1) = ((MR_Box) (hlds__make_hlds__field_access__SubContext0_3));
#line 247 "field_access.m"
            }
#line 248 "field_access.m"
            {
#line 248 "field_access.m"
              hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext_79, hlds__make_hlds__field_access__FieldNames_58, hlds__make_hlds__field_access__FieldValueVar_5, hlds__make_hlds__field_access__SubTermInputVar_75, hlds__make_hlds__field_access__Purity_7, &hlds__make_hlds__field_access__V_80_80, hlds__make_hlds__field_access__FieldSubContext_9, &hlds__make_hlds__field_access__Goals1_81, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_101_101, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_113_113, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_114_114, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_108_108, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17, &hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_116_116, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_110_110, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_117_117, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_102_102, &hlds__make_hlds__field_access__STATE_VARIABLE_Specs_118_118);
            }
#line 252 "field_access.m"
            {
#line 252 "field_access.m"
              hlds__make_hlds__field_access__Goals2_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals2_82, 0) = ((MR_Box) (hlds__make_hlds__field_access__Goal_76));
#line 252 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals2_82, 1) = ((MR_Box) (hlds__make_hlds__field_access__Goals1_81));
#line 252 "field_access.m"
            }
#line 238 "field_access.m"
          }
#line 261 "field_access.m"
        {
#line 261 "field_access.m"
          hlds__make_hlds__field_access__ArgContext_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 261 "field_access.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__field_access__ArgContext_83, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_8));
#line 261 "field_access.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__field_access__ArgContext_83, 1) = ((MR_Box) (hlds__make_hlds__field_access__MainContext_2));
#line 261 "field_access.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__field_access__ArgContext_83, 2) = ((MR_Box) (hlds__make_hlds__field_access__SubContext0_3));
#line 261 "field_access.m"
        }
#line 262 "field_access.m"
        {
#line 262 "field_access.m"
          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__field_access__Context_1, &hlds__make_hlds__field_access__GoalInfo_84);
        }
#line 263 "field_access.m"
        {
#line 263 "field_access.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__field_access__Goals2_82, hlds__make_hlds__field_access__GoalInfo_84, &hlds__make_hlds__field_access__Conj0_85);
        }
#line 264 "field_access.m"
        {
#line 264 "field_access.m"
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__FieldArgs_57, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__ArgContext_83, hlds__make_hlds__field_access__Conj0_85, &hlds__make_hlds__field_access__Conj_86, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_113_113, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_12, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_114_114, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_120_120, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_16, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_116_116, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_117_117, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_20, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_118_118, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_22);
        }
#line 267 "field_access.m"
        {
#line 267 "field_access.m"
          hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(hlds__make_hlds__field_access__Conj_86, hlds__make_hlds__field_access__Goals_10, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_120_120, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_14);
        }
#line 233 "field_access.m"
      }
#line 228 "field_access.m"
  }
#line 218 "field_access.m"
}

#line 130 "field_access.m"
static void MR_CALL 
hlds__make_hlds__field_access__expand_set_field_function_call_2_22_p_0(
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Context_1,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__MainContext_2,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__SubContext0_3,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__HeadVar__4_4,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__FieldValueVar_5,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__TermInputVar_6,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__TermOutputVar_7,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Functor_8,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_9,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Goals_10,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_11,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_12,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_14,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_15,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_16,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_18,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_20,
#line 130 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_21,
#line 130 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_22)
#line 130 "field_access.m"
{
#line 140 "field_access.m"
  {
#line 140 "field_access.m"
    MR_bool hlds__make_hlds__field_access__succeeded;

#line 140 "field_access.m"
    if ((hlds__make_hlds__field_access__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 140 "field_access.m"
      {
#line 141 "field_access.m"
        {
#line 141 "field_access.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.field_access", (MR_String) "predicate \140hlds.make_hlds.field_access.expand_set_field_function_call_2\'/22", (MR_String) "empty list of field names");
#line 141 "field_access.m"
          return;
        }
#line 140 "field_access.m"
      }
#line 140 "field_access.m"
    else
#line 145 "field_access.m"
      {
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__FieldName_56;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__FieldArgs_57;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__FieldNames_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__HeadVar__4_4, (MR_Integer) 1)));
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__FieldArgVars_71;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__Goals1_85;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__ArgContext_87;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__GoalInfo_88;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__Conj0_89;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__Conj_90;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__HeadVar__4_4, (MR_Integer) 0)));
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_104_104;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_105_105;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_106_106;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_130_130;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_131_131;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_132_132;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_133_133;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_134_134;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_135_135;
#line 145 "field_access.m"
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_140_140;

#line 143 "field_access.m"
        hlds__make_hlds__field_access__FieldName_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_103_103, (MR_Integer) 0)));
#line 143 "field_access.m"
        hlds__make_hlds__field_access__FieldArgs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_103_103, (MR_Integer) 1)));
#line 146 "field_access.m"
        {
#line 146 "field_access.m"
          hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__field_access__FieldArgs_57, &hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_15, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_11, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_105_105, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_21, &hlds__make_hlds__field_access__STATE_VARIABLE_Specs_106_106);
        }
#line 173 "field_access.m"
        if ((hlds__make_hlds__field_access__FieldNames_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 174 "field_access.m"
          {
#line 174 "field_access.m"
            MR_Word hlds__make_hlds__field_access__Goal_86;
#line 174 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_107_107;
#line 174 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_108_108;
#line 174 "field_access.m"
            MR_Word hlds__make_hlds__field_access__SetArgs_146;

#line 175 "field_access.m"
            {
#line 175 "field_access.m"
              hlds__make_hlds__field_access__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__field_access__FieldValueVar_5));
#line 175 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "field_access.m"
            }
#line 175 "field_access.m"
            {
#line 175 "field_access.m"
              hlds__make_hlds__field_access__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputVar_6));
#line 175 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_107_107, 1) = ((MR_Box) (hlds__make_hlds__field_access__V_108_108));
#line 175 "field_access.m"
            }
#line 175 "field_access.m"
            {
#line 175 "field_access.m"
              hlds__make_hlds__field_access__SetArgs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__field_access_scalar_common_1[0], hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__V_107_107);
            }
#line 176 "field_access.m"
            {
#line 176 "field_access.m"
              hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 1, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext0_3, hlds__make_hlds__field_access__FieldName_56, hlds__make_hlds__field_access__TermOutputVar_7, hlds__make_hlds__field_access__SetArgs_146, (MR_Integer) 0, hlds__make_hlds__field_access__Functor_8, &hlds__make_hlds__field_access__Goal_86, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_134_134);
            }
#line 179 "field_access.m"
            {
#line 179 "field_access.m"
              MR_Word base;
#line 179 "field_access.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 179 "field_access.m"
              *hlds__make_hlds__field_access__FieldSubContext_9 = base;
#line 179 "field_access.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_8));
#line 179 "field_access.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__field_access__SubContext0_3));
#line 179 "field_access.m"
            }
#line 180 "field_access.m"
            {
#line 180 "field_access.m"
              hlds__make_hlds__field_access__Goals1_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals1_85, 0) = ((MR_Box) (hlds__make_hlds__field_access__Goal_86));
#line 180 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals1_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 180 "field_access.m"
            }
#line 174 "field_access.m"
            hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_130_130 = hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_105_105;
#line 174 "field_access.m"
            hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_131_131 = hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13;
#line 174 "field_access.m"
            hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_132_132 = hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_104_104;
#line 174 "field_access.m"
            hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_133_133 = hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17;
#line 174 "field_access.m"
            hlds__make_hlds__field_access__STATE_VARIABLE_Specs_135_135 = hlds__make_hlds__field_access__STATE_VARIABLE_Specs_106_106;
#line 174 "field_access.m"
          }
#line 173 "field_access.m"
        else
#line 149 "field_access.m"
          {
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__TypeInfo_148_148;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__SubTermInputVar_74;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__SubTermOutputVar_75;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__SetArgs_76;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__UpdateGoal_77;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__GetSubFieldGoal_79;
#line 149 "field_access.m"
            MR_Integer hlds__make_hlds__field_access__SubTermInputArgNumber_80;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__TermInputContext_81;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__SubContext_82;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__Goals0_84;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_114_114;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_116_116;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_117_117;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_121_121;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_123_123;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_125_125;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_126_126;
#line 149 "field_access.m"
            MR_Integer hlds__make_hlds__field_access__V_129_129;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_136_136;
#line 149 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_137_137;
#line 158 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_78_78;
#line 167 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_83_83;

#line 150 "field_access.m"
            {
#line 150 "field_access.m"
              mercury__varset__new_var_3_p_0(hlds__make_hlds__field_access__TypeCtorInfo_147_147, &hlds__make_hlds__field_access__SubTermInputVar_74, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_104_104, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_114_114);
            }
#line 151 "field_access.m"
            {
#line 151 "field_access.m"
              mercury__varset__new_var_3_p_0(hlds__make_hlds__field_access__TypeCtorInfo_147_147, &hlds__make_hlds__field_access__SubTermOutputVar_75, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_114_114, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115);
            }
#line 1371 "hlds.make_hlds.field_access.c"
            hlds__make_hlds__field_access__TypeInfo_148_148 = (MR_Word) &hlds__make_hlds__field_access_scalar_common_1[0];
#line 152 "field_access.m"
            {
#line 152 "field_access.m"
              hlds__make_hlds__field_access__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_117_117, 0) = ((MR_Box) (hlds__make_hlds__field_access__SubTermOutputVar_75));
#line 152 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 152 "field_access.m"
            }
#line 152 "field_access.m"
            {
#line 152 "field_access.m"
              hlds__make_hlds__field_access__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputVar_6));
#line 152 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_116_116, 1) = ((MR_Box) (hlds__make_hlds__field_access__V_117_117));
#line 152 "field_access.m"
            }
#line 152 "field_access.m"
            {
#line 152 "field_access.m"
              hlds__make_hlds__field_access__SetArgs_76 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__field_access__TypeInfo_148_148, hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__V_116_116);
            }
#line 153 "field_access.m"
            {
#line 153 "field_access.m"
              hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 1, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext0_3, hlds__make_hlds__field_access__FieldName_56, hlds__make_hlds__field_access__TermOutputVar_7, hlds__make_hlds__field_access__SetArgs_76, (MR_Integer) 0, hlds__make_hlds__field_access__Functor_8, &hlds__make_hlds__field_access__UpdateGoal_77, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_121_121);
            }
#line 160 "field_access.m"
            {
#line 160 "field_access.m"
              hlds__make_hlds__field_access__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 160 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputVar_6));
#line 160 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 160 "field_access.m"
            }
#line 160 "field_access.m"
            {
#line 160 "field_access.m"
              hlds__make_hlds__field_access__V_123_123 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__field_access__TypeInfo_148_148, hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__V_126_126);
            }
#line 158 "field_access.m"
            {
#line 158 "field_access.m"
              hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 0, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext0_3, hlds__make_hlds__field_access__FieldName_56, hlds__make_hlds__field_access__SubTermInputVar_74, hlds__make_hlds__field_access__V_123_123, (MR_Integer) 0, &hlds__make_hlds__field_access__V_78_78, &hlds__make_hlds__field_access__GetSubFieldGoal_79, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_121_121, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_125_125);
            }
#line 164 "field_access.m"
            {
#line 164 "field_access.m"
              hlds__make_hlds__field_access__V_129_129 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__field_access_scalar_common_1[1], hlds__make_hlds__field_access__FieldArgs_57);
            }
#line 164 "field_access.m"
            hlds__make_hlds__field_access__SubTermInputArgNumber_80 = ((MR_Integer) 2 + hlds__make_hlds__field_access__V_129_129);
#line 165 "field_access.m"
            {
#line 165 "field_access.m"
              hlds__make_hlds__field_access__TermInputContext_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 165 "field_access.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__TermInputContext_81, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_8));
#line 165 "field_access.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__TermInputContext_81, 1) = ((MR_Box) (hlds__make_hlds__field_access__SubTermInputArgNumber_80));
#line 165 "field_access.m"
            }
#line 166 "field_access.m"
            {
#line 166 "field_access.m"
              hlds__make_hlds__field_access__SubContext_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__SubContext_82, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputContext_81));
#line 166 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__SubContext_82, 1) = ((MR_Box) (hlds__make_hlds__field_access__SubContext0_3));
#line 166 "field_access.m"
            }
#line 167 "field_access.m"
            {
#line 167 "field_access.m"
              hlds__make_hlds__field_access__expand_set_field_function_call_2_22_p_0(hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext_82, hlds__make_hlds__field_access__FieldNames_58, hlds__make_hlds__field_access__FieldValueVar_5, hlds__make_hlds__field_access__SubTermInputVar_74, hlds__make_hlds__field_access__SubTermOutputVar_75, &hlds__make_hlds__field_access__V_83_83, hlds__make_hlds__field_access__FieldSubContext_9, &hlds__make_hlds__field_access__Goals0_84, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_105_105, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_130_130, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_131_131, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_132_132, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17, &hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_133_133, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_125_125, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_134_134, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_106_106, &hlds__make_hlds__field_access__STATE_VARIABLE_Specs_135_135);
            }
#line 172 "field_access.m"
            {
#line 172 "field_access.m"
              hlds__make_hlds__field_access__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_136_136, 0) = ((MR_Box) (hlds__make_hlds__field_access__GetSubFieldGoal_79));
#line 172 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__field_access__Goals0_84));
#line 172 "field_access.m"
            }
#line 172 "field_access.m"
            {
#line 172 "field_access.m"
              hlds__make_hlds__field_access__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_137_137, 0) = ((MR_Box) (hlds__make_hlds__field_access__UpdateGoal_77));
#line 172 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 172 "field_access.m"
            }
#line 172 "field_access.m"
            {
#line 172 "field_access.m"
              hlds__make_hlds__field_access__Goals1_85 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__field_access__V_136_136, hlds__make_hlds__field_access__V_137_137);
            }
#line 149 "field_access.m"
          }
#line 182 "field_access.m"
        {
#line 182 "field_access.m"
          hlds__make_hlds__field_access__ArgContext_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 182 "field_access.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__field_access__ArgContext_87, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_8));
#line 182 "field_access.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__field_access__ArgContext_87, 1) = ((MR_Box) (hlds__make_hlds__field_access__MainContext_2));
#line 182 "field_access.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__field_access__ArgContext_87, 2) = ((MR_Box) (hlds__make_hlds__field_access__SubContext0_3));
#line 182 "field_access.m"
        }
#line 183 "field_access.m"
        {
#line 183 "field_access.m"
          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__field_access__Context_1, &hlds__make_hlds__field_access__GoalInfo_88);
        }
#line 184 "field_access.m"
        {
#line 184 "field_access.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__field_access__Goals1_85, hlds__make_hlds__field_access__GoalInfo_88, &hlds__make_hlds__field_access__Conj0_89);
        }
#line 185 "field_access.m"
        {
#line 185 "field_access.m"
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__FieldArgs_57, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__ArgContext_87, hlds__make_hlds__field_access__Conj0_89, &hlds__make_hlds__field_access__Conj_90, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_130_130, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_12, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_131_131, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_140_140, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_132_132, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_16, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_133_133, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_134_134, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_20, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_135_135, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_22);
        }
#line 188 "field_access.m"
        {
#line 188 "field_access.m"
          hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(hlds__make_hlds__field_access__Conj_90, hlds__make_hlds__field_access__Goals_10, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_140_140, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_14);
        }
#line 145 "field_access.m"
      }
#line 140 "field_access.m"
  }
#line 130 "field_access.m"
}

#line 98 "field_access.m"
void MR_CALL 
hlds__make_hlds__field_access__parse_field_list_4_p_0(
#line 98 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Term_5,
#line 98 "field_access.m"
  MR_Word hlds__make_hlds__field_access__VarSet_6,
#line 98 "field_access.m"
  MR_Word hlds__make_hlds__field_access__ContextPieces_7,
#line 98 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__MaybeFieldNames_8)
#line 98 "field_access.m"
{
#line 294 "field_access.m"
  {
#line 294 "field_access.m"
    MR_bool hlds__make_hlds__field_access__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__field_access__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 294 "field_access.m"
    MR_Word hlds__make_hlds__field_access__FieldNameTerm_9;
#line 294 "field_access.m"
    MR_Word hlds__make_hlds__field_access__OtherFieldNamesTerm_10;
#line 295 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_18_18;
#line 295 "field_access.m"
    MR_String hlds__make_hlds__field_access__V_19_19;
#line 295 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_20_20;
#line 295 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_21_21;
#line 295 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_22_22;
#line 295 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_11_11;

#line 295 "field_access.m"
    if (hlds__make_hlds__field_access__succeeded)
#line 295 "field_access.m"
      {
#line 295 "field_access.m"
        hlds__make_hlds__field_access__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Term_5, (MR_Integer) 0)));
#line 295 "field_access.m"
        hlds__make_hlds__field_access__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Term_5, (MR_Integer) 1)));
#line 295 "field_access.m"
        hlds__make_hlds__field_access__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Term_5, (MR_Integer) 2)));
#line 295 "field_access.m"
        hlds__make_hlds__field_access__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__field_access__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 295 "field_access.m"
        if (hlds__make_hlds__field_access__succeeded)
#line 295 "field_access.m"
          {
#line 295 "field_access.m"
            hlds__make_hlds__field_access__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_18_18, (MR_Integer) 0)));
#line 295 "field_access.m"
            hlds__make_hlds__field_access__succeeded = (strcmp(hlds__make_hlds__field_access__V_19_19, (MR_String) "^") == 0);
#line 295 "field_access.m"
            if (hlds__make_hlds__field_access__succeeded)
#line 295 "field_access.m"
              {
#line 296 "field_access.m"
                hlds__make_hlds__field_access__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__field_access__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 296 "field_access.m"
                if (hlds__make_hlds__field_access__succeeded)
#line 296 "field_access.m"
                  {
#line 296 "field_access.m"
                    hlds__make_hlds__field_access__FieldNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_20_20, (MR_Integer) 0)));
#line 296 "field_access.m"
                    hlds__make_hlds__field_access__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_20_20, (MR_Integer) 1)));
#line 296 "field_access.m"
                    hlds__make_hlds__field_access__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__field_access__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 296 "field_access.m"
                    if (hlds__make_hlds__field_access__succeeded)
#line 296 "field_access.m"
                      {
#line 296 "field_access.m"
                        hlds__make_hlds__field_access__OtherFieldNamesTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_21_21, (MR_Integer) 0)));
#line 296 "field_access.m"
                        hlds__make_hlds__field_access__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_21_21, (MR_Integer) 1)));
#line 296 "field_access.m"
                        hlds__make_hlds__field_access__succeeded = (hlds__make_hlds__field_access__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "field_access.m"
                      }
#line 296 "field_access.m"
                  }
#line 295 "field_access.m"
              }
#line 295 "field_access.m"
          }
#line 295 "field_access.m"
      }
#line 294 "field_access.m"
    if (hlds__make_hlds__field_access__succeeded)
#line 298 "field_access.m"
      {
#line 298 "field_access.m"
        MR_Word hlds__make_hlds__field_access__FieldName_12;
#line 298 "field_access.m"
        MR_Word hlds__make_hlds__field_access__Args_13;

#line 298 "field_access.m"
        {
#line 298 "field_access.m"
          hlds__make_hlds__field_access__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__field_access__FieldNameTerm_9, &hlds__make_hlds__field_access__FieldName_12, &hlds__make_hlds__field_access__Args_13);
        }
#line 298 "field_access.m"
        if (hlds__make_hlds__field_access__succeeded)
#line 300 "field_access.m"
          {
#line 300 "field_access.m"
            MR_Word hlds__make_hlds__field_access__MaybeFieldNamesTail_14;

#line 299 "field_access.m"
            {
#line 299 "field_access.m"
              hlds__make_hlds__field_access__parse_field_list_4_p_0(hlds__make_hlds__field_access__OtherFieldNamesTerm_10, hlds__make_hlds__field_access__VarSet_6, hlds__make_hlds__field_access__ContextPieces_7, &hlds__make_hlds__field_access__MaybeFieldNamesTail_14);
            }
#line 304 "field_access.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__field_access__MaybeFieldNamesTail_14)) == (MR_mktag((MR_Integer) 0))))
#line 303 "field_access.m"
              *hlds__make_hlds__field_access__MaybeFieldNames_8 = hlds__make_hlds__field_access__MaybeFieldNamesTail_14;
#line 304 "field_access.m"
            else
#line 305 "field_access.m"
              {
#line 305 "field_access.m"
                MR_Word hlds__make_hlds__field_access__FieldNamesTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__MaybeFieldNamesTail_14, (MR_Integer) 0)));
#line 305 "field_access.m"
                MR_Word hlds__make_hlds__field_access__V_23_23;
#line 305 "field_access.m"
                MR_Word hlds__make_hlds__field_access__V_24_24;

#line 306 "field_access.m"
                {
#line 306 "field_access.m"
                  hlds__make_hlds__field_access__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 306 "field_access.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__field_access__FieldName_12));
#line 306 "field_access.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__field_access__Args_13));
#line 306 "field_access.m"
                }
#line 306 "field_access.m"
                {
#line 306 "field_access.m"
                  hlds__make_hlds__field_access__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "field_access.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_24_24));
#line 306 "field_access.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__field_access__FieldNamesTail_16));
#line 306 "field_access.m"
                }
#line 306 "field_access.m"
                {
#line 306 "field_access.m"
                  MR_Word base;
#line 306 "field_access.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 306 "field_access.m"
                  *hlds__make_hlds__field_access__MaybeFieldNames_8 = base;
#line 306 "field_access.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_23_23));
#line 306 "field_access.m"
                }
#line 305 "field_access.m"
              }
#line 300 "field_access.m"
          }
#line 298 "field_access.m"
        else
#line 310 "field_access.m"
          {
#line 310 "field_access.m"
            MR_Word hlds__make_hlds__field_access__Spec_17;
#line 310 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_25_25;
#line 310 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_26_26;
#line 310 "field_access.m"
            MR_String hlds__make_hlds__field_access__TermStr_47;
#line 310 "field_access.m"
            MR_Word hlds__make_hlds__field_access__Pieces_48;
#line 310 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_50_50;
#line 310 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_52_52;
#line 310 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_55_55;
#line 310 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_56_56;
#line 310 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_65_65;
#line 310 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_66_66;
#line 310 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_67_67;
#line 310 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_68_68;

#line 310 "field_access.m"
            {
#line 310 "field_access.m"
              hlds__make_hlds__field_access__V_25_25 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__field_access__FieldNameTerm_9);
            }
#line 327 "field_access.m"
            {
#line 327 "field_access.m"
              hlds__make_hlds__field_access__TermStr_47 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__field_access__VarSet_6, (MR_Integer) 0, hlds__make_hlds__field_access__Term_5);
            }
#line 330 "field_access.m"
            {
#line 330 "field_access.m"
              hlds__make_hlds__field_access__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "field_access.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__field_access__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 330 "field_access.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__field_access__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__field_access__TermStr_47));
#line 330 "field_access.m"
            }
#line 330 "field_access.m"
            {
#line 330 "field_access.m"
              hlds__make_hlds__field_access__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_56_56));
#line 330 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__field_access_scalar_common_1[6])));
#line 330 "field_access.m"
            }
#line 329 "field_access.m"
            {
#line 329 "field_access.m"
              hlds__make_hlds__field_access__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_52_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__field_access_scalar_common_1[7])));
#line 329 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__field_access__V_55_55));
#line 329 "field_access.m"
            }
#line 328 "field_access.m"
            {
#line 328 "field_access.m"
              hlds__make_hlds__field_access__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__field_access__V_52_52));
#line 328 "field_access.m"
            }
#line 328 "field_access.m"
            {
#line 328 "field_access.m"
              hlds__make_hlds__field_access__Pieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__field_access__ContextPieces_7, hlds__make_hlds__field_access__V_50_50);
            }
#line 332 "field_access.m"
            {
#line 332 "field_access.m"
              hlds__make_hlds__field_access__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 332 "field_access.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__field_access__Pieces_48));
#line 332 "field_access.m"
            }
#line 332 "field_access.m"
            {
#line 332 "field_access.m"
              hlds__make_hlds__field_access__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_68_68));
#line 332 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "field_access.m"
            }
#line 332 "field_access.m"
            {
#line 332 "field_access.m"
              hlds__make_hlds__field_access__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 332 "field_access.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_25_25));
#line 332 "field_access.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__field_access__V_67_67));
#line 332 "field_access.m"
            }
#line 332 "field_access.m"
            {
#line 332 "field_access.m"
              hlds__make_hlds__field_access__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_66_66));
#line 332 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 332 "field_access.m"
            }
#line 331 "field_access.m"
            {
#line 331 "field_access.m"
              hlds__make_hlds__field_access__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 331 "field_access.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 331 "field_access.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 331 "field_access.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__field_access__V_65_65));
#line 331 "field_access.m"
            }
#line 311 "field_access.m"
            {
#line 311 "field_access.m"
              hlds__make_hlds__field_access__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__field_access__Spec_17));
#line 311 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 311 "field_access.m"
            }
#line 311 "field_access.m"
            {
#line 311 "field_access.m"
              MR_Word base;
#line 311 "field_access.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 311 "field_access.m"
              *hlds__make_hlds__field_access__MaybeFieldNames_8 = base;
#line 311 "field_access.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_26_26));
#line 311 "field_access.m"
            }
#line 310 "field_access.m"
          }
#line 298 "field_access.m"
      }
#line 294 "field_access.m"
    else
#line 314 "field_access.m"
      {
#line 314 "field_access.m"
        MR_Word hlds__make_hlds__field_access__FieldName_35;
#line 314 "field_access.m"
        MR_Word hlds__make_hlds__field_access__Args_36;

#line 314 "field_access.m"
        {
#line 314 "field_access.m"
          hlds__make_hlds__field_access__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__field_access__Term_5, &hlds__make_hlds__field_access__FieldName_35, &hlds__make_hlds__field_access__Args_36);
        }
#line 314 "field_access.m"
        if (hlds__make_hlds__field_access__succeeded)
#line 315 "field_access.m"
          {
#line 315 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_28_28;
#line 315 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_29_29;

#line 315 "field_access.m"
            {
#line 315 "field_access.m"
              hlds__make_hlds__field_access__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 315 "field_access.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_29_29, 0) = ((MR_Box) (hlds__make_hlds__field_access__FieldName_35));
#line 315 "field_access.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_29_29, 1) = ((MR_Box) (hlds__make_hlds__field_access__Args_36));
#line 315 "field_access.m"
            }
#line 315 "field_access.m"
            {
#line 315 "field_access.m"
              hlds__make_hlds__field_access__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_28_28, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_29_29));
#line 315 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "field_access.m"
            }
#line 315 "field_access.m"
            {
#line 315 "field_access.m"
              MR_Word base;
#line 315 "field_access.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 315 "field_access.m"
              *hlds__make_hlds__field_access__MaybeFieldNames_8 = base;
#line 315 "field_access.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_28_28));
#line 315 "field_access.m"
            }
#line 315 "field_access.m"
          }
#line 314 "field_access.m"
        else
#line 318 "field_access.m"
          {
#line 318 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_31_31;
#line 318 "field_access.m"
            MR_Word hlds__make_hlds__field_access__V_32_32;
#line 318 "field_access.m"
            MR_Word hlds__make_hlds__field_access__Spec_34;

#line 317 "field_access.m"
            {
#line 317 "field_access.m"
              hlds__make_hlds__field_access__V_31_31 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__field_access__Term_5);
            }
#line 317 "field_access.m"
            {
#line 317 "field_access.m"
              hlds__make_hlds__field_access__Spec_34 = hlds__make_hlds__field_access__make_field_list_error_4_f_0(hlds__make_hlds__field_access__VarSet_6, hlds__make_hlds__field_access__V_31_31, hlds__make_hlds__field_access__Term_5, hlds__make_hlds__field_access__ContextPieces_7);
            }
#line 319 "field_access.m"
            {
#line 319 "field_access.m"
              hlds__make_hlds__field_access__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__field_access__Spec_34));
#line 319 "field_access.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "field_access.m"
            }
#line 319 "field_access.m"
            {
#line 319 "field_access.m"
              MR_Word base;
#line 319 "field_access.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 319 "field_access.m"
              *hlds__make_hlds__field_access__MaybeFieldNames_8 = base;
#line 319 "field_access.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__field_access__V_32_32));
#line 319 "field_access.m"
            }
#line 318 "field_access.m"
          }
#line 314 "field_access.m"
      }
#line 294 "field_access.m"
  }
#line 98 "field_access.m"
}

#line 95 "field_access.m"
MR_bool MR_CALL 
hlds__make_hlds__field_access__maybe_parse_field_list_3_p_0(
#line 95 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Term_4,
#line 95 "field_access.m"
  MR_Word hlds__make_hlds__field_access__VarSet_5,
#line 95 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__FieldNames_6)
#line 95 "field_access.m"
{
#line 284 "field_access.m"
  {
#line 284 "field_access.m"
    MR_bool hlds__make_hlds__field_access__succeeded;
#line 284 "field_access.m"
    MR_Word hlds__make_hlds__field_access__MaybeFieldNames_8;

#line 290 "field_access.m"
    {
#line 290 "field_access.m"
      hlds__make_hlds__field_access__parse_field_list_4_p_0(hlds__make_hlds__field_access__Term_4, hlds__make_hlds__field_access__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__field_access__MaybeFieldNames_8);
    }
#line 291 "field_access.m"
    hlds__make_hlds__field_access__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__field_access__MaybeFieldNames_8)) == (MR_mktag((MR_Integer) 1)));
#line 291 "field_access.m"
    if (hlds__make_hlds__field_access__succeeded)
#line 291 "field_access.m"
      *hlds__make_hlds__field_access__FieldNames_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__MaybeFieldNames_8, (MR_Integer) 0)));
#line 284 "field_access.m"
    return hlds__make_hlds__field_access__succeeded;
#line 284 "field_access.m"
  }
#line 95 "field_access.m"
}

#line 86 "field_access.m"
void MR_CALL 
hlds__make_hlds__field_access__expand_get_field_function_call_22_p_0(
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Context_23,
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__MainContext_24,
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__SubContext0_25,
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__FieldNames_26,
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__FieldValueVar_27,
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__TermInputVar_28,
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Purity_29,
#line 86 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Functor_30,
#line 86 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_31,
#line 86 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Goal_32,
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_41,
#line 86 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_42,
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_43,
#line 86 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_44,
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_45,
#line 86 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_46,
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_47,
#line 86 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_48,
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_49,
#line 86 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_50,
#line 86 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_51,
#line 86 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_52)
#line 86 "field_access.m"
{
#line 210 "field_access.m"
  {
#line 210 "field_access.m"
    MR_bool hlds__make_hlds__field_access__succeeded;
#line 210 "field_access.m"
    MR_Word hlds__make_hlds__field_access__Goals_39;
#line 210 "field_access.m"
    MR_Word hlds__make_hlds__field_access__GoalInfo_40;

#line 211 "field_access.m"
    {
#line 211 "field_access.m"
      hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(hlds__make_hlds__field_access__Context_23, hlds__make_hlds__field_access__MainContext_24, hlds__make_hlds__field_access__SubContext0_25, hlds__make_hlds__field_access__FieldNames_26, hlds__make_hlds__field_access__FieldValueVar_27, hlds__make_hlds__field_access__TermInputVar_28, hlds__make_hlds__field_access__Purity_29, hlds__make_hlds__field_access__Functor_30, hlds__make_hlds__field_access__FieldSubContext_31, &hlds__make_hlds__field_access__Goals_39, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_41, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_42, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_43, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_44, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_45, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_46, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_50, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_52);
    }
#line 215 "field_access.m"
    {
#line 215 "field_access.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__field_access__Context_23, &hlds__make_hlds__field_access__GoalInfo_40);
    }
#line 216 "field_access.m"
    {
#line 216 "field_access.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__field_access__Goals_39, hlds__make_hlds__field_access__GoalInfo_40, hlds__make_hlds__field_access__Goal_32);
    }
#line 210 "field_access.m"
  }
#line 86 "field_access.m"
}

#line 67 "field_access.m"
void MR_CALL 
hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Context_23,
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__MainContext_24,
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__SubContext_25,
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__FieldNames_26,
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__FieldValueVar_27,
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__TermInputVar_28,
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__TermOutputVar_29,
#line 67 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Functor_30,
#line 67 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_31,
#line 67 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Goal_32,
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_43,
#line 67 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_44,
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_45,
#line 67 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_46,
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_47,
#line 67 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_48,
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_49,
#line 67 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_50,
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_51,
#line 67 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_52,
#line 67 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_53,
#line 67 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_54)
#line 67 "field_access.m"
{
#line 193 "field_access.m"
  {
#line 193 "field_access.m"
    MR_bool hlds__make_hlds__field_access__succeeded;
#line 193 "field_access.m"
    MR_Word hlds__make_hlds__field_access__UnifyDCG_39;
#line 193 "field_access.m"
    MR_Word hlds__make_hlds__field_access__Goals1_40;
#line 193 "field_access.m"
    MR_Word hlds__make_hlds__field_access__Goals_41;
#line 193 "field_access.m"
    MR_Word hlds__make_hlds__field_access__GoalInfo_42;
#line 193 "field_access.m"
    MR_Word hlds__make_hlds__field_access__V_55_55;
#line 193 "field_access.m"
    MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_56_56;

#line 195 "field_access.m"
    {
#line 195 "field_access.m"
      hlds__make_hlds__field_access__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 195 "field_access.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputVar_28));
#line 195 "field_access.m"
    }
#line 195 "field_access.m"
    {
#line 195 "field_access.m"
      hlds__make_hlds__qual_info__make_atomic_unification_8_p_0(hlds__make_hlds__field_access__TermOutputVar_29, hlds__make_hlds__field_access__V_55_55, hlds__make_hlds__field_access__Context_23, hlds__make_hlds__field_access__MainContext_24, hlds__make_hlds__field_access__SubContext_25, &hlds__make_hlds__field_access__UnifyDCG_39, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_51, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_56_56);
    }
#line 199 "field_access.m"
    {
#line 199 "field_access.m"
      hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(hlds__make_hlds__field_access__Context_23, hlds__make_hlds__field_access__MainContext_24, hlds__make_hlds__field_access__SubContext_25, hlds__make_hlds__field_access__FieldNames_26, hlds__make_hlds__field_access__FieldValueVar_27, hlds__make_hlds__field_access__TermOutputVar_29, (MR_Integer) 0, hlds__make_hlds__field_access__Functor_30, hlds__make_hlds__field_access__FieldSubContext_31, &hlds__make_hlds__field_access__Goals1_40, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_43, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_44, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_45, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_46, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_47, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_48, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_49, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_50, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_56_56, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_52, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_53, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_54);
    }
#line 203 "field_access.m"
    {
#line 203 "field_access.m"
      hlds__make_hlds__field_access__Goals_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals_41, 0) = ((MR_Box) (hlds__make_hlds__field_access__UnifyDCG_39));
#line 203 "field_access.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals_41, 1) = ((MR_Box) (hlds__make_hlds__field_access__Goals1_40));
#line 203 "field_access.m"
    }
#line 204 "field_access.m"
    {
#line 204 "field_access.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__field_access__Context_23, &hlds__make_hlds__field_access__GoalInfo_42);
    }
#line 205 "field_access.m"
    {
#line 205 "field_access.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__field_access__Goals_41, hlds__make_hlds__field_access__GoalInfo_42, hlds__make_hlds__field_access__Goal_32);
    }
#line 193 "field_access.m"
  }
#line 67 "field_access.m"
}

#line 46 "field_access.m"
void MR_CALL 
hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__Context_23,
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__MainContext_24,
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__SubContext0_25,
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__FieldNames_26,
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__FieldValueVar_27,
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__TermInputVar_28,
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__TermOutputVar_29,
#line 46 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Functor_30,
#line 46 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_31,
#line 46 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__Goal_32,
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_41,
#line 46 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_42,
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_43,
#line 46 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_44,
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_45,
#line 46 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_46,
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_47,
#line 46 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_48,
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_49,
#line 46 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_50,
#line 46 "field_access.m"
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_51,
#line 46 "field_access.m"
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_52)
#line 46 "field_access.m"
{
#line 122 "field_access.m"
  {
#line 122 "field_access.m"
    MR_bool hlds__make_hlds__field_access__succeeded;
#line 122 "field_access.m"
    MR_Word hlds__make_hlds__field_access__Goals_39;
#line 122 "field_access.m"
    MR_Word hlds__make_hlds__field_access__GoalInfo_40;

#line 123 "field_access.m"
    {
#line 123 "field_access.m"
      hlds__make_hlds__field_access__expand_set_field_function_call_2_22_p_0(hlds__make_hlds__field_access__Context_23, hlds__make_hlds__field_access__MainContext_24, hlds__make_hlds__field_access__SubContext0_25, hlds__make_hlds__field_access__FieldNames_26, hlds__make_hlds__field_access__FieldValueVar_27, hlds__make_hlds__field_access__TermInputVar_28, hlds__make_hlds__field_access__TermOutputVar_29, hlds__make_hlds__field_access__Functor_30, hlds__make_hlds__field_access__FieldSubContext_31, &hlds__make_hlds__field_access__Goals_39, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_41, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_42, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_43, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_44, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_45, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_46, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_50, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_52);
    }
#line 127 "field_access.m"
    {
#line 127 "field_access.m"
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__field_access__Context_23, &hlds__make_hlds__field_access__GoalInfo_40);
    }
#line 128 "field_access.m"
    {
#line 128 "field_access.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__field_access__Goals_39, hlds__make_hlds__field_access__GoalInfo_40, hlds__make_hlds__field_access__Goal_32);
    }
#line 122 "field_access.m"
  }
#line 46 "field_access.m"
}

void mercury__hlds__make_hlds__field_access__init(void)
{
}

void mercury__hlds__make_hlds__field_access__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__field_access__hlds__make_hlds__field_access__type_ctor_info_field_list_0);
}

void mercury__hlds__make_hlds__field_access__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.field_access. */
