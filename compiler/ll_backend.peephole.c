/*
** Automatically generated from `peephole.m'
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


/* :- module ll_backend.peephole. */
/* :- implementation. */

/*
INIT mercury__ll_backend__peephole__init
ENDINIT
*/

#include "ll_backend.peephole.mih"


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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.opt_util.mih"
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




static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0;

static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1;

static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_value_ordered_pattern_0[2];

static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_name_ordered_pattern_0[2];

static const MR_Integer ll_backend__peephole__ll_backend__peephole__functor_number_map_pattern_0[2];

static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0_10001(
  MR_Box ll_backend__peephole__wrapper_arg_1,
  MR_Box ll_backend__peephole__wrapper_arg_2);

static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0_10001(
  MR_Box * ll_backend__peephole__wrapper_arg_1,
  MR_Box ll_backend__peephole__wrapper_arg_2,
  MR_Box ll_backend__peephole__wrapper_arg_3);

static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0(
  MR_Word * ll_backend__peephole__HeadVar__1_1,
  MR_Word ll_backend__peephole__HeadVar__2_2,
  MR_Word ll_backend__peephole__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0(
  MR_Word ll_backend__peephole__HeadVar__2_1,
  MR_Word ll_backend__peephole__HeadVar__2_2);

static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(
  MR_Word ll_backend__peephole__OldLval_6,
  MR_Integer ll_backend__peephole__OldTag_7,
  MR_Word ll_backend__peephole__OldBase_8,
  MR_Word ll_backend__peephole__Rval0_9,
  MR_Word * ll_backend__peephole__Rval_10);

static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(
  MR_Word ll_backend__peephole__OldLval_6,
  MR_Integer ll_backend__peephole__OldTag_7,
  MR_Word ll_backend__peephole__OldBase_8,
  MR_Word ll_backend__peephole__Instr0_9,
  MR_Word * ll_backend__peephole__MaybeInstr_10);

static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(
  MR_Word ll_backend__peephole__Lval_1,
  MR_Integer ll_backend__peephole__Tag_2,
  MR_Word ll_backend__peephole__Base_3,
  MR_Word ll_backend__peephole__HeadVar__4_4,
  MR_Word * ll_backend__peephole__HeadVar__5_5);

static MR_bool MR_CALL 
ll_backend__peephole__peephole_match_4_p_0(
  MR_Word ll_backend__peephole__Instr0_1,
  MR_Word ll_backend__peephole__Instrs0_2,
  MR_Word ll_backend__peephole__InvalidPatterns_3,
  MR_Word * ll_backend__peephole__Instrs_4);

static MR_bool MR_CALL 
ll_backend__peephole__peephole_pick_one_val_label_5_p_0(
  MR_Word ll_backend__peephole__LabelVals1_6,
  MR_Word ll_backend__peephole__LabelVals2_7,
  MR_Word * ll_backend__peephole__OneValLabel_8,
  MR_Integer * ll_backend__peephole__Val_9,
  MR_Word * ll_backend__peephole__OtherLabel_10);

static MR_bool MR_CALL 
ll_backend__peephole__build_peephole_jump_label_map_4_p_0(
  MR_Word ll_backend__peephole__HeadVar__1_1,
  MR_Integer ll_backend__peephole__Val_2,
  MR_Word ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3,
  MR_Word * ll_backend__peephole__STATE_VARIABLE_LabelMap_4);

static void MR_CALL 
ll_backend__peephole__peephole_opt_instr_5_p_0(
  MR_Word ll_backend__peephole__Instr0_6,
  MR_Word ll_backend__peephole__Instrs0_7,
  MR_Word ll_backend__peephole__InvalidPatterns_8,
  MR_Word * ll_backend__peephole__Instrs_9,
  MR_Word * ll_backend__peephole__Mod_10);

static void MR_CALL 
ll_backend__peephole__peephole_optimize_2_4_p_0(
  MR_Word ll_backend__peephole__InvalidPatterns_1,
  MR_Word ll_backend__peephole__HeadVar__2_2,
  MR_Word * ll_backend__peephole__HeadVar__3_3,
  MR_Word * ll_backend__peephole__HeadVar__4_4);


static /* final */ const MR_Box ll_backend__peephole_scalar_common_1[14][2];


/* sealed */ struct ll_backend__peephole__vector_common_type_2_0_s {
  const MR_Word ll_backend__peephole__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct ll_backend__peephole__vector_common_type_2_0_s ll_backend__peephole_vector_common_2[6];



static /* final */ const MR_Box ll_backend__peephole_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[2]))),
    ((MR_Box) ((MR_String) "early discard"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__peephole_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__peephole_scalar_common_1[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[10]))),
    ((MR_Box) ((MR_String) "return from optimized away mkframe"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[12])))
  },
};


static /* final */ const struct ll_backend__peephole__vector_common_type_2_0_s ll_backend__peephole_vector_common_2[6] = {
  /* row 0 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 1 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 2 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 3 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 4 */   {     (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)) },
  /* row 5 */   {     (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__peephole_scalar_common_1[6]) },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0 = {
  (MR_String) "pattern_incr_sp",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1 = {
  (MR_String) "pattern_mkword",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_value_ordered_pattern_0[2] = {
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0,
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_name_ordered_pattern_0[2] = {
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0,
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1
};

static const MR_Integer ll_backend__peephole__ll_backend__peephole__functor_number_map_pattern_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__peephole____Unify____pattern_0_0_10001)),
  ((MR_Box) (ll_backend__peephole____Compare____pattern_0_0_10001)),
  (MR_String) "ll_backend.peephole",
  (MR_String) "pattern",
  {     ll_backend__peephole__ll_backend__peephole__enum_name_ordered_pattern_0 },
  {     ll_backend__peephole__ll_backend__peephole__enum_value_ordered_pattern_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__peephole__ll_backend__peephole__functor_number_map_pattern_0
};

static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0_10001(
  MR_Box ll_backend__peephole__wrapper_arg_1,
  MR_Box ll_backend__peephole__wrapper_arg_2)
{
  {
    MR_bool ll_backend__peephole__succeeded;

    {
      ll_backend__peephole__succeeded = ll_backend__peephole____Unify____pattern_0_0(((MR_Word) ll_backend__peephole__wrapper_arg_1), ((MR_Word) ll_backend__peephole__wrapper_arg_2));
    }
    return ll_backend__peephole__succeeded;
  }
}

static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0_10001(
  MR_Box * ll_backend__peephole__wrapper_arg_1,
  MR_Box ll_backend__peephole__wrapper_arg_2,
  MR_Box ll_backend__peephole__wrapper_arg_3)
{
  {
    MR_Word ll_backend__peephole__conv0_HeadVar__1_1;

    {
      ll_backend__peephole____Compare____pattern_0_0(&ll_backend__peephole__conv0_HeadVar__1_1, ((MR_Word) ll_backend__peephole__wrapper_arg_2), ((MR_Word) ll_backend__peephole__wrapper_arg_3));
    }
    *ll_backend__peephole__wrapper_arg_1 = ((MR_Box) (ll_backend__peephole__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0(
  MR_Word * ll_backend__peephole__HeadVar__1_1,
  MR_Word ll_backend__peephole__HeadVar__2_2,
  MR_Word ll_backend__peephole__HeadVar__3_3)
{
  {
    MR_bool ll_backend__peephole__succeeded;
    MR_Integer ll_backend__peephole__Cast_HeadVar1_4 = (MR_Integer) ll_backend__peephole__HeadVar__2_2;
    MR_Integer ll_backend__peephole__Cast_HeadVar2_5 = (MR_Integer) ll_backend__peephole__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__peephole__HeadVar__1_1, ll_backend__peephole__Cast_HeadVar1_4, ll_backend__peephole__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0(
  MR_Word ll_backend__peephole__HeadVar__2_1,
  MR_Word ll_backend__peephole__HeadVar__2_2)
{
  {
    MR_bool ll_backend__peephole__succeeded = (ll_backend__peephole__HeadVar__2_1 == ll_backend__peephole__HeadVar__2_2);

    return ll_backend__peephole__succeeded;
  }
}

static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(
  MR_Word ll_backend__peephole__OldLval_6,
  MR_Integer ll_backend__peephole__OldTag_7,
  MR_Word ll_backend__peephole__OldBase_8,
  MR_Word ll_backend__peephole__Rval0_9,
  MR_Word * ll_backend__peephole__Rval_10)
{
  {
    MR_bool ll_backend__peephole__succeeded;

    switch (MR_tag((MR_Word) ll_backend__peephole__Rval0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        *ll_backend__peephole__Rval_10 = ll_backend__peephole__Rval0_9;
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__peephole__Tag_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__peephole__Rval0_9, (MR_Integer) 0)));
          MR_Word ll_backend__peephole__BaseRval0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__peephole__Rval0_9, (MR_Integer) 1)));
          MR_Word ll_backend__peephole__BaseRval_20;

          {
            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__BaseRval0_19, &ll_backend__peephole__BaseRval_20);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__peephole__Rval_10 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__peephole__Tag_18));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__peephole__BaseRval_20));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 4:
            *ll_backend__peephole__Rval_10 = ll_backend__peephole__Rval0_9;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__peephole__UnOp_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__RvalA0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__V_36_36;

              ll_backend__peephole__succeeded = (ll_backend__peephole__UnOp_11 == (MR_Integer) 1);
              if (ll_backend__peephole__succeeded)
                {
                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__RvalA0_12)) == (MR_mktag((MR_Integer) 0)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__RvalA0_12, (MR_Integer) 0)));
                      {
                        ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__V_36_36);
                      }
                    }
                }
              if (ll_backend__peephole__succeeded)
                {
                  MR_Word ll_backend__peephole__V_30_30;
                  MR_Word ll_backend__peephole__V_31_31;

                  {
                    ll_backend__peephole__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_31_31, 0) = ((MR_Box) (ll_backend__peephole__OldTag_7));
                  }
                  {
                    ll_backend__peephole__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_30_30, 1) = ((MR_Box) (ll_backend__peephole__V_31_31));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__peephole__Rval_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__peephole__V_30_30));
                  }
                }
              else
                {
                  MR_Word ll_backend__peephole__RvalA_13;

                  {
                    ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__RvalA0_12, &ll_backend__peephole__RvalA_13);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__peephole__Rval_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__peephole__UnOp_11));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__peephole__RvalA_13));
                  }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__peephole__BinOp_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__RvalB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 3)));
              MR_Word ll_backend__peephole__RvalA0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__V_26_26;
              MR_Word ll_backend__peephole__V_27_27;
              MR_Word ll_backend__peephole__V_28_28;
              MR_Word ll_backend__peephole__V_37_37;
              MR_Integer ll_backend__peephole__V_38_38;
              MR_Word ll_backend__peephole__V_16_16;

              ll_backend__peephole__succeeded = (ll_backend__peephole__BinOp_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
              if (ll_backend__peephole__succeeded)
                {
                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__RvalA0_34)) == (MR_mktag((MR_Integer) 0)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__RvalA0_34, (MR_Integer) 0)));
                      {
                        ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__V_37_37);
                      }
                      if (ll_backend__peephole__succeeded)
                        {
                          ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__OldBase_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__OldBase_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (ll_backend__peephole__succeeded)
                            {
                              ll_backend__peephole__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__OldBase_8, (MR_Integer) 1)));
                              ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__RvalB0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__RvalB0_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
                              if (ll_backend__peephole__succeeded)
                                {
                                  ll_backend__peephole__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__RvalB0_15, (MR_Integer) 1)));
                                  ll_backend__peephole__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__RvalB0_15, (MR_Integer) 2)));
                                  ll_backend__peephole__succeeded = (ll_backend__peephole__V_26_26 == (MR_Integer) 0);
                                  if (ll_backend__peephole__succeeded)
                                    {
                                      ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                      if (ll_backend__peephole__succeeded)
                                        {
                                          ll_backend__peephole__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_27_27, (MR_Integer) 1)));
                                          ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_28_28)) == (MR_mktag((MR_Integer) 1)));
                                          if (ll_backend__peephole__succeeded)
                                            {
                                              ll_backend__peephole__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__peephole__V_28_28, (MR_Integer) 0)));
                                              ll_backend__peephole__succeeded = (ll_backend__peephole__OldTag_7 == ll_backend__peephole__V_38_38);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              if (ll_backend__peephole__succeeded)
                *ll_backend__peephole__Rval_10 = ll_backend__peephole__OldBase_8;
              else
                {
                  MR_Word ll_backend__peephole__RvalB_17;
                  MR_Word ll_backend__peephole__RvalA_32;

                  {
                    ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__RvalA0_34, &ll_backend__peephole__RvalA_32);
                  }
                  {
                    ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__RvalB0_15, &ll_backend__peephole__RvalB_17);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__peephole__Rval_10 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__peephole__BinOp_14));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__peephole__RvalA_32));
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__peephole__RvalB_17));
                  }
                }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(
  MR_Word ll_backend__peephole__OldLval_6,
  MR_Integer ll_backend__peephole__OldTag_7,
  MR_Word ll_backend__peephole__OldBase_8,
  MR_Word ll_backend__peephole__Instr0_9,
  MR_Word * ll_backend__peephole__MaybeInstr_10)
{
  {
    MR_bool ll_backend__peephole__succeeded;
    MR_Word ll_backend__peephole__Uinstr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_9, (MR_Integer) 0)));
    MR_String ll_backend__peephole__Comment_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_9, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__peephole__MaybeInstr_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__peephole__MaybeInstr_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 8:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
          case (MR_Integer) 27:
          case (MR_Integer) 28:
          case (MR_Integer) 29:
          case (MR_Integer) 30:
            *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__peephole__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__Rval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));

              {
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval_13, ll_backend__peephole__OldLval_6);
              }
              if (ll_backend__peephole__succeeded)
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ll_backend__peephole__V_15_15;

                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval_13, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval_13, (MR_Integer) 1)));
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word ll_backend__peephole__Rval_16;
                      MR_Word ll_backend__peephole__Uinstr_17;
                      MR_Word ll_backend__peephole__Instr_18;

                      {
                        ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_14, &ll_backend__peephole__Rval_16);
                      }
                      {
                        ll_backend__peephole__Uinstr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_17, 1) = ((MR_Box) (ll_backend__peephole__Lval_13));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_17, 2) = ((MR_Box) (ll_backend__peephole__Rval_16));
                      }
                      {
                        ll_backend__peephole__Instr_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_18, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_17));
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_18, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__peephole__MaybeInstr_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_18));
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__peephole__Lval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__Rval0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));

              {
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval_103, ll_backend__peephole__OldLval_6);
              }
              if (ll_backend__peephole__succeeded)
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ll_backend__peephole__V_19_19;

                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval_103)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval_103, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval_103, (MR_Integer) 1)));
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word ll_backend__peephole__Rval_94;
                      MR_Word ll_backend__peephole__Uinstr_95;
                      MR_Word ll_backend__peephole__Instr_96;

                      {
                        ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_104, &ll_backend__peephole__Rval_94);
                      }
                      {
                        ll_backend__peephole__Uinstr_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_95, 1) = ((MR_Box) (ll_backend__peephole__Lval_103));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_95, 2) = ((MR_Box) (ll_backend__peephole__Rval_94));
                      }
                      {
                        ll_backend__peephole__Instr_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_96, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_95));
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_96, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__peephole__MaybeInstr_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_96));
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__peephole__Targets_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__Rval0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__Rval_109;
              MR_Word ll_backend__peephole__Uinstr_110;
              MR_Word ll_backend__peephole__Instr_111;

              {
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_108, &ll_backend__peephole__Rval_109);
              }
              {
                ll_backend__peephole__Uinstr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_110, 1) = ((MR_Box) (ll_backend__peephole__Rval_109));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_110, 2) = ((MR_Box) (ll_backend__peephole__Targets_20));
              }
              {
                ll_backend__peephole__Instr_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_111, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_110));
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_111, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__peephole__MaybeInstr_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_111));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__peephole__Target_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__Rval0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__Rval_113;
              MR_Word ll_backend__peephole__Uinstr_114;
              MR_Word ll_backend__peephole__Instr_115;

              {
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_112, &ll_backend__peephole__Rval_113);
              }
              {
                ll_backend__peephole__Uinstr_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_114, 1) = ((MR_Box) (ll_backend__peephole__Rval_113));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_114, 2) = ((MR_Box) (ll_backend__peephole__Target_21));
              }
              {
                ll_backend__peephole__Instr_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_115, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_114));
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_115, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__peephole__MaybeInstr_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_115));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__peephole__Lval0_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

              {
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_178, ll_backend__peephole__OldLval_6);
              }
              if (ll_backend__peephole__succeeded)
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ll_backend__peephole__V_174_174;

                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_178)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_178, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_178, (MR_Integer) 1)));
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__peephole__MaybeInstr_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
                    }
                }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__peephole__MaybeInstr_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__peephole__MaybeTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__MaybeOffset_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 3)));
              MR_Word ll_backend__peephole__SizeRval0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 4)));
              MR_Word ll_backend__peephole__TypeMsg_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 5)));
              MR_Word ll_backend__peephole__MayUseAtomicAlloc_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 6)));
              MR_Word ll_backend__peephole__MaybeRegionId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 7)));
              MR_Word ll_backend__peephole__MaybeReuse_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 8)));
              MR_Word ll_backend__peephole__Target_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

              {
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Target_124, ll_backend__peephole__OldLval_6);
              }
              if (ll_backend__peephole__succeeded)
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ll_backend__peephole__V_29_29;

                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Target_124)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Target_124, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Target_124, (MR_Integer) 1)));
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word ll_backend__peephole__SizeRval_30;
                      MR_Word ll_backend__peephole__Uinstr_116;
                      MR_Word ll_backend__peephole__Instr_117;

                      {
                        ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__SizeRval0_24, &ll_backend__peephole__SizeRval_30);
                      }
                      {
                        ll_backend__peephole__Uinstr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 1) = ((MR_Box) (ll_backend__peephole__Target_124));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 2) = ((MR_Box) (ll_backend__peephole__MaybeTag_22));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 3) = ((MR_Box) (ll_backend__peephole__MaybeOffset_23));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 4) = ((MR_Box) (ll_backend__peephole__SizeRval_30));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 5) = ((MR_Box) (ll_backend__peephole__TypeMsg_25));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 6) = ((MR_Box) (ll_backend__peephole__MayUseAtomicAlloc_26));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 7) = ((MR_Box) (ll_backend__peephole__MaybeRegionId_27));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 8) = ((MR_Box) (ll_backend__peephole__MaybeReuse_28));
                      }
                      {
                        ll_backend__peephole__Instr_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_117, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_116));
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_117, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__peephole__MaybeInstr_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_117));
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__peephole__Lval0_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

              {
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_168, ll_backend__peephole__OldLval_6);
              }
              if (ll_backend__peephole__succeeded)
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ll_backend__peephole__V_164_164;

                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_168)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_168, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_168, (MR_Integer) 1)));
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__peephole__MaybeInstr_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
                    }
                }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__peephole__Rval0_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__Rval_126;
              MR_Word ll_backend__peephole__Uinstr_127;
              MR_Word ll_backend__peephole__Instr_128;

              {
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_125, &ll_backend__peephole__Rval_126);
              }
              {
                ll_backend__peephole__Uinstr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_127, 1) = ((MR_Box) (ll_backend__peephole__Rval_126));
              }
              {
                ll_backend__peephole__Instr_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_128, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_127));
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_128, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__peephole__MaybeInstr_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_128));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__peephole__Rval0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__Rval_130;
              MR_Word ll_backend__peephole__Uinstr_131;
              MR_Word ll_backend__peephole__Instr_132;

              {
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_129, &ll_backend__peephole__Rval_130);
              }
              {
                ll_backend__peephole__Uinstr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_131, 1) = ((MR_Box) (ll_backend__peephole__Rval_130));
              }
              {
                ll_backend__peephole__Instr_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_132, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_131));
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_132, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__peephole__MaybeInstr_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_132));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__peephole__Lval0_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

              {
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_183, ll_backend__peephole__OldLval_6);
              }
              if (ll_backend__peephole__succeeded)
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ll_backend__peephole__V_179_179;

                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_183)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_183, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_183, (MR_Integer) 1)));
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__peephole__MaybeInstr_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
                    }
                }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__peephole__Reason_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__Rval0_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__Rval_134;
              MR_Word ll_backend__peephole__Uinstr_135;
              MR_Word ll_backend__peephole__Instr_136;

              {
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_133, &ll_backend__peephole__Rval_134);
              }
              {
                ll_backend__peephole__Uinstr_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_135, 1) = ((MR_Box) (ll_backend__peephole__Rval_134));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_135, 2) = ((MR_Box) (ll_backend__peephole__Reason_31));
              }
              {
                ll_backend__peephole__Instr_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_136, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_135));
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_136, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__peephole__MaybeInstr_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_136));
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__peephole__Lval0_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

              {
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_173, ll_backend__peephole__OldLval_6);
              }
              if (ll_backend__peephole__succeeded)
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ll_backend__peephole__V_169_169;

                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_173)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_173, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_173, (MR_Integer) 1)));
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__peephole__MaybeInstr_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
                    }
                }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__peephole__Rval0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__Rval_138;
              MR_Word ll_backend__peephole__Uinstr_139;
              MR_Word ll_backend__peephole__Instr_140;

              {
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_137, &ll_backend__peephole__Rval_138);
              }
              {
                ll_backend__peephole__Uinstr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_139, 1) = ((MR_Box) (ll_backend__peephole__Rval_138));
              }
              {
                ll_backend__peephole__Instr_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_140, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_139));
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_140, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__peephole__MaybeInstr_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_140));
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word ll_backend__peephole__Lval0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
              MR_Integer ll_backend__peephole___NumSlots_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

              {
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_163, ll_backend__peephole__OldLval_6);
              }
              if (ll_backend__peephole__succeeded)
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ll_backend__peephole__V_40_40;

                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_163)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_163, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_163, (MR_Integer) 1)));
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *ll_backend__peephole__MaybeInstr_10 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
                    }
                }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__peephole__Lval0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__Label_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 3)));
              MR_Word ll_backend__peephole__Rval0_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

              {
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_32, ll_backend__peephole__OldLval_6);
              }
              if (ll_backend__peephole__succeeded)
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ll_backend__peephole__V_34_34;

                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_32, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_32, (MR_Integer) 1)));
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word ll_backend__peephole__Rval_141;
                      MR_Word ll_backend__peephole__Uinstr_142;
                      MR_Word ll_backend__peephole__Instr_143;

                      {
                        ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_150, &ll_backend__peephole__Rval_141);
                      }
                      {
                        ll_backend__peephole__Uinstr_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_142, 1) = ((MR_Box) (ll_backend__peephole__Rval_141));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_142, 2) = ((MR_Box) (ll_backend__peephole__Lval0_32));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_142, 3) = ((MR_Box) (ll_backend__peephole__Label_33));
                      }
                      {
                        ll_backend__peephole__Instr_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_143, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_142));
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_143, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__peephole__MaybeInstr_10 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_143));
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__peephole__LCRval0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__LCSRval0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__LCRval_37;
              MR_Word ll_backend__peephole__LCSRval_38;
              MR_Word ll_backend__peephole__Uinstr_154;
              MR_Word ll_backend__peephole__Instr_155;
              MR_Word ll_backend__peephole__Label_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 3)));

              {
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__LCRval0_35, &ll_backend__peephole__LCRval_37);
              }
              {
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__LCSRval0_36, &ll_backend__peephole__LCSRval_38);
              }
              {
                ll_backend__peephole__Uinstr_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_154, 1) = ((MR_Box) (ll_backend__peephole__LCRval_37));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_154, 2) = ((MR_Box) (ll_backend__peephole__LCSRval_38));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_154, 3) = ((MR_Box) (ll_backend__peephole__Label_156));
              }
              {
                ll_backend__peephole__Instr_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_155, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_154));
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_155, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__peephole__MaybeInstr_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_155));
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__peephole__Uinstr_157;
              MR_Word ll_backend__peephole__Instr_158;
              MR_Word ll_backend__peephole__LCRval0_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__LCSRval0_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__LCRval_161;
              MR_Word ll_backend__peephole__LCSRval_162;

              {
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__LCRval0_159, &ll_backend__peephole__LCRval_161);
              }
              {
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__LCSRval0_160, &ll_backend__peephole__LCSRval_162);
              }
              {
                ll_backend__peephole__Uinstr_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_157, 1) = ((MR_Box) (ll_backend__peephole__LCRval_161));
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_157, 2) = ((MR_Box) (ll_backend__peephole__LCSRval_162));
              }
              {
                ll_backend__peephole__Instr_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_158, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_157));
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_158, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__peephole__MaybeInstr_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_158));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(
  MR_Word ll_backend__peephole__Lval_1,
  MR_Integer ll_backend__peephole__Tag_2,
  MR_Word ll_backend__peephole__Base_3,
  MR_Word ll_backend__peephole__HeadVar__4_4,
  MR_Word * ll_backend__peephole__HeadVar__5_5)
{
  {
    MR_bool ll_backend__peephole__succeeded;

    if ((ll_backend__peephole__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__peephole__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__peephole__HeadInstr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word ll_backend__peephole__TailInstrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word ll_backend__peephole__MaybeHeadInstr_16;

        {
          ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(ll_backend__peephole__Lval_1, ll_backend__peephole__Tag_2, ll_backend__peephole__Base_3, ll_backend__peephole__HeadInstr0_14, &ll_backend__peephole__MaybeHeadInstr_16);
        }
        if ((ll_backend__peephole__MaybeHeadInstr_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__peephole__HeadVar__5_5 = ll_backend__peephole__HeadVar__4_4;
        else
          {
            MR_Word ll_backend__peephole__HeadInstr_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__MaybeHeadInstr_16, (MR_Integer) 0)));
            MR_Word ll_backend__peephole__TailInstrs_18;

            {
              ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(ll_backend__peephole__Lval_1, ll_backend__peephole__Tag_2, ll_backend__peephole__Base_3, ll_backend__peephole__TailInstrs0_15, &ll_backend__peephole__TailInstrs_18);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__peephole__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__HeadInstr_17));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__TailInstrs_18));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__peephole__peephole_match_4_p_0(
  MR_Word ll_backend__peephole__Instr0_1,
  MR_Word ll_backend__peephole__Instrs0_2,
  MR_Word ll_backend__peephole__InvalidPatterns_3,
  MR_Word * ll_backend__peephole__Instrs_4)
{
  {
    MR_bool ll_backend__peephole__succeeded;
    MR_String ll_backend__peephole__V_234_234 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_1, (MR_Integer) 1)));
    MR_Word ll_backend__peephole__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_1, (MR_Integer) 0)));

    switch (MR_tag((MR_Word) ll_backend__peephole__V_235_235)) {
      default:
        ll_backend__peephole__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 0)))) {
          default:
            ll_backend__peephole__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__peephole__Base_178;
              MR_Word ll_backend__peephole__Redoip0_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__V_190_190;
              MR_Word ll_backend__peephole__Redoip1_180;
              MR_Word ll_backend__peephole__Skipped_181;
              MR_Word ll_backend__peephole__Rest_182;
              MR_Word ll_backend__peephole__V_191_191;
              MR_Word ll_backend__peephole__V_192_192;
              MR_Word ll_backend__peephole__V_193_193;
              MR_Word ll_backend__peephole__V_194_194;

              ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_189_189)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_189_189, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (ll_backend__peephole__succeeded)
                {
                  ll_backend__peephole__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_189_189, (MR_Integer) 1)));
                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_190_190)) == (MR_mktag((MR_Integer) 0)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__Base_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_190_190, (MR_Integer) 0)));
                      ll_backend__peephole__V_193_193 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      ll_backend__peephole__V_192_192 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        ll_backend__peephole__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_191_191, 0) = ((MR_Box) (ll_backend__peephole__Base_178));
                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_191_191, 1) = ((MR_Box) (ll_backend__peephole__V_193_193));
                      }
                      {
                        ll_backend__peephole__succeeded = ll_backend__opt_util__next_assign_to_redoip_6_p_0(ll_backend__peephole__Instrs0_2, ll_backend__peephole__V_191_191, ll_backend__peephole__V_192_192, &ll_backend__peephole__Redoip1_180, &ll_backend__peephole__Skipped_181, &ll_backend__peephole__Rest_182);
                      }
                      if (ll_backend__peephole__succeeded)
                        {
                          {
                            ll_backend__peephole__V_194_194 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(ll_backend__peephole__Skipped_181);
                          }
                          ll_backend__peephole__succeeded = (ll_backend__peephole__V_194_194 == (MR_Integer) 0);
                        }
                      if (ll_backend__peephole__succeeded)
                        {
                          MR_Word ll_backend__peephole__Instrs1_183;
                          MR_Word ll_backend__peephole__RedoipInstr_184;
                          MR_Word ll_backend__peephole__V_195_195;
                          MR_Word ll_backend__peephole__V_198_198;
                          MR_Word ll_backend__peephole__V_199_199;

                          {
                            ll_backend__peephole__Instrs1_183 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__peephole__Skipped_181, ll_backend__peephole__Rest_182);
                          }
                          {
                            ll_backend__peephole__V_199_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_199_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_199_199, 1) = ((MR_Box) (ll_backend__peephole__Redoip1_180));
                          }
                          {
                            ll_backend__peephole__V_198_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_198_198, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_198_198, 1) = ((MR_Box) (ll_backend__peephole__V_199_199));
                          }
                          {
                            ll_backend__peephole__V_195_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_195_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_195_195, 1) = ((MR_Box) (ll_backend__peephole__V_189_189));
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_195_195, 2) = ((MR_Box) (ll_backend__peephole__V_198_198));
                          }
                          {
                            ll_backend__peephole__RedoipInstr_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ll_backend__peephole__RedoipInstr_184, 0) = ((MR_Box) (ll_backend__peephole__V_195_195));
                            MR_hl_field(MR_mktag(0), ll_backend__peephole__RedoipInstr_184, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ll_backend__peephole__Instrs_4 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__RedoipInstr_184));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs1_183));
                          }
                          ll_backend__peephole__succeeded = MR_TRUE;
                        }
                      else
                        {
                          MR_Word ll_backend__peephole__TypeCtorInfo_229_229;
                          MR_Word ll_backend__peephole__Between_185;
                          MR_Word ll_backend__peephole__After_186;
                          MR_Word ll_backend__peephole__SucceedInstr_188;
                          MR_Word ll_backend__peephole__V_200_200;
                          MR_Word ll_backend__peephole__V_201_201;
                          MR_Word ll_backend__peephole__V_202_202;
                          MR_String ll_backend__peephole__V_203_203;
                          MR_Word ll_backend__peephole__V_208_208;
                          MR_Word ll_backend__peephole__V_209_209;
                          MR_Word ll_backend__peephole__V_210_210;
                          MR_Integer ll_backend__peephole__V_187_187;

                          ll_backend__peephole__succeeded = (ll_backend__peephole__Base_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                          if (ll_backend__peephole__succeeded)
                            {
                              ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Redoip0_179)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Redoip0_179, (MR_Integer) 0)))) == (MR_Integer) 1)));
                              if (ll_backend__peephole__succeeded)
                                {
                                  ll_backend__peephole__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Redoip0_179, (MR_Integer) 1)));
                                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_200_200)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_200_200, (MR_Integer) 0)))) == (MR_Integer) 3)));
                                  if (ll_backend__peephole__succeeded)
                                    {
                                      ll_backend__peephole__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_200_200, (MR_Integer) 1)));
                                      ll_backend__peephole__succeeded = (ll_backend__peephole__V_201_201 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                                      if (ll_backend__peephole__succeeded)
                                        {
                                          {
                                            ll_backend__peephole__succeeded = ll_backend__opt_util__straight_alternative_3_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Between_185, &ll_backend__peephole__After_186);
                                          }
                                          if (ll_backend__peephole__succeeded)
                                            {
                                              {
                                                ll_backend__peephole__V_202_202 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(ll_backend__peephole__Between_185);
                                              }
                                              ll_backend__peephole__succeeded = (ll_backend__peephole__V_202_202 == (MR_Integer) 0);
                                              if (ll_backend__peephole__succeeded)
                                                {
                                                  ll_backend__peephole__V_203_203 = (MR_String) "curfr==maxfr";
                                                  {
                                                    ll_backend__peephole__succeeded = mercury__string__sub_string_search_3_p_0(ll_backend__peephole__V_234_234, ll_backend__peephole__V_203_203, &ll_backend__peephole__V_187_187);
                                                  }
                                                  if (ll_backend__peephole__succeeded)
                                                    {
                                                      ll_backend__peephole__SucceedInstr_188 = (MR_Word) &ll_backend__peephole_scalar_common_1[3];
                                                      ll_backend__peephole__TypeCtorInfo_229_229 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                                                      ll_backend__peephole__V_210_210 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                      ll_backend__peephole__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__peephole_scalar_common_1[7]);
                                                      {
                                                        ll_backend__peephole__V_208_208 = mercury__list__f_43_43_2_f_0(ll_backend__peephole__TypeCtorInfo_229_229, ll_backend__peephole__V_209_209, ll_backend__peephole__After_186);
                                                      }
                                                      {
                                                        *ll_backend__peephole__Instrs_4 = mercury__list__f_43_43_2_f_0(ll_backend__peephole__TypeCtorInfo_229_229, ll_backend__peephole__Between_185, ll_backend__peephole__V_208_208);
                                                      }
                                                      ll_backend__peephole__succeeded = MR_TRUE;
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
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__peephole__NondetFrameInfo_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__Redoip0_73;
              MR_Word ll_backend__peephole__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__Redoip1_78;
              MR_Word ll_backend__peephole__Skipped_79;
              MR_Word ll_backend__peephole__Rest_80;
              MR_Word ll_backend__peephole__AllowedBases_76;
              MR_Word ll_backend__peephole__V_107_107;
              MR_Word ll_backend__peephole__V_108_108;

              ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_100_100)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__peephole__succeeded)
                {
                  ll_backend__peephole__Redoip0_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__V_100_100, (MR_Integer) 0)));
                  if (((MR_tag((MR_Word) ll_backend__peephole__NondetFrameInfo_72)) == (MR_mktag((MR_Integer) 1))))
                    ll_backend__peephole__AllowedBases_76 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__peephole_scalar_common_1[5]);
                  else
                    {
                      ll_backend__peephole__AllowedBases_76 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__peephole_scalar_common_1[8]);
                    }
                  ll_backend__peephole__V_107_107 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    ll_backend__peephole__succeeded = ll_backend__opt_util__next_assign_to_redoip_6_p_0(ll_backend__peephole__Instrs0_2, ll_backend__peephole__AllowedBases_76, ll_backend__peephole__V_107_107, &ll_backend__peephole__Redoip1_78, &ll_backend__peephole__Skipped_79, &ll_backend__peephole__Rest_80);
                  }
                  if (ll_backend__peephole__succeeded)
                    {
                      {
                        ll_backend__peephole__V_108_108 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(ll_backend__peephole__Skipped_79);
                      }
                      ll_backend__peephole__succeeded = (ll_backend__peephole__V_108_108 == (MR_Integer) 0);
                    }
                  if (ll_backend__peephole__succeeded)
                    {
                      MR_Word ll_backend__peephole__Instrs1_81;
                      MR_Word ll_backend__peephole__NewInstr_82;
                      MR_Word ll_backend__peephole__V_109_109;
                      MR_Word ll_backend__peephole__V_110_110;

                      {
                        ll_backend__peephole__Instrs1_81 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__peephole__Skipped_79, ll_backend__peephole__Rest_80);
                      }
                      {
                        ll_backend__peephole__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_110_110, 0) = ((MR_Box) (ll_backend__peephole__Redoip1_78));
                      }
                      {
                        ll_backend__peephole__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_109_109, 1) = ((MR_Box) (ll_backend__peephole__NondetFrameInfo_72));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_109_109, 2) = ((MR_Box) (ll_backend__peephole__V_110_110));
                      }
                      {
                        ll_backend__peephole__NewInstr_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__NewInstr_82, 0) = ((MR_Box) (ll_backend__peephole__V_109_109));
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__NewInstr_82, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__peephole__Instrs_4 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__NewInstr_82));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs1_81));
                      }
                      ll_backend__peephole__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word ll_backend__peephole__InstrsPrime_88;
                      MR_Word ll_backend__peephole__Instr1_83;
                      MR_Word ll_backend__peephole__Instrs2_84;
                      MR_Word ll_backend__peephole__Test_85;
                      MR_Word ll_backend__peephole__Target_86;
                      MR_String ll_backend__peephole__Comment1_87;
                      MR_Word ll_backend__peephole__V_111_111;
                      MR_Word ll_backend__peephole__Instrs1_143;

                      {
                        ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Instrs1_143);
                      }
                      ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_143)) == (MR_mktag((MR_Integer) 1)));
                      if (ll_backend__peephole__succeeded)
                        {
                          ll_backend__peephole__Instr1_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_143, (MR_Integer) 0)));
                          ll_backend__peephole__Instrs2_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_143, (MR_Integer) 1)));
                          ll_backend__peephole__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_83, (MR_Integer) 0)));
                          ll_backend__peephole__Comment1_87 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_83, (MR_Integer) 1)));
                          ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_111_111)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_111_111, (MR_Integer) 0)))) == (MR_Integer) 9)));
                          if (ll_backend__peephole__succeeded)
                            {
                              ll_backend__peephole__Test_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_111_111, (MR_Integer) 1)));
                              ll_backend__peephole__Target_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_111_111, (MR_Integer) 2)));
                              ll_backend__peephole__succeeded = (ll_backend__peephole__Redoip0_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                              if (ll_backend__peephole__succeeded)
                                {
                                  if ((ll_backend__peephole__Target_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
                                    ll_backend__peephole__succeeded = MR_TRUE;
                                  else
                                  if ((ll_backend__peephole__Target_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                                    ll_backend__peephole__succeeded = MR_TRUE;
                                  else
                                    ll_backend__peephole__succeeded = MR_FALSE;
                                }
                              if (ll_backend__peephole__succeeded)
                                {
                                  MR_Word ll_backend__peephole__V_112_112;
                                  MR_Word ll_backend__peephole__V_113_113;
                                  MR_Word ll_backend__peephole__V_115_115;

                                  {
                                    ll_backend__peephole__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_113_113, 1) = ((MR_Box) (ll_backend__peephole__Test_85));
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_113_113, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                  }
                                  {
                                    ll_backend__peephole__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__V_112_112, 0) = ((MR_Box) (ll_backend__peephole__V_113_113));
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__V_112_112, 1) = ((MR_Box) (ll_backend__peephole__Comment1_87));
                                  }
                                  {
                                    ll_backend__peephole__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_115_115, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_115_115, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_84));
                                  }
                                  {
                                    ll_backend__peephole__InstrsPrime_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 0) = ((MR_Box) (ll_backend__peephole__V_112_112));
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 1) = ((MR_Box) (ll_backend__peephole__V_115_115));
                                  }
                                  ll_backend__peephole__succeeded = MR_TRUE;
                                }
                              else
                                {
                                  MR_Word ll_backend__peephole__V_89_89;

                                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Redoip0_73)) == (MR_mktag((MR_Integer) 1)));
                                  if (ll_backend__peephole__succeeded)
                                    {
                                      ll_backend__peephole__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Redoip0_73, (MR_Integer) 0)));
                                      ll_backend__peephole__succeeded = (ll_backend__peephole__Target_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                                      if (ll_backend__peephole__succeeded)
                                        {
                                          MR_Word ll_backend__peephole__V_120_120;
                                          MR_Word ll_backend__peephole__V_121_121;
                                          MR_Word ll_backend__peephole__V_123_123;

                                          {
                                            ll_backend__peephole__V_121_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_121_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_121_121, 1) = ((MR_Box) (ll_backend__peephole__Test_85));
                                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_121_121, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                          }
                                          {
                                            ll_backend__peephole__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                            MR_hl_field(MR_mktag(0), ll_backend__peephole__V_120_120, 0) = ((MR_Box) (ll_backend__peephole__V_121_121));
                                            MR_hl_field(MR_mktag(0), ll_backend__peephole__V_120_120, 1) = ((MR_Box) (ll_backend__peephole__Comment1_87));
                                          }
                                          {
                                            ll_backend__peephole__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__V_123_123, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__V_123_123, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_84));
                                          }
                                          {
                                            ll_backend__peephole__InstrsPrime_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 0) = ((MR_Box) (ll_backend__peephole__V_120_120));
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 1) = ((MR_Box) (ll_backend__peephole__V_123_123));
                                          }
                                          ll_backend__peephole__succeeded = MR_TRUE;
                                        }
                                      else
                                        {
                                          MR_Word ll_backend__peephole__V_124_124;
                                          MR_Word ll_backend__peephole__V_125_125;
                                          MR_Word ll_backend__peephole__V_126_126;

                                          ll_backend__peephole__succeeded = (ll_backend__peephole__Target_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
                                          if (ll_backend__peephole__succeeded)
                                            {
                                              {
                                                ll_backend__peephole__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                                MR_hl_field(MR_mktag(3), ll_backend__peephole__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                                                MR_hl_field(MR_mktag(3), ll_backend__peephole__V_126_126, 1) = ((MR_Box) (ll_backend__peephole__Test_85));
                                                MR_hl_field(MR_mktag(3), ll_backend__peephole__V_126_126, 2) = ((MR_Box) (ll_backend__peephole__Redoip0_73));
                                              }
                                              {
                                                ll_backend__peephole__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                                MR_hl_field(MR_mktag(0), ll_backend__peephole__V_125_125, 0) = ((MR_Box) (ll_backend__peephole__V_126_126));
                                                MR_hl_field(MR_mktag(0), ll_backend__peephole__V_125_125, 1) = ((MR_Box) (ll_backend__peephole__Comment1_87));
                                              }
                                              {
                                                ll_backend__peephole__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                MR_hl_field(MR_mktag(1), ll_backend__peephole__V_124_124, 0) = ((MR_Box) (ll_backend__peephole__V_125_125));
                                                MR_hl_field(MR_mktag(1), ll_backend__peephole__V_124_124, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_84));
                                              }
                                              {
                                                ll_backend__peephole__InstrsPrime_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
                                                MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 1) = ((MR_Box) (ll_backend__peephole__V_124_124));
                                              }
                                              ll_backend__peephole__succeeded = MR_TRUE;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                      if (ll_backend__peephole__succeeded)
                        {
                          *ll_backend__peephole__Instrs_4 = ll_backend__peephole__InstrsPrime_88;
                          ll_backend__peephole__succeeded = MR_TRUE;
                        }
                      else
                        {
                          MR_String ll_backend__peephole__Comment2_90;
                          MR_Word ll_backend__peephole__Instrs2_154;
                          MR_Word ll_backend__peephole__V_127_127;
                          MR_Word ll_backend__peephole__V_128_128;
                          MR_Word ll_backend__peephole__Instrs1_144;
                          MR_Word ll_backend__peephole__Instr1_145;

                          {
                            ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Instrs1_144);
                          }
                          ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_144)) == (MR_mktag((MR_Integer) 1)));
                          if (ll_backend__peephole__succeeded)
                            {
                              ll_backend__peephole__Instr1_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_144, (MR_Integer) 0)));
                              ll_backend__peephole__Instrs2_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_144, (MR_Integer) 1)));
                              ll_backend__peephole__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_145, (MR_Integer) 0)));
                              ll_backend__peephole__Comment2_90 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_145, (MR_Integer) 1)));
                              ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_127_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_127_127, (MR_Integer) 0)))) == (MR_Integer) 6)));
                              if (ll_backend__peephole__succeeded)
                                {
                                  ll_backend__peephole__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_127_127, (MR_Integer) 1)));
                                  ll_backend__peephole__succeeded = (ll_backend__peephole__V_128_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                                }
                            }
                          if (ll_backend__peephole__succeeded)
                            {
                              MR_Word ll_backend__peephole__V_129_129;

                              {
                                ll_backend__peephole__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), ll_backend__peephole__V_129_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[9])));
                                MR_hl_field(MR_mktag(0), ll_backend__peephole__V_129_129, 1) = ((MR_Box) (ll_backend__peephole__Comment2_90));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *ll_backend__peephole__Instrs_4 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__V_129_129));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_154));
                              }
                              ll_backend__peephole__succeeded = MR_TRUE;
                            }
                          else
                            {
                              MR_Word ll_backend__peephole__Straight_91;
                              MR_Word ll_backend__peephole__Instrs2_151;
                              MR_Word ll_backend__peephole__V_132_132;
                              MR_Word ll_backend__peephole__V_133_133;
                              MR_Word ll_backend__peephole__Instrs1_146;
                              MR_Word ll_backend__peephole__Instr1_147;
                              MR_String ll_backend__peephole__V_93_93;
                              MR_Word ll_backend__peephole__V_92_92;

                              ll_backend__peephole__succeeded = (ll_backend__peephole__Redoip0_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                              if (ll_backend__peephole__succeeded)
                                {
                                  {
                                    ll_backend__opt_util__no_stack_straight_line_3_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Straight_91, &ll_backend__peephole__Instrs1_146);
                                  }
                                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_146)) == (MR_mktag((MR_Integer) 1)));
                                  if (ll_backend__peephole__succeeded)
                                    {
                                      ll_backend__peephole__Instr1_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_146, (MR_Integer) 0)));
                                      ll_backend__peephole__Instrs2_151 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_146, (MR_Integer) 1)));
                                      ll_backend__peephole__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_147, (MR_Integer) 0)));
                                      ll_backend__peephole__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_147, (MR_Integer) 1)));
                                      ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_132_132)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_132_132, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                      if (ll_backend__peephole__succeeded)
                                        {
                                          ll_backend__peephole__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_132_132, (MR_Integer) 1)));
                                          ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_133_133)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_133_133, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                          if (ll_backend__peephole__succeeded)
                                            ll_backend__peephole__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_133_133, (MR_Integer) 1)));
                                        }
                                    }
                                }
                              if (ll_backend__peephole__succeeded)
                                {
                                  MR_Word ll_backend__peephole__V_137_137;

                                  {
                                    ll_backend__peephole__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_137_137, 0) = ((MR_Box) (&ll_backend__peephole_scalar_common_1[11]));
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_137_137, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_151));
                                  }
                                  {
                                    *ll_backend__peephole__Instrs_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__peephole__Straight_91, ll_backend__peephole__V_137_137);
                                  }
                                  ll_backend__peephole__succeeded = MR_TRUE;
                                }
                              else
                                {
                                  MR_Word ll_backend__peephole__TypeCtorInfo_227_227;
                                  MR_Word ll_backend__peephole__UntilSucceed_95;
                                  MR_String ll_backend__peephole__SucceedComment_96;
                                  MR_Word ll_backend__peephole__DiscardUinstr_97;
                                  MR_String ll_backend__peephole__DiscardComment_98;
                                  MR_Word ll_backend__peephole__DiscardInstr_99;
                                  MR_Word ll_backend__peephole__V_138_138;
                                  MR_Word ll_backend__peephole__V_139_139;
                                  MR_String ll_backend__peephole__V_140_140;
                                  MR_Word ll_backend__peephole__V_141_141;
                                  MR_Word ll_backend__peephole__V_142_142;
                                  MR_Word ll_backend__peephole__Instrs2_148;

                                  ll_backend__peephole__succeeded = (ll_backend__peephole__Redoip0_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                                  if (ll_backend__peephole__succeeded)
                                    {
                                      {
                                        ll_backend__peephole__succeeded = ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__UntilSucceed_95, &ll_backend__peephole__SucceedComment_96, &ll_backend__peephole__Instrs2_148);
                                      }
                                      if (ll_backend__peephole__succeeded)
                                        {
                                          ll_backend__peephole__V_139_139 = (MR_Integer) 0;
                                          ll_backend__peephole__V_140_140 = (MR_String) " (added discard)";
                                          ll_backend__peephole__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[12]);
                                          ll_backend__peephole__DiscardUinstr_97 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[13]);
                                          {
                                            ll_backend__peephole__DiscardComment_98 = mercury__string__f_43_43_2_f_0(ll_backend__peephole__SucceedComment_96, ll_backend__peephole__V_140_140);
                                          }
                                          ll_backend__peephole__TypeCtorInfo_227_227 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                                          {
                                            ll_backend__peephole__DiscardInstr_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                            MR_hl_field(MR_mktag(0), ll_backend__peephole__DiscardInstr_99, 0) = ((MR_Box) (ll_backend__peephole__DiscardUinstr_97));
                                            MR_hl_field(MR_mktag(0), ll_backend__peephole__DiscardInstr_99, 1) = ((MR_Box) (ll_backend__peephole__DiscardComment_98));
                                          }
                                          {
                                            ll_backend__peephole__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__V_141_141, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__V_141_141, 1) = ((MR_Box) (ll_backend__peephole__UntilSucceed_95));
                                          }
                                          {
                                            ll_backend__peephole__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__V_142_142, 0) = ((MR_Box) (ll_backend__peephole__DiscardInstr_99));
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__V_142_142, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_148));
                                          }
                                          {
                                            *ll_backend__peephole__Instrs_4 = mercury__list__f_43_43_2_f_0(ll_backend__peephole__TypeCtorInfo_227_227, ll_backend__peephole__V_141_141, ll_backend__peephole__V_142_142);
                                          }
                                          ll_backend__peephole__succeeded = MR_TRUE;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__peephole__TypeCtorInfo_223_223 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
              MR_Word ll_backend__peephole__TypeInfo_224_224 = (MR_Word) &ll_backend__peephole_scalar_common_1[0];
              MR_Word ll_backend__peephole__SelectorRval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__Labels_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__LabelMap_13;
              MR_Word ll_backend__peephole__LabelValsList_14;
              MR_Word ll_backend__peephole__V_27_27;
              MR_Word ll_backend__peephole__Label_15;
              MR_Word ll_backend__peephole__V_28_28;
              MR_Word ll_backend__peephole__V_29_29;
              MR_Word ll_backend__peephole__V_16_16;

              {
                ll_backend__peephole__V_27_27 = mercury__map__init_0_f_0(ll_backend__peephole__TypeCtorInfo_223_223, ll_backend__peephole__TypeInfo_224_224);
              }
              {
                ll_backend__peephole__succeeded = ll_backend__peephole__build_peephole_jump_label_map_4_p_0(ll_backend__peephole__Labels_12, (MR_Integer) 0, ll_backend__peephole__V_27_27, &ll_backend__peephole__LabelMap_13);
              }
              if (ll_backend__peephole__succeeded)
                {
                  {
                    mercury__map__to_assoc_list_2_p_0(ll_backend__peephole__TypeCtorInfo_223_223, ll_backend__peephole__TypeInfo_224_224, ll_backend__peephole__LabelMap_13, &ll_backend__peephole__LabelValsList_14);
                  }
                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__LabelValsList_14)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__LabelValsList_14, (MR_Integer) 0)));
                      ll_backend__peephole__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__LabelValsList_14, (MR_Integer) 1)));
                      ll_backend__peephole__succeeded = (ll_backend__peephole__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (ll_backend__peephole__succeeded)
                        {
                          ll_backend__peephole__Label_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_28_28, (MR_Integer) 0)));
                          ll_backend__peephole__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_28_28, (MR_Integer) 1)));
                          ll_backend__peephole__succeeded = MR_TRUE;
                        }
                    }
                  if (ll_backend__peephole__succeeded)
                    {
                      MR_Word ll_backend__peephole__GotoInstr_17;
                      MR_Word ll_backend__peephole__V_30_30;
                      MR_Word ll_backend__peephole__V_31_31;

                      {
                        ll_backend__peephole__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_31_31, 0) = ((MR_Box) (ll_backend__peephole__Label_15));
                      }
                      {
                        ll_backend__peephole__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_30_30, 1) = ((MR_Box) (ll_backend__peephole__V_31_31));
                      }
                      {
                        ll_backend__peephole__GotoInstr_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__GotoInstr_17, 0) = ((MR_Box) (ll_backend__peephole__V_30_30));
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__GotoInstr_17, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__peephole__Instrs_4 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__GotoInstr_17));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs0_2));
                      }
                      ll_backend__peephole__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word ll_backend__peephole__LabelVals1_18;
                      MR_Word ll_backend__peephole__LabelVals2_19;
                      MR_Word ll_backend__peephole__OneValLabel_20;
                      MR_Integer ll_backend__peephole__Val_21;
                      MR_Word ll_backend__peephole__OtherLabel_22;
                      MR_Word ll_backend__peephole__CondRval_23;
                      MR_Word ll_backend__peephole__CommentInstr_24;
                      MR_Word ll_backend__peephole__BranchInstr_25;
                      MR_Word ll_backend__peephole__V_32_32;
                      MR_Word ll_backend__peephole__V_33_33;
                      MR_Word ll_backend__peephole__V_34_34;
                      MR_Word ll_backend__peephole__V_35_35;
                      MR_Word ll_backend__peephole__V_36_36;
                      MR_Word ll_backend__peephole__V_37_37;
                      MR_String ll_backend__peephole__V_38_38;
                      MR_Word ll_backend__peephole__V_39_39;
                      MR_Word ll_backend__peephole__V_40_40;
                      MR_String ll_backend__peephole__V_41_41;
                      MR_Word ll_backend__peephole__V_42_42;
                      MR_Word ll_backend__peephole__V_43_43;
                      MR_Word ll_backend__peephole__V_44_44;
                      MR_Word ll_backend__peephole__V_45_45;
                      MR_Word ll_backend__peephole__GotoInstr_46;

                      ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__LabelValsList_14)) == (MR_mktag((MR_Integer) 1)));
                      if (ll_backend__peephole__succeeded)
                        {
                          ll_backend__peephole__LabelVals1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__LabelValsList_14, (MR_Integer) 0)));
                          ll_backend__peephole__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__LabelValsList_14, (MR_Integer) 1)));
                          ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_32_32)) == (MR_mktag((MR_Integer) 1)));
                          if (ll_backend__peephole__succeeded)
                            {
                              ll_backend__peephole__LabelVals2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__V_32_32, (MR_Integer) 0)));
                              ll_backend__peephole__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__V_32_32, (MR_Integer) 1)));
                              ll_backend__peephole__succeeded = (ll_backend__peephole__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (ll_backend__peephole__succeeded)
                                {
                                  {
                                    ll_backend__peephole__succeeded = ll_backend__peephole__peephole_pick_one_val_label_5_p_0(ll_backend__peephole__LabelVals1_18, ll_backend__peephole__LabelVals2_19, &ll_backend__peephole__OneValLabel_20, &ll_backend__peephole__Val_21, &ll_backend__peephole__OtherLabel_22);
                                  }
                                  if (ll_backend__peephole__succeeded)
                                    {
                                      ll_backend__peephole__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
                                      ll_backend__peephole__V_38_38 = (MR_String) "";
                                      ll_backend__peephole__V_41_41 = (MR_String) "";
                                      {
                                        ll_backend__peephole__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_36_36, 0) = ((MR_Box) (ll_backend__peephole__Val_21));
                                      }
                                      {
                                        ll_backend__peephole__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_35_35, 1) = ((MR_Box) (ll_backend__peephole__V_36_36));
                                      }
                                      {
                                        ll_backend__peephole__CondRval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__CondRval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__CondRval_23, 1) = ((MR_Box) (ll_backend__peephole__V_34_34));
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__CondRval_23, 2) = ((MR_Box) (ll_backend__peephole__SelectorRval_11));
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__CondRval_23, 3) = ((MR_Box) (ll_backend__peephole__V_35_35));
                                      }
                                      {
                                        ll_backend__peephole__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_37_37, 0) = ((MR_Box) (ll_backend__peephole__V_234_234));
                                      }
                                      {
                                        ll_backend__peephole__CommentInstr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), ll_backend__peephole__CommentInstr_24, 0) = ((MR_Box) (ll_backend__peephole__V_37_37));
                                        MR_hl_field(MR_mktag(0), ll_backend__peephole__CommentInstr_24, 1) = ((MR_Box) (ll_backend__peephole__V_38_38));
                                      }
                                      {
                                        ll_backend__peephole__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_40_40, 0) = ((MR_Box) (ll_backend__peephole__OneValLabel_20));
                                      }
                                      {
                                        ll_backend__peephole__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_39_39, 1) = ((MR_Box) (ll_backend__peephole__CondRval_23));
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_39_39, 2) = ((MR_Box) (ll_backend__peephole__V_40_40));
                                      }
                                      {
                                        ll_backend__peephole__BranchInstr_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), ll_backend__peephole__BranchInstr_25, 0) = ((MR_Box) (ll_backend__peephole__V_39_39));
                                        MR_hl_field(MR_mktag(0), ll_backend__peephole__BranchInstr_25, 1) = ((MR_Box) (ll_backend__peephole__V_41_41));
                                      }
                                      {
                                        ll_backend__peephole__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_43_43, 0) = ((MR_Box) (ll_backend__peephole__OtherLabel_22));
                                      }
                                      {
                                        ll_backend__peephole__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_42_42, 1) = ((MR_Box) (ll_backend__peephole__V_43_43));
                                      }
                                      {
                                        ll_backend__peephole__GotoInstr_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                        MR_hl_field(MR_mktag(0), ll_backend__peephole__GotoInstr_46, 0) = ((MR_Box) (ll_backend__peephole__V_42_42));
                                        MR_hl_field(MR_mktag(0), ll_backend__peephole__GotoInstr_46, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
                                      }
                                      {
                                        ll_backend__peephole__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_45_45, 0) = ((MR_Box) (ll_backend__peephole__GotoInstr_46));
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_45_45, 1) = ((MR_Box) (ll_backend__peephole__Instrs0_2));
                                      }
                                      {
                                        ll_backend__peephole__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_44_44, 0) = ((MR_Box) (ll_backend__peephole__BranchInstr_25));
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_44_44, 1) = ((MR_Box) (ll_backend__peephole__V_45_45));
                                      }
                                      {
                                        MR_Word base;
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                        *ll_backend__peephole__Instrs_4 = base;
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__CommentInstr_24));
                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__V_44_44));
                                      }
                                      ll_backend__peephole__succeeded = MR_TRUE;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__peephole__Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__CodeAddr_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__Taken_56;

              {
                ll_backend__peephole__succeeded = ll_backend__opt_util__is_const_condition_2_p_0(ll_backend__peephole__Rval_54, &ll_backend__peephole__Taken_56);
              }
              if (ll_backend__peephole__succeeded)
                {
                  switch (ll_backend__peephole__Taken_56) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *ll_backend__peephole__Instrs_4 = ll_backend__peephole__Instrs0_2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__peephole__V_63_63;
                        MR_Word ll_backend__peephole__V_64_64;

                        {
                          ll_backend__peephole__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__V_64_64, 1) = ((MR_Box) (ll_backend__peephole__CodeAddr_55));
                        }
                        {
                          ll_backend__peephole__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), ll_backend__peephole__V_63_63, 0) = ((MR_Box) (ll_backend__peephole__V_64_64));
                          MR_hl_field(MR_mktag(0), ll_backend__peephole__V_63_63, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__peephole__Instrs_4 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__V_63_63));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs0_2));
                        }
                      }
                      break;
                  }
                  ll_backend__peephole__succeeded = MR_TRUE;
                }
              else
                {
                  MR_Word ll_backend__peephole__Instrs1_57;
                  MR_Word ll_backend__peephole__Instr1_58;
                  MR_Word ll_backend__peephole__V_65_65;
                  MR_Word ll_backend__peephole__V_232_232;
                  MR_Word ll_backend__peephole__V_59_59;
                  MR_String ll_backend__peephole__V_60_60;

                  {
                    ll_backend__opt_util__skip_comments_2_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Instrs1_57);
                  }
                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_57)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__Instr1_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_57, (MR_Integer) 0)));
                      ll_backend__peephole__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_57, (MR_Integer) 1)));
                      ll_backend__peephole__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_58, (MR_Integer) 0)));
                      ll_backend__peephole__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_58, (MR_Integer) 1)));
                      ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_65_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_65_65, (MR_Integer) 0)))) == (MR_Integer) 6)));
                      if (ll_backend__peephole__succeeded)
                        {
                          ll_backend__peephole__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_65_65, (MR_Integer) 1)));
                          {
                            ll_backend__peephole__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__peephole__CodeAddr_55, ll_backend__peephole__V_232_232);
                          }
                        }
                    }
                  if (ll_backend__peephole__succeeded)
                    {
                      *ll_backend__peephole__Instrs_4 = ll_backend__peephole__Instrs0_2;
                      ll_backend__peephole__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word ll_backend__peephole__Label_61;
                      MR_Word ll_backend__peephole__V_62_62;

                      ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__CodeAddr_55)) == (MR_mktag((MR_Integer) 1)));
                      if (ll_backend__peephole__succeeded)
                        {
                          ll_backend__peephole__Label_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__CodeAddr_55, (MR_Integer) 0)));
                          {
                            ll_backend__peephole__succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(ll_backend__peephole__Label_61, ll_backend__peephole__Instrs0_2, &ll_backend__peephole__V_62_62);
                          }
                          if (ll_backend__peephole__succeeded)
                            {
                              *ll_backend__peephole__Instrs_4 = ll_backend__peephole__Instrs0_2;
                              ll_backend__peephole__succeeded = MR_TRUE;
                            }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__peephole__Lval_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__Instrs1_163;
              MR_Word ll_backend__peephole__Instr1_164;
              MR_Word ll_backend__peephole__Instrs2_165;
              MR_Word ll_backend__peephole__V_169_169;
              MR_Word ll_backend__peephole__V_170_170;
              MR_Word ll_backend__peephole__V_233_233;
              MR_String ll_backend__peephole___Comment1_167;
              MR_Word ll_backend__peephole___Reason_166;

              {
                ll_backend__opt_util__skip_comments_2_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Instrs1_163);
              }
              ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_163)) == (MR_mktag((MR_Integer) 1)));
              if (ll_backend__peephole__succeeded)
                {
                  ll_backend__peephole__Instr1_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_163, (MR_Integer) 0)));
                  ll_backend__peephole__Instrs2_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_163, (MR_Integer) 1)));
                  ll_backend__peephole__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_164, (MR_Integer) 0)));
                  ll_backend__peephole___Comment1_167 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_164, (MR_Integer) 1)));
                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_169_169)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_169_169, (MR_Integer) 0)))) == (MR_Integer) 21)));
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_169_169, (MR_Integer) 1)));
                      ll_backend__peephole___Reason_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_169_169, (MR_Integer) 2)));
                      ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_170_170)) == (MR_mktag((MR_Integer) 0)));
                      if (ll_backend__peephole__succeeded)
                        {
                          ll_backend__peephole__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_170_170, (MR_Integer) 0)));
                          {
                            ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval_162, ll_backend__peephole__V_233_233);
                          }
                          if (ll_backend__peephole__succeeded)
                            {
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *ll_backend__peephole__Instrs_4 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_165));
                              }
                              ll_backend__peephole__succeeded = MR_TRUE;
                            }
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Word ll_backend__peephole__TypeCtorInfo_231_231;
              MR_Integer ll_backend__peephole__N_217 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
              MR_Word ll_backend__peephole__Between_220;
              MR_Word ll_backend__peephole__Remain_221;
              MR_String ll_backend__peephole__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
              MR_Word ll_backend__peephole__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 3)));

              {
                ll_backend__peephole__succeeded = mercury__list__member_2_p_0((MR_Word) &ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0, ((MR_Box) ((MR_Integer) 0)), ll_backend__peephole__InvalidPatterns_3);
              }
              ll_backend__peephole__succeeded = !(ll_backend__peephole__succeeded);
              if (ll_backend__peephole__succeeded)
                {
                  {
                    ll_backend__peephole__succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(ll_backend__peephole__Instrs0_2, ll_backend__peephole__N_217, &ll_backend__peephole__Between_220, &ll_backend__peephole__Remain_221);
                  }
                  if (ll_backend__peephole__succeeded)
                    {
                      ll_backend__peephole__TypeCtorInfo_231_231 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                      {
                        *ll_backend__peephole__Instrs_4 = mercury__list__f_43_43_2_f_0(ll_backend__peephole__TypeCtorInfo_231_231, ll_backend__peephole__Between_220, ll_backend__peephole__Remain_221);
                      }
                      ll_backend__peephole__succeeded = MR_TRUE;
                    }
                }
            }
            break;
        }
        break;
    }
    return ll_backend__peephole__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__peephole__peephole_pick_one_val_label_5_p_0(
  MR_Word ll_backend__peephole__LabelVals1_6,
  MR_Word ll_backend__peephole__LabelVals2_7,
  MR_Word * ll_backend__peephole__OneValLabel_8,
  MR_Integer * ll_backend__peephole__Val_9,
  MR_Word * ll_backend__peephole__OtherLabel_10)
{
  {
    MR_bool ll_backend__peephole__succeeded;
    MR_Word ll_backend__peephole__Label1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__LabelVals1_6, (MR_Integer) 0)));
    MR_Word ll_backend__peephole__Vals1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__LabelVals1_6, (MR_Integer) 1)));
    MR_Word ll_backend__peephole__Label2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__LabelVals2_7, (MR_Integer) 0)));
    MR_Word ll_backend__peephole__Vals2_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__LabelVals2_7, (MR_Integer) 1)));
    MR_Integer ll_backend__peephole__Val1_15;
    MR_Word ll_backend__peephole__V_17_17;

    ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Vals1_12)) == (MR_mktag((MR_Integer) 1)));
    if (ll_backend__peephole__succeeded)
      {
        ll_backend__peephole__Val1_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Vals1_12, (MR_Integer) 0)));
        ll_backend__peephole__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Vals1_12, (MR_Integer) 1)));
        ll_backend__peephole__succeeded = (ll_backend__peephole__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (ll_backend__peephole__succeeded)
      {
        *ll_backend__peephole__OneValLabel_8 = ll_backend__peephole__Label1_11;
        *ll_backend__peephole__Val_9 = ll_backend__peephole__Val1_15;
        *ll_backend__peephole__OtherLabel_10 = ll_backend__peephole__Label2_13;
        ll_backend__peephole__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word ll_backend__peephole__V_18_18;

        ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Vals2_14)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__peephole__succeeded)
          {
            *ll_backend__peephole__Val_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Vals2_14, (MR_Integer) 0)));
            ll_backend__peephole__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Vals2_14, (MR_Integer) 1)));
            ll_backend__peephole__succeeded = (ll_backend__peephole__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ll_backend__peephole__succeeded)
              {
                *ll_backend__peephole__OneValLabel_8 = ll_backend__peephole__Label2_13;
                *ll_backend__peephole__OtherLabel_10 = ll_backend__peephole__Label1_11;
                ll_backend__peephole__succeeded = MR_TRUE;
              }
          }
      }
    return ll_backend__peephole__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__peephole__build_peephole_jump_label_map_4_p_0(
  MR_Word ll_backend__peephole__HeadVar__1_1,
  MR_Integer ll_backend__peephole__Val_2,
  MR_Word ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3,
  MR_Word * ll_backend__peephole__STATE_VARIABLE_LabelMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__peephole__succeeded;

        if ((ll_backend__peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__peephole__STATE_VARIABLE_LabelMap_4 = ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3;
            ll_backend__peephole__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word ll_backend__peephole__MaybeLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__peephole__MaybeLabels_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__peephole__Label_13;
            MR_Word ll_backend__peephole__STATE_VARIABLE_LabelMap_18_18;
            MR_Integer ll_backend__peephole__V_22_22;
            MR_Integer ll_backend__peephole__V_24_24;
            MR_Word ll_backend__peephole__Vals0_14;
            MR_Word ll_backend__peephole__TypeCtorInfo_25_25;
            MR_Word ll_backend__peephole__TypeInfo_26_26;
            MR_Box ll_backend__peephole__conv0_Vals0_14;

            ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__MaybeLabel_9)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__peephole__succeeded)
              {
                ll_backend__peephole__Label_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__MaybeLabel_9, (MR_Integer) 0)));
                ll_backend__peephole__TypeCtorInfo_25_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
                ll_backend__peephole__TypeInfo_26_26 = (MR_Word) &ll_backend__peephole_scalar_common_1[0];
                {
                  ll_backend__peephole__succeeded = mercury__map__search_3_p_0(ll_backend__peephole__TypeCtorInfo_25_25, ll_backend__peephole__TypeInfo_26_26, ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3, ((MR_Box) (ll_backend__peephole__Label_13)), &ll_backend__peephole__conv0_Vals0_14);
                }
                if (ll_backend__peephole__succeeded)
                  {
                    ll_backend__peephole__Vals0_14 = ((MR_Word) ll_backend__peephole__conv0_Vals0_14);
                    ll_backend__peephole__succeeded = MR_TRUE;
                  }
                if (ll_backend__peephole__succeeded)
                  {
                    MR_Word ll_backend__peephole__V_17_17;

                    {
                      ll_backend__peephole__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_17_17, 0) = ((MR_Box) (ll_backend__peephole__Val_2));
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_17_17, 1) = ((MR_Box) (ll_backend__peephole__Vals0_14));
                    }
                    {
                      mercury__map__det_update_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__peephole_scalar_common_1[0], ((MR_Box) (ll_backend__peephole__Label_13)), ((MR_Box) (ll_backend__peephole__V_17_17)), ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3, &ll_backend__peephole__STATE_VARIABLE_LabelMap_18_18);
                    }
                  }
                else
                  {
                    MR_Word ll_backend__peephole__V_19_19;

                    {
                      ll_backend__peephole__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_19_19, 0) = ((MR_Box) (ll_backend__peephole__Val_2));
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__peephole_scalar_common_1[0], ((MR_Box) (ll_backend__peephole__Label_13)), ((MR_Box) (ll_backend__peephole__V_19_19)), ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3, &ll_backend__peephole__STATE_VARIABLE_LabelMap_18_18);
                    }
                  }
                ll_backend__peephole__V_24_24 = (MR_Integer) 1;
                ll_backend__peephole__V_22_22 = (ll_backend__peephole__Val_2 + ll_backend__peephole__V_24_24);
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__peephole__HeadVar__1__tmp_copy_1 = ll_backend__peephole__MaybeLabels_10;
                    MR_Integer ll_backend__peephole__Val__tmp_copy_2 = ll_backend__peephole__V_22_22;
                    MR_Word ll_backend__peephole__STATE_VARIABLE_LabelMap_0__tmp_copy_3 = ll_backend__peephole__STATE_VARIABLE_LabelMap_18_18;

                    ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3 = ll_backend__peephole__STATE_VARIABLE_LabelMap_0__tmp_copy_3;
                    ll_backend__peephole__Val_2 = ll_backend__peephole__Val__tmp_copy_2;
                    ll_backend__peephole__HeadVar__1_1 = ll_backend__peephole__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
              }
          }
        return ll_backend__peephole__succeeded;
      }
      break;
    }
}

static void MR_CALL 
ll_backend__peephole__peephole_opt_instr_5_p_0(
  MR_Word ll_backend__peephole__Instr0_6,
  MR_Word ll_backend__peephole__Instrs0_7,
  MR_Word ll_backend__peephole__InvalidPatterns_8,
  MR_Word * ll_backend__peephole__Instrs_9,
  MR_Word * ll_backend__peephole__Mod_10)
{
  {
    MR_bool ll_backend__peephole__succeeded;
    MR_Word ll_backend__peephole__Instrs1_11;
    MR_Word ll_backend__peephole__Instrs2_12;

    {
      ll_backend__opt_util__skip_comments_2_p_0(ll_backend__peephole__Instrs0_7, &ll_backend__peephole__Instrs1_11);
    }
    {
      ll_backend__peephole__succeeded = ll_backend__peephole__peephole_match_4_p_0(ll_backend__peephole__Instr0_6, ll_backend__peephole__Instrs1_11, ll_backend__peephole__InvalidPatterns_8, &ll_backend__peephole__Instrs2_12);
    }
    if (ll_backend__peephole__succeeded)
      {
        if ((ll_backend__peephole__Instrs2_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__peephole__Instrs_9 = ll_backend__peephole__Instrs2_12;
        else
          {
            MR_Word ll_backend__peephole__Instr2_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_12, (MR_Integer) 0)));
            MR_Word ll_backend__peephole__Instrs3_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_12, (MR_Integer) 1)));
            MR_Word ll_backend__peephole__V_15_15;

            {
              ll_backend__peephole__peephole_opt_instr_5_p_0(ll_backend__peephole__Instr2_13, ll_backend__peephole__Instrs3_14, ll_backend__peephole__InvalidPatterns_8, ll_backend__peephole__Instrs_9, &ll_backend__peephole__V_15_15);
            }
          }
        *ll_backend__peephole__Mod_10 = (MR_Integer) 1;
      }
    else
      {
        MR_Word ll_backend__peephole__Instrs2_16;
        MR_Word ll_backend__peephole__Uinstr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_6, (MR_Integer) 0)));
        MR_Word ll_backend__peephole__Lval_23;
        MR_Integer ll_backend__peephole__Tag_24;
        MR_Word ll_backend__peephole__Base_25;
        MR_Word ll_backend__peephole__Instrs1_26;
        MR_Word ll_backend__peephole__V_27_27;
        MR_String ll_backend__peephole__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_6, (MR_Integer) 1)));
        MR_Word ll_backend__peephole__TypeCtorInfo_17_29;
        MR_Word ll_backend__peephole__V_28_28;

        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ll_backend__peephole__succeeded)
          {
            ll_backend__peephole__Lval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_21, (MR_Integer) 1)));
            ll_backend__peephole__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_21, (MR_Integer) 2)));
            ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_27_27)) == (MR_mktag((MR_Integer) 2)));
            if (ll_backend__peephole__succeeded)
              {
                ll_backend__peephole__Tag_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__peephole__V_27_27, (MR_Integer) 0)));
                ll_backend__peephole__Base_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__peephole__V_27_27, (MR_Integer) 1)));
                ll_backend__peephole__V_28_28 = (MR_Integer) 1;
                ll_backend__peephole__TypeCtorInfo_17_29 = (MR_Word) &ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0;
                {
                  ll_backend__peephole__succeeded = mercury__list__member_2_p_0(ll_backend__peephole__TypeCtorInfo_17_29, ((MR_Box) (ll_backend__peephole__V_28_28)), ll_backend__peephole__InvalidPatterns_8);
                }
                ll_backend__peephole__succeeded = !(ll_backend__peephole__succeeded);
                if (ll_backend__peephole__succeeded)
                  {
                    {
                      ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(ll_backend__peephole__Lval_23, ll_backend__peephole__Tag_24, ll_backend__peephole__Base_25, ll_backend__peephole__Instrs1_11, &ll_backend__peephole__Instrs1_26);
                    }
                    {
                      ll_backend__peephole__Instrs2_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_16, 0) = ((MR_Box) (ll_backend__peephole__Instr0_6));
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_16, 1) = ((MR_Box) (ll_backend__peephole__Instrs1_26));
                    }
                    ll_backend__peephole__succeeded = MR_TRUE;
                  }
              }
          }
        if (ll_backend__peephole__succeeded)
          {
            *ll_backend__peephole__Instrs_9 = ll_backend__peephole__Instrs2_16;
            *ll_backend__peephole__Mod_10 = (MR_Integer) 1;
          }
        else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__peephole__Instrs_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_6));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs0_7));
            }
            *ll_backend__peephole__Mod_10 = (MR_Integer) 0;
          }
      }
  }
}

static void MR_CALL 
ll_backend__peephole__peephole_optimize_2_4_p_0(
  MR_Word ll_backend__peephole__InvalidPatterns_1,
  MR_Word ll_backend__peephole__HeadVar__2_2,
  MR_Word * ll_backend__peephole__HeadVar__3_3,
  MR_Word * ll_backend__peephole__HeadVar__4_4)
{
  {
    MR_bool ll_backend__peephole__succeeded;

    if ((ll_backend__peephole__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__peephole__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__peephole__HeadVar__4_4 = (MR_Integer) 0;
      }
    else
      {
        MR_Word ll_backend__peephole__Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__peephole__Instrs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__peephole__Instrs1_11;
        MR_Word ll_backend__peephole__Mod0_12;
        MR_Word ll_backend__peephole__Mod1_13;

        {
          ll_backend__peephole__peephole_optimize_2_4_p_0(ll_backend__peephole__InvalidPatterns_1, ll_backend__peephole__Instrs0_8, &ll_backend__peephole__Instrs1_11, &ll_backend__peephole__Mod0_12);
        }
        {
          ll_backend__peephole__peephole_opt_instr_5_p_0(ll_backend__peephole__Instr0_7, ll_backend__peephole__Instrs1_11, ll_backend__peephole__InvalidPatterns_1, ll_backend__peephole__HeadVar__3_3, &ll_backend__peephole__Mod1_13);
        }
        ll_backend__peephole__succeeded = (ll_backend__peephole__Mod0_12 == (MR_Integer) 0);
        if (ll_backend__peephole__succeeded)
          ll_backend__peephole__succeeded = (ll_backend__peephole__Mod1_13 == (MR_Integer) 0);
        if (ll_backend__peephole__succeeded)
          *ll_backend__peephole__HeadVar__4_4 = (MR_Integer) 0;
        else
          *ll_backend__peephole__HeadVar__4_4 = (MR_Integer) 1;
      }
  }
}

void MR_CALL 
ll_backend__peephole__combine_decr_sp_2_p_0(
  MR_Word ll_backend__peephole__HeadVar__1_1,
  MR_Word * ll_backend__peephole__HeadVar__2_2)
{
  {
    MR_bool ll_backend__peephole__succeeded;

    if ((ll_backend__peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__peephole__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__peephole__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__peephole__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__peephole__Instrs1_6;
        MR_Integer ll_backend__peephole__N_7;
        MR_Word ll_backend__peephole__Instrs5_15;
        MR_String ll_backend__peephole__Comment_16;
        MR_Word ll_backend__peephole__Instrs2_9;
        MR_Word ll_backend__peephole__Instr2_10;
        MR_Word ll_backend__peephole__Instrs3_11;
        MR_Word ll_backend__peephole__Instrs4_13;
        MR_Word ll_backend__peephole__Instr4_14;
        MR_Word ll_backend__peephole__V_18_18;
        MR_Word ll_backend__peephole__V_19_19;
        MR_Word ll_backend__peephole__V_20_20;
        MR_Word ll_backend__peephole__V_21_21;
        MR_Word ll_backend__peephole__V_22_22;
        MR_Word ll_backend__peephole__V_23_23;
        MR_Word ll_backend__peephole__V_24_24;
        MR_Integer ll_backend__peephole__V_26_26;
        MR_String ll_backend__peephole__V_8_8;
        MR_String ll_backend__peephole__V_12_12;

        {
          ll_backend__peephole__combine_decr_sp_2_p_0(ll_backend__peephole__Instrs0_4, &ll_backend__peephole__Instrs1_6);
        }
        ll_backend__peephole__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_3, (MR_Integer) 0)));
        ll_backend__peephole__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_3, (MR_Integer) 1)));
        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_18_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_18_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ll_backend__peephole__succeeded)
          {
            ll_backend__peephole__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_18_18, (MR_Integer) 1)));
            ll_backend__peephole__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_18_18, (MR_Integer) 2)));
            ll_backend__peephole__succeeded = (ll_backend__peephole__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ll_backend__peephole__succeeded)
              {
                ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_20_20)) == (MR_mktag((MR_Integer) 0)));
                if (ll_backend__peephole__succeeded)
                  {
                    ll_backend__peephole__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_20_20, (MR_Integer) 0)));
                    ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (ll_backend__peephole__succeeded)
                      {
                        ll_backend__peephole__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_21_21, (MR_Integer) 1)));
                        {
                          ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__peephole__Instrs1_6, &ll_backend__peephole__Instrs2_9);
                        }
                        ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs2_9)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__peephole__succeeded)
                          {
                            ll_backend__peephole__Instr2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_9, (MR_Integer) 0)));
                            ll_backend__peephole__Instrs3_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_9, (MR_Integer) 1)));
                            ll_backend__peephole__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr2_10, (MR_Integer) 0)));
                            ll_backend__peephole__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr2_10, (MR_Integer) 1)));
                            ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 25)));
                            if (ll_backend__peephole__succeeded)
                              {
                                ll_backend__peephole__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_22_22, (MR_Integer) 1)));
                                ll_backend__peephole__succeeded = (ll_backend__peephole__N_7 == ll_backend__peephole__V_26_26);
                                if (ll_backend__peephole__succeeded)
                                  {
                                    {
                                      ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__peephole__Instrs3_11, &ll_backend__peephole__Instrs4_13);
                                    }
                                    ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs4_13)) == (MR_mktag((MR_Integer) 1)));
                                    if (ll_backend__peephole__succeeded)
                                      {
                                        ll_backend__peephole__Instr4_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs4_13, (MR_Integer) 0)));
                                        ll_backend__peephole__Instrs5_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs4_13, (MR_Integer) 1)));
                                        ll_backend__peephole__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr4_14, (MR_Integer) 0)));
                                        ll_backend__peephole__Comment_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr4_14, (MR_Integer) 1)));
                                        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_23_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_23_23, (MR_Integer) 0)))) == (MR_Integer) 6)));
                                        if (ll_backend__peephole__succeeded)
                                          {
                                            ll_backend__peephole__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_23_23, (MR_Integer) 1)));
                                            ll_backend__peephole__succeeded = (ll_backend__peephole__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
        if (ll_backend__peephole__succeeded)
          {
            MR_Word ll_backend__peephole__NewInstr_17;
            MR_Word ll_backend__peephole__V_25_25;

            {
              ll_backend__peephole__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__peephole__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 26));
              MR_hl_field(MR_mktag(3), ll_backend__peephole__V_25_25, 1) = ((MR_Box) (ll_backend__peephole__N_7));
            }
            {
              ll_backend__peephole__NewInstr_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__peephole__NewInstr_17, 0) = ((MR_Box) (ll_backend__peephole__V_25_25));
              MR_hl_field(MR_mktag(0), ll_backend__peephole__NewInstr_17, 1) = ((MR_Box) (ll_backend__peephole__Comment_16));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__peephole__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__NewInstr_17));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs5_15));
            }
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__peephole__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_3));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs1_6));
          }
      }
  }
}

void MR_CALL 
ll_backend__peephole__peephole_optimize_5_p_0(
  MR_Word ll_backend__peephole__GC_Method_6,
  MR_Word ll_backend__peephole__OptPeepMkword_7,
  MR_Word ll_backend__peephole__Instrs0_8,
  MR_Word * ll_backend__peephole__Instrs_9,
  MR_Word * ll_backend__peephole__Mod_10)
{
  {
    MR_bool ll_backend__peephole__succeeded;
    MR_Word ll_backend__peephole__InvalidPatterns_11;
    MR_Word ll_backend__peephole__InvalidPatterns0_15 = ((&ll_backend__peephole_vector_common_2[0 + ll_backend__peephole__GC_Method_6]))->ll_backend__peephole__vector_common_type_2_0__vct_2_f_0;

    switch (ll_backend__peephole__OptPeepMkword_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__peephole__InvalidPatterns_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__peephole__InvalidPatterns_11, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(1), ll_backend__peephole__InvalidPatterns_11, 1) = ((MR_Box) (ll_backend__peephole__InvalidPatterns0_15));
          }
        }
        break;
      case (MR_Integer) 1:
        ll_backend__peephole__InvalidPatterns_11 = ll_backend__peephole__InvalidPatterns0_15;
        break;
    }
    {
      ll_backend__peephole__peephole_optimize_2_4_p_0(ll_backend__peephole__InvalidPatterns_11, ll_backend__peephole__Instrs0_8, ll_backend__peephole__Instrs_9, ll_backend__peephole__Mod_10);
    }
  }
}

void mercury__ll_backend__peephole__init(void)
{
}

void mercury__ll_backend__peephole__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0);
}

void mercury__ll_backend__peephole__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__peephole__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.peephole. */
