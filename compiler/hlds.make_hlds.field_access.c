/*
** Automatically generated from `field_access.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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
#include "check_hlds.proc_requests.mih"
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
#include "parse_tree.parse_sym_name.mih"
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




static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__field_access__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_Word MR_CALL 
hlds__make_hlds__field_access__make_field_list_error_4_f_0(
  MR_Word hlds__make_hlds__field_access__VarSet_6,
  MR_Word hlds__make_hlds__field_access__Context_7,
  MR_Word hlds__make_hlds__field_access__Term_8,
  MR_Word hlds__make_hlds__field_access__ContextPieces_9);

static void MR_CALL 
hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(
  MR_Word hlds__make_hlds__field_access__Context_1,
  MR_Word hlds__make_hlds__field_access__MainContext_2,
  MR_Word hlds__make_hlds__field_access__SubContext0_3,
  MR_Word hlds__make_hlds__field_access__HeadVar__4_4,
  MR_Word hlds__make_hlds__field_access__FieldValueVar_5,
  MR_Word hlds__make_hlds__field_access__TermInputVar_6,
  MR_Word hlds__make_hlds__field_access__Purity_7,
  MR_Word * hlds__make_hlds__field_access__Functor_8,
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_9,
  MR_Word * hlds__make_hlds__field_access__Goals_10,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_11,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_12,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_14,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_15,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_16,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_18,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_20,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__field_access__expand_set_field_function_call_2_22_p_0(
  MR_Word hlds__make_hlds__field_access__Context_1,
  MR_Word hlds__make_hlds__field_access__MainContext_2,
  MR_Word hlds__make_hlds__field_access__SubContext0_3,
  MR_Word hlds__make_hlds__field_access__HeadVar__4_4,
  MR_Word hlds__make_hlds__field_access__FieldValueVar_5,
  MR_Word hlds__make_hlds__field_access__TermInputVar_6,
  MR_Word hlds__make_hlds__field_access__TermOutputVar_7,
  MR_Word * hlds__make_hlds__field_access__Functor_8,
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_9,
  MR_Word * hlds__make_hlds__field_access__Goals_10,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_11,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_12,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_14,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_15,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_16,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_18,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_20,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0(
  MR_Word hlds__make_hlds__field_access__AccessType_13,
  MR_Word hlds__make_hlds__field_access__Context_14,
  MR_Word hlds__make_hlds__field_access__MainContext_15,
  MR_Word hlds__make_hlds__field_access__SubContext_16,
  MR_Word hlds__make_hlds__field_access__FieldName_17,
  MR_Word hlds__make_hlds__field_access__RetArg_18,
  MR_Word hlds__make_hlds__field_access__Args_19,
  MR_Word hlds__make_hlds__field_access__Purity_20,
  MR_Word * hlds__make_hlds__field_access__Functor_21,
  MR_Word * hlds__make_hlds__field_access__Goal_22,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_26,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_27);

static MR_bool MR_CALL 
hlds__make_hlds__field_access____Unify____field_list_0_0_10001(
  MR_Box hlds__make_hlds__field_access__wrapper_arg_1,
  MR_Box hlds__make_hlds__field_access__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__field_access____Compare____field_list_0_0_10001(
  MR_Box * hlds__make_hlds__field_access__wrapper_arg_1,
  MR_Box hlds__make_hlds__field_access__wrapper_arg_2,
  MR_Box hlds__make_hlds__field_access__wrapper_arg_3);


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
    ((MR_Box) ((MR_String) "Error: expected field name, found"))
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



static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__field_access__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__field_access__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &hlds__make_hlds__field_access__list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__field_access__list__ti_list_1pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__field_access__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__field_access__hlds__make_hlds__field_access__type_ctor_info_field_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

void MR_CALL 
hlds__make_hlds__field_access____Compare____field_list_0_0(
  MR_Word * hlds__make_hlds__field_access__HeadVar__1_1,
  MR_Word hlds__make_hlds__field_access__HeadVar__2_2,
  MR_Word hlds__make_hlds__field_access__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__field_access__succeeded;
    MR_Word hlds__make_hlds__field_access__Cast_HeadVar1_4 = hlds__make_hlds__field_access__HeadVar__2_2;
    MR_Word hlds__make_hlds__field_access__Cast_HeadVar2_5 = hlds__make_hlds__field_access__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__field_access_scalar_common_1[3], hlds__make_hlds__field_access__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__field_access__Cast_HeadVar1_4)), ((MR_Box) (hlds__make_hlds__field_access__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__field_access____Unify____field_list_0_0(
  MR_Word hlds__make_hlds__field_access__HeadVar__1_1,
  MR_Word hlds__make_hlds__field_access__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__field_access__succeeded;
    MR_Word hlds__make_hlds__field_access__Cast_HeadVar1_3 = hlds__make_hlds__field_access__HeadVar__1_1;
    MR_Word hlds__make_hlds__field_access__Cast_HeadVar2_4 = hlds__make_hlds__field_access__HeadVar__2_2;

    {
      hlds__make_hlds__field_access__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__field_access_scalar_common_1[3], ((MR_Box) (hlds__make_hlds__field_access__Cast_HeadVar1_3)), ((MR_Box) (hlds__make_hlds__field_access__Cast_HeadVar2_4)));
    }
    return hlds__make_hlds__field_access__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__field_access__parse_field_list_4_p_0(
  MR_Word hlds__make_hlds__field_access__Term_5,
  MR_Word hlds__make_hlds__field_access__VarSet_6,
  MR_Word hlds__make_hlds__field_access__ContextPieces_7,
  MR_Word * hlds__make_hlds__field_access__MaybeFieldNames_8)
{
  {
    MR_bool hlds__make_hlds__field_access__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__field_access__Term_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word hlds__make_hlds__field_access__FieldNameTerm_9;
    MR_Word hlds__make_hlds__field_access__OtherFieldNamesTerm_10;
    MR_Word hlds__make_hlds__field_access__Var_18;
    MR_String hlds__make_hlds__field_access__Var_19;
    MR_Word hlds__make_hlds__field_access__Var_20;
    MR_Word hlds__make_hlds__field_access__Var_21;
    MR_Word hlds__make_hlds__field_access__Var_22;
    MR_Word hlds__make_hlds__field_access__Var_11;

    if (hlds__make_hlds__field_access__succeeded)
      {
        hlds__make_hlds__field_access__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Term_5, (MR_Integer) 0)));
        hlds__make_hlds__field_access__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Term_5, (MR_Integer) 1)));
        hlds__make_hlds__field_access__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Term_5, (MR_Integer) 2)));
        hlds__make_hlds__field_access__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__field_access__Var_18)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__make_hlds__field_access__succeeded)
          {
            hlds__make_hlds__field_access__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_18, (MR_Integer) 0)));
            hlds__make_hlds__field_access__succeeded = (strcmp(hlds__make_hlds__field_access__Var_19, (MR_String) "^") == 0);
            if (hlds__make_hlds__field_access__succeeded)
              {
                hlds__make_hlds__field_access__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__field_access__Var_20)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__field_access__succeeded)
                  {
                    hlds__make_hlds__field_access__FieldNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_20, (MR_Integer) 0)));
                    hlds__make_hlds__field_access__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_20, (MR_Integer) 1)));
                    hlds__make_hlds__field_access__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__field_access__Var_21)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__field_access__succeeded)
                      {
                        hlds__make_hlds__field_access__OtherFieldNamesTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_21, (MR_Integer) 0)));
                        hlds__make_hlds__field_access__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_21, (MR_Integer) 1)));
                        hlds__make_hlds__field_access__succeeded = (hlds__make_hlds__field_access__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                  }
              }
          }
      }
    if (hlds__make_hlds__field_access__succeeded)
      {
        MR_Word hlds__make_hlds__field_access__FieldName_12;
        MR_Word hlds__make_hlds__field_access__Args_13;

        {
          hlds__make_hlds__field_access__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__field_access__FieldNameTerm_9, &hlds__make_hlds__field_access__FieldName_12, &hlds__make_hlds__field_access__Args_13);
        }
        if (hlds__make_hlds__field_access__succeeded)
          {
            MR_Word hlds__make_hlds__field_access__MaybeFieldNamesTail_14;

            {
              hlds__make_hlds__field_access__parse_field_list_4_p_0(hlds__make_hlds__field_access__OtherFieldNamesTerm_10, hlds__make_hlds__field_access__VarSet_6, hlds__make_hlds__field_access__ContextPieces_7, &hlds__make_hlds__field_access__MaybeFieldNamesTail_14);
            }
            if (((MR_tag((MR_Word) hlds__make_hlds__field_access__MaybeFieldNamesTail_14)) == (MR_mktag((MR_Integer) 0))))
              *hlds__make_hlds__field_access__MaybeFieldNames_8 = hlds__make_hlds__field_access__MaybeFieldNamesTail_14;
            else
              {
                MR_Word hlds__make_hlds__field_access__FieldNamesTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__MaybeFieldNamesTail_14, (MR_Integer) 0)));
                MR_Word hlds__make_hlds__field_access__Var_23;
                MR_Word hlds__make_hlds__field_access__Var_24;

                {
                  hlds__make_hlds__field_access__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_24, 0) = ((MR_Box) (hlds__make_hlds__field_access__FieldName_12));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_24, 1) = ((MR_Box) (hlds__make_hlds__field_access__Args_13));
                }
                {
                  hlds__make_hlds__field_access__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_23, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_24));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_23, 1) = ((MR_Box) (hlds__make_hlds__field_access__FieldNamesTail_16));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__field_access__MaybeFieldNames_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_23));
                }
              }
          }
        else
          {
            MR_Word hlds__make_hlds__field_access__Spec_17;
            MR_Word hlds__make_hlds__field_access__Var_25;
            MR_Word hlds__make_hlds__field_access__Var_26;
            MR_String hlds__make_hlds__field_access__TermStr_47;
            MR_Word hlds__make_hlds__field_access__Pieces_48;
            MR_Word hlds__make_hlds__field_access__Var_50;
            MR_Word hlds__make_hlds__field_access__Var_52;
            MR_Word hlds__make_hlds__field_access__Var_55;
            MR_Word hlds__make_hlds__field_access__Var_56;
            MR_Word hlds__make_hlds__field_access__Var_65;
            MR_Word hlds__make_hlds__field_access__Var_66;
            MR_Word hlds__make_hlds__field_access__Var_67;
            MR_Word hlds__make_hlds__field_access__Var_68;

            {
              hlds__make_hlds__field_access__Var_25 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__field_access__FieldNameTerm_9);
            }
            {
              hlds__make_hlds__field_access__TermStr_47 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__field_access__VarSet_6, (MR_Integer) 0, hlds__make_hlds__field_access__Term_5);
            }
            {
              hlds__make_hlds__field_access__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__field_access__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__field_access__Var_56, 1) = ((MR_Box) (hlds__make_hlds__field_access__TermStr_47));
            }
            {
              hlds__make_hlds__field_access__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_55, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_56));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__field_access_scalar_common_1[6])));
            }
            {
              hlds__make_hlds__field_access__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__field_access_scalar_common_1[7])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_52, 1) = ((MR_Box) (hlds__make_hlds__field_access__Var_55));
            }
            {
              hlds__make_hlds__field_access__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_50, 1) = ((MR_Box) (hlds__make_hlds__field_access__Var_52));
            }
            {
              hlds__make_hlds__field_access__Pieces_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__field_access__ContextPieces_7, hlds__make_hlds__field_access__Var_50);
            }
            {
              hlds__make_hlds__field_access__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_68, 0) = ((MR_Box) (hlds__make_hlds__field_access__Pieces_48));
            }
            {
              hlds__make_hlds__field_access__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_67, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_68));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__field_access__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_66, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_25));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_66, 1) = ((MR_Box) (hlds__make_hlds__field_access__Var_67));
            }
            {
              hlds__make_hlds__field_access__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_65, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_66));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__field_access__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__field_access__Var_65));
            }
            {
              hlds__make_hlds__field_access__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_26, 0) = ((MR_Box) (hlds__make_hlds__field_access__Spec_17));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *hlds__make_hlds__field_access__MaybeFieldNames_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_26));
            }
          }
      }
    else
      {
        MR_Word hlds__make_hlds__field_access__FieldName_35;
        MR_Word hlds__make_hlds__field_access__Args_36;

        {
          hlds__make_hlds__field_access__succeeded = parse_tree__parse_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__field_access__Term_5, &hlds__make_hlds__field_access__FieldName_35, &hlds__make_hlds__field_access__Args_36);
        }
        if (hlds__make_hlds__field_access__succeeded)
          {
            MR_Word hlds__make_hlds__field_access__Var_28;
            MR_Word hlds__make_hlds__field_access__Var_29;

            {
              hlds__make_hlds__field_access__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_29, 0) = ((MR_Box) (hlds__make_hlds__field_access__FieldName_35));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_29, 1) = ((MR_Box) (hlds__make_hlds__field_access__Args_36));
            }
            {
              hlds__make_hlds__field_access__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_28, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_29));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__field_access__MaybeFieldNames_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_28));
            }
          }
        else
          {
            MR_Word hlds__make_hlds__field_access__Var_31;
            MR_Word hlds__make_hlds__field_access__Var_32;
            MR_Word hlds__make_hlds__field_access__Spec_34;

            {
              hlds__make_hlds__field_access__Var_31 = mercury__term__get_term_context_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__field_access__Term_5);
            }
            {
              hlds__make_hlds__field_access__Spec_34 = hlds__make_hlds__field_access__make_field_list_error_4_f_0(hlds__make_hlds__field_access__VarSet_6, hlds__make_hlds__field_access__Var_31, hlds__make_hlds__field_access__Term_5, hlds__make_hlds__field_access__ContextPieces_7);
            }
            {
              hlds__make_hlds__field_access__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_32, 0) = ((MR_Box) (hlds__make_hlds__field_access__Spec_34));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *hlds__make_hlds__field_access__MaybeFieldNames_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_32));
            }
          }
      }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__field_access__make_field_list_error_4_f_0(
  MR_Word hlds__make_hlds__field_access__VarSet_6,
  MR_Word hlds__make_hlds__field_access__Context_7,
  MR_Word hlds__make_hlds__field_access__Term_8,
  MR_Word hlds__make_hlds__field_access__ContextPieces_9)
{
  {
    MR_bool hlds__make_hlds__field_access__succeeded;
    MR_Word hlds__make_hlds__field_access__Spec_10;
    MR_String hlds__make_hlds__field_access__TermStr_11;
    MR_Word hlds__make_hlds__field_access__Pieces_12;
    MR_Word hlds__make_hlds__field_access__Var_14;
    MR_Word hlds__make_hlds__field_access__Var_16;
    MR_Word hlds__make_hlds__field_access__Var_19;
    MR_Word hlds__make_hlds__field_access__Var_20;
    MR_Word hlds__make_hlds__field_access__Var_29;
    MR_Word hlds__make_hlds__field_access__Var_30;
    MR_Word hlds__make_hlds__field_access__Var_31;
    MR_Word hlds__make_hlds__field_access__Var_32;

    {
      hlds__make_hlds__field_access__TermStr_11 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__field_access__VarSet_6, (MR_Integer) 0, hlds__make_hlds__field_access__Term_8);
    }
    {
      hlds__make_hlds__field_access__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__field_access__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__field_access__Var_20, 1) = ((MR_Box) (hlds__make_hlds__field_access__TermStr_11));
    }
    {
      hlds__make_hlds__field_access__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_19, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_20));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__field_access_scalar_common_1[6])));
    }
    {
      hlds__make_hlds__field_access__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__field_access_scalar_common_1[7])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_16, 1) = ((MR_Box) (hlds__make_hlds__field_access__Var_19));
    }
    {
      hlds__make_hlds__field_access__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_14, 1) = ((MR_Box) (hlds__make_hlds__field_access__Var_16));
    }
    {
      hlds__make_hlds__field_access__Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__field_access__ContextPieces_9, hlds__make_hlds__field_access__Var_14);
    }
    {
      hlds__make_hlds__field_access__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_32, 0) = ((MR_Box) (hlds__make_hlds__field_access__Pieces_12));
    }
    {
      hlds__make_hlds__field_access__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_31, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_32));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__field_access__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_30, 0) = ((MR_Box) (hlds__make_hlds__field_access__Context_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_30, 1) = ((MR_Box) (hlds__make_hlds__field_access__Var_31));
    }
    {
      hlds__make_hlds__field_access__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_29, 0) = ((MR_Box) (hlds__make_hlds__field_access__Var_30));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__field_access__Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Spec_10, 2) = ((MR_Box) (hlds__make_hlds__field_access__Var_29));
    }
    return hlds__make_hlds__field_access__Spec_10;
  }
}

void MR_CALL 
hlds__make_hlds__field_access__expand_get_field_function_call_22_p_0(
  MR_Word hlds__make_hlds__field_access__Context_23,
  MR_Word hlds__make_hlds__field_access__MainContext_24,
  MR_Word hlds__make_hlds__field_access__SubContext0_25,
  MR_Word hlds__make_hlds__field_access__FieldNames_26,
  MR_Word hlds__make_hlds__field_access__FieldValueVar_27,
  MR_Word hlds__make_hlds__field_access__TermInputVar_28,
  MR_Word hlds__make_hlds__field_access__Purity_29,
  MR_Word * hlds__make_hlds__field_access__Functor_30,
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_31,
  MR_Word * hlds__make_hlds__field_access__Goal_32,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_41,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_42,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_43,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_44,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_45,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_46,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_48,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_49,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_50,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_51,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_52)
{
  {
    MR_bool hlds__make_hlds__field_access__succeeded;
    MR_Word hlds__make_hlds__field_access__Goals_39;
    MR_Word hlds__make_hlds__field_access__GoalInfo_40;

    {
      hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(hlds__make_hlds__field_access__Context_23, hlds__make_hlds__field_access__MainContext_24, hlds__make_hlds__field_access__SubContext0_25, hlds__make_hlds__field_access__FieldNames_26, hlds__make_hlds__field_access__FieldValueVar_27, hlds__make_hlds__field_access__TermInputVar_28, hlds__make_hlds__field_access__Purity_29, hlds__make_hlds__field_access__Functor_30, hlds__make_hlds__field_access__FieldSubContext_31, &hlds__make_hlds__field_access__Goals_39, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_41, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_42, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_43, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_44, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_45, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_46, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_50, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_52);
    }
    {
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__field_access__Context_23, &hlds__make_hlds__field_access__GoalInfo_40);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__field_access__Goals_39, hlds__make_hlds__field_access__GoalInfo_40, hlds__make_hlds__field_access__Goal_32);
    }
  }
}

void MR_CALL 
hlds__make_hlds__field_access__expand_dcg_field_extraction_goal_22_p_0(
  MR_Word hlds__make_hlds__field_access__Context_23,
  MR_Word hlds__make_hlds__field_access__MainContext_24,
  MR_Word hlds__make_hlds__field_access__SubContext_25,
  MR_Word hlds__make_hlds__field_access__FieldNames_26,
  MR_Word hlds__make_hlds__field_access__FieldValueVar_27,
  MR_Word hlds__make_hlds__field_access__TermInputVar_28,
  MR_Word hlds__make_hlds__field_access__TermOutputVar_29,
  MR_Word * hlds__make_hlds__field_access__Functor_30,
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_31,
  MR_Word * hlds__make_hlds__field_access__Goal_32,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_43,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_44,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_45,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_46,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_47,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_48,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_49,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_50,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_51,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_52,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_53,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_54)
{
  {
    MR_bool hlds__make_hlds__field_access__succeeded;
    MR_Word hlds__make_hlds__field_access__UnifyDCG_39;
    MR_Word hlds__make_hlds__field_access__Goals1_40;
    MR_Word hlds__make_hlds__field_access__Goals_41;
    MR_Word hlds__make_hlds__field_access__GoalInfo_42;
    MR_Word hlds__make_hlds__field_access__Var_55;
    MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_56_56;

    {
      hlds__make_hlds__field_access__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_55, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputVar_28));
    }
    {
      hlds__make_hlds__qual_info__make_atomic_unification_8_p_0(hlds__make_hlds__field_access__TermOutputVar_29, hlds__make_hlds__field_access__Var_55, hlds__make_hlds__field_access__Context_23, hlds__make_hlds__field_access__MainContext_24, hlds__make_hlds__field_access__SubContext_25, &hlds__make_hlds__field_access__UnifyDCG_39, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_51, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_56_56);
    }
    {
      hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(hlds__make_hlds__field_access__Context_23, hlds__make_hlds__field_access__MainContext_24, hlds__make_hlds__field_access__SubContext_25, hlds__make_hlds__field_access__FieldNames_26, hlds__make_hlds__field_access__FieldValueVar_27, hlds__make_hlds__field_access__TermOutputVar_29, (MR_Integer) 0, hlds__make_hlds__field_access__Functor_30, hlds__make_hlds__field_access__FieldSubContext_31, &hlds__make_hlds__field_access__Goals1_40, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_43, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_44, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_45, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_46, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_47, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_48, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_49, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_50, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_56_56, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_52, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_53, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_54);
    }
    {
      hlds__make_hlds__field_access__Goals_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals_41, 0) = ((MR_Box) (hlds__make_hlds__field_access__UnifyDCG_39));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals_41, 1) = ((MR_Box) (hlds__make_hlds__field_access__Goals1_40));
    }
    {
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__field_access__Context_23, &hlds__make_hlds__field_access__GoalInfo_42);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__field_access__Goals_41, hlds__make_hlds__field_access__GoalInfo_42, hlds__make_hlds__field_access__Goal_32);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(
  MR_Word hlds__make_hlds__field_access__Context_1,
  MR_Word hlds__make_hlds__field_access__MainContext_2,
  MR_Word hlds__make_hlds__field_access__SubContext0_3,
  MR_Word hlds__make_hlds__field_access__HeadVar__4_4,
  MR_Word hlds__make_hlds__field_access__FieldValueVar_5,
  MR_Word hlds__make_hlds__field_access__TermInputVar_6,
  MR_Word hlds__make_hlds__field_access__Purity_7,
  MR_Word * hlds__make_hlds__field_access__Functor_8,
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_9,
  MR_Word * hlds__make_hlds__field_access__Goals_10,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_11,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_12,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_14,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_15,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_16,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_18,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_20,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_22)
{
  {
    MR_bool hlds__make_hlds__field_access__succeeded;

    if ((hlds__make_hlds__field_access__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.field_access", (MR_String) "predicate \140hlds.make_hlds.field_access.expand_get_field_function_call_2\'/22", (MR_String) "empty list of field names");
          return;
        }
      }
    else
      {
        MR_Word hlds__make_hlds__field_access__TypeInfo_127_127;
        MR_Word hlds__make_hlds__field_access__FieldName_56;
        MR_Word hlds__make_hlds__field_access__FieldArgs_57;
        MR_Word hlds__make_hlds__field_access__FieldNames_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__field_access__FieldArgVars_71;
        MR_Word hlds__make_hlds__field_access__GetArgVars_72;
        MR_Word hlds__make_hlds__field_access__Goals2_82;
        MR_Word hlds__make_hlds__field_access__ArgContext_83;
        MR_Word hlds__make_hlds__field_access__GoalInfo_84;
        MR_Word hlds__make_hlds__field_access__Conj0_85;
        MR_Word hlds__make_hlds__field_access__Conj_86;
        MR_Word hlds__make_hlds__field_access__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_100_100;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_101_101;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_102_102;
        MR_Word hlds__make_hlds__field_access__Var_103;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_113_113;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_114_114;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_116_116;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_117_117;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_118_118;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_120_120;

        hlds__make_hlds__field_access__FieldName_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_99, (MR_Integer) 0)));
        hlds__make_hlds__field_access__FieldArgs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_99, (MR_Integer) 1)));
        {
          hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__field_access__FieldArgs_57, &hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_15, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_100_100, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_11, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_101_101, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_21, &hlds__make_hlds__field_access__STATE_VARIABLE_Specs_102_102);
        }
        hlds__make_hlds__field_access__TypeInfo_127_127 = (MR_Word) &hlds__make_hlds__field_access_scalar_common_1[0];
        {
          hlds__make_hlds__field_access__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_103, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputVar_6));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__field_access__GetArgVars_72 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__field_access__TypeInfo_127_127, hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__Var_103);
        }
        if ((hlds__make_hlds__field_access__FieldNames_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__make_hlds__field_access__Goal_126;

            {
              hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 0, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext0_3, hlds__make_hlds__field_access__FieldName_56, hlds__make_hlds__field_access__FieldValueVar_5, hlds__make_hlds__field_access__GetArgVars_72, hlds__make_hlds__field_access__Purity_7, hlds__make_hlds__field_access__Functor_8, &hlds__make_hlds__field_access__Goal_126, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_117_117);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *hlds__make_hlds__field_access__FieldSubContext_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_8));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__field_access__SubContext0_3));
            }
            {
              hlds__make_hlds__field_access__Goals2_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals2_82, 0) = ((MR_Box) (hlds__make_hlds__field_access__Goal_126));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals2_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_113_113 = hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_101_101;
            hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_114_114 = hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13;
            hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115 = hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_100_100;
            hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_116_116 = hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17;
            hlds__make_hlds__field_access__STATE_VARIABLE_Specs_118_118 = hlds__make_hlds__field_access__STATE_VARIABLE_Specs_102_102;
          }
        else
          {
            MR_Word hlds__make_hlds__field_access__SubTermInputVar_75;
            MR_Word hlds__make_hlds__field_access__Goal_76;
            MR_Integer hlds__make_hlds__field_access__TermInputArgNumber_77;
            MR_Word hlds__make_hlds__field_access__TermInputContext_78;
            MR_Word hlds__make_hlds__field_access__SubContext_79;
            MR_Word hlds__make_hlds__field_access__Goals1_81;
            MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_108_108;
            MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_110_110;
            MR_Integer hlds__make_hlds__field_access__Var_112;
            MR_Word hlds__make_hlds__field_access__Var_80;

            {
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, &hlds__make_hlds__field_access__SubTermInputVar_75, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_100_100, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_108_108);
            }
            {
              hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 0, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext0_3, hlds__make_hlds__field_access__FieldName_56, hlds__make_hlds__field_access__SubTermInputVar_75, hlds__make_hlds__field_access__GetArgVars_72, hlds__make_hlds__field_access__Purity_7, hlds__make_hlds__field_access__Functor_8, &hlds__make_hlds__field_access__Goal_76, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_110_110);
            }
            {
              hlds__make_hlds__field_access__Var_112 = mercury__list__length_1_f_0(hlds__make_hlds__field_access__TypeInfo_127_127, hlds__make_hlds__field_access__FieldArgVars_71);
            }
            hlds__make_hlds__field_access__TermInputArgNumber_77 = ((MR_Integer) 1 + hlds__make_hlds__field_access__Var_112);
            {
              hlds__make_hlds__field_access__TermInputContext_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__TermInputContext_78, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_8));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__TermInputContext_78, 1) = ((MR_Box) (hlds__make_hlds__field_access__TermInputArgNumber_77));
            }
            {
              hlds__make_hlds__field_access__SubContext_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__SubContext_79, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputContext_78));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__SubContext_79, 1) = ((MR_Box) (hlds__make_hlds__field_access__SubContext0_3));
            }
            {
              hlds__make_hlds__field_access__expand_get_field_function_call_2_22_p_0(hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext_79, hlds__make_hlds__field_access__FieldNames_58, hlds__make_hlds__field_access__FieldValueVar_5, hlds__make_hlds__field_access__SubTermInputVar_75, hlds__make_hlds__field_access__Purity_7, &hlds__make_hlds__field_access__Var_80, hlds__make_hlds__field_access__FieldSubContext_9, &hlds__make_hlds__field_access__Goals1_81, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_101_101, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_113_113, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_114_114, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_108_108, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17, &hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_116_116, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_110_110, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_117_117, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_102_102, &hlds__make_hlds__field_access__STATE_VARIABLE_Specs_118_118);
            }
            {
              hlds__make_hlds__field_access__Goals2_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals2_82, 0) = ((MR_Box) (hlds__make_hlds__field_access__Goal_76));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals2_82, 1) = ((MR_Box) (hlds__make_hlds__field_access__Goals1_81));
            }
          }
        {
          hlds__make_hlds__field_access__ArgContext_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__field_access__ArgContext_83, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_8));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__field_access__ArgContext_83, 1) = ((MR_Box) (hlds__make_hlds__field_access__MainContext_2));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__field_access__ArgContext_83, 2) = ((MR_Box) (hlds__make_hlds__field_access__SubContext0_3));
        }
        {
          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__field_access__Context_1, &hlds__make_hlds__field_access__GoalInfo_84);
        }
        {
          hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__field_access__Goals2_82, hlds__make_hlds__field_access__GoalInfo_84, &hlds__make_hlds__field_access__Conj0_85);
        }
        {
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__FieldArgs_57, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__ArgContext_83, hlds__make_hlds__field_access__Conj0_85, &hlds__make_hlds__field_access__Conj_86, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_113_113, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_12, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_114_114, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_120_120, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_16, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_116_116, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_117_117, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_20, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_118_118, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_22);
        }
        {
          hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(hlds__make_hlds__field_access__Conj_86, hlds__make_hlds__field_access__Goals_10, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_120_120, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_14);
        }
      }
  }
}

void MR_CALL 
hlds__make_hlds__field_access__expand_set_field_function_call_22_p_0(
  MR_Word hlds__make_hlds__field_access__Context_23,
  MR_Word hlds__make_hlds__field_access__MainContext_24,
  MR_Word hlds__make_hlds__field_access__SubContext0_25,
  MR_Word hlds__make_hlds__field_access__FieldNames_26,
  MR_Word hlds__make_hlds__field_access__FieldValueVar_27,
  MR_Word hlds__make_hlds__field_access__TermInputVar_28,
  MR_Word hlds__make_hlds__field_access__TermOutputVar_29,
  MR_Word * hlds__make_hlds__field_access__Functor_30,
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_31,
  MR_Word * hlds__make_hlds__field_access__Goal_32,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_41,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_42,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_43,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_44,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_45,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_46,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_48,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_49,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_50,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_51,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_52)
{
  {
    MR_bool hlds__make_hlds__field_access__succeeded;
    MR_Word hlds__make_hlds__field_access__Goals_39;
    MR_Word hlds__make_hlds__field_access__GoalInfo_40;

    {
      hlds__make_hlds__field_access__expand_set_field_function_call_2_22_p_0(hlds__make_hlds__field_access__Context_23, hlds__make_hlds__field_access__MainContext_24, hlds__make_hlds__field_access__SubContext0_25, hlds__make_hlds__field_access__FieldNames_26, hlds__make_hlds__field_access__FieldValueVar_27, hlds__make_hlds__field_access__TermInputVar_28, hlds__make_hlds__field_access__TermOutputVar_29, hlds__make_hlds__field_access__Functor_30, hlds__make_hlds__field_access__FieldSubContext_31, &hlds__make_hlds__field_access__Goals_39, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_41, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_42, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_43, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_44, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_45, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_46, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_50, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_52);
    }
    {
      hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__field_access__Context_23, &hlds__make_hlds__field_access__GoalInfo_40);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__field_access__Goals_39, hlds__make_hlds__field_access__GoalInfo_40, hlds__make_hlds__field_access__Goal_32);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__field_access__expand_set_field_function_call_2_22_p_0(
  MR_Word hlds__make_hlds__field_access__Context_1,
  MR_Word hlds__make_hlds__field_access__MainContext_2,
  MR_Word hlds__make_hlds__field_access__SubContext0_3,
  MR_Word hlds__make_hlds__field_access__HeadVar__4_4,
  MR_Word hlds__make_hlds__field_access__FieldValueVar_5,
  MR_Word hlds__make_hlds__field_access__TermInputVar_6,
  MR_Word hlds__make_hlds__field_access__TermOutputVar_7,
  MR_Word * hlds__make_hlds__field_access__Functor_8,
  MR_Word * hlds__make_hlds__field_access__FieldSubContext_9,
  MR_Word * hlds__make_hlds__field_access__Goals_10,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_11,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_12,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_14,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_15,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_16,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_18,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_20,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_Specs_22)
{
  {
    MR_bool hlds__make_hlds__field_access__succeeded;

    if ((hlds__make_hlds__field_access__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.field_access", (MR_String) "predicate \140hlds.make_hlds.field_access.expand_set_field_function_call_2\'/22", (MR_String) "empty list of field names");
          return;
        }
      }
    else
      {
        MR_Word hlds__make_hlds__field_access__FieldName_56;
        MR_Word hlds__make_hlds__field_access__FieldArgs_57;
        MR_Word hlds__make_hlds__field_access__FieldNames_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__field_access__FieldArgVars_71;
        MR_Word hlds__make_hlds__field_access__Goals1_85;
        MR_Word hlds__make_hlds__field_access__ArgContext_87;
        MR_Word hlds__make_hlds__field_access__GoalInfo_88;
        MR_Word hlds__make_hlds__field_access__Conj0_89;
        MR_Word hlds__make_hlds__field_access__Conj_90;
        MR_Word hlds__make_hlds__field_access__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_104_104;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_105_105;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_106_106;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_130_130;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_131_131;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_132_132;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_133_133;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_134_134;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_Specs_135_135;
        MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_140_140;

        hlds__make_hlds__field_access__FieldName_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_103, (MR_Integer) 0)));
        hlds__make_hlds__field_access__FieldArgs_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__Var_103, (MR_Integer) 1)));
        {
          hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_subst_svars_8_p_0(hlds__make_hlds__field_access__FieldArgs_57, &hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_0_15, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_104_104, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_0_11, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_105_105, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_0_21, &hlds__make_hlds__field_access__STATE_VARIABLE_Specs_106_106);
        }
        if ((hlds__make_hlds__field_access__FieldNames_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__make_hlds__field_access__Goal_86;
            MR_Word hlds__make_hlds__field_access__Var_107;
            MR_Word hlds__make_hlds__field_access__Var_108;
            MR_Word hlds__make_hlds__field_access__SetArgs_146;

            {
              hlds__make_hlds__field_access__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_108, 0) = ((MR_Box) (hlds__make_hlds__field_access__FieldValueVar_5));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__field_access__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_107, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputVar_6));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_107, 1) = ((MR_Box) (hlds__make_hlds__field_access__Var_108));
            }
            {
              hlds__make_hlds__field_access__SetArgs_146 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__field_access_scalar_common_1[0], hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__Var_107);
            }
            {
              hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 1, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext0_3, hlds__make_hlds__field_access__FieldName_56, hlds__make_hlds__field_access__TermOutputVar_7, hlds__make_hlds__field_access__SetArgs_146, (MR_Integer) 0, hlds__make_hlds__field_access__Functor_8, &hlds__make_hlds__field_access__Goal_86, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_134_134);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              *hlds__make_hlds__field_access__FieldSubContext_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_8));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__field_access__SubContext0_3));
            }
            {
              hlds__make_hlds__field_access__Goals1_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals1_85, 0) = ((MR_Box) (hlds__make_hlds__field_access__Goal_86));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Goals1_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_130_130 = hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_105_105;
            hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_131_131 = hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13;
            hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_132_132 = hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_104_104;
            hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_133_133 = hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17;
            hlds__make_hlds__field_access__STATE_VARIABLE_Specs_135_135 = hlds__make_hlds__field_access__STATE_VARIABLE_Specs_106_106;
          }
        else
          {
            MR_Word hlds__make_hlds__field_access__TypeCtorInfo_147_147 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            MR_Word hlds__make_hlds__field_access__TypeInfo_148_148;
            MR_Word hlds__make_hlds__field_access__SubTermInputVar_74;
            MR_Word hlds__make_hlds__field_access__SubTermOutputVar_75;
            MR_Word hlds__make_hlds__field_access__SetArgs_76;
            MR_Word hlds__make_hlds__field_access__UpdateGoal_77;
            MR_Word hlds__make_hlds__field_access__GetSubFieldGoal_79;
            MR_Integer hlds__make_hlds__field_access__SubTermInputArgNumber_80;
            MR_Word hlds__make_hlds__field_access__TermInputContext_81;
            MR_Word hlds__make_hlds__field_access__SubContext_82;
            MR_Word hlds__make_hlds__field_access__Goals0_84;
            MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_114_114;
            MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115;
            MR_Word hlds__make_hlds__field_access__Var_116;
            MR_Word hlds__make_hlds__field_access__Var_117;
            MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_121_121;
            MR_Word hlds__make_hlds__field_access__Var_123;
            MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_125_125;
            MR_Word hlds__make_hlds__field_access__Var_126;
            MR_Integer hlds__make_hlds__field_access__Var_129;
            MR_Word hlds__make_hlds__field_access__Var_136;
            MR_Word hlds__make_hlds__field_access__Var_137;
            MR_Word hlds__make_hlds__field_access__Var_78;
            MR_Word hlds__make_hlds__field_access__Var_83;

            {
              mercury__varset__new_var_3_p_0(hlds__make_hlds__field_access__TypeCtorInfo_147_147, &hlds__make_hlds__field_access__SubTermInputVar_74, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_104_104, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_114_114);
            }
            {
              mercury__varset__new_var_3_p_0(hlds__make_hlds__field_access__TypeCtorInfo_147_147, &hlds__make_hlds__field_access__SubTermOutputVar_75, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_114_114, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115);
            }
            hlds__make_hlds__field_access__TypeInfo_148_148 = (MR_Word) &hlds__make_hlds__field_access_scalar_common_1[0];
            {
              hlds__make_hlds__field_access__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_117, 0) = ((MR_Box) (hlds__make_hlds__field_access__SubTermOutputVar_75));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__field_access__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_116, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputVar_6));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_116, 1) = ((MR_Box) (hlds__make_hlds__field_access__Var_117));
            }
            {
              hlds__make_hlds__field_access__SetArgs_76 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__field_access__TypeInfo_148_148, hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__Var_116);
            }
            {
              hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 1, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext0_3, hlds__make_hlds__field_access__FieldName_56, hlds__make_hlds__field_access__TermOutputVar_7, hlds__make_hlds__field_access__SetArgs_76, (MR_Integer) 0, hlds__make_hlds__field_access__Functor_8, &hlds__make_hlds__field_access__UpdateGoal_77, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_19, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_121_121);
            }
            {
              hlds__make_hlds__field_access__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_126, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputVar_6));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__field_access__Var_123 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__field_access__TypeInfo_148_148, hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__Var_126);
            }
            {
              hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0((MR_Integer) 0, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext0_3, hlds__make_hlds__field_access__FieldName_56, hlds__make_hlds__field_access__SubTermInputVar_74, hlds__make_hlds__field_access__Var_123, (MR_Integer) 0, &hlds__make_hlds__field_access__Var_78, &hlds__make_hlds__field_access__GetSubFieldGoal_79, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_121_121, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_125_125);
            }
            {
              hlds__make_hlds__field_access__Var_129 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__field_access_scalar_common_1[1], hlds__make_hlds__field_access__FieldArgs_57);
            }
            hlds__make_hlds__field_access__SubTermInputArgNumber_80 = ((MR_Integer) 2 + hlds__make_hlds__field_access__Var_129);
            {
              hlds__make_hlds__field_access__TermInputContext_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__TermInputContext_81, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_8));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__field_access__TermInputContext_81, 1) = ((MR_Box) (hlds__make_hlds__field_access__SubTermInputArgNumber_80));
            }
            {
              hlds__make_hlds__field_access__SubContext_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__SubContext_82, 0) = ((MR_Box) (hlds__make_hlds__field_access__TermInputContext_81));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__SubContext_82, 1) = ((MR_Box) (hlds__make_hlds__field_access__SubContext0_3));
            }
            {
              hlds__make_hlds__field_access__expand_set_field_function_call_2_22_p_0(hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__MainContext_2, hlds__make_hlds__field_access__SubContext_82, hlds__make_hlds__field_access__FieldNames_58, hlds__make_hlds__field_access__FieldValueVar_5, hlds__make_hlds__field_access__SubTermInputVar_74, hlds__make_hlds__field_access__SubTermOutputVar_75, &hlds__make_hlds__field_access__Var_83, hlds__make_hlds__field_access__FieldSubContext_9, &hlds__make_hlds__field_access__Goals0_84, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_105_105, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_130_130, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_0_13, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_131_131, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_115_115, &hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_132_132, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_0_17, &hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_133_133, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_125_125, &hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_134_134, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_106_106, &hlds__make_hlds__field_access__STATE_VARIABLE_Specs_135_135);
            }
            {
              hlds__make_hlds__field_access__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_136, 0) = ((MR_Box) (hlds__make_hlds__field_access__GetSubFieldGoal_79));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_136, 1) = ((MR_Box) (hlds__make_hlds__field_access__Goals0_84));
            }
            {
              hlds__make_hlds__field_access__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_137, 0) = ((MR_Box) (hlds__make_hlds__field_access__UpdateGoal_77));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__field_access__Goals1_85 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__make_hlds__field_access__Var_136, hlds__make_hlds__field_access__Var_137);
            }
          }
        {
          hlds__make_hlds__field_access__ArgContext_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__field_access__ArgContext_87, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_8));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__field_access__ArgContext_87, 1) = ((MR_Box) (hlds__make_hlds__field_access__MainContext_2));
          MR_hl_field(MR_mktag(2), hlds__make_hlds__field_access__ArgContext_87, 2) = ((MR_Box) (hlds__make_hlds__field_access__SubContext0_3));
        }
        {
          hlds__hlds_goal__goal_info_init_2_p_0(hlds__make_hlds__field_access__Context_1, &hlds__make_hlds__field_access__GoalInfo_88);
        }
        {
          hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__make_hlds__field_access__Goals1_85, hlds__make_hlds__field_access__GoalInfo_88, &hlds__make_hlds__field_access__Conj0_89);
        }
        {
          hlds__make_hlds__superhomogeneous__insert_arg_unifications_18_p_0(hlds__make_hlds__field_access__FieldArgVars_71, hlds__make_hlds__field_access__FieldArgs_57, hlds__make_hlds__field_access__Context_1, hlds__make_hlds__field_access__ArgContext_87, hlds__make_hlds__field_access__Conj0_89, &hlds__make_hlds__field_access__Conj_90, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_130_130, hlds__make_hlds__field_access__STATE_VARIABLE_SVarState_12, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_131_131, &hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_140_140, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_132_132, hlds__make_hlds__field_access__STATE_VARIABLE_VarSet_16, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_133_133, hlds__make_hlds__field_access__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_134_134, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_20, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_135_135, hlds__make_hlds__field_access__STATE_VARIABLE_Specs_22);
        }
        {
          hlds__make_hlds__state_var__svar_goal_to_conj_list_4_p_0(hlds__make_hlds__field_access__Conj_90, hlds__make_hlds__field_access__Goals_10, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_140_140, hlds__make_hlds__field_access__STATE_VARIABLE_SVarStore_14);
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__field_access__construct_field_access_function_call_12_p_0(
  MR_Word hlds__make_hlds__field_access__AccessType_13,
  MR_Word hlds__make_hlds__field_access__Context_14,
  MR_Word hlds__make_hlds__field_access__MainContext_15,
  MR_Word hlds__make_hlds__field_access__SubContext_16,
  MR_Word hlds__make_hlds__field_access__FieldName_17,
  MR_Word hlds__make_hlds__field_access__RetArg_18,
  MR_Word hlds__make_hlds__field_access__Args_19,
  MR_Word hlds__make_hlds__field_access__Purity_20,
  MR_Word * hlds__make_hlds__field_access__Functor_21,
  MR_Word * hlds__make_hlds__field_access__Goal_22,
  MR_Word hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_26,
  MR_Word * hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_27)
{
  {
    MR_bool hlds__make_hlds__field_access__succeeded;
    MR_Word hlds__make_hlds__field_access__FuncName_24;
    MR_Integer hlds__make_hlds__field_access__Arity_25;
    MR_Word hlds__make_hlds__field_access__Var_28;
    MR_Word hlds__make_hlds__field_access__Var_29;

    {
      hlds__hlds_pred__field_access_function_name_3_p_0(hlds__make_hlds__field_access__AccessType_13, hlds__make_hlds__field_access__FieldName_17, &hlds__make_hlds__field_access__FuncName_24);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__field_access_scalar_common_1[0], hlds__make_hlds__field_access__Args_19, &hlds__make_hlds__field_access__Arity_25);
    }
    {
      hlds__make_hlds__field_access__Var_28 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__field_access__Functor_21 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__field_access__FuncName_24));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__field_access__Arity_25));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (hlds__make_hlds__field_access__Var_28));
    }
    {
      hlds__make_hlds__field_access__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_29, 0) = ((MR_Box) (*hlds__make_hlds__field_access__Functor_21));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_29, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__field_access__Var_29, 2) = ((MR_Box) (hlds__make_hlds__field_access__Args_19));
    }
    {
      hlds__make_hlds__qual_info__make_atomic_unification_9_p_0(hlds__make_hlds__field_access__RetArg_18, hlds__make_hlds__field_access__Var_29, hlds__make_hlds__field_access__Context_14, hlds__make_hlds__field_access__MainContext_15, hlds__make_hlds__field_access__SubContext_16, hlds__make_hlds__field_access__Purity_20, hlds__make_hlds__field_access__Goal_22, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_0_26, hlds__make_hlds__field_access__STATE_VARIABLE_QualInfo_27);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__field_access____Unify____field_list_0_0_10001(
  MR_Box hlds__make_hlds__field_access__wrapper_arg_1,
  MR_Box hlds__make_hlds__field_access__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__field_access__succeeded;

    {
      hlds__make_hlds__field_access__succeeded = hlds__make_hlds__field_access____Unify____field_list_0_0(((MR_Word) hlds__make_hlds__field_access__wrapper_arg_1), ((MR_Word) hlds__make_hlds__field_access__wrapper_arg_2));
    }
    return hlds__make_hlds__field_access__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__field_access____Compare____field_list_0_0_10001(
  MR_Box * hlds__make_hlds__field_access__wrapper_arg_1,
  MR_Box hlds__make_hlds__field_access__wrapper_arg_2,
  MR_Box hlds__make_hlds__field_access__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__field_access__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__field_access____Compare____field_list_0_0(&hlds__make_hlds__field_access__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__field_access__wrapper_arg_2), ((MR_Word) hlds__make_hlds__field_access__wrapper_arg_3));
    }
    *hlds__make_hlds__field_access__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__field_access__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__field_access__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.make_hlds.field_access. */
