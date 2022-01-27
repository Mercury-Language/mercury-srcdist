/*
** Automatically generated from `lookup_util.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.code_gen.mih"
#include "ll_backend.code_info.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 149 "ll_backend.lookup_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "ll_backend.lookup_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 218 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__218__1_1_p_0(
#line 218 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Code_17);

#line 187 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__rval_is_constant_2_p_0(
#line 187 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
#line 187 "lookup_util.m"
  MR_Word ll_backend__lookup_util__ExprnOpts_2);

#line 173 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__get_arm_rvals_5_p_0(
#line 173 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
#line 173 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__HeadVar__2_2,
#line 173 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_3,
#line 173 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_4,
#line 173 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__5_5);

#line 109 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__is_output_var_4_p_0(
#line 109 "lookup_util.m"
  MR_Word ll_backend__lookup_util__ModuleInfo_5,
#line 109 "lookup_util.m"
  MR_Word ll_backend__lookup_util__CurrentInstMap_6,
#line 109 "lookup_util.m"
  MR_Word ll_backend__lookup_util__InstMapAfter_7,
#line 109 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Var_8);

#line 218 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__generate_offset_assigns_5_p_0_1(
#line 218 "lookup_util.m"
  MR_Box ll_backend__lookup_util__closure_arg);

#line 105 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__figure_out_output_vars_3_p_0_1(
#line 105 "lookup_util.m"
  MR_Box ll_backend__lookup_util__closure_arg,
#line 105 "lookup_util.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 276 "ll_backend.lookup_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 284 "ll_backend.lookup_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 218 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__218__1_1_p_0(
#line 218 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Code_17)
#line 218 "lookup_util.m"
{
#line 218 "lookup_util.m"
  {
#line 218 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;

#line 218 "lookup_util.m"
    {
#line 218 "lookup_util.m"
      return ll_backend__lookup_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_util__Code_17);
    }
#line 218 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 218 "lookup_util.m"
  }
#line 218 "lookup_util.m"
}

#line 187 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__rval_is_constant_2_p_0(
#line 187 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
#line 187 "lookup_util.m"
  MR_Word ll_backend__lookup_util__ExprnOpts_2)
#line 187 "lookup_util.m"
{
#line 189 "lookup_util.m"
  while (MR_TRUE)
#line 189 "lookup_util.m"
    {
#line 189 "lookup_util.m"
      /* tailcall optimized into a loop */
#line 189 "lookup_util.m"
      {
#line 189 "lookup_util.m"
        MR_bool ll_backend__lookup_util__succeeded;

#line 189 "lookup_util.m"
        if (((MR_tag((MR_Word) ll_backend__lookup_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 196 "lookup_util.m"
          {
#line 196 "lookup_util.m"
            MR_Word ll_backend__lookup_util__Exprn0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
#line 196 "lookup_util.m"
            MR_Integer ll_backend__lookup_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)));

#line 197 "lookup_util.m"
            /* direct tailcall eliminated */
#line 197 "lookup_util.m"
            {
#line 197 "lookup_util.m"
              MR_Word ll_backend__lookup_util__HeadVar__1__tmp_copy_1 = ll_backend__lookup_util__Exprn0_14;

#line 197 "lookup_util.m"
              ll_backend__lookup_util__HeadVar__1_1 = ll_backend__lookup_util__HeadVar__1__tmp_copy_1;
#line 197 "lookup_util.m"
            }
#line 197 "lookup_util.m"
            continue;
#line 196 "lookup_util.m"
          }
#line 189 "lookup_util.m"
        else
#line 189 "lookup_util.m"
          if (((((MR_tag((MR_Word) ll_backend__lookup_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 193 "lookup_util.m"
            {
#line 193 "lookup_util.m"
              MR_Word ll_backend__lookup_util__Exprn0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 2)));
#line 193 "lookup_util.m"
              MR_Word ll_backend__lookup_util__Exprn1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 3)));
#line 193 "lookup_util.m"
              MR_Word ll_backend__lookup_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));

#line 194 "lookup_util.m"
              {
#line 194 "lookup_util.m"
                ll_backend__lookup_util__succeeded = ll_backend__lookup_util__rval_is_constant_2_p_0(ll_backend__lookup_util__Exprn0_10, ll_backend__lookup_util__ExprnOpts_2);
              }
#line 193 "lookup_util.m"
              if (ll_backend__lookup_util__succeeded)
#line 195 "lookup_util.m"
                {
#line 195 "lookup_util.m"
                  /* direct tailcall eliminated */
#line 195 "lookup_util.m"
                  {
#line 195 "lookup_util.m"
                    MR_Word ll_backend__lookup_util__HeadVar__1__tmp_copy_1 = ll_backend__lookup_util__Exprn1_11;

#line 195 "lookup_util.m"
                    ll_backend__lookup_util__HeadVar__1_1 = ll_backend__lookup_util__HeadVar__1__tmp_copy_1;
#line 195 "lookup_util.m"
                  }
#line 195 "lookup_util.m"
                  continue;
#line 195 "lookup_util.m"
                }
#line 193 "lookup_util.m"
            }
#line 189 "lookup_util.m"
          else
#line 189 "lookup_util.m"
            if (((((MR_tag((MR_Word) ll_backend__lookup_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 189 "lookup_util.m"
              {
#line 189 "lookup_util.m"
                MR_Word ll_backend__lookup_util__Const_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
#line 189 "lookup_util.m"
                MR_Word ll_backend__lookup_util__V_16_16;

#line 190 "lookup_util.m"
                {
#line 190 "lookup_util.m"
                  ll_backend__exprn_aux__const_is_constant_3_p_0(ll_backend__lookup_util__Const_3, ll_backend__lookup_util__ExprnOpts_2, &ll_backend__lookup_util__V_16_16);
                }
#line 190 "lookup_util.m"
                ll_backend__lookup_util__succeeded = ((MR_Integer) 1 == ll_backend__lookup_util__V_16_16);
#line 189 "lookup_util.m"
              }
#line 189 "lookup_util.m"
            else
#line 189 "lookup_util.m"
              if (((((MR_tag((MR_Word) ll_backend__lookup_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 191 "lookup_util.m"
                {
#line 191 "lookup_util.m"
                  MR_Word ll_backend__lookup_util__Exprn_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 2)));
#line 191 "lookup_util.m"
                  MR_Word ll_backend__lookup_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));

#line 192 "lookup_util.m"
                  /* direct tailcall eliminated */
#line 192 "lookup_util.m"
                  {
#line 192 "lookup_util.m"
                    MR_Word ll_backend__lookup_util__HeadVar__1__tmp_copy_1 = ll_backend__lookup_util__Exprn_7;

#line 192 "lookup_util.m"
                    ll_backend__lookup_util__HeadVar__1_1 = ll_backend__lookup_util__HeadVar__1__tmp_copy_1;
#line 192 "lookup_util.m"
                  }
#line 192 "lookup_util.m"
                  continue;
#line 191 "lookup_util.m"
                }
#line 189 "lookup_util.m"
              else
#line 189 "lookup_util.m"
                ll_backend__lookup_util__succeeded = MR_FALSE;
#line 189 "lookup_util.m"
        return ll_backend__lookup_util__succeeded;
#line 189 "lookup_util.m"
      }
#line 189 "lookup_util.m"
      break;
#line 189 "lookup_util.m"
    }
#line 187 "lookup_util.m"
}

#line 173 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__get_arm_rvals_5_p_0(
#line 173 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
#line 173 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__HeadVar__2_2,
#line 173 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_3,
#line 173 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_4,
#line 173 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__5_5)
#line 173 "lookup_util.m"
{
#line 176 "lookup_util.m"
  {
#line 176 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;

#line 176 "lookup_util.m"
    if ((ll_backend__lookup_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 176 "lookup_util.m"
      {
#line 176 "lookup_util.m"
        *ll_backend__lookup_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 176 "lookup_util.m"
        *ll_backend__lookup_util__STATE_VARIABLE_CI_4 = ll_backend__lookup_util__STATE_VARIABLE_CI_0_3;
#line 176 "lookup_util.m"
        ll_backend__lookup_util__succeeded = MR_TRUE;
#line 176 "lookup_util.m"
      }
#line 176 "lookup_util.m"
    else
#line 177 "lookup_util.m"
      {
#line 177 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)));
#line 177 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Vars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
#line 177 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Rval_12;
#line 177 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Rvals_13;
#line 177 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Code_16;
#line 177 "lookup_util.m"
        MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_19_19;

#line 178 "lookup_util.m"
        {
#line 178 "lookup_util.m"
          ll_backend__code_info__produce_variable_5_p_0(ll_backend__lookup_util__Var_10, &ll_backend__lookup_util__Code_16, &ll_backend__lookup_util__Rval_12, ll_backend__lookup_util__STATE_VARIABLE_CI_0_3, &ll_backend__lookup_util__STATE_VARIABLE_CI_19_19);
        }
#line 179 "lookup_util.m"
        {
#line 179 "lookup_util.m"
          ll_backend__lookup_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_util__Code_16);
        }
#line 177 "lookup_util.m"
        if (ll_backend__lookup_util__succeeded)
#line 177 "lookup_util.m"
          {
#line 180 "lookup_util.m"
            {
#line 180 "lookup_util.m"
              ll_backend__lookup_util__succeeded = ll_backend__lookup_util__rval_is_constant_2_p_0(ll_backend__lookup_util__Rval_12, ll_backend__lookup_util__HeadVar__5_5);
            }
#line 177 "lookup_util.m"
            if (ll_backend__lookup_util__succeeded)
#line 177 "lookup_util.m"
              {
#line 181 "lookup_util.m"
                {
#line 181 "lookup_util.m"
                  ll_backend__lookup_util__succeeded = ll_backend__lookup_util__get_arm_rvals_5_p_0(ll_backend__lookup_util__Vars_11, &ll_backend__lookup_util__Rvals_13, ll_backend__lookup_util__STATE_VARIABLE_CI_19_19, ll_backend__lookup_util__STATE_VARIABLE_CI_4, ll_backend__lookup_util__HeadVar__5_5);
                }
#line 177 "lookup_util.m"
                if (ll_backend__lookup_util__succeeded)
#line 177 "lookup_util.m"
                  {
#line 177 "lookup_util.m"
                    {
#line 177 "lookup_util.m"
                      MR_Word base;
#line 177 "lookup_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "lookup_util.m"
                      *ll_backend__lookup_util__HeadVar__2_2 = base;
#line 177 "lookup_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_util__Rval_12));
#line 177 "lookup_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_util__Rvals_13));
#line 177 "lookup_util.m"
                    }
#line 177 "lookup_util.m"
                    ll_backend__lookup_util__succeeded = MR_TRUE;
#line 177 "lookup_util.m"
                  }
#line 177 "lookup_util.m"
              }
#line 177 "lookup_util.m"
          }
#line 177 "lookup_util.m"
      }
#line 176 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 176 "lookup_util.m"
  }
#line 173 "lookup_util.m"
}

#line 109 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__is_output_var_4_p_0(
#line 109 "lookup_util.m"
  MR_Word ll_backend__lookup_util__ModuleInfo_5,
#line 109 "lookup_util.m"
  MR_Word ll_backend__lookup_util__CurrentInstMap_6,
#line 109 "lookup_util.m"
  MR_Word ll_backend__lookup_util__InstMapAfter_7,
#line 109 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Var_8)
#line 109 "lookup_util.m"
{
#line 112 "lookup_util.m"
  {
#line 112 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 112 "lookup_util.m"
    MR_Word ll_backend__lookup_util__Initial_9;
#line 112 "lookup_util.m"
    MR_Word ll_backend__lookup_util__Final_10;
#line 112 "lookup_util.m"
    MR_Word ll_backend__lookup_util__V_11_11;

#line 115 "lookup_util.m"
    {
#line 115 "lookup_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__lookup_util__CurrentInstMap_6, ll_backend__lookup_util__Var_8, &ll_backend__lookup_util__Initial_9);
    }
#line 116 "lookup_util.m"
    {
#line 116 "lookup_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__lookup_util__InstMapAfter_7, ll_backend__lookup_util__Var_8, &ll_backend__lookup_util__Final_10);
    }
#line 117 "lookup_util.m"
    {
#line 117 "lookup_util.m"
      ll_backend__lookup_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 117 "lookup_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_11_11, 0) = ((MR_Box) (ll_backend__lookup_util__Initial_9));
#line 117 "lookup_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_11_11, 1) = ((MR_Box) (ll_backend__lookup_util__Final_10));
#line 117 "lookup_util.m"
    }
#line 117 "lookup_util.m"
    {
#line 117 "lookup_util.m"
      return ll_backend__lookup_util__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(ll_backend__lookup_util__ModuleInfo_5, ll_backend__lookup_util__V_11_11);
    }
#line 112 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 112 "lookup_util.m"
  }
#line 109 "lookup_util.m"
}

#line 218 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__generate_offset_assigns_5_p_0_1(
#line 218 "lookup_util.m"
  MR_Box ll_backend__lookup_util__closure_arg)
#line 218 "lookup_util.m"
{
#line 218 "lookup_util.m"
  {
#line 218 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 218 "lookup_util.m"
    MR_Box ll_backend__lookup_util__closure = ll_backend__lookup_util__closure_arg;

#line 218 "lookup_util.m"
    {
#line 218 "lookup_util.m"
      return ll_backend__lookup_util__succeeded = ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__218__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__closure, (MR_Integer) 3))));
    }
#line 218 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 218 "lookup_util.m"
  }
#line 218 "lookup_util.m"
}

#line 74 "lookup_util.m"
void MR_CALL 
ll_backend__lookup_util__generate_offset_assigns_5_p_0(
#line 74 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
#line 74 "lookup_util.m"
  MR_Integer ll_backend__lookup_util__Offset_2,
#line 74 "lookup_util.m"
  MR_Word ll_backend__lookup_util__BaseReg_3,
#line 74 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_4,
#line 74 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_5)
#line 74 "lookup_util.m"
{
#line 214 "lookup_util.m"
  while (MR_TRUE)
#line 214 "lookup_util.m"
    {
#line 214 "lookup_util.m"
      /* tailcall optimized into a loop */
#line 214 "lookup_util.m"
      {
#line 214 "lookup_util.m"
        MR_bool ll_backend__lookup_util__succeeded;

#line 214 "lookup_util.m"
        if ((ll_backend__lookup_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 214 "lookup_util.m"
          *ll_backend__lookup_util__STATE_VARIABLE_CI_5 = ll_backend__lookup_util__STATE_VARIABLE_CI_0_4;
#line 214 "lookup_util.m"
        else
#line 215 "lookup_util.m"
          {
#line 215 "lookup_util.m"
            MR_Word ll_backend__lookup_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)));
#line 215 "lookup_util.m"
            MR_Word ll_backend__lookup_util__Vars_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
#line 215 "lookup_util.m"
            MR_Word ll_backend__lookup_util__LookupLval_16;
#line 215 "lookup_util.m"
            MR_Word ll_backend__lookup_util__Code_17;
#line 215 "lookup_util.m"
            MR_Word ll_backend__lookup_util__V_22_22;
#line 215 "lookup_util.m"
            MR_Word ll_backend__lookup_util__V_23_23;
#line 215 "lookup_util.m"
            MR_Word ll_backend__lookup_util__V_24_24;
#line 215 "lookup_util.m"
            MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_25_25;
#line 215 "lookup_util.m"
            MR_Word ll_backend__lookup_util__V_26_26;
#line 215 "lookup_util.m"
            MR_Integer ll_backend__lookup_util__V_30_30;

#line 216 "lookup_util.m"
            {
#line 216 "lookup_util.m"
              ll_backend__lookup_util__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 216 "lookup_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_22_22, 0) = ((MR_Box) (ll_backend__lookup_util__BaseReg_3));
#line 216 "lookup_util.m"
            }
#line 216 "lookup_util.m"
            {
#line 216 "lookup_util.m"
              ll_backend__lookup_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 216 "lookup_util.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_util__V_24_24, 0) = ((MR_Box) (ll_backend__lookup_util__Offset_2));
#line 216 "lookup_util.m"
            }
#line 216 "lookup_util.m"
            {
#line 216 "lookup_util.m"
              ll_backend__lookup_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 216 "lookup_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_util__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 216 "lookup_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_util__V_23_23, 1) = ((MR_Box) (ll_backend__lookup_util__V_24_24));
#line 216 "lookup_util.m"
            }
#line 216 "lookup_util.m"
            {
#line 216 "lookup_util.m"
              ll_backend__lookup_util__LookupLval_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 216 "lookup_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_util__LookupLval_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 216 "lookup_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_util__LookupLval_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_util_scalar_common_3[0])));
#line 216 "lookup_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_util__LookupLval_16, 2) = ((MR_Box) (ll_backend__lookup_util__V_22_22));
#line 216 "lookup_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_util__LookupLval_16, 3) = ((MR_Box) (ll_backend__lookup_util__V_23_23));
#line 216 "lookup_util.m"
            }
#line 217 "lookup_util.m"
            {
#line 217 "lookup_util.m"
              ll_backend__code_info__assign_lval_to_var_5_p_0(ll_backend__lookup_util__Var_11, ll_backend__lookup_util__LookupLval_16, &ll_backend__lookup_util__Code_17, ll_backend__lookup_util__STATE_VARIABLE_CI_0_4, &ll_backend__lookup_util__STATE_VARIABLE_CI_25_25);
            }
#line 218 "lookup_util.m"
            {
#line 218 "lookup_util.m"
              ll_backend__lookup_util__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 218 "lookup_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_26_26, 0) = ((MR_Box) (&ll_backend__lookup_util_scalar_common_4[0]));
#line 218 "lookup_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_26_26, 1) = ((MR_Box) (ll_backend__lookup_util__generate_offset_assigns_5_p_0_1));
#line 218 "lookup_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 218 "lookup_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_26_26, 3) = ((MR_Box) (ll_backend__lookup_util__Code_17));
#line 218 "lookup_util.m"
            }
#line 218 "lookup_util.m"
            {
#line 218 "lookup_util.m"
              mercury__require__expect_4_p_0(ll_backend__lookup_util__V_26_26, (MR_String) "ll_backend.lookup_util", (MR_String) "predicate \140ll_backend.lookup_util.generate_offset_assigns\'/5", (MR_String) "nonempty code");
            }
#line 219 "lookup_util.m"
            ll_backend__lookup_util__V_30_30 = (ll_backend__lookup_util__Offset_2 + (MR_Integer) 1);
#line 219 "lookup_util.m"
            /* direct tailcall eliminated */
#line 219 "lookup_util.m"
            {
#line 219 "lookup_util.m"
              MR_Word ll_backend__lookup_util__HeadVar__1__tmp_copy_1 = ll_backend__lookup_util__Vars_12;
#line 219 "lookup_util.m"
              MR_Integer ll_backend__lookup_util__Offset__tmp_copy_2 = ll_backend__lookup_util__V_30_30;
#line 219 "lookup_util.m"
              MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0__tmp_copy_4 = ll_backend__lookup_util__STATE_VARIABLE_CI_25_25;

#line 219 "lookup_util.m"
              ll_backend__lookup_util__STATE_VARIABLE_CI_0_4 = ll_backend__lookup_util__STATE_VARIABLE_CI_0__tmp_copy_4;
#line 219 "lookup_util.m"
              ll_backend__lookup_util__Offset_2 = ll_backend__lookup_util__Offset__tmp_copy_2;
#line 219 "lookup_util.m"
              ll_backend__lookup_util__HeadVar__1_1 = ll_backend__lookup_util__HeadVar__1__tmp_copy_1;
#line 219 "lookup_util.m"
            }
#line 219 "lookup_util.m"
            continue;
#line 215 "lookup_util.m"
          }
#line 214 "lookup_util.m"
      }
#line 214 "lookup_util.m"
      break;
#line 214 "lookup_util.m"
    }
#line 74 "lookup_util.m"
}

#line 70 "lookup_util.m"
void MR_CALL 
ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(
#line 70 "lookup_util.m"
  MR_Word ll_backend__lookup_util__StoreMap_8,
#line 70 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Liveness_9,
#line 70 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_15,
#line 70 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_16,
#line 70 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__BranchEndCode_11,
#line 70 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_17,
#line 70 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_18)
#line 70 "lookup_util.m"
{
#line 202 "lookup_util.m"
  {
#line 202 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 202 "lookup_util.m"
    MR_Word ll_backend__lookup_util__OldLiveness_13;
#line 202 "lookup_util.m"
    MR_Word ll_backend__lookup_util__DeadVars_14;
#line 202 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_19_19;
#line 202 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_21_21;

#line 208 "lookup_util.m"
    {
#line 208 "lookup_util.m"
      ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_util__OldLiveness_13);
    }
#line 209 "lookup_util.m"
    {
#line 209 "lookup_util.m"
      ll_backend__code_info__set_forward_live_vars_3_p_0(ll_backend__lookup_util__Liveness_9, ll_backend__lookup_util__STATE_VARIABLE_CI_0_17, &ll_backend__lookup_util__STATE_VARIABLE_CI_19_19);
    }
#line 210 "lookup_util.m"
    {
#line 210 "lookup_util.m"
      parse_tree__set_of_var__difference_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__lookup_util__OldLiveness_13, ll_backend__lookup_util__Liveness_9, &ll_backend__lookup_util__DeadVars_14);
    }
#line 211 "lookup_util.m"
    {
#line 211 "lookup_util.m"
      ll_backend__code_info__maybe_make_vars_forward_dead_4_p_0(ll_backend__lookup_util__DeadVars_14, (MR_Integer) 0, ll_backend__lookup_util__STATE_VARIABLE_CI_19_19, &ll_backend__lookup_util__STATE_VARIABLE_CI_21_21);
    }
#line 212 "lookup_util.m"
    {
#line 212 "lookup_util.m"
      ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__lookup_util__StoreMap_8, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_15, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_16, ll_backend__lookup_util__BranchEndCode_11, ll_backend__lookup_util__STATE_VARIABLE_CI_21_21, ll_backend__lookup_util__STATE_VARIABLE_CI_18);
#line 212 "lookup_util.m"
      return;
    }
#line 202 "lookup_util.m"
  }
#line 70 "lookup_util.m"
}

#line 60 "lookup_util.m"
MR_bool MR_CALL 
ll_backend__lookup_util__generate_constants_for_disjuncts_8_p_0(
#line 60 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
#line 60 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__2_2,
#line 60 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__3_3,
#line 60 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__HeadVar__4_4,
#line 60 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_5,
#line 60 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_6,
#line 60 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_7,
#line 60 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_8)
#line 60 "lookup_util.m"
{
#line 163 "lookup_util.m"
  {
#line 163 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;

#line 163 "lookup_util.m"
    if ((ll_backend__lookup_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "lookup_util.m"
      {
#line 163 "lookup_util.m"
        *ll_backend__lookup_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 163 "lookup_util.m"
        *ll_backend__lookup_util__STATE_VARIABLE_CI_8 = ll_backend__lookup_util__STATE_VARIABLE_CI_0_7;
#line 163 "lookup_util.m"
        *ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_6 = ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_5;
#line 163 "lookup_util.m"
        ll_backend__lookup_util__succeeded = MR_TRUE;
#line 163 "lookup_util.m"
      }
#line 163 "lookup_util.m"
    else
#line 165 "lookup_util.m"
      {
#line 165 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Disjunct0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)));
#line 165 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Disjuncts0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
#line 165 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Soln_21;
#line 165 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Solns_22;
#line 165 "lookup_util.m"
        MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_30_30;
#line 165 "lookup_util.m"
        MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_31_31;
#line 166 "lookup_util.m"
        MR_Word ll_backend__lookup_util___Liveness_25;

#line 166 "lookup_util.m"
        {
#line 166 "lookup_util.m"
          ll_backend__lookup_util__succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_9_p_0(ll_backend__lookup_util__Disjunct0_17, ll_backend__lookup_util__HeadVar__2_2, ll_backend__lookup_util__HeadVar__3_3, &ll_backend__lookup_util__Soln_21, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_5, &ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_30_30, &ll_backend__lookup_util___Liveness_25, ll_backend__lookup_util__STATE_VARIABLE_CI_0_7, &ll_backend__lookup_util__STATE_VARIABLE_CI_31_31);
        }
#line 165 "lookup_util.m"
        if (ll_backend__lookup_util__succeeded)
#line 165 "lookup_util.m"
          {
#line 168 "lookup_util.m"
            {
#line 168 "lookup_util.m"
              ll_backend__lookup_util__succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_8_p_0(ll_backend__lookup_util__Disjuncts0_18, ll_backend__lookup_util__HeadVar__2_2, ll_backend__lookup_util__HeadVar__3_3, &ll_backend__lookup_util__Solns_22, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_30_30, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_6, ll_backend__lookup_util__STATE_VARIABLE_CI_31_31, ll_backend__lookup_util__STATE_VARIABLE_CI_8);
            }
#line 165 "lookup_util.m"
            if (ll_backend__lookup_util__succeeded)
#line 165 "lookup_util.m"
              {
#line 165 "lookup_util.m"
                {
#line 165 "lookup_util.m"
                  MR_Word base;
#line 165 "lookup_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "lookup_util.m"
                  *ll_backend__lookup_util__HeadVar__4_4 = base;
#line 165 "lookup_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_util__Soln_21));
#line 165 "lookup_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_util__Solns_22));
#line 165 "lookup_util.m"
                }
#line 165 "lookup_util.m"
                ll_backend__lookup_util__succeeded = MR_TRUE;
#line 165 "lookup_util.m"
              }
#line 165 "lookup_util.m"
          }
#line 165 "lookup_util.m"
      }
#line 163 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 163 "lookup_util.m"
  }
#line 60 "lookup_util.m"
}

#line 55 "lookup_util.m"
MR_bool MR_CALL 
ll_backend__lookup_util__generate_constants_for_disjunct_9_p_0(
#line 55 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Disjunct0_10,
#line 55 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Vars_11,
#line 55 "lookup_util.m"
  MR_Word ll_backend__lookup_util__StoreMap_12,
#line 55 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__Soln_13,
#line 55 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_21,
#line 55 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_22,
#line 55 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__Liveness_15,
#line 55 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_23,
#line 55 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_24)
#line 55 "lookup_util.m"
{
#line 153 "lookup_util.m"
  {
#line 153 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__DisjunctGoalExpr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct0_10, (MR_Integer) 0)));
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__DisjunctGoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct0_10, (MR_Integer) 1)));
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__DisjunctGoalInfo_19;
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__Disjunct_20;
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__BranchStart_41;
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__GoalInfo_43;
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__CodeModel_44;
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__Code_45;
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__ExprnOpts_46;
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_30_48;
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_31_49;
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_32_50;
#line 153 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_34_52;
#line 132 "lookup_util.m"
    MR_Word ll_backend__lookup_util___GoalExpr_42;
#line 149 "lookup_util.m"
    MR_Word ll_backend__lookup_util___EndCode_47;

#line 157 "lookup_util.m"
    {
#line 157 "lookup_util.m"
      hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__lookup_util__DisjunctGoalInfo0_18, &ll_backend__lookup_util__DisjunctGoalInfo_19);
    }
#line 159 "lookup_util.m"
    {
#line 159 "lookup_util.m"
      ll_backend__lookup_util__Disjunct_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 159 "lookup_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct_20, 0) = ((MR_Box) (ll_backend__lookup_util__DisjunctGoalExpr_17));
#line 159 "lookup_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct_20, 1) = ((MR_Box) (ll_backend__lookup_util__DisjunctGoalInfo_19));
#line 159 "lookup_util.m"
    }
#line 131 "lookup_util.m"
    {
#line 131 "lookup_util.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CI_0_23, &ll_backend__lookup_util__BranchStart_41);
    }
#line 132 "lookup_util.m"
    ll_backend__lookup_util___GoalExpr_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct_20, (MR_Integer) 0)));
#line 132 "lookup_util.m"
    ll_backend__lookup_util__GoalInfo_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct_20, (MR_Integer) 1)));
#line 133 "lookup_util.m"
    {
#line 133 "lookup_util.m"
      ll_backend__lookup_util__CodeModel_44 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__lookup_util__GoalInfo_43);
    }
#line 134 "lookup_util.m"
    {
#line 134 "lookup_util.m"
      ll_backend__code_gen__generate_goal_5_p_0(ll_backend__lookup_util__CodeModel_44, ll_backend__lookup_util__Disjunct_20, &ll_backend__lookup_util__Code_45, ll_backend__lookup_util__STATE_VARIABLE_CI_0_23, &ll_backend__lookup_util__STATE_VARIABLE_CI_30_48);
    }
#line 135 "lookup_util.m"
    {
#line 135 "lookup_util.m"
      ll_backend__lookup_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_util__Code_45);
    }
#line 153 "lookup_util.m"
    if (ll_backend__lookup_util__succeeded)
#line 153 "lookup_util.m"
      {
#line 136 "lookup_util.m"
        {
#line 136 "lookup_util.m"
          ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CI_30_48, ll_backend__lookup_util__Liveness_15);
        }
#line 138 "lookup_util.m"
        {
#line 138 "lookup_util.m"
          ll_backend__code_info__get_exprn_opts_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CI_30_48, &ll_backend__lookup_util__ExprnOpts_46);
        }
#line 139 "lookup_util.m"
        {
#line 139 "lookup_util.m"
          ll_backend__lookup_util__succeeded = ll_backend__lookup_util__get_arm_rvals_5_p_0(ll_backend__lookup_util__Vars_11, ll_backend__lookup_util__Soln_13, ll_backend__lookup_util__STATE_VARIABLE_CI_30_48, &ll_backend__lookup_util__STATE_VARIABLE_CI_31_49, ll_backend__lookup_util__ExprnOpts_46);
        }
#line 153 "lookup_util.m"
        if (ll_backend__lookup_util__succeeded)
#line 153 "lookup_util.m"
          {
#line 144 "lookup_util.m"
            {
#line 144 "lookup_util.m"
              ll_backend__code_info__set_resume_point_to_unknown_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CI_31_49, &ll_backend__lookup_util__STATE_VARIABLE_CI_32_50);
            }
#line 149 "lookup_util.m"
            {
#line 149 "lookup_util.m"
              ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__lookup_util__StoreMap_12, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_21, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_22, &ll_backend__lookup_util___EndCode_47, ll_backend__lookup_util__STATE_VARIABLE_CI_32_50, &ll_backend__lookup_util__STATE_VARIABLE_CI_34_52);
            }
#line 150 "lookup_util.m"
            {
#line 150 "lookup_util.m"
              ll_backend__code_info__reset_to_position_3_p_0(ll_backend__lookup_util__BranchStart_41, ll_backend__lookup_util__STATE_VARIABLE_CI_34_52, ll_backend__lookup_util__STATE_VARIABLE_CI_24);
            }
#line 150 "lookup_util.m"
            ll_backend__lookup_util__succeeded = MR_TRUE;
#line 153 "lookup_util.m"
          }
#line 153 "lookup_util.m"
      }
#line 153 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 153 "lookup_util.m"
  }
#line 55 "lookup_util.m"
}

#line 51 "lookup_util.m"
MR_bool MR_CALL 
ll_backend__lookup_util__generate_constants_for_arm_9_p_0(
#line 51 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Goal_10,
#line 51 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Vars_11,
#line 51 "lookup_util.m"
  MR_Word ll_backend__lookup_util__StoreMap_12,
#line 51 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_17,
#line 51 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_18,
#line 51 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__CaseRvals_14,
#line 51 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__Liveness_15,
#line 51 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_19,
#line 51 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_20)
#line 51 "lookup_util.m"
{
#line 120 "lookup_util.m"
  {
#line 120 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 120 "lookup_util.m"
    MR_Word ll_backend__lookup_util__BranchStart_36;
#line 120 "lookup_util.m"
    MR_Word ll_backend__lookup_util__GoalInfo_38;
#line 120 "lookup_util.m"
    MR_Word ll_backend__lookup_util__CodeModel_39;
#line 120 "lookup_util.m"
    MR_Word ll_backend__lookup_util__Code_40;
#line 120 "lookup_util.m"
    MR_Word ll_backend__lookup_util__ExprnOpts_41;
#line 120 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_30_43;
#line 120 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_32_45;
#line 120 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_34_47;
#line 132 "lookup_util.m"
    MR_Word ll_backend__lookup_util___GoalExpr_37;
#line 149 "lookup_util.m"
    MR_Word ll_backend__lookup_util___EndCode_42;

#line 131 "lookup_util.m"
    {
#line 131 "lookup_util.m"
      ll_backend__code_info__remember_position_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CI_0_19, &ll_backend__lookup_util__BranchStart_36);
    }
#line 132 "lookup_util.m"
    ll_backend__lookup_util___GoalExpr_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Goal_10, (MR_Integer) 0)));
#line 132 "lookup_util.m"
    ll_backend__lookup_util__GoalInfo_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Goal_10, (MR_Integer) 1)));
#line 133 "lookup_util.m"
    {
#line 133 "lookup_util.m"
      ll_backend__lookup_util__CodeModel_39 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__lookup_util__GoalInfo_38);
    }
#line 134 "lookup_util.m"
    {
#line 134 "lookup_util.m"
      ll_backend__code_gen__generate_goal_5_p_0(ll_backend__lookup_util__CodeModel_39, ll_backend__lookup_util__Goal_10, &ll_backend__lookup_util__Code_40, ll_backend__lookup_util__STATE_VARIABLE_CI_0_19, &ll_backend__lookup_util__STATE_VARIABLE_CI_30_43);
    }
#line 135 "lookup_util.m"
    {
#line 135 "lookup_util.m"
      ll_backend__lookup_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_util__Code_40);
    }
#line 120 "lookup_util.m"
    if (ll_backend__lookup_util__succeeded)
#line 120 "lookup_util.m"
      {
#line 136 "lookup_util.m"
        {
#line 136 "lookup_util.m"
          ll_backend__code_info__get_forward_live_vars_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CI_30_43, ll_backend__lookup_util__Liveness_15);
        }
#line 138 "lookup_util.m"
        {
#line 138 "lookup_util.m"
          ll_backend__code_info__get_exprn_opts_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CI_30_43, &ll_backend__lookup_util__ExprnOpts_41);
        }
#line 139 "lookup_util.m"
        {
#line 139 "lookup_util.m"
          ll_backend__lookup_util__succeeded = ll_backend__lookup_util__get_arm_rvals_5_p_0(ll_backend__lookup_util__Vars_11, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_17, ll_backend__lookup_util__STATE_VARIABLE_CI_30_43, &ll_backend__lookup_util__STATE_VARIABLE_CI_32_45, ll_backend__lookup_util__ExprnOpts_41);
        }
#line 120 "lookup_util.m"
        if (ll_backend__lookup_util__succeeded)
#line 120 "lookup_util.m"
          {
#line 149 "lookup_util.m"
            {
#line 149 "lookup_util.m"
              ll_backend__code_info__generate_branch_end_6_p_0(ll_backend__lookup_util__StoreMap_12, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_18, ll_backend__lookup_util__CaseRvals_14, &ll_backend__lookup_util___EndCode_42, ll_backend__lookup_util__STATE_VARIABLE_CI_32_45, &ll_backend__lookup_util__STATE_VARIABLE_CI_34_47);
            }
#line 150 "lookup_util.m"
            {
#line 150 "lookup_util.m"
              ll_backend__code_info__reset_to_position_3_p_0(ll_backend__lookup_util__BranchStart_36, ll_backend__lookup_util__STATE_VARIABLE_CI_34_47, ll_backend__lookup_util__STATE_VARIABLE_CI_20);
            }
#line 150 "lookup_util.m"
            ll_backend__lookup_util__succeeded = MR_TRUE;
#line 120 "lookup_util.m"
          }
#line 120 "lookup_util.m"
      }
#line 120 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 120 "lookup_util.m"
  }
#line 51 "lookup_util.m"
}

#line 105 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__figure_out_output_vars_3_p_0_1(
#line 105 "lookup_util.m"
  MR_Box ll_backend__lookup_util__closure_arg,
#line 105 "lookup_util.m"
  MR_Box ll_backend__lookup_util__wrapper_arg_1)
#line 105 "lookup_util.m"
{
#line 105 "lookup_util.m"
  {
#line 105 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 105 "lookup_util.m"
    MR_Box ll_backend__lookup_util__closure = ll_backend__lookup_util__closure_arg;

#line 105 "lookup_util.m"
    {
#line 105 "lookup_util.m"
      return ll_backend__lookup_util__succeeded = ll_backend__lookup_util__is_output_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__lookup_util__wrapper_arg_1));
    }
#line 105 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 105 "lookup_util.m"
  }
#line 105 "lookup_util.m"
}

#line 35 "lookup_util.m"
void MR_CALL 
ll_backend__lookup_util__figure_out_output_vars_3_p_0(
#line 35 "lookup_util.m"
  MR_Word ll_backend__lookup_util__CI_4,
#line 35 "lookup_util.m"
  MR_Word ll_backend__lookup_util__GoalInfo_5,
#line 35 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__OutVars_6)
#line 35 "lookup_util.m"
{
#line 95 "lookup_util.m"
  {
#line 95 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 95 "lookup_util.m"
    MR_Word ll_backend__lookup_util__InstMapDelta_7;

#line 96 "lookup_util.m"
    {
#line 96 "lookup_util.m"
      ll_backend__lookup_util__InstMapDelta_7 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__lookup_util__GoalInfo_5);
    }
#line 97 "lookup_util.m"
    {
#line 97 "lookup_util.m"
      ll_backend__lookup_util__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__lookup_util__InstMapDelta_7);
    }
#line 99 "lookup_util.m"
    if (ll_backend__lookup_util__succeeded)
#line 98 "lookup_util.m"
      *ll_backend__lookup_util__OutVars_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 99 "lookup_util.m"
    else
#line 100 "lookup_util.m"
      {
#line 100 "lookup_util.m"
        MR_Word ll_backend__lookup_util__CurrentInstMap_8;
#line 100 "lookup_util.m"
        MR_Word ll_backend__lookup_util__ModuleInfo_9;
#line 100 "lookup_util.m"
        MR_Word ll_backend__lookup_util__ChangedVars_10;
#line 100 "lookup_util.m"
        MR_Word ll_backend__lookup_util__InstMapAfter_11;
#line 100 "lookup_util.m"
        MR_Word ll_backend__lookup_util__V_12_12;
#line 100 "lookup_util.m"
        MR_Word ll_backend__lookup_util__V_13_13;

#line 100 "lookup_util.m"
        {
#line 100 "lookup_util.m"
          ll_backend__code_info__get_instmap_2_p_0(ll_backend__lookup_util__CI_4, &ll_backend__lookup_util__CurrentInstMap_8);
        }
#line 101 "lookup_util.m"
        {
#line 101 "lookup_util.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__lookup_util__CI_4, &ll_backend__lookup_util__ModuleInfo_9);
        }
#line 102 "lookup_util.m"
        {
#line 102 "lookup_util.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(ll_backend__lookup_util__InstMapDelta_7, &ll_backend__lookup_util__ChangedVars_10);
        }
#line 103 "lookup_util.m"
        {
#line 103 "lookup_util.m"
          hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__lookup_util__CurrentInstMap_8, ll_backend__lookup_util__InstMapDelta_7, &ll_backend__lookup_util__InstMapAfter_11);
        }
#line 105 "lookup_util.m"
        {
#line 105 "lookup_util.m"
          ll_backend__lookup_util__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 105 "lookup_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_12_12, 0) = ((MR_Box) (&ll_backend__lookup_util_scalar_common_2[0]));
#line 105 "lookup_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_12_12, 1) = ((MR_Box) (ll_backend__lookup_util__figure_out_output_vars_3_p_0_1));
#line 105 "lookup_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 105 "lookup_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_12_12, 3) = ((MR_Box) (ll_backend__lookup_util__ModuleInfo_9));
#line 105 "lookup_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_12_12, 4) = ((MR_Box) (ll_backend__lookup_util__CurrentInstMap_8));
#line 105 "lookup_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_12_12, 5) = ((MR_Box) (ll_backend__lookup_util__InstMapAfter_11));
#line 105 "lookup_util.m"
        }
#line 105 "lookup_util.m"
        {
#line 105 "lookup_util.m"
          ll_backend__lookup_util__V_13_13 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__lookup_util__ChangedVars_10);
        }
#line 105 "lookup_util.m"
        {
#line 105 "lookup_util.m"
          mercury__list__filter_3_p_0((MR_Word) &ll_backend__lookup_util_scalar_common_1[0], ll_backend__lookup_util__V_12_12, ll_backend__lookup_util__V_13_13, ll_backend__lookup_util__OutVars_6);
#line 105 "lookup_util.m"
          return;
        }
#line 100 "lookup_util.m"
      }
#line 95 "lookup_util.m"
  }
#line 35 "lookup_util.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.lookup_util. */
