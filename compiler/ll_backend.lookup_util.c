/*
** Automatically generated from `lookup_util.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "integer.mih"
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
#include "hlds.goal_form.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 157 "ll_backend.lookup_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "ll_backend.lookup_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0;

#line 225 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__225__1_1_p_0(
#line 225 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Code_20);

#line 194 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__rval_is_constant_2_p_0(
#line 194 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
#line 194 "lookup_util.m"
  MR_Word ll_backend__lookup_util__ExprnOpts_2);

#line 179 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__get_arm_rvals_6_p_0(
#line 179 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
#line 179 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__HeadVar__2_2,
#line 179 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__3_3,
#line 179 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_0_4,
#line 179 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CLD_5,
#line 179 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__6_6);

#line 112 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__is_output_var_4_p_0(
#line 112 "lookup_util.m"
  MR_Word ll_backend__lookup_util__ModuleInfo_5,
#line 112 "lookup_util.m"
  MR_Word ll_backend__lookup_util__CurrentInstMap_6,
#line 112 "lookup_util.m"
  MR_Word ll_backend__lookup_util__InstMapAfter_7,
#line 112 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Var_8);

#line 225 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__generate_offset_assigns_6_p_0_1(
#line 225 "lookup_util.m"
  MR_Box ll_backend__lookup_util__closure_arg);

#line 108 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__figure_out_output_vars_4_p_0_1(
#line 108 "lookup_util.m"
  MR_Box ll_backend__lookup_util__closure_arg,
#line 108 "lookup_util.m"
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



#line 278 "ll_backend.lookup_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 286 "ll_backend.lookup_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__lookup_util__cord__pti_cord_1__plain_ll_backend__llds__type_ctor_info_instruction_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0
  }
};

#line 225 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__225__1_1_p_0(
#line 225 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Code_20)
#line 225 "lookup_util.m"
{
#line 225 "lookup_util.m"
  {
#line 225 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;

#line 225 "lookup_util.m"
    {
#line 225 "lookup_util.m"
      return ll_backend__lookup_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_util__Code_20);
    }
#line 225 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 225 "lookup_util.m"
  }
#line 225 "lookup_util.m"
}

#line 194 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__rval_is_constant_2_p_0(
#line 194 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
#line 194 "lookup_util.m"
  MR_Word ll_backend__lookup_util__ExprnOpts_2)
#line 194 "lookup_util.m"
{
#line 196 "lookup_util.m"
  while (MR_TRUE)
#line 196 "lookup_util.m"
    {
#line 196 "lookup_util.m"
      /* tailcall optimized into a loop */
#line 196 "lookup_util.m"
      {
#line 196 "lookup_util.m"
        MR_bool ll_backend__lookup_util__succeeded;

#line 196 "lookup_util.m"
#line 196 "lookup_util.m"
        switch (MR_tag((MR_Word) ll_backend__lookup_util__HeadVar__1_1)) {
#line 196 "lookup_util.m"
          default:
#line 196 "lookup_util.m"
            ll_backend__lookup_util__succeeded = MR_FALSE;
#line 196 "lookup_util.m"
            break;
#line 196 "lookup_util.m"
          case (MR_Integer) 2:
#line 203 "lookup_util.m"
            {
#line 203 "lookup_util.m"
              MR_Word ll_backend__lookup_util__Exprn0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
#line 203 "lookup_util.m"
              MR_Integer ll_backend__lookup_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)));

#line 204 "lookup_util.m"
              /* direct tailcall eliminated */
#line 204 "lookup_util.m"
              {
#line 204 "lookup_util.m"
                MR_Word ll_backend__lookup_util__HeadVar__1__tmp_copy_1 = ll_backend__lookup_util__Exprn0_14;

#line 204 "lookup_util.m"
                ll_backend__lookup_util__HeadVar__1_1 = ll_backend__lookup_util__HeadVar__1__tmp_copy_1;
#line 204 "lookup_util.m"
              }
#line 204 "lookup_util.m"
              continue;
#line 203 "lookup_util.m"
            }
#line 196 "lookup_util.m"
            break;
#line 196 "lookup_util.m"
          case (MR_Integer) 3:
#line 196 "lookup_util.m"
#line 196 "lookup_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 196 "lookup_util.m"
              default:
#line 196 "lookup_util.m"
                ll_backend__lookup_util__succeeded = MR_FALSE;
#line 196 "lookup_util.m"
                break;
#line 196 "lookup_util.m"
              case (MR_Integer) 1:
#line 196 "lookup_util.m"
                {
#line 196 "lookup_util.m"
                  MR_Word ll_backend__lookup_util__Const_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
#line 196 "lookup_util.m"
                  MR_Word ll_backend__lookup_util__V_16_16;

#line 197 "lookup_util.m"
                  {
#line 197 "lookup_util.m"
                    ll_backend__exprn_aux__const_is_constant_3_p_0(ll_backend__lookup_util__Const_3, ll_backend__lookup_util__ExprnOpts_2, &ll_backend__lookup_util__V_16_16);
                  }
#line 197 "lookup_util.m"
                  ll_backend__lookup_util__succeeded = ((MR_Integer) 1 == ll_backend__lookup_util__V_16_16);
#line 196 "lookup_util.m"
                }
#line 196 "lookup_util.m"
                break;
#line 196 "lookup_util.m"
              case (MR_Integer) 2:
#line 198 "lookup_util.m"
                {
#line 198 "lookup_util.m"
                  MR_Word ll_backend__lookup_util__Exprn_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 2)));
#line 198 "lookup_util.m"
                  MR_Word ll_backend__lookup_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));

#line 199 "lookup_util.m"
                  /* direct tailcall eliminated */
#line 199 "lookup_util.m"
                  {
#line 199 "lookup_util.m"
                    MR_Word ll_backend__lookup_util__HeadVar__1__tmp_copy_1 = ll_backend__lookup_util__Exprn_7;

#line 199 "lookup_util.m"
                    ll_backend__lookup_util__HeadVar__1_1 = ll_backend__lookup_util__HeadVar__1__tmp_copy_1;
#line 199 "lookup_util.m"
                  }
#line 199 "lookup_util.m"
                  continue;
#line 198 "lookup_util.m"
                }
#line 196 "lookup_util.m"
                break;
#line 196 "lookup_util.m"
              case (MR_Integer) 3:
#line 200 "lookup_util.m"
                {
#line 200 "lookup_util.m"
                  MR_Word ll_backend__lookup_util__Exprn0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 2)));
#line 200 "lookup_util.m"
                  MR_Word ll_backend__lookup_util__Exprn1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 3)));
#line 200 "lookup_util.m"
                  MR_Word ll_backend__lookup_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));

#line 201 "lookup_util.m"
                  {
#line 201 "lookup_util.m"
                    ll_backend__lookup_util__succeeded = ll_backend__lookup_util__rval_is_constant_2_p_0(ll_backend__lookup_util__Exprn0_10, ll_backend__lookup_util__ExprnOpts_2);
                  }
#line 200 "lookup_util.m"
                  if (ll_backend__lookup_util__succeeded)
#line 202 "lookup_util.m"
                    {
#line 202 "lookup_util.m"
                      /* direct tailcall eliminated */
#line 202 "lookup_util.m"
                      {
#line 202 "lookup_util.m"
                        MR_Word ll_backend__lookup_util__HeadVar__1__tmp_copy_1 = ll_backend__lookup_util__Exprn1_11;

#line 202 "lookup_util.m"
                        ll_backend__lookup_util__HeadVar__1_1 = ll_backend__lookup_util__HeadVar__1__tmp_copy_1;
#line 202 "lookup_util.m"
                      }
#line 202 "lookup_util.m"
                      continue;
#line 202 "lookup_util.m"
                    }
#line 200 "lookup_util.m"
                }
#line 196 "lookup_util.m"
                break;
#line 196 "lookup_util.m"
            }
#line 196 "lookup_util.m"
            break;
#line 196 "lookup_util.m"
        }
#line 196 "lookup_util.m"
        return ll_backend__lookup_util__succeeded;
#line 196 "lookup_util.m"
      }
#line 196 "lookup_util.m"
      break;
#line 196 "lookup_util.m"
    }
#line 194 "lookup_util.m"
}

#line 179 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__get_arm_rvals_6_p_0(
#line 179 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
#line 179 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__HeadVar__2_2,
#line 179 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__3_3,
#line 179 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_0_4,
#line 179 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CLD_5,
#line 179 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__6_6)
#line 179 "lookup_util.m"
{
#line 183 "lookup_util.m"
  {
#line 183 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;

#line 183 "lookup_util.m"
    if ((ll_backend__lookup_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 183 "lookup_util.m"
      {
#line 183 "lookup_util.m"
        *ll_backend__lookup_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "lookup_util.m"
        *ll_backend__lookup_util__STATE_VARIABLE_CLD_5 = ll_backend__lookup_util__STATE_VARIABLE_CLD_0_4;
#line 183 "lookup_util.m"
        ll_backend__lookup_util__succeeded = MR_TRUE;
#line 183 "lookup_util.m"
      }
#line 183 "lookup_util.m"
    else
#line 184 "lookup_util.m"
      {
#line 184 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)));
#line 184 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Vars_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
#line 184 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Rval_14;
#line 184 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Rvals_15;
#line 184 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Code_19;
#line 184 "lookup_util.m"
        MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_22_22;

#line 185 "lookup_util.m"
        {
#line 185 "lookup_util.m"
          ll_backend__code_loc_dep__produce_variable_6_p_0(ll_backend__lookup_util__Var_12, &ll_backend__lookup_util__Code_19, &ll_backend__lookup_util__Rval_14, ll_backend__lookup_util__HeadVar__3_3, ll_backend__lookup_util__STATE_VARIABLE_CLD_0_4, &ll_backend__lookup_util__STATE_VARIABLE_CLD_22_22);
        }
#line 186 "lookup_util.m"
        {
#line 186 "lookup_util.m"
          ll_backend__lookup_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_util__Code_19);
        }
#line 184 "lookup_util.m"
        if (ll_backend__lookup_util__succeeded)
#line 184 "lookup_util.m"
          {
#line 187 "lookup_util.m"
            {
#line 187 "lookup_util.m"
              ll_backend__lookup_util__succeeded = ll_backend__lookup_util__rval_is_constant_2_p_0(ll_backend__lookup_util__Rval_14, ll_backend__lookup_util__HeadVar__6_6);
            }
#line 184 "lookup_util.m"
            if (ll_backend__lookup_util__succeeded)
#line 184 "lookup_util.m"
              {
#line 188 "lookup_util.m"
                {
#line 188 "lookup_util.m"
                  ll_backend__lookup_util__succeeded = ll_backend__lookup_util__get_arm_rvals_6_p_0(ll_backend__lookup_util__Vars_13, &ll_backend__lookup_util__Rvals_15, ll_backend__lookup_util__HeadVar__3_3, ll_backend__lookup_util__STATE_VARIABLE_CLD_22_22, ll_backend__lookup_util__STATE_VARIABLE_CLD_5, ll_backend__lookup_util__HeadVar__6_6);
                }
#line 184 "lookup_util.m"
                if (ll_backend__lookup_util__succeeded)
#line 184 "lookup_util.m"
                  {
#line 184 "lookup_util.m"
                    {
#line 184 "lookup_util.m"
                      MR_Word base;
#line 184 "lookup_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 184 "lookup_util.m"
                      *ll_backend__lookup_util__HeadVar__2_2 = base;
#line 184 "lookup_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_util__Rval_14));
#line 184 "lookup_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_util__Rvals_15));
#line 184 "lookup_util.m"
                    }
#line 184 "lookup_util.m"
                    ll_backend__lookup_util__succeeded = MR_TRUE;
#line 184 "lookup_util.m"
                  }
#line 184 "lookup_util.m"
              }
#line 184 "lookup_util.m"
          }
#line 184 "lookup_util.m"
      }
#line 183 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 183 "lookup_util.m"
  }
#line 179 "lookup_util.m"
}

#line 112 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__is_output_var_4_p_0(
#line 112 "lookup_util.m"
  MR_Word ll_backend__lookup_util__ModuleInfo_5,
#line 112 "lookup_util.m"
  MR_Word ll_backend__lookup_util__CurrentInstMap_6,
#line 112 "lookup_util.m"
  MR_Word ll_backend__lookup_util__InstMapAfter_7,
#line 112 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Var_8)
#line 112 "lookup_util.m"
{
#line 115 "lookup_util.m"
  {
#line 115 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 115 "lookup_util.m"
    MR_Word ll_backend__lookup_util__Initial_9;
#line 115 "lookup_util.m"
    MR_Word ll_backend__lookup_util__Final_10;
#line 115 "lookup_util.m"
    MR_Word ll_backend__lookup_util__V_11_11;

#line 118 "lookup_util.m"
    {
#line 118 "lookup_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__lookup_util__CurrentInstMap_6, ll_backend__lookup_util__Var_8, &ll_backend__lookup_util__Initial_9);
    }
#line 119 "lookup_util.m"
    {
#line 119 "lookup_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(ll_backend__lookup_util__InstMapAfter_7, ll_backend__lookup_util__Var_8, &ll_backend__lookup_util__Final_10);
    }
#line 120 "lookup_util.m"
    {
#line 120 "lookup_util.m"
      ll_backend__lookup_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 120 "lookup_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_11_11, 0) = ((MR_Box) (ll_backend__lookup_util__Initial_9));
#line 120 "lookup_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_11_11, 1) = ((MR_Box) (ll_backend__lookup_util__Final_10));
#line 120 "lookup_util.m"
    }
#line 120 "lookup_util.m"
    {
#line 120 "lookup_util.m"
      return ll_backend__lookup_util__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(ll_backend__lookup_util__ModuleInfo_5, ll_backend__lookup_util__V_11_11);
    }
#line 115 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 115 "lookup_util.m"
  }
#line 112 "lookup_util.m"
}

#line 225 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__generate_offset_assigns_6_p_0_1(
#line 225 "lookup_util.m"
  MR_Box ll_backend__lookup_util__closure_arg)
#line 225 "lookup_util.m"
{
#line 225 "lookup_util.m"
  {
#line 225 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 225 "lookup_util.m"
    MR_Box ll_backend__lookup_util__closure = ll_backend__lookup_util__closure_arg;

#line 225 "lookup_util.m"
    {
#line 225 "lookup_util.m"
      return ll_backend__lookup_util__succeeded = ll_backend__lookup_util__IntroducedFrom__pred__generate_offset_assigns__225__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__closure, (MR_Integer) 3))));
    }
#line 225 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 225 "lookup_util.m"
  }
#line 225 "lookup_util.m"
}

#line 78 "lookup_util.m"
void MR_CALL 
ll_backend__lookup_util__generate_offset_assigns_6_p_0(
#line 78 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
#line 78 "lookup_util.m"
  MR_Integer ll_backend__lookup_util__Offset_2,
#line 78 "lookup_util.m"
  MR_Word ll_backend__lookup_util__BaseReg_3,
#line 78 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__4_4,
#line 78 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_0_5,
#line 78 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CLD_6)
#line 78 "lookup_util.m"
{
#line 221 "lookup_util.m"
  while (MR_TRUE)
#line 221 "lookup_util.m"
    {
#line 221 "lookup_util.m"
      /* tailcall optimized into a loop */
#line 221 "lookup_util.m"
      {
#line 221 "lookup_util.m"
        MR_bool ll_backend__lookup_util__succeeded;

#line 221 "lookup_util.m"
        if ((ll_backend__lookup_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "lookup_util.m"
          *ll_backend__lookup_util__STATE_VARIABLE_CLD_6 = ll_backend__lookup_util__STATE_VARIABLE_CLD_0_5;
#line 221 "lookup_util.m"
        else
#line 222 "lookup_util.m"
          {
#line 222 "lookup_util.m"
            MR_Word ll_backend__lookup_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 0)));
#line 222 "lookup_util.m"
            MR_Word ll_backend__lookup_util__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "lookup_util.m"
            MR_Word ll_backend__lookup_util__LookupLval_19;
#line 222 "lookup_util.m"
            MR_Word ll_backend__lookup_util__Code_20;
#line 222 "lookup_util.m"
            MR_Word ll_backend__lookup_util__V_25_25;
#line 222 "lookup_util.m"
            MR_Word ll_backend__lookup_util__V_26_26;
#line 222 "lookup_util.m"
            MR_Word ll_backend__lookup_util__V_27_27;
#line 222 "lookup_util.m"
            MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_28_28;
#line 222 "lookup_util.m"
            MR_Word ll_backend__lookup_util__V_29_29;
#line 222 "lookup_util.m"
            MR_Integer ll_backend__lookup_util__V_33_33;

#line 223 "lookup_util.m"
            {
#line 223 "lookup_util.m"
              ll_backend__lookup_util__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 223 "lookup_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_25_25, 0) = ((MR_Box) (ll_backend__lookup_util__BaseReg_3));
#line 223 "lookup_util.m"
            }
#line 223 "lookup_util.m"
            {
#line 223 "lookup_util.m"
              ll_backend__lookup_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 223 "lookup_util.m"
              MR_hl_field(MR_mktag(1), ll_backend__lookup_util__V_27_27, 0) = ((MR_Box) (ll_backend__lookup_util__Offset_2));
#line 223 "lookup_util.m"
            }
#line 223 "lookup_util.m"
            {
#line 223 "lookup_util.m"
              ll_backend__lookup_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "lookup_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_util__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 223 "lookup_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_util__V_26_26, 1) = ((MR_Box) (ll_backend__lookup_util__V_27_27));
#line 223 "lookup_util.m"
            }
#line 223 "lookup_util.m"
            {
#line 223 "lookup_util.m"
              ll_backend__lookup_util__LookupLval_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 223 "lookup_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_util__LookupLval_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 223 "lookup_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_util__LookupLval_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__lookup_util_scalar_common_3[0])));
#line 223 "lookup_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_util__LookupLval_19, 2) = ((MR_Box) (ll_backend__lookup_util__V_25_25));
#line 223 "lookup_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__lookup_util__LookupLval_19, 3) = ((MR_Box) (ll_backend__lookup_util__V_26_26));
#line 223 "lookup_util.m"
            }
#line 224 "lookup_util.m"
            {
#line 224 "lookup_util.m"
              ll_backend__code_loc_dep__assign_lval_to_var_6_p_0(ll_backend__lookup_util__Var_13, ll_backend__lookup_util__LookupLval_19, &ll_backend__lookup_util__Code_20, ll_backend__lookup_util__HeadVar__4_4, ll_backend__lookup_util__STATE_VARIABLE_CLD_0_5, &ll_backend__lookup_util__STATE_VARIABLE_CLD_28_28);
            }
#line 225 "lookup_util.m"
            {
#line 225 "lookup_util.m"
              ll_backend__lookup_util__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 225 "lookup_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_29_29, 0) = ((MR_Box) (&ll_backend__lookup_util_scalar_common_4[0]));
#line 225 "lookup_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_29_29, 1) = ((MR_Box) (ll_backend__lookup_util__generate_offset_assigns_6_p_0_1));
#line 225 "lookup_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 225 "lookup_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_29_29, 3) = ((MR_Box) (ll_backend__lookup_util__Code_20));
#line 225 "lookup_util.m"
            }
#line 225 "lookup_util.m"
            {
#line 225 "lookup_util.m"
              mercury__require__expect_4_p_0(ll_backend__lookup_util__V_29_29, (MR_String) "ll_backend.lookup_util", (MR_String) "predicate \140ll_backend.lookup_util.generate_offset_assigns\'/6", (MR_String) "nonempty code");
            }
#line 226 "lookup_util.m"
            ll_backend__lookup_util__V_33_33 = (ll_backend__lookup_util__Offset_2 + (MR_Integer) 1);
#line 226 "lookup_util.m"
            /* direct tailcall eliminated */
#line 226 "lookup_util.m"
            {
#line 226 "lookup_util.m"
              MR_Word ll_backend__lookup_util__HeadVar__1__tmp_copy_1 = ll_backend__lookup_util__Vars_14;
#line 226 "lookup_util.m"
              MR_Integer ll_backend__lookup_util__Offset__tmp_copy_2 = ll_backend__lookup_util__V_33_33;
#line 226 "lookup_util.m"
              MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_0__tmp_copy_5 = ll_backend__lookup_util__STATE_VARIABLE_CLD_28_28;

#line 226 "lookup_util.m"
              ll_backend__lookup_util__STATE_VARIABLE_CLD_0_5 = ll_backend__lookup_util__STATE_VARIABLE_CLD_0__tmp_copy_5;
#line 226 "lookup_util.m"
              ll_backend__lookup_util__Offset_2 = ll_backend__lookup_util__Offset__tmp_copy_2;
#line 226 "lookup_util.m"
              ll_backend__lookup_util__HeadVar__1_1 = ll_backend__lookup_util__HeadVar__1__tmp_copy_1;
#line 226 "lookup_util.m"
            }
#line 226 "lookup_util.m"
            continue;
#line 222 "lookup_util.m"
          }
#line 221 "lookup_util.m"
      }
#line 221 "lookup_util.m"
      break;
#line 221 "lookup_util.m"
    }
#line 78 "lookup_util.m"
}

#line 74 "lookup_util.m"
void MR_CALL 
ll_backend__lookup_util__set_liveness_and_end_branch_7_p_0(
#line 74 "lookup_util.m"
  MR_Word ll_backend__lookup_util__StoreMap_8,
#line 74 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Liveness_9,
#line 74 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_16,
#line 74 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_17,
#line 74 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__BranchEndCode_11,
#line 74 "lookup_util.m"
  MR_Word ll_backend__lookup_util__CI_12,
#line 74 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_0_18)
#line 74 "lookup_util.m"
{
#line 209 "lookup_util.m"
  {
#line 209 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 209 "lookup_util.m"
    MR_Word ll_backend__lookup_util__OldLiveness_14;
#line 209 "lookup_util.m"
    MR_Word ll_backend__lookup_util__DeadVars_15;
#line 209 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_19_19;
#line 209 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_21_21;

#line 215 "lookup_util.m"
    {
#line 215 "lookup_util.m"
      ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CLD_0_18, &ll_backend__lookup_util__OldLiveness_14);
    }
#line 216 "lookup_util.m"
    {
#line 216 "lookup_util.m"
      ll_backend__code_loc_dep__set_forward_live_vars_3_p_0(ll_backend__lookup_util__Liveness_9, ll_backend__lookup_util__STATE_VARIABLE_CLD_0_18, &ll_backend__lookup_util__STATE_VARIABLE_CLD_19_19);
    }
#line 217 "lookup_util.m"
    {
#line 217 "lookup_util.m"
      parse_tree__set_of_var__difference_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__lookup_util__OldLiveness_14, ll_backend__lookup_util__Liveness_9, &ll_backend__lookup_util__DeadVars_15);
    }
#line 218 "lookup_util.m"
    {
#line 218 "lookup_util.m"
      ll_backend__code_loc_dep__maybe_make_vars_forward_dead_4_p_0(ll_backend__lookup_util__DeadVars_15, (MR_Integer) 0, ll_backend__lookup_util__STATE_VARIABLE_CLD_19_19, &ll_backend__lookup_util__STATE_VARIABLE_CLD_21_21);
    }
#line 219 "lookup_util.m"
    {
#line 219 "lookup_util.m"
      ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__lookup_util__StoreMap_8, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_16, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_17, ll_backend__lookup_util__BranchEndCode_11, ll_backend__lookup_util__CI_12, ll_backend__lookup_util__STATE_VARIABLE_CLD_21_21);
#line 219 "lookup_util.m"
      return;
    }
#line 209 "lookup_util.m"
  }
#line 74 "lookup_util.m"
}

#line 62 "lookup_util.m"
MR_bool MR_CALL 
ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(
#line 62 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__1_1,
#line 62 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__2_2,
#line 62 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__3_3,
#line 62 "lookup_util.m"
  MR_Word ll_backend__lookup_util__HeadVar__4_4,
#line 62 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__HeadVar__5_5,
#line 62 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_6,
#line 62 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_7,
#line 62 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_8,
#line 62 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_9)
#line 62 "lookup_util.m"
{
#line 168 "lookup_util.m"
  {
#line 168 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;

#line 168 "lookup_util.m"
    if ((ll_backend__lookup_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "lookup_util.m"
      {
#line 169 "lookup_util.m"
        *ll_backend__lookup_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 169 "lookup_util.m"
        *ll_backend__lookup_util__STATE_VARIABLE_CI_9 = ll_backend__lookup_util__STATE_VARIABLE_CI_0_8;
#line 169 "lookup_util.m"
        *ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_7 = ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_6;
#line 168 "lookup_util.m"
        ll_backend__lookup_util__succeeded = MR_TRUE;
#line 168 "lookup_util.m"
      }
#line 168 "lookup_util.m"
    else
#line 171 "lookup_util.m"
      {
#line 171 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Disjunct0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Disjuncts0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__lookup_util__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Soln_24;
#line 171 "lookup_util.m"
        MR_Word ll_backend__lookup_util__Solns_25;
#line 171 "lookup_util.m"
        MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_33_33;
#line 171 "lookup_util.m"
        MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_34_34;
#line 172 "lookup_util.m"
        MR_Word ll_backend__lookup_util___Liveness_28;

#line 172 "lookup_util.m"
        {
#line 172 "lookup_util.m"
          ll_backend__lookup_util__succeeded = ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(ll_backend__lookup_util__HeadVar__1_1, ll_backend__lookup_util__Disjunct0_20, ll_backend__lookup_util__HeadVar__3_3, ll_backend__lookup_util__HeadVar__4_4, &ll_backend__lookup_util__Soln_24, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_6, &ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_33_33, &ll_backend__lookup_util___Liveness_28, ll_backend__lookup_util__STATE_VARIABLE_CI_0_8, &ll_backend__lookup_util__STATE_VARIABLE_CI_34_34);
        }
#line 171 "lookup_util.m"
        if (ll_backend__lookup_util__succeeded)
#line 171 "lookup_util.m"
          {
#line 174 "lookup_util.m"
            {
#line 174 "lookup_util.m"
              ll_backend__lookup_util__succeeded = ll_backend__lookup_util__generate_constants_for_disjuncts_9_p_0(ll_backend__lookup_util__HeadVar__1_1, ll_backend__lookup_util__Disjuncts0_21, ll_backend__lookup_util__HeadVar__3_3, ll_backend__lookup_util__HeadVar__4_4, &ll_backend__lookup_util__Solns_25, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_33_33, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_7, ll_backend__lookup_util__STATE_VARIABLE_CI_34_34, ll_backend__lookup_util__STATE_VARIABLE_CI_9);
            }
#line 171 "lookup_util.m"
            if (ll_backend__lookup_util__succeeded)
#line 171 "lookup_util.m"
              {
#line 171 "lookup_util.m"
                {
#line 171 "lookup_util.m"
                  MR_Word base;
#line 171 "lookup_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "lookup_util.m"
                  *ll_backend__lookup_util__HeadVar__5_5 = base;
#line 171 "lookup_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__lookup_util__Soln_24));
#line 171 "lookup_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__lookup_util__Solns_25));
#line 171 "lookup_util.m"
                }
#line 171 "lookup_util.m"
                ll_backend__lookup_util__succeeded = MR_TRUE;
#line 171 "lookup_util.m"
              }
#line 171 "lookup_util.m"
          }
#line 171 "lookup_util.m"
      }
#line 168 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 168 "lookup_util.m"
  }
#line 62 "lookup_util.m"
}

#line 57 "lookup_util.m"
MR_bool MR_CALL 
ll_backend__lookup_util__generate_constants_for_disjunct_10_p_0(
#line 57 "lookup_util.m"
  MR_Word ll_backend__lookup_util__BranchStart_11,
#line 57 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Disjunct0_12,
#line 57 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Vars_13,
#line 57 "lookup_util.m"
  MR_Word ll_backend__lookup_util__StoreMap_14,
#line 57 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__Soln_15,
#line 57 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_23,
#line 57 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_24,
#line 57 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__Liveness_17,
#line 57 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_25,
#line 57 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_26)
#line 57 "lookup_util.m"
{
#line 158 "lookup_util.m"
  {
#line 158 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 158 "lookup_util.m"
    MR_Word ll_backend__lookup_util__DisjunctGoalInfo0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct0_12, (MR_Integer) 1)));
#line 158 "lookup_util.m"
    MR_Word ll_backend__lookup_util__Disjunct_22;
#line 158 "lookup_util.m"
    MR_Word ll_backend__lookup_util___GoalExpr_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct0_12, (MR_Integer) 0)));
#line 158 "lookup_util.m"
    MR_Word ll_backend__lookup_util__GoalInfo_45;
#line 158 "lookup_util.m"
    MR_Word ll_backend__lookup_util__CodeModel_46;
#line 158 "lookup_util.m"
    MR_Word ll_backend__lookup_util__Code_48;
#line 158 "lookup_util.m"
    MR_Word ll_backend__lookup_util__ExprnOpts_49;
#line 158 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_32_51;
#line 158 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_34_53;
#line 158 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_35_54;
#line 158 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_36_55;
#line 154 "lookup_util.m"
    MR_Word ll_backend__lookup_util___EndCode_50;

#line 162 "lookup_util.m"
    {
#line 162 "lookup_util.m"
      hlds__hlds_llds__goal_info_set_resume_point_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__lookup_util__DisjunctGoalInfo0_20, &ll_backend__lookup_util__GoalInfo_45);
    }
#line 164 "lookup_util.m"
    {
#line 164 "lookup_util.m"
      ll_backend__lookup_util__Disjunct_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 164 "lookup_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct_22, 0) = ((MR_Box) (ll_backend__lookup_util___GoalExpr_44));
#line 164 "lookup_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Disjunct_22, 1) = ((MR_Box) (ll_backend__lookup_util__GoalInfo_45));
#line 164 "lookup_util.m"
    }
#line 135 "lookup_util.m"
    {
#line 135 "lookup_util.m"
      ll_backend__lookup_util__CodeModel_46 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__lookup_util__GoalInfo_45);
    }
#line 137 "lookup_util.m"
    {
#line 137 "lookup_util.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_util__BranchStart_11, ll_backend__lookup_util__STATE_VARIABLE_CI_0_25, &ll_backend__lookup_util__STATE_VARIABLE_CLD_32_51);
    }
#line 138 "lookup_util.m"
    {
#line 138 "lookup_util.m"
      ll_backend__code_gen__generate_goal_7_p_0(ll_backend__lookup_util__CodeModel_46, ll_backend__lookup_util__Disjunct_22, &ll_backend__lookup_util__Code_48, ll_backend__lookup_util__STATE_VARIABLE_CI_0_25, ll_backend__lookup_util__STATE_VARIABLE_CI_26, ll_backend__lookup_util__STATE_VARIABLE_CLD_32_51, &ll_backend__lookup_util__STATE_VARIABLE_CLD_34_53);
    }
#line 139 "lookup_util.m"
    {
#line 139 "lookup_util.m"
      ll_backend__lookup_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_util__Code_48);
    }
#line 158 "lookup_util.m"
    if (ll_backend__lookup_util__succeeded)
#line 158 "lookup_util.m"
      {
#line 140 "lookup_util.m"
        {
#line 140 "lookup_util.m"
          ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CLD_34_53, ll_backend__lookup_util__Liveness_17);
        }
#line 142 "lookup_util.m"
        {
#line 142 "lookup_util.m"
          ll_backend__code_info__get_exprn_opts_2_p_0(*ll_backend__lookup_util__STATE_VARIABLE_CI_26, &ll_backend__lookup_util__ExprnOpts_49);
        }
#line 143 "lookup_util.m"
        {
#line 143 "lookup_util.m"
          ll_backend__lookup_util__succeeded = ll_backend__lookup_util__get_arm_rvals_6_p_0(ll_backend__lookup_util__Vars_13, ll_backend__lookup_util__Soln_15, *ll_backend__lookup_util__STATE_VARIABLE_CI_26, ll_backend__lookup_util__STATE_VARIABLE_CLD_34_53, &ll_backend__lookup_util__STATE_VARIABLE_CLD_35_54, ll_backend__lookup_util__ExprnOpts_49);
        }
#line 158 "lookup_util.m"
        if (ll_backend__lookup_util__succeeded)
#line 158 "lookup_util.m"
          {
#line 148 "lookup_util.m"
            {
#line 148 "lookup_util.m"
              ll_backend__code_loc_dep__set_resume_point_to_unknown_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CLD_35_54, &ll_backend__lookup_util__STATE_VARIABLE_CLD_36_55);
            }
#line 154 "lookup_util.m"
            {
#line 154 "lookup_util.m"
              ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__lookup_util__StoreMap_14, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_23, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_24, &ll_backend__lookup_util___EndCode_50, *ll_backend__lookup_util__STATE_VARIABLE_CI_26, ll_backend__lookup_util__STATE_VARIABLE_CLD_36_55);
            }
#line 154 "lookup_util.m"
            ll_backend__lookup_util__succeeded = MR_TRUE;
#line 158 "lookup_util.m"
          }
#line 158 "lookup_util.m"
      }
#line 158 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 158 "lookup_util.m"
  }
#line 57 "lookup_util.m"
}

#line 52 "lookup_util.m"
MR_bool MR_CALL 
ll_backend__lookup_util__generate_constants_for_arm_10_p_0(
#line 52 "lookup_util.m"
  MR_Word ll_backend__lookup_util__BranchStart_11,
#line 52 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Goal_12,
#line 52 "lookup_util.m"
  MR_Word ll_backend__lookup_util__Vars_13,
#line 52 "lookup_util.m"
  MR_Word ll_backend__lookup_util__StoreMap_14,
#line 52 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_19,
#line 52 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_20,
#line 52 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__CaseRvals_16,
#line 52 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__Liveness_17,
#line 52 "lookup_util.m"
  MR_Word ll_backend__lookup_util__STATE_VARIABLE_CI_0_21,
#line 52 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__STATE_VARIABLE_CI_22)
#line 52 "lookup_util.m"
{
#line 123 "lookup_util.m"
  {
#line 123 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 123 "lookup_util.m"
    MR_Word ll_backend__lookup_util__GoalInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Goal_12, (MR_Integer) 1)));
#line 123 "lookup_util.m"
    MR_Word ll_backend__lookup_util__CodeModel_41;
#line 123 "lookup_util.m"
    MR_Word ll_backend__lookup_util__Code_43;
#line 123 "lookup_util.m"
    MR_Word ll_backend__lookup_util__ExprnOpts_44;
#line 123 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_32_46;
#line 123 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_34_48;
#line 123 "lookup_util.m"
    MR_Word ll_backend__lookup_util__STATE_VARIABLE_CLD_36_50;
#line 134 "lookup_util.m"
    MR_Word ll_backend__lookup_util___GoalExpr_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__Goal_12, (MR_Integer) 0)));
#line 154 "lookup_util.m"
    MR_Word ll_backend__lookup_util___EndCode_45;

#line 135 "lookup_util.m"
    {
#line 135 "lookup_util.m"
      ll_backend__lookup_util__CodeModel_41 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__lookup_util__GoalInfo_40);
    }
#line 137 "lookup_util.m"
    {
#line 137 "lookup_util.m"
      ll_backend__code_loc_dep__reset_to_position_3_p_0(ll_backend__lookup_util__BranchStart_11, ll_backend__lookup_util__STATE_VARIABLE_CI_0_21, &ll_backend__lookup_util__STATE_VARIABLE_CLD_32_46);
    }
#line 138 "lookup_util.m"
    {
#line 138 "lookup_util.m"
      ll_backend__code_gen__generate_goal_7_p_0(ll_backend__lookup_util__CodeModel_41, ll_backend__lookup_util__Goal_12, &ll_backend__lookup_util__Code_43, ll_backend__lookup_util__STATE_VARIABLE_CI_0_21, ll_backend__lookup_util__STATE_VARIABLE_CI_22, ll_backend__lookup_util__STATE_VARIABLE_CLD_32_46, &ll_backend__lookup_util__STATE_VARIABLE_CLD_34_48);
    }
#line 139 "lookup_util.m"
    {
#line 139 "lookup_util.m"
      ll_backend__lookup_util__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__lookup_util__Code_43);
    }
#line 123 "lookup_util.m"
    if (ll_backend__lookup_util__succeeded)
#line 123 "lookup_util.m"
      {
#line 140 "lookup_util.m"
        {
#line 140 "lookup_util.m"
          ll_backend__code_loc_dep__get_forward_live_vars_2_p_0(ll_backend__lookup_util__STATE_VARIABLE_CLD_34_48, ll_backend__lookup_util__Liveness_17);
        }
#line 142 "lookup_util.m"
        {
#line 142 "lookup_util.m"
          ll_backend__code_info__get_exprn_opts_2_p_0(*ll_backend__lookup_util__STATE_VARIABLE_CI_22, &ll_backend__lookup_util__ExprnOpts_44);
        }
#line 143 "lookup_util.m"
        {
#line 143 "lookup_util.m"
          ll_backend__lookup_util__succeeded = ll_backend__lookup_util__get_arm_rvals_6_p_0(ll_backend__lookup_util__Vars_13, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_0_19, *ll_backend__lookup_util__STATE_VARIABLE_CI_22, ll_backend__lookup_util__STATE_VARIABLE_CLD_34_48, &ll_backend__lookup_util__STATE_VARIABLE_CLD_36_50, ll_backend__lookup_util__ExprnOpts_44);
        }
#line 123 "lookup_util.m"
        if (ll_backend__lookup_util__succeeded)
#line 123 "lookup_util.m"
          {
#line 154 "lookup_util.m"
            {
#line 154 "lookup_util.m"
              ll_backend__code_loc_dep__generate_branch_end_6_p_0(ll_backend__lookup_util__StoreMap_14, ll_backend__lookup_util__STATE_VARIABLE_MaybeEnd_20, ll_backend__lookup_util__CaseRvals_16, &ll_backend__lookup_util___EndCode_45, *ll_backend__lookup_util__STATE_VARIABLE_CI_22, ll_backend__lookup_util__STATE_VARIABLE_CLD_36_50);
            }
#line 154 "lookup_util.m"
            ll_backend__lookup_util__succeeded = MR_TRUE;
#line 123 "lookup_util.m"
          }
#line 123 "lookup_util.m"
      }
#line 123 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 123 "lookup_util.m"
  }
#line 52 "lookup_util.m"
}

#line 108 "lookup_util.m"
static MR_bool MR_CALL 
ll_backend__lookup_util__figure_out_output_vars_4_p_0_1(
#line 108 "lookup_util.m"
  MR_Box ll_backend__lookup_util__closure_arg,
#line 108 "lookup_util.m"
  MR_Box ll_backend__lookup_util__wrapper_arg_1)
#line 108 "lookup_util.m"
{
#line 108 "lookup_util.m"
  {
#line 108 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 108 "lookup_util.m"
    MR_Box ll_backend__lookup_util__closure = ll_backend__lookup_util__closure_arg;

#line 108 "lookup_util.m"
    {
#line 108 "lookup_util.m"
      return ll_backend__lookup_util__succeeded = ll_backend__lookup_util__is_output_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__lookup_util__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__lookup_util__wrapper_arg_1));
    }
#line 108 "lookup_util.m"
    return ll_backend__lookup_util__succeeded;
#line 108 "lookup_util.m"
  }
#line 108 "lookup_util.m"
}

#line 36 "lookup_util.m"
void MR_CALL 
ll_backend__lookup_util__figure_out_output_vars_4_p_0(
#line 36 "lookup_util.m"
  MR_Word ll_backend__lookup_util__CI_5,
#line 36 "lookup_util.m"
  MR_Word ll_backend__lookup_util__CLD_6,
#line 36 "lookup_util.m"
  MR_Word ll_backend__lookup_util__GoalInfo_7,
#line 36 "lookup_util.m"
  MR_Word * ll_backend__lookup_util__OutVars_8)
#line 36 "lookup_util.m"
{
#line 98 "lookup_util.m"
  {
#line 98 "lookup_util.m"
    MR_bool ll_backend__lookup_util__succeeded;
#line 98 "lookup_util.m"
    MR_Word ll_backend__lookup_util__InstMapDelta_9;

#line 99 "lookup_util.m"
    {
#line 99 "lookup_util.m"
      ll_backend__lookup_util__InstMapDelta_9 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(ll_backend__lookup_util__GoalInfo_7);
    }
#line 100 "lookup_util.m"
    {
#line 100 "lookup_util.m"
      ll_backend__lookup_util__succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(ll_backend__lookup_util__InstMapDelta_9);
    }
#line 102 "lookup_util.m"
    if (ll_backend__lookup_util__succeeded)
#line 101 "lookup_util.m"
      *ll_backend__lookup_util__OutVars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 102 "lookup_util.m"
    else
#line 103 "lookup_util.m"
      {
#line 103 "lookup_util.m"
        MR_Word ll_backend__lookup_util__CurrentInstMap_10;
#line 103 "lookup_util.m"
        MR_Word ll_backend__lookup_util__ModuleInfo_11;
#line 103 "lookup_util.m"
        MR_Word ll_backend__lookup_util__ChangedVars_12;
#line 103 "lookup_util.m"
        MR_Word ll_backend__lookup_util__InstMapAfter_13;
#line 103 "lookup_util.m"
        MR_Word ll_backend__lookup_util__V_14_14;
#line 103 "lookup_util.m"
        MR_Word ll_backend__lookup_util__V_15_15;

#line 103 "lookup_util.m"
        {
#line 103 "lookup_util.m"
          ll_backend__code_loc_dep__get_instmap_2_p_0(ll_backend__lookup_util__CLD_6, &ll_backend__lookup_util__CurrentInstMap_10);
        }
#line 104 "lookup_util.m"
        {
#line 104 "lookup_util.m"
          ll_backend__code_info__get_module_info_2_p_0(ll_backend__lookup_util__CI_5, &ll_backend__lookup_util__ModuleInfo_11);
        }
#line 105 "lookup_util.m"
        {
#line 105 "lookup_util.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(ll_backend__lookup_util__InstMapDelta_9, &ll_backend__lookup_util__ChangedVars_12);
        }
#line 106 "lookup_util.m"
        {
#line 106 "lookup_util.m"
          hlds__instmap__apply_instmap_delta_3_p_0(ll_backend__lookup_util__CurrentInstMap_10, ll_backend__lookup_util__InstMapDelta_9, &ll_backend__lookup_util__InstMapAfter_13);
        }
#line 108 "lookup_util.m"
        {
#line 108 "lookup_util.m"
          ll_backend__lookup_util__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 108 "lookup_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_14_14, 0) = ((MR_Box) (&ll_backend__lookup_util_scalar_common_2[0]));
#line 108 "lookup_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_14_14, 1) = ((MR_Box) (ll_backend__lookup_util__figure_out_output_vars_4_p_0_1));
#line 108 "lookup_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 108 "lookup_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_14_14, 3) = ((MR_Box) (ll_backend__lookup_util__ModuleInfo_11));
#line 108 "lookup_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_14_14, 4) = ((MR_Box) (ll_backend__lookup_util__CurrentInstMap_10));
#line 108 "lookup_util.m"
          MR_hl_field(MR_mktag(0), ll_backend__lookup_util__V_14_14, 5) = ((MR_Box) (ll_backend__lookup_util__InstMapAfter_13));
#line 108 "lookup_util.m"
        }
#line 109 "lookup_util.m"
        {
#line 109 "lookup_util.m"
          ll_backend__lookup_util__V_15_15 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__lookup_util__ChangedVars_12);
        }
#line 108 "lookup_util.m"
        {
#line 108 "lookup_util.m"
          mercury__list__filter_3_p_0((MR_Word) &ll_backend__lookup_util_scalar_common_1[0], ll_backend__lookup_util__V_14_14, ll_backend__lookup_util__V_15_15, ll_backend__lookup_util__OutVars_8);
#line 108 "lookup_util.m"
          return;
        }
#line 103 "lookup_util.m"
      }
#line 98 "lookup_util.m"
  }
#line 36 "lookup_util.m"
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
