/*
** Automatically generated from `lookup_util.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module ll_backend.lookup_util. */
/* :- implementation. */

/*
INIT mercury__ll_backend__lookup_util__init
ENDINIT
*/

#include "ll_backend.lookup_util.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.exprn_aux.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

static MR_bool MR_CALL 
ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__228__1_1_p_0(
  MR_Word ll_backend__lookup_util__Code_20);

static MR_bool MR_CALL 
ll_backend__lookup_util__is_output_var_4_p_0(
  MR_Word ll_backend__lookup_util__ModuleInfo_5,
  MR_Word ll_backend__lookup_util__CurrentInstMap_6,
  MR_Word ll_backend__lookup_util__InstMapAfter_7,
  MR_Word ll_backend__lookup_util__Var_8);

static MR_bool MR_CALL 
ll_backend__lookup_util__generate_offset_assigns_6_p_0_1(
  MR_Box ll_backend__lookup_util__closure_arg);

static MR_bool MR_CALL 
ll_backend__lookup_util__get_arm_rvals_6_p_0(
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
  MR_Word * ll_backend__lookup_util__HeadVar__2_2,
  MR_Word ll_backend__lookup_util__HeadVar__3_3,
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_0_4,
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CLD_5,
  MR_Word ll_backend__lookup_util__HeadVar__6_6);

static MR_bool MR_CALL 
ll_backend__lookup_util__rval_is_constant_2_p_0(
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
  MR_Word ll_backend__lookup_util__ExprnOpts_2);

static MR_bool MR_CALL 
ll_backend__lookup_util__figure_out_output_vars_4_p_0_1(
  MR_Box ll_backend__lookup_util__closure_arg,
  MR_Box ll_backend__lookup_util__wrapper_arg_1);


static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_2[1][7];

static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_3[1][1];

static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_4[1][4];




static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_2[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&ll_backend__lookup_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__lookup_util_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__lookup_util__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

static MR_bool MR_CALL 
ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__228__1_1_p_0(
  MR_Word ll_backend__lookup_util__Code_20)
{
  {
    MR_bool ll_backend__lookup_util__succeeded;

    {
      ll_backend__lookup_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_util__Code_20);
    }
    return ll_backend__lookup_util__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__lookup_util__is_output_var_4_p_0(
  MR_Word ll_backend__lookup_util__ModuleInfo_5,
  MR_Word ll_backend__lookup_util__CurrentInstMap_6,
  MR_Word ll_backend__lookup_util__InstMapAfter_7,
  MR_Word ll_backend__lookup_util__Var_8)
{
  {
    MR_bool ll_backend__lookup_util__succeeded;
    MR_Word ll_backend__lookup_util__Initial_9;
    MR_Word ll_backend__lookup_util__Final_10;
    MR_Word ll_backend__lookup_util__Var_11;

    {
      hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__lookup_util__CurrentInstMap_6, ll_backend__lookup_util__Var_8, &ll_backend__lookup_util__Initial_9);
    }
    {
      hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__lookup_util__InstMapAfter_7, ll_backend__lookup_util__Var_8, &ll_backend__lookup_util__Final_10);
    }
    {
      ll_backend__lookup_util__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_11, 0) = ((MR_Box) (ll_backend__lookup_util__Initial_9));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_11, 1) = ((MR_Box) (ll_backend__lookup_util__Final_10));
    }
    {
      ll_backend__lookup_util__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(ll_backend__lookup_util__ModuleInfo_5, ll_backend__lookup_util__Var_11);
    }
    return ll_backend__lookup_util__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__lookup_util__generate_offset_assigns_6_p_0_1(
  MR_Box ll_backend__lookup_util__closure_arg)
{
  {
    MR_bool ll_backend__lookup_util__succeeded;
    MR_Box ll_backend__lookup_util__closure = ll_backend__lookup_util__closure_arg;

    {
      ll_backend__lookup_util__succeeded = ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__228__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__closure, (MR_Integer) 3))));
    }
    return ll_backend__lookup_util__succeeded;
  }
}

void MR_CALL 
ll_backend__lookup_util__generate_offset_assigns_6_p_0(
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
  MR_Integer ll_backend__lookup_util__Offset_2,
  MR_Word ll_backend__lookup_util__BaseReg_3,
  MR_Word ll_backend__lookup_util__HeadVar__4_4,
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_0_5,
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CLD_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__lookup_util__succeeded;

      if ((ll_backend__lookup_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *ll_backend__lookup_util__STATE_VARIABLE_CLD_6 = ll_backend__lookup_util__STATE_VARIABLE_CLD_0_5;
      else
      {
        MR_Word ll_backend__lookup_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__lookup_util__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__lookup_util__LookupLval_19;
        MR_Word ll_backend__lookup_util__Code_20;
        MR_Word ll_backend__lookup_util__Var_25;
        MR_Word ll_backend__lookup_util__Var_26;
        MR_Word ll_backend__lookup_util__Var_27;
        MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_28_28;
        MR_Word ll_backend__lookup_util__Var_29;
        MR_Integer ll_backend__lookup_util__Var_33;

        {
          ll_backend__lookup_util__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_25, 0) = ((MR_Box) (ll_backend__lookup_util__BaseReg_3));
        }
        {
          ll_backend__lookup_util__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__lookup_util__Var_27, 0) = ((MR_Box) (ll_backend__lookup_util__Offset_2));
        }
        {
          ll_backend__lookup_util__Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_util__Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_util__Var_26, 1) = ((MR_Box) (ll_backend__lookup_util__Var_27));
        }
        {
          ll_backend__lookup_util__LookupLval_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_util__LookupLval_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_util__LookupLval_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_util_scalar_common_3[0])));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_util__LookupLval_19, 2) = ((MR_Box) (ll_backend__lookup_util__Var_25));
          MR_hl_field(MR_mktag(3), ll_backend__lookup_util__LookupLval_19, 3) = ((MR_Box) (ll_backend__lookup_util__Var_26));
        }
        {
          ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(ll_backend__lookup_util__Var_13, ll_backend__lookup_util__LookupLval_19, &ll_backend__lookup_util__Code_20, ll_backend__lookup_util__HeadVar__4_4, ll_backend__lookup_util__STATE_VARIABLE_CLD_0_5, &ll_backend__lookup_util__STATE_VARIABLE_CLD_28_28);
        }
        {
          ll_backend__lookup_util__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_29, 0) = ((MR_Box) (&ll_backend__lookup_util_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_29, 1) = ((MR_Box) (ll_backend__lookup_util__generate_offset_assigns_6_p_0_1));
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_29, 3) = ((MR_Box) (ll_backend__lookup_util__Code_20));
        }
        {
          mercury__require__expect_4_p_0(ll_backend__lookup_util__Var_29, (MR_String) "ll_backend.lookup_util", (MR_String) "predicate \140ll_backend.lookup_util.generate_offset_assigns\'/6", (MR_String) "nonempty code");
        }
        ll_backend__lookup_util__Var_33 = (ll_backend__lookup_util__Offset_2 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Word ll_backend__lookup_util__next_value_of_HeadVar__1_1 = ll_backend__lookup_util__Vars_14;
          MR_Integer ll_backend__lookup_util__next_value_of_Offset_2 = ll_backend__lookup_util__Var_33;
          MR_Word ll_backend__lookup_util__next_value_of_STATE_VARIABLE_CLD_0_5 = ll_backend__lookup_util__STATE_VARIABLE_CLD_28_28;

          ll_backend__lookup_util__STATE_VARIABLE_CLD_0_5 = ll_backend__lookup_util__next_value_of_STATE_VARIABLE_CLD_0_5;
          ll_backend__lookup_util__Offset_2 = ll_backend__lookup_util__next_value_of_Offset_2;
          ll_backend__lookup_util__HeadVar__1_1 = ll_backend__lookup_util__next_value_of_HeadVar__1_1;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(
  MR_Word ll_backend__lookup_util__StoreMap_8,
  MR_Word ll_backend__lookup_util__Liveness_9,
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_16,
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_17,
  MR_Word * ll_backend__lookup_util__BranchEndCode_11,
  MR_Word ll_backend__lookup_util__CI_12,
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_0_18)
{
  {
    MR_Word ll_backend__lookup_util__OldLiveness_14;
    MR_Word ll_backend__lookup_util__DeadVars_15;
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_19_19;
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_21_21;

    {
      ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CLD_0_18, &ll_backend__lookup_util__OldLiveness_14);
    }
    {
      ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(ll_backend__lookup_util__Liveness_9, ll_backend__lookup_util__STATE_VARIABLE_CLD_0_18, &ll_backend__lookup_util__STATE_VARIABLE_CLD_19_19);
    }
    {
      parse_tree__set_of_var__difference_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__lookup_util__OldLiveness_14, ll_backend__lookup_util__Liveness_9, &ll_backend__lookup_util__DeadVars_15);
    }
    {
      ll_backend__code_loc_dep__maybe_make_vars_forward_dead_4_p_0(ll_backend__lookup_util__DeadVars_15, (MR_Integer) 0, ll_backend__lookup_util__STATE_VARIABLE_CLD_19_19, &ll_backend__lookup_util__STATE_VARIABLE_CLD_21_21);
    }
    {
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__lookup_util__StoreMap_8, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_16, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_17, ll_backend__lookup_util__BranchEndCode_11, ll_backend__lookup_util__CI_12, ll_backend__lookup_util__STATE_VARIABLE_CLD_21_21);
    }
  }
}

MR_bool MR_CALL 
ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
  MR_Word ll_backend__lookup_util__HeadVar__2_2,
  MR_Word ll_backend__lookup_util__HeadVar__3_3,
  MR_Word ll_backend__lookup_util__HeadVar__4_4,
  MR_Word * ll_backend__lookup_util__HeadVar__5_5,
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_6,
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_7,
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_8,
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_9)
{
  {
    MR_bool ll_backend__lookup_util__succeeded;

    if ((ll_backend__lookup_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__lookup_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__lookup_util__STATE_VARIABLE_CI_9 = ll_backend__lookup_util__STATE_VARIABLE_CI_0_8;
      *ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_7 = ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_6;
      ll_backend__lookup_util__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ll_backend__lookup_util__Disjunct0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ll_backend__lookup_util__Disjuncts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ll_backend__lookup_util__Soln_24;
      MR_Word ll_backend__lookup_util__Solns_25;
      MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_33_33;
      MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_34_34;
      MR_Word ll_backend__lookup_util___Liveness_28;

      {
        ll_backend__lookup_util__succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(ll_backend__lookup_util__HeadVar__1_1, ll_backend__lookup_util__Disjunct0_20, ll_backend__lookup_util__HeadVar__3_3, ll_backend__lookup_util__HeadVar__4_4, &ll_backend__lookup_util__Soln_24, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_6, &ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_33_33, &ll_backend__lookup_util___Liveness_28, ll_backend__lookup_util__STATE_VARIABLE_CI_0_8, &ll_backend__lookup_util__STATE_VARIABLE_CI_34_34);
      }
      if (ll_backend__lookup_util__succeeded)
      {
        {
          ll_backend__lookup_util__succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(ll_backend__lookup_util__HeadVar__1_1, ll_backend__lookup_util__Disjuncts0_21, ll_backend__lookup_util__HeadVar__3_3, ll_backend__lookup_util__HeadVar__4_4, &ll_backend__lookup_util__Solns_25, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_33_33, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_7, ll_backend__lookup_util__STATE_VARIABLE_CI_34_34, ll_backend__lookup_util__STATE_VARIABLE_CI_9);
        }
        if (ll_backend__lookup_util__succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__lookup_util__HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_util__Soln_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_util__Solns_25));
          }
          ll_backend__lookup_util__succeeded = MR_TRUE;
        }
      }
    }
    return ll_backend__lookup_util__succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(
  MR_Word ll_backend__lookup_util__BranchStart_11,
  MR_Word ll_backend__lookup_util__Disjunct0_12,
  MR_Word ll_backend__lookup_util__Vars_13,
  MR_Word ll_backend__lookup_util__StoreMap_14,
  MR_Word * ll_backend__lookup_util__Soln_15,
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_23,
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_24,
  MR_Word * ll_backend__lookup_util__Liveness_17,
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_25,
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_26)
{
  {
    MR_bool ll_backend__lookup_util__succeeded;
    MR_Word ll_backend__lookup_util__DisjunctGoalInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct0_12, (MR_Integer) 1)));
    MR_Word ll_backend__lookup_util__Disjunct_22;
    MR_Word ll_backend__lookup_util___GoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct0_12, (MR_Integer) 0)));
    MR_Word ll_backend__lookup_util__GoalInfo_45;
    MR_Word ll_backend__lookup_util__CodeModel_46;
    MR_Word ll_backend__lookup_util__Code_48;
    MR_Word ll_backend__lookup_util__ExprnOpts_49;
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_32_51;
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_34_53;
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_35_54;
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_36_55;
    MR_Word ll_backend__lookup_util___EndCode_50;

    {
      hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__lookup_util__DisjunctGoalInfo0_20, &ll_backend__lookup_util__GoalInfo_45);
    }
    {
      ll_backend__lookup_util__Disjunct_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct_22, 0) = ((MR_Box) (ll_backend__lookup_util___GoalExpr_44));
      MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct_22, 1) = ((MR_Box) (ll_backend__lookup_util__GoalInfo_45));
    }
    {
      ll_backend__lookup_util__CodeModel_46 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__lookup_util__GoalInfo_45);
    }
    {
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_util__BranchStart_11, ll_backend__lookup_util__STATE_VARIABLE_CI_0_25, &ll_backend__lookup_util__STATE_VARIABLE_CLD_32_51);
    }
    {
      ll_backend__code_gen__generate_goal_7_p_0(ll_backend__lookup_util__CodeModel_46, ll_backend__lookup_util__Disjunct_22, &ll_backend__lookup_util__Code_48, ll_backend__lookup_util__STATE_VARIABLE_CI_0_25, ll_backend__lookup_util__STATE_VARIABLE_CI_26, ll_backend__lookup_util__STATE_VARIABLE_CLD_32_51, &ll_backend__lookup_util__STATE_VARIABLE_CLD_34_53);
    }
    {
      ll_backend__lookup_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_util__Code_48);
    }
    if (ll_backend__lookup_util__succeeded)
    {
      {
        ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CLD_34_53, ll_backend__lookup_util__Liveness_17);
      }
      {
        ll_backend__code_info__get_exprn_opts_2_p_0(*ll_backend__lookup_util__STATE_VARIABLE_CI_26, &ll_backend__lookup_util__ExprnOpts_49);
      }
      {
        ll_backend__lookup_util__succeeded = ll_backend__lookup_util__get_arm_rvals_6_p_0(ll_backend__lookup_util__Vars_13, ll_backend__lookup_util__Soln_15, *ll_backend__lookup_util__STATE_VARIABLE_CI_26, ll_backend__lookup_util__STATE_VARIABLE_CLD_34_53, &ll_backend__lookup_util__STATE_VARIABLE_CLD_35_54, ll_backend__lookup_util__ExprnOpts_49);
      }
      if (ll_backend__lookup_util__succeeded)
      {
        {
          ll_backend__code_loc_dep__set_resume_point_to_unknown_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CLD_35_54, &ll_backend__lookup_util__STATE_VARIABLE_CLD_36_55);
        }
        {
          ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__lookup_util__StoreMap_14, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_23, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_24, &ll_backend__lookup_util___EndCode_50, *ll_backend__lookup_util__STATE_VARIABLE_CI_26, ll_backend__lookup_util__STATE_VARIABLE_CLD_36_55);
        }
        ll_backend__lookup_util__succeeded = MR_TRUE;
      }
    }
    return ll_backend__lookup_util__succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__lookup_util__generate_constants_for_arm_10_p_0(
  MR_Word ll_backend__lookup_util__BranchStart_11,
  MR_Word ll_backend__lookup_util__Goal_12,
  MR_Word ll_backend__lookup_util__Vars_13,
  MR_Word ll_backend__lookup_util__StoreMap_14,
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_19,
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_20,
  MR_Word * ll_backend__lookup_util__CaseRvals_16,
  MR_Word * ll_backend__lookup_util__Liveness_17,
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_21,
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_22)
{
  {
    MR_bool ll_backend__lookup_util__succeeded;
    MR_Word ll_backend__lookup_util__GoalInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Goal_12, (MR_Integer) 1)));
    MR_Word ll_backend__lookup_util__CodeModel_41;
    MR_Word ll_backend__lookup_util__Code_43;
    MR_Word ll_backend__lookup_util__ExprnOpts_44;
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_32_46;
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_34_48;
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_36_50;
    MR_Word ll_backend__lookup_util___GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Goal_12, (MR_Integer) 0)));
    MR_Word ll_backend__lookup_util___EndCode_45;

    {
      ll_backend__lookup_util__CodeModel_41 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__lookup_util__GoalInfo_40);
    }
    {
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_util__BranchStart_11, ll_backend__lookup_util__STATE_VARIABLE_CI_0_21, &ll_backend__lookup_util__STATE_VARIABLE_CLD_32_46);
    }
    {
      ll_backend__code_gen__generate_goal_7_p_0(ll_backend__lookup_util__CodeModel_41, ll_backend__lookup_util__Goal_12, &ll_backend__lookup_util__Code_43, ll_backend__lookup_util__STATE_VARIABLE_CI_0_21, ll_backend__lookup_util__STATE_VARIABLE_CI_22, ll_backend__lookup_util__STATE_VARIABLE_CLD_32_46, &ll_backend__lookup_util__STATE_VARIABLE_CLD_34_48);
    }
    {
      ll_backend__lookup_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_util__Code_43);
    }
    if (ll_backend__lookup_util__succeeded)
    {
      {
        ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CLD_34_48, ll_backend__lookup_util__Liveness_17);
      }
      {
        ll_backend__code_info__get_exprn_opts_2_p_0(*ll_backend__lookup_util__STATE_VARIABLE_CI_22, &ll_backend__lookup_util__ExprnOpts_44);
      }
      {
        ll_backend__lookup_util__succeeded = ll_backend__lookup_util__get_arm_rvals_6_p_0(ll_backend__lookup_util__Vars_13, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_19, *ll_backend__lookup_util__STATE_VARIABLE_CI_22, ll_backend__lookup_util__STATE_VARIABLE_CLD_34_48, &ll_backend__lookup_util__STATE_VARIABLE_CLD_36_50, ll_backend__lookup_util__ExprnOpts_44);
      }
      if (ll_backend__lookup_util__succeeded)
      {
        {
          ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__lookup_util__StoreMap_14, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_20, ll_backend__lookup_util__CaseRvals_16, &ll_backend__lookup_util___EndCode_45, *ll_backend__lookup_util__STATE_VARIABLE_CI_22, ll_backend__lookup_util__STATE_VARIABLE_CLD_36_50);
        }
        ll_backend__lookup_util__succeeded = MR_TRUE;
      }
    }
    return ll_backend__lookup_util__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__lookup_util__get_arm_rvals_6_p_0(
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
  MR_Word * ll_backend__lookup_util__HeadVar__2_2,
  MR_Word ll_backend__lookup_util__HeadVar__3_3,
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_0_4,
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CLD_5,
  MR_Word ll_backend__lookup_util__HeadVar__6_6)
{
  {
    MR_bool ll_backend__lookup_util__succeeded;

    if ((ll_backend__lookup_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ll_backend__lookup_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ll_backend__lookup_util__STATE_VARIABLE_CLD_5 = ll_backend__lookup_util__STATE_VARIABLE_CLD_0_4;
      ll_backend__lookup_util__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ll_backend__lookup_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ll_backend__lookup_util__Vars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ll_backend__lookup_util__Rval_14;
      MR_Word ll_backend__lookup_util__Rvals_15;
      MR_Word ll_backend__lookup_util__Code_19;
      MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_22_22;

      {
        ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__lookup_util__Var_12, &ll_backend__lookup_util__Code_19, &ll_backend__lookup_util__Rval_14, ll_backend__lookup_util__HeadVar__3_3, ll_backend__lookup_util__STATE_VARIABLE_CLD_0_4, &ll_backend__lookup_util__STATE_VARIABLE_CLD_22_22);
      }
      {
        ll_backend__lookup_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_util__Code_19);
      }
      if (ll_backend__lookup_util__succeeded)
      {
        {
          ll_backend__lookup_util__succeeded = ll_backend__lookup_util__rval_is_constant_2_p_0(ll_backend__lookup_util__Rval_14, ll_backend__lookup_util__HeadVar__6_6);
        }
        if (ll_backend__lookup_util__succeeded)
        {
          {
            ll_backend__lookup_util__succeeded = ll_backend__lookup_util__get_arm_rvals_6_p_0(ll_backend__lookup_util__Vars_13, &ll_backend__lookup_util__Rvals_15, ll_backend__lookup_util__HeadVar__3_3, ll_backend__lookup_util__STATE_VARIABLE_CLD_22_22, ll_backend__lookup_util__STATE_VARIABLE_CLD_5, ll_backend__lookup_util__HeadVar__6_6);
          }
          if (ll_backend__lookup_util__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__lookup_util__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_util__Rval_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_util__Rvals_15));
            }
            ll_backend__lookup_util__succeeded = MR_TRUE;
          }
        }
      }
    }
    return ll_backend__lookup_util__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__lookup_util__rval_is_constant_2_p_0(
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
  MR_Word ll_backend__lookup_util__ExprnOpts_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool ll_backend__lookup_util__succeeded;

      switch (MR_tag((MR_Word) ll_backend__lookup_util__HeadVar__1_1)) {
        default:
          ll_backend__lookup_util__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            MR_Word ll_backend__lookup_util__Exprn0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__lookup_util__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)));

            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__lookup_util__next_value_of_HeadVar__1_1 = ll_backend__lookup_util__Exprn0_14;

              ll_backend__lookup_util__HeadVar__1_1 = ll_backend__lookup_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)))) {
            default:
              ll_backend__lookup_util__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ll_backend__lookup_util__Const_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ll_backend__lookup_util__Var_16;

                {
                  ll_backend__exprn_aux__const_is_constant_3_p_0(ll_backend__lookup_util__Const_3, ll_backend__lookup_util__ExprnOpts_2, &ll_backend__lookup_util__Var_16);
                }
                ll_backend__lookup_util__succeeded = ((MR_Integer) 1 == ll_backend__lookup_util__Var_16);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ll_backend__lookup_util__Exprn_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ll_backend__lookup_util__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));

                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__lookup_util__next_value_of_HeadVar__1_1 = ll_backend__lookup_util__Exprn_7;

                  ll_backend__lookup_util__HeadVar__1_1 = ll_backend__lookup_util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ll_backend__lookup_util__Exprn0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ll_backend__lookup_util__Exprn1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 3)));
                MR_Word ll_backend__lookup_util__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));

                {
                  ll_backend__lookup_util__succeeded = ll_backend__lookup_util__rval_is_constant_2_p_0(ll_backend__lookup_util__Exprn0_10, ll_backend__lookup_util__ExprnOpts_2);
                }
                if (ll_backend__lookup_util__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__lookup_util__next_value_of_HeadVar__1_1 = ll_backend__lookup_util__Exprn1_11;

                    ll_backend__lookup_util__HeadVar__1_1 = ll_backend__lookup_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
              }
              break;
          }
          break;
      }
      return ll_backend__lookup_util__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__lookup_util__figure_out_output_vars_4_p_0_1(
  MR_Box ll_backend__lookup_util__closure_arg,
  MR_Box ll_backend__lookup_util__wrapper_arg_1)
{
  {
    MR_bool ll_backend__lookup_util__succeeded;
    MR_Box ll_backend__lookup_util__closure = ll_backend__lookup_util__closure_arg;

    {
      ll_backend__lookup_util__succeeded = ll_backend__lookup_util__is_output_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__lookup_util__wrapper_arg_1));
    }
    return ll_backend__lookup_util__succeeded;
  }
}

void MR_CALL 
ll_backend__lookup_util__figure_out_output_vars_4_p_0(
  MR_Word ll_backend__lookup_util__CI_5,
  MR_Word ll_backend__lookup_util__CLD_6,
  MR_Word ll_backend__lookup_util__GoalInfo_7,
  MR_Word * ll_backend__lookup_util__OutVars_8)
{
  {
    MR_bool ll_backend__lookup_util__succeeded;
    MR_Word ll_backend__lookup_util__InstMapDelta_9;

    {
      ll_backend__lookup_util__InstMapDelta_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__lookup_util__GoalInfo_7);
    }
    {
      ll_backend__lookup_util__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__lookup_util__InstMapDelta_9);
    }
    if (ll_backend__lookup_util__succeeded)
      *ll_backend__lookup_util__OutVars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ll_backend__lookup_util__CurrentInstMap_10;
      MR_Word ll_backend__lookup_util__ModuleInfo_11;
      MR_Word ll_backend__lookup_util__ChangedVars_12;
      MR_Word ll_backend__lookup_util__InstMapAfter_13;
      MR_Word ll_backend__lookup_util__Var_14;
      MR_Word ll_backend__lookup_util__Var_15;

      {
        ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__lookup_util__CLD_6, &ll_backend__lookup_util__CurrentInstMap_10);
      }
      {
        ll_backend__code_info__get_module_info_2_p_0(ll_backend__lookup_util__CI_5, &ll_backend__lookup_util__ModuleInfo_11);
      }
      {
        hlds__instmap__instmap_delta_changed_vars_2_p_0(ll_backend__lookup_util__InstMapDelta_9, &ll_backend__lookup_util__ChangedVars_12);
      }
      {
        hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__lookup_util__CurrentInstMap_10, ll_backend__lookup_util__InstMapDelta_9, &ll_backend__lookup_util__InstMapAfter_13);
      }
      {
        ll_backend__lookup_util__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_14, 0) = ((MR_Box) (&ll_backend__lookup_util_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_14, 1) = ((MR_Box) (ll_backend__lookup_util__figure_out_output_vars_4_p_0_1));
        MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_14, 3) = ((MR_Box) (ll_backend__lookup_util__ModuleInfo_11));
        MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_14, 4) = ((MR_Box) (ll_backend__lookup_util__CurrentInstMap_10));
        MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Var_14, 5) = ((MR_Box) (ll_backend__lookup_util__InstMapAfter_13));
      }
      {
        ll_backend__lookup_util__Var_15 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__lookup_util__ChangedVars_12);
      }
      {
        mercury__list__filter_3_p_0((MR_Word) &ll_backend__lookup_util_scalar_common_1[0], ll_backend__lookup_util__Var_14, ll_backend__lookup_util__Var_15, ll_backend__lookup_util__OutVars_8);
      }
    }
  }
}

void mercury__ll_backend__lookup_util__init(void)
{
}

void mercury__ll_backend__lookup_util__init_type_tables(void)
{
}

void mercury__ll_backend__lookup_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__lookup_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.lookup_util. */
