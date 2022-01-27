/*
** Automatically generated from `peephole.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
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




#line 143 "ll_backend.peephole.c"
static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0;

#line 146 "ll_backend.peephole.c"
static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1;

#line 149 "ll_backend.peephole.c"
static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_value_ordered_pattern_0[2];

#line 152 "ll_backend.peephole.c"
static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_name_ordered_pattern_0[2];

#line 155 "ll_backend.peephole.c"
static const MR_Integer ll_backend__peephole__ll_backend__peephole__functor_number_map_pattern_0[2];

#line 158 "ll_backend.peephole.c"
static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0_10001(
#line 161 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_1,
#line 163 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_2);

#line 166 "ll_backend.peephole.c"
static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0_10001(
#line 169 "ll_backend.peephole.c"
  MR_Box * ll_backend__peephole__wrapper_arg_1,
#line 171 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_2,
#line 173 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_3);

#line 50 "peephole.m"
static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0(
#line 50 "peephole.m"
  MR_Word * ll_backend__peephole__HeadVar__1_1,
#line 50 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__2_2,
#line 50 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__3_3);

#line 50 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0(
#line 50 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__2_1,
#line 50 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__2_2);

#line 655 "peephole.m"
static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(
#line 655 "peephole.m"
  MR_Word ll_backend__peephole__OldLval_6,
#line 655 "peephole.m"
  MR_Integer ll_backend__peephole__OldTag_7,
#line 655 "peephole.m"
  MR_Word ll_backend__peephole__OldBase_8,
#line 655 "peephole.m"
  MR_Word ll_backend__peephole__Rval0_9,
#line 655 "peephole.m"
  MR_Word * ll_backend__peephole__Rval_10);

#line 491 "peephole.m"
static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(
#line 491 "peephole.m"
  MR_Word ll_backend__peephole__OldLval_6,
#line 491 "peephole.m"
  MR_Integer ll_backend__peephole__OldTag_7,
#line 491 "peephole.m"
  MR_Word ll_backend__peephole__OldBase_8,
#line 491 "peephole.m"
  MR_Word ll_backend__peephole__Instr0_9,
#line 491 "peephole.m"
  MR_Word * ll_backend__peephole__MaybeInstr_10);

#line 473 "peephole.m"
static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(
#line 473 "peephole.m"
  MR_Word ll_backend__peephole__Lval_1,
#line 473 "peephole.m"
  MR_Integer ll_backend__peephole__Tag_2,
#line 473 "peephole.m"
  MR_Word ll_backend__peephole__Base_3,
#line 473 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__4_4,
#line 473 "peephole.m"
  MR_Word * ll_backend__peephole__HeadVar__5_5);

#line 152 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole__peephole_match_4_p_0(
#line 152 "peephole.m"
  MR_Word ll_backend__peephole__Instr0_1,
#line 152 "peephole.m"
  MR_Word ll_backend__peephole__Instrs0_2,
#line 152 "peephole.m"
  MR_Word ll_backend__peephole__InvalidPatterns_3,
#line 152 "peephole.m"
  MR_Word * ll_backend__peephole__Instrs_4);

#line 124 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole__peephole_pick_one_val_label_5_p_0(
#line 124 "peephole.m"
  MR_Word ll_backend__peephole__LabelVals1_6,
#line 124 "peephole.m"
  MR_Word ll_backend__peephole__LabelVals2_7,
#line 124 "peephole.m"
  MR_Word * ll_backend__peephole__OneValLabel_8,
#line 124 "peephole.m"
  MR_Integer * ll_backend__peephole__Val_9,
#line 124 "peephole.m"
  MR_Word * ll_backend__peephole__OtherLabel_10);

#line 107 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole__build_peephole_jump_label_map_4_p_0(
#line 107 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__1_1,
#line 107 "peephole.m"
  MR_Integer ll_backend__peephole__Val_2,
#line 107 "peephole.m"
  MR_Word ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3,
#line 107 "peephole.m"
  MR_Word * ll_backend__peephole__STATE_VARIABLE_LabelMap_4);

#line 80 "peephole.m"
static void MR_CALL 
ll_backend__peephole__peephole_opt_instr_5_p_0(
#line 80 "peephole.m"
  MR_Word ll_backend__peephole__Instr0_6,
#line 80 "peephole.m"
  MR_Word ll_backend__peephole__Instrs0_7,
#line 80 "peephole.m"
  MR_Word ll_backend__peephole__InvalidPatterns_8,
#line 80 "peephole.m"
  MR_Word * ll_backend__peephole__Instrs_9,
#line 80 "peephole.m"
  MR_Word * ll_backend__peephole__Mod_10);

#line 64 "peephole.m"
static void MR_CALL 
ll_backend__peephole__peephole_optimize_2_4_p_0(
#line 64 "peephole.m"
  MR_Word ll_backend__peephole__InvalidPatterns_1,
#line 64 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__2_2,
#line 64 "peephole.m"
  MR_Word * ll_backend__peephole__HeadVar__3_3,
#line 64 "peephole.m"
  MR_Word * ll_backend__peephole__HeadVar__4_4);


static /* final */ const MR_Box ll_backend__peephole_scalar_common_1[14][2];




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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 396 "ll_backend.peephole.c"
static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0 = {
  (MR_String) "pattern_incr_sp",
  (MR_Integer) 0
};

#line 402 "ll_backend.peephole.c"
static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1 = {
  (MR_String) "pattern_mkword",
  (MR_Integer) 1
};

#line 408 "ll_backend.peephole.c"
static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_value_ordered_pattern_0[2] = {
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0,
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1
};

#line 414 "ll_backend.peephole.c"
static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_name_ordered_pattern_0[2] = {
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0,
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1
};

#line 420 "ll_backend.peephole.c"
static const MR_Integer ll_backend__peephole__ll_backend__peephole__functor_number_map_pattern_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 426 "ll_backend.peephole.c"
const MR_TypeCtorInfo_Struct ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__peephole____Unify____pattern_0_0_10001)),
  ((MR_Box) (ll_backend__peephole____Compare____pattern_0_0_10001)),
  (MR_String) "ll_backend.peephole",
  (MR_String) "pattern",
  {
    ll_backend__peephole__ll_backend__peephole__enum_name_ordered_pattern_0
  },
  {
    ll_backend__peephole__ll_backend__peephole__enum_value_ordered_pattern_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ll_backend__peephole__ll_backend__peephole__functor_number_map_pattern_0
};

#line 447 "ll_backend.peephole.c"
static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0_10001(
#line 450 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_1,
#line 452 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_2)
#line 454 "ll_backend.peephole.c"
{
#line 456 "ll_backend.peephole.c"
  {
#line 458 "ll_backend.peephole.c"
    MR_bool ll_backend__peephole__succeeded;

#line 461 "ll_backend.peephole.c"
    {
#line 463 "ll_backend.peephole.c"
      ll_backend__peephole__succeeded = ll_backend__peephole____Unify____pattern_0_0(((MR_Word) ll_backend__peephole__wrapper_arg_1), ((MR_Word) ll_backend__peephole__wrapper_arg_2));
    }
#line 466 "ll_backend.peephole.c"
    return ll_backend__peephole__succeeded;
#line 468 "ll_backend.peephole.c"
  }
#line 470 "ll_backend.peephole.c"
}

#line 473 "ll_backend.peephole.c"
static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0_10001(
#line 476 "ll_backend.peephole.c"
  MR_Box * ll_backend__peephole__wrapper_arg_1,
#line 478 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_2,
#line 480 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_3)
#line 482 "ll_backend.peephole.c"
{
#line 484 "ll_backend.peephole.c"
  {
#line 486 "ll_backend.peephole.c"
    MR_Word ll_backend__peephole__conv0_HeadVar__1_1;

#line 489 "ll_backend.peephole.c"
    {
#line 491 "ll_backend.peephole.c"
      ll_backend__peephole____Compare____pattern_0_0(&ll_backend__peephole__conv0_HeadVar__1_1, ((MR_Word) ll_backend__peephole__wrapper_arg_2), ((MR_Word) ll_backend__peephole__wrapper_arg_3));
    }
#line 494 "ll_backend.peephole.c"
    *ll_backend__peephole__wrapper_arg_1 = ((MR_Box) (ll_backend__peephole__conv0_HeadVar__1_1));
#line 496 "ll_backend.peephole.c"
  }
#line 498 "ll_backend.peephole.c"
}

#line 50 "peephole.m"
static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0(
#line 50 "peephole.m"
  MR_Word * ll_backend__peephole__HeadVar__1_1,
#line 50 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__2_2,
#line 50 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__3_3)
#line 50 "peephole.m"
{
#line 50 "peephole.m"
  {
#line 50 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;
#line 50 "peephole.m"
    MR_Integer ll_backend__peephole__Cast_HeadVar1_4 = (MR_Integer) ll_backend__peephole__HeadVar__2_2;
#line 50 "peephole.m"
    MR_Integer ll_backend__peephole__Cast_HeadVar2_5 = (MR_Integer) ll_backend__peephole__HeadVar__3_3;

#line 50 "peephole.m"
    {
#line 50 "peephole.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__peephole__HeadVar__1_1, ll_backend__peephole__Cast_HeadVar1_4, ll_backend__peephole__Cast_HeadVar2_5);
#line 50 "peephole.m"
      return;
    }
#line 50 "peephole.m"
  }
#line 50 "peephole.m"
}

#line 50 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0(
#line 50 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__2_1,
#line 50 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__2_2)
#line 50 "peephole.m"
{
#line 542 "ll_backend.peephole.c"
  {
#line 544 "ll_backend.peephole.c"
    MR_bool ll_backend__peephole__succeeded = (ll_backend__peephole__HeadVar__2_1 == ll_backend__peephole__HeadVar__2_2);

#line 547 "ll_backend.peephole.c"
    return ll_backend__peephole__succeeded;
#line 549 "ll_backend.peephole.c"
  }
#line 50 "peephole.m"
}

#line 655 "peephole.m"
static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(
#line 655 "peephole.m"
  MR_Word ll_backend__peephole__OldLval_6,
#line 655 "peephole.m"
  MR_Integer ll_backend__peephole__OldTag_7,
#line 655 "peephole.m"
  MR_Word ll_backend__peephole__OldBase_8,
#line 655 "peephole.m"
  MR_Word ll_backend__peephole__Rval0_9,
#line 655 "peephole.m"
  MR_Word * ll_backend__peephole__Rval_10)
#line 655 "peephole.m"
{
#line 660 "peephole.m"
  {
#line 660 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;

#line 660 "peephole.m"
    if (((MR_tag((MR_Word) ll_backend__peephole__Rval0_9)) == (MR_mktag((MR_Integer) 2))))
#line 688 "peephole.m"
      {
#line 688 "peephole.m"
        MR_Integer ll_backend__peephole__Tag_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__peephole__Rval0_9, (MR_Integer) 0)));
#line 688 "peephole.m"
        MR_Word ll_backend__peephole__BaseRval0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__peephole__Rval0_9, (MR_Integer) 1)));
#line 688 "peephole.m"
        MR_Word ll_backend__peephole__BaseRval_20;

#line 689 "peephole.m"
        {
#line 689 "peephole.m"
          ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__BaseRval0_19, &ll_backend__peephole__BaseRval_20);
        }
#line 691 "peephole.m"
        {
#line 691 "peephole.m"
          MR_Word base;
#line 691 "peephole.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "peephole.m"
          *ll_backend__peephole__Rval_10 = base;
#line 691 "peephole.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__peephole__Tag_18));
#line 691 "peephole.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__peephole__BaseRval_20));
#line 691 "peephole.m"
        }
#line 688 "peephole.m"
      }
#line 660 "peephole.m"
    else
#line 660 "peephole.m"
      if (((((MR_tag((MR_Word) ll_backend__peephole__Rval0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 672 "peephole.m"
        {
#line 672 "peephole.m"
          MR_Word ll_backend__peephole__BinOp_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 1)));
#line 672 "peephole.m"
          MR_Word ll_backend__peephole__RvalB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 3)));
#line 672 "peephole.m"
          MR_Word ll_backend__peephole__RvalA0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 2)));
#line 674 "peephole.m"
          MR_Word ll_backend__peephole__V_26_26;
#line 674 "peephole.m"
          MR_Word ll_backend__peephole__V_27_27;
#line 674 "peephole.m"
          MR_Word ll_backend__peephole__V_28_28;
#line 674 "peephole.m"
          MR_Word ll_backend__peephole__V_37_37;
#line 674 "peephole.m"
          MR_Integer ll_backend__peephole__V_38_38;
#line 677 "peephole.m"
          MR_Word ll_backend__peephole__V_16_16;

#line 674 "peephole.m"
          ll_backend__peephole__succeeded = (ll_backend__peephole__BinOp_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
#line 674 "peephole.m"
          if (ll_backend__peephole__succeeded)
#line 674 "peephole.m"
            {
#line 675 "peephole.m"
              ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__RvalA0_34)) == (MR_mktag((MR_Integer) 0)));
#line 675 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 675 "peephole.m"
                {
#line 675 "peephole.m"
                  ll_backend__peephole__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__RvalA0_34, (MR_Integer) 0)));
#line 675 "peephole.m"
                  {
#line 675 "peephole.m"
                    ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__V_37_37);
                  }
#line 674 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 674 "peephole.m"
                    {
#line 677 "peephole.m"
                      ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__OldBase_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__OldBase_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 677 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 677 "peephole.m"
                        {
#line 677 "peephole.m"
                          ll_backend__peephole__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__OldBase_8, (MR_Integer) 1)));
#line 676 "peephole.m"
                          ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__RvalB0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__RvalB0_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 676 "peephole.m"
                          if (ll_backend__peephole__succeeded)
#line 676 "peephole.m"
                            {
#line 676 "peephole.m"
                              ll_backend__peephole__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__RvalB0_15, (MR_Integer) 1)));
#line 676 "peephole.m"
                              ll_backend__peephole__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__RvalB0_15, (MR_Integer) 2)));
#line 676 "peephole.m"
                              ll_backend__peephole__succeeded = (ll_backend__peephole__V_26_26 == (MR_Integer) 0);
#line 674 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 674 "peephole.m"
                                {
#line 676 "peephole.m"
                                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 676 "peephole.m"
                                  if (ll_backend__peephole__succeeded)
#line 676 "peephole.m"
                                    {
#line 676 "peephole.m"
                                      ll_backend__peephole__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_27_27, (MR_Integer) 1)));
#line 676 "peephole.m"
                                      ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 676 "peephole.m"
                                      if (ll_backend__peephole__succeeded)
#line 676 "peephole.m"
                                        {
#line 676 "peephole.m"
                                          ll_backend__peephole__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__peephole__V_28_28, (MR_Integer) 0)));
#line 676 "peephole.m"
                                          ll_backend__peephole__succeeded = (ll_backend__peephole__OldTag_7 == ll_backend__peephole__V_38_38);
#line 676 "peephole.m"
                                        }
#line 676 "peephole.m"
                                    }
#line 674 "peephole.m"
                                }
#line 676 "peephole.m"
                            }
#line 677 "peephole.m"
                        }
#line 674 "peephole.m"
                    }
#line 675 "peephole.m"
                }
#line 674 "peephole.m"
            }
#line 680 "peephole.m"
          if (ll_backend__peephole__succeeded)
#line 679 "peephole.m"
            *ll_backend__peephole__Rval_10 = ll_backend__peephole__OldBase_8;
#line 680 "peephole.m"
          else
#line 682 "peephole.m"
            {
#line 682 "peephole.m"
              MR_Word ll_backend__peephole__RvalB_17;
#line 682 "peephole.m"
              MR_Word ll_backend__peephole__RvalA_32;

#line 681 "peephole.m"
              {
#line 681 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__RvalA0_34, &ll_backend__peephole__RvalA_32);
              }
#line 683 "peephole.m"
              {
#line 683 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__RvalB0_15, &ll_backend__peephole__RvalB_17);
              }
#line 685 "peephole.m"
              {
#line 685 "peephole.m"
                MR_Word base;
#line 685 "peephole.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 685 "peephole.m"
                *ll_backend__peephole__Rval_10 = base;
#line 685 "peephole.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 685 "peephole.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__peephole__BinOp_14));
#line 685 "peephole.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__peephole__RvalA_32));
#line 685 "peephole.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__peephole__RvalB_17));
#line 685 "peephole.m"
              }
#line 682 "peephole.m"
            }
#line 672 "peephole.m"
        }
#line 660 "peephole.m"
      else
#line 660 "peephole.m"
        if (((((MR_tag((MR_Word) ll_backend__peephole__Rval0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 660 "peephole.m"
          {
#line 660 "peephole.m"
            MR_Word ll_backend__peephole__UnOp_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 1)));
#line 660 "peephole.m"
            MR_Word ll_backend__peephole__RvalA0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 2)));
#line 662 "peephole.m"
            MR_Word ll_backend__peephole__V_36_36;

#line 662 "peephole.m"
            ll_backend__peephole__succeeded = (ll_backend__peephole__UnOp_11 == (MR_Integer) 1);
#line 662 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 662 "peephole.m"
              {
#line 663 "peephole.m"
                ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__RvalA0_12)) == (MR_mktag((MR_Integer) 0)));
#line 663 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 663 "peephole.m"
                  {
#line 663 "peephole.m"
                    ll_backend__peephole__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__RvalA0_12, (MR_Integer) 0)));
#line 663 "peephole.m"
                    {
#line 663 "peephole.m"
                      ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__V_36_36);
                    }
#line 663 "peephole.m"
                  }
#line 662 "peephole.m"
              }
#line 666 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 665 "peephole.m"
              {
#line 665 "peephole.m"
                MR_Word ll_backend__peephole__V_30_30;
#line 665 "peephole.m"
                MR_Word ll_backend__peephole__V_31_31;

#line 665 "peephole.m"
                {
#line 665 "peephole.m"
                  ll_backend__peephole__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 665 "peephole.m"
                  MR_hl_field(MR_mktag(1), ll_backend__peephole__V_31_31, 0) = ((MR_Box) (ll_backend__peephole__OldTag_7));
#line 665 "peephole.m"
                }
#line 665 "peephole.m"
                {
#line 665 "peephole.m"
                  ll_backend__peephole__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "peephole.m"
                  MR_hl_field(MR_mktag(3), ll_backend__peephole__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 665 "peephole.m"
                  MR_hl_field(MR_mktag(3), ll_backend__peephole__V_30_30, 1) = ((MR_Box) (ll_backend__peephole__V_31_31));
#line 665 "peephole.m"
                }
#line 665 "peephole.m"
                {
#line 665 "peephole.m"
                  MR_Word base;
#line 665 "peephole.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 665 "peephole.m"
                  *ll_backend__peephole__Rval_10 = base;
#line 665 "peephole.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 665 "peephole.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 665 "peephole.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__peephole__V_30_30));
#line 665 "peephole.m"
                }
#line 665 "peephole.m"
              }
#line 666 "peephole.m"
            else
#line 668 "peephole.m"
              {
#line 668 "peephole.m"
                MR_Word ll_backend__peephole__RvalA_13;

#line 667 "peephole.m"
                {
#line 667 "peephole.m"
                  ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__RvalA0_12, &ll_backend__peephole__RvalA_13);
                }
#line 669 "peephole.m"
                {
#line 669 "peephole.m"
                  MR_Word base;
#line 669 "peephole.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 669 "peephole.m"
                  *ll_backend__peephole__Rval_10 = base;
#line 669 "peephole.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 669 "peephole.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__peephole__UnOp_11));
#line 669 "peephole.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__peephole__RvalA_13));
#line 669 "peephole.m"
                }
#line 668 "peephole.m"
              }
#line 660 "peephole.m"
          }
#line 660 "peephole.m"
        else
#line 699 "peephole.m"
          *ll_backend__peephole__Rval_10 = ll_backend__peephole__Rval0_9;
#line 660 "peephole.m"
  }
#line 655 "peephole.m"
}

#line 491 "peephole.m"
static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(
#line 491 "peephole.m"
  MR_Word ll_backend__peephole__OldLval_6,
#line 491 "peephole.m"
  MR_Integer ll_backend__peephole__OldTag_7,
#line 491 "peephole.m"
  MR_Word ll_backend__peephole__OldBase_8,
#line 491 "peephole.m"
  MR_Word ll_backend__peephole__Instr0_9,
#line 491 "peephole.m"
  MR_Word * ll_backend__peephole__MaybeInstr_10)
#line 491 "peephole.m"
{
#line 495 "peephole.m"
  {
#line 495 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;
#line 495 "peephole.m"
    MR_Word ll_backend__peephole__Uinstr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_9, (MR_Integer) 0)));
#line 495 "peephole.m"
    MR_String ll_backend__peephole__Comment_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_9, (MR_Integer) 1)));

#line 510 "peephole.m"
    if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 498 "peephole.m"
      {
#line 498 "peephole.m"
        MR_Word ll_backend__peephole__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 498 "peephole.m"
        MR_Word ll_backend__peephole__Rval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));

#line 499 "peephole.m"
        {
#line 499 "peephole.m"
          ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval_13, ll_backend__peephole__OldLval_6);
        }
#line 501 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 500 "peephole.m"
          *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "peephole.m"
        else
#line 503 "peephole.m"
          {
#line 501 "peephole.m"
            MR_Word ll_backend__peephole__V_15_15;

#line 501 "peephole.m"
            ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval_13, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 501 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 501 "peephole.m"
              {
#line 501 "peephole.m"
                ll_backend__peephole__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval_13, (MR_Integer) 1)));
#line 502 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "peephole.m"
              }
#line 501 "peephole.m"
            else
#line 505 "peephole.m"
              {
#line 505 "peephole.m"
                MR_Word ll_backend__peephole__Rval_16;
#line 505 "peephole.m"
                MR_Word ll_backend__peephole__Uinstr_17;
#line 505 "peephole.m"
                MR_Word ll_backend__peephole__Instr_18;

#line 504 "peephole.m"
                {
#line 504 "peephole.m"
                  ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_14, &ll_backend__peephole__Rval_16);
                }
#line 506 "peephole.m"
                {
#line 506 "peephole.m"
                  ll_backend__peephole__Uinstr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 506 "peephole.m"
                  MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 506 "peephole.m"
                  MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_17, 1) = ((MR_Box) (ll_backend__peephole__Lval_13));
#line 506 "peephole.m"
                  MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_17, 2) = ((MR_Box) (ll_backend__peephole__Rval_16));
#line 506 "peephole.m"
                }
#line 507 "peephole.m"
                {
#line 507 "peephole.m"
                  ll_backend__peephole__Instr_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 507 "peephole.m"
                  MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_18, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_17));
#line 507 "peephole.m"
                  MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_18, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 507 "peephole.m"
                }
#line 508 "peephole.m"
                {
#line 508 "peephole.m"
                  MR_Word base;
#line 508 "peephole.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 508 "peephole.m"
                  *ll_backend__peephole__MaybeInstr_10 = base;
#line 508 "peephole.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_18));
#line 508 "peephole.m"
                }
#line 505 "peephole.m"
              }
#line 503 "peephole.m"
          }
#line 498 "peephole.m"
      }
#line 510 "peephole.m"
    else
#line 510 "peephole.m"
      if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 524 "peephole.m"
        {
#line 524 "peephole.m"
          MR_Word ll_backend__peephole__Targets_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 524 "peephole.m"
          MR_Word ll_backend__peephole__Rval0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 524 "peephole.m"
          MR_Word ll_backend__peephole__Rval_109;
#line 524 "peephole.m"
          MR_Word ll_backend__peephole__Uinstr_110;
#line 524 "peephole.m"
          MR_Word ll_backend__peephole__Instr_111;

#line 525 "peephole.m"
          {
#line 525 "peephole.m"
            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_108, &ll_backend__peephole__Rval_109);
          }
#line 527 "peephole.m"
          {
#line 527 "peephole.m"
            ll_backend__peephole__Uinstr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 527 "peephole.m"
            MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 527 "peephole.m"
            MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_110, 1) = ((MR_Box) (ll_backend__peephole__Rval_109));
#line 527 "peephole.m"
            MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_110, 2) = ((MR_Box) (ll_backend__peephole__Targets_20));
#line 527 "peephole.m"
          }
#line 528 "peephole.m"
          {
#line 528 "peephole.m"
            ll_backend__peephole__Instr_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "peephole.m"
            MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_111, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_110));
#line 528 "peephole.m"
            MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_111, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 528 "peephole.m"
          }
#line 529 "peephole.m"
          {
#line 529 "peephole.m"
            MR_Word base;
#line 529 "peephole.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 529 "peephole.m"
            *ll_backend__peephole__MaybeInstr_10 = base;
#line 529 "peephole.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_111));
#line 529 "peephole.m"
          }
#line 524 "peephole.m"
        }
#line 510 "peephole.m"
      else
#line 510 "peephole.m"
        if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 560 "peephole.m"
          {
#line 560 "peephole.m"
            MR_Word ll_backend__peephole__Rval0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 560 "peephole.m"
            MR_Word ll_backend__peephole__Rval_130;
#line 560 "peephole.m"
            MR_Word ll_backend__peephole__Uinstr_131;
#line 560 "peephole.m"
            MR_Word ll_backend__peephole__Instr_132;

#line 561 "peephole.m"
            {
#line 561 "peephole.m"
              ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_129, &ll_backend__peephole__Rval_130);
            }
#line 563 "peephole.m"
            {
#line 563 "peephole.m"
              ll_backend__peephole__Uinstr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "peephole.m"
              MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 563 "peephole.m"
              MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_131, 1) = ((MR_Box) (ll_backend__peephole__Rval_130));
#line 563 "peephole.m"
            }
#line 564 "peephole.m"
            {
#line 564 "peephole.m"
              ll_backend__peephole__Instr_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 564 "peephole.m"
              MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_132, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_131));
#line 564 "peephole.m"
              MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_132, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 564 "peephole.m"
            }
#line 565 "peephole.m"
            {
#line 565 "peephole.m"
              MR_Word base;
#line 565 "peephole.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 565 "peephole.m"
              *ll_backend__peephole__MaybeInstr_10 = base;
#line 565 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_132));
#line 565 "peephole.m"
            }
#line 560 "peephole.m"
          }
#line 510 "peephole.m"
        else
#line 510 "peephole.m"
          if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 531 "peephole.m"
            {
#line 531 "peephole.m"
              MR_Word ll_backend__peephole__Target_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 531 "peephole.m"
              MR_Word ll_backend__peephole__Rval0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 531 "peephole.m"
              MR_Word ll_backend__peephole__Rval_113;
#line 531 "peephole.m"
              MR_Word ll_backend__peephole__Uinstr_114;
#line 531 "peephole.m"
              MR_Word ll_backend__peephole__Instr_115;

#line 532 "peephole.m"
              {
#line 532 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_112, &ll_backend__peephole__Rval_113);
              }
#line 534 "peephole.m"
              {
#line 534 "peephole.m"
                ll_backend__peephole__Uinstr_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 534 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 534 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_114, 1) = ((MR_Box) (ll_backend__peephole__Rval_113));
#line 534 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_114, 2) = ((MR_Box) (ll_backend__peephole__Target_21));
#line 534 "peephole.m"
              }
#line 535 "peephole.m"
              {
#line 535 "peephole.m"
                ll_backend__peephole__Instr_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_115, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_114));
#line 535 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_115, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 535 "peephole.m"
              }
#line 536 "peephole.m"
              {
#line 536 "peephole.m"
                MR_Word base;
#line 536 "peephole.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 536 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = base;
#line 536 "peephole.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_115));
#line 536 "peephole.m"
              }
#line 531 "peephole.m"
            }
#line 510 "peephole.m"
          else
#line 510 "peephole.m"
            if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 539 "peephole.m"
              {
#line 539 "peephole.m"
                MR_Word ll_backend__peephole__MaybeTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 539 "peephole.m"
                MR_Word ll_backend__peephole__MaybeOffset_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 3)));
#line 539 "peephole.m"
                MR_Word ll_backend__peephole__SizeRval0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 4)));
#line 539 "peephole.m"
                MR_Word ll_backend__peephole__TypeMsg_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 5)));
#line 539 "peephole.m"
                MR_Word ll_backend__peephole__MayUseAtomicAlloc_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 6)));
#line 539 "peephole.m"
                MR_Word ll_backend__peephole__MaybeRegionId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 7)));
#line 539 "peephole.m"
                MR_Word ll_backend__peephole__MaybeReuse_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 8)));
#line 539 "peephole.m"
                MR_Word ll_backend__peephole__Target_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 540 "peephole.m"
                {
#line 540 "peephole.m"
                  ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Target_124, ll_backend__peephole__OldLval_6);
                }
#line 542 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 541 "peephole.m"
                  *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "peephole.m"
                else
#line 544 "peephole.m"
                  {
#line 542 "peephole.m"
                    MR_Word ll_backend__peephole__V_29_29;

#line 542 "peephole.m"
                    ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Target_124)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Target_124, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 542 "peephole.m"
                    if (ll_backend__peephole__succeeded)
#line 542 "peephole.m"
                      {
#line 542 "peephole.m"
                        ll_backend__peephole__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Target_124, (MR_Integer) 1)));
#line 543 "peephole.m"
                        *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 542 "peephole.m"
                      }
#line 542 "peephole.m"
                    else
#line 546 "peephole.m"
                      {
#line 546 "peephole.m"
                        MR_Word ll_backend__peephole__SizeRval_30;
#line 546 "peephole.m"
                        MR_Word ll_backend__peephole__Uinstr_116;
#line 546 "peephole.m"
                        MR_Word ll_backend__peephole__Instr_117;

#line 545 "peephole.m"
                        {
#line 545 "peephole.m"
                          ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__SizeRval0_24, &ll_backend__peephole__SizeRval_30);
                        }
#line 547 "peephole.m"
                        {
#line 547 "peephole.m"
                          ll_backend__peephole__Uinstr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
#line 547 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 547 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 1) = ((MR_Box) (ll_backend__peephole__Target_124));
#line 547 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 2) = ((MR_Box) (ll_backend__peephole__MaybeTag_22));
#line 547 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 3) = ((MR_Box) (ll_backend__peephole__MaybeOffset_23));
#line 547 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 4) = ((MR_Box) (ll_backend__peephole__SizeRval_30));
#line 547 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 5) = ((MR_Box) (ll_backend__peephole__TypeMsg_25));
#line 547 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 6) = ((MR_Box) (ll_backend__peephole__MayUseAtomicAlloc_26));
#line 547 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 7) = ((MR_Box) (ll_backend__peephole__MaybeRegionId_27));
#line 547 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 8) = ((MR_Box) (ll_backend__peephole__MaybeReuse_28));
#line 547 "peephole.m"
                        }
#line 549 "peephole.m"
                        {
#line 549 "peephole.m"
                          ll_backend__peephole__Instr_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 549 "peephole.m"
                          MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_117, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_116));
#line 549 "peephole.m"
                          MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_117, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 549 "peephole.m"
                        }
#line 550 "peephole.m"
                        {
#line 550 "peephole.m"
                          MR_Word base;
#line 550 "peephole.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 550 "peephole.m"
                          *ll_backend__peephole__MaybeInstr_10 = base;
#line 550 "peephole.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_117));
#line 550 "peephole.m"
                        }
#line 546 "peephole.m"
                      }
#line 544 "peephole.m"
                  }
#line 539 "peephole.m"
              }
#line 510 "peephole.m"
            else
#line 510 "peephole.m"
              if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 511 "peephole.m"
                {
#line 511 "peephole.m"
                  MR_Word ll_backend__peephole__Lval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 511 "peephole.m"
                  MR_Word ll_backend__peephole__Rval0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));

#line 512 "peephole.m"
                  {
#line 512 "peephole.m"
                    ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval_103, ll_backend__peephole__OldLval_6);
                  }
#line 514 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 513 "peephole.m"
                    *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "peephole.m"
                  else
#line 516 "peephole.m"
                    {
#line 514 "peephole.m"
                      MR_Word ll_backend__peephole__V_19_19;

#line 514 "peephole.m"
                      ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval_103)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval_103, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 514 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 514 "peephole.m"
                        {
#line 514 "peephole.m"
                          ll_backend__peephole__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval_103, (MR_Integer) 1)));
#line 515 "peephole.m"
                          *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "peephole.m"
                        }
#line 514 "peephole.m"
                      else
#line 518 "peephole.m"
                        {
#line 518 "peephole.m"
                          MR_Word ll_backend__peephole__Rval_94;
#line 518 "peephole.m"
                          MR_Word ll_backend__peephole__Uinstr_95;
#line 518 "peephole.m"
                          MR_Word ll_backend__peephole__Instr_96;

#line 517 "peephole.m"
                          {
#line 517 "peephole.m"
                            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_104, &ll_backend__peephole__Rval_94);
                          }
#line 519 "peephole.m"
                          {
#line 519 "peephole.m"
                            ll_backend__peephole__Uinstr_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 519 "peephole.m"
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 519 "peephole.m"
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_95, 1) = ((MR_Box) (ll_backend__peephole__Lval_103));
#line 519 "peephole.m"
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_95, 2) = ((MR_Box) (ll_backend__peephole__Rval_94));
#line 519 "peephole.m"
                          }
#line 520 "peephole.m"
                          {
#line 520 "peephole.m"
                            ll_backend__peephole__Instr_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 520 "peephole.m"
                            MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_96, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_95));
#line 520 "peephole.m"
                            MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_96, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 520 "peephole.m"
                          }
#line 521 "peephole.m"
                          {
#line 521 "peephole.m"
                            MR_Word base;
#line 521 "peephole.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 521 "peephole.m"
                            *ll_backend__peephole__MaybeInstr_10 = base;
#line 521 "peephole.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_96));
#line 521 "peephole.m"
                          }
#line 518 "peephole.m"
                        }
#line 516 "peephole.m"
                    }
#line 511 "peephole.m"
                }
#line 510 "peephole.m"
              else
#line 510 "peephole.m"
                if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 617 "peephole.m"
                  {
#line 617 "peephole.m"
                    MR_Word ll_backend__peephole__Lval0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 616 "peephole.m"
                    MR_Integer ll_backend__peephole___NumSlots_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 618 "peephole.m"
                    {
#line 618 "peephole.m"
                      ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_163, ll_backend__peephole__OldLval_6);
                    }
#line 620 "peephole.m"
                    if (ll_backend__peephole__succeeded)
#line 619 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "peephole.m"
                    else
#line 622 "peephole.m"
                      {
#line 620 "peephole.m"
                        MR_Word ll_backend__peephole__V_40_40;

#line 620 "peephole.m"
                        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_163)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_163, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 620 "peephole.m"
                        if (ll_backend__peephole__succeeded)
#line 620 "peephole.m"
                          {
#line 620 "peephole.m"
                            ll_backend__peephole__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_163, (MR_Integer) 1)));
#line 621 "peephole.m"
                            *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "peephole.m"
                          }
#line 620 "peephole.m"
                        else
#line 623 "peephole.m"
                          {
#line 623 "peephole.m"
                            MR_Word base;
#line 623 "peephole.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 623 "peephole.m"
                            *ll_backend__peephole__MaybeInstr_10 = base;
#line 623 "peephole.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 623 "peephole.m"
                          }
#line 622 "peephole.m"
                      }
#line 617 "peephole.m"
                  }
#line 510 "peephole.m"
                else
#line 510 "peephole.m"
                  if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 603 "peephole.m"
                    {
#line 603 "peephole.m"
                      MR_Word ll_backend__peephole__Uinstr_157;
#line 603 "peephole.m"
                      MR_Word ll_backend__peephole__Instr_158;
#line 603 "peephole.m"
                      MR_Word ll_backend__peephole__LCRval0_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 603 "peephole.m"
                      MR_Word ll_backend__peephole__LCSRval0_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 603 "peephole.m"
                      MR_Word ll_backend__peephole__LCRval_161;
#line 603 "peephole.m"
                      MR_Word ll_backend__peephole__LCSRval_162;

#line 604 "peephole.m"
                      {
#line 604 "peephole.m"
                        ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__LCRval0_159, &ll_backend__peephole__LCRval_161);
                      }
#line 606 "peephole.m"
                      {
#line 606 "peephole.m"
                        ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__LCSRval0_160, &ll_backend__peephole__LCSRval_162);
                      }
#line 608 "peephole.m"
                      {
#line 608 "peephole.m"
                        ll_backend__peephole__Uinstr_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 608 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
#line 608 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_157, 1) = ((MR_Box) (ll_backend__peephole__LCRval_161));
#line 608 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_157, 2) = ((MR_Box) (ll_backend__peephole__LCSRval_162));
#line 608 "peephole.m"
                      }
#line 609 "peephole.m"
                      {
#line 609 "peephole.m"
                        ll_backend__peephole__Instr_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 609 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_158, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_157));
#line 609 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_158, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 609 "peephole.m"
                      }
#line 610 "peephole.m"
                      {
#line 610 "peephole.m"
                        MR_Word base;
#line 610 "peephole.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 610 "peephole.m"
                        *ll_backend__peephole__MaybeInstr_10 = base;
#line 610 "peephole.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_158));
#line 610 "peephole.m"
                      }
#line 603 "peephole.m"
                    }
#line 510 "peephole.m"
                  else
#line 510 "peephole.m"
                    if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 594 "peephole.m"
                      {
#line 594 "peephole.m"
                        MR_Word ll_backend__peephole__LCRval0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 594 "peephole.m"
                        MR_Word ll_backend__peephole__LCSRval0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 594 "peephole.m"
                        MR_Word ll_backend__peephole__LCRval_37;
#line 594 "peephole.m"
                        MR_Word ll_backend__peephole__LCSRval_38;
#line 594 "peephole.m"
                        MR_Word ll_backend__peephole__Uinstr_154;
#line 594 "peephole.m"
                        MR_Word ll_backend__peephole__Instr_155;
#line 594 "peephole.m"
                        MR_Word ll_backend__peephole__Label_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 3)));

#line 595 "peephole.m"
                        {
#line 595 "peephole.m"
                          ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__LCRval0_35, &ll_backend__peephole__LCRval_37);
                        }
#line 597 "peephole.m"
                        {
#line 597 "peephole.m"
                          ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__LCSRval0_36, &ll_backend__peephole__LCSRval_38);
                        }
#line 599 "peephole.m"
                        {
#line 599 "peephole.m"
                          ll_backend__peephole__Uinstr_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 599 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 599 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_154, 1) = ((MR_Box) (ll_backend__peephole__LCRval_37));
#line 599 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_154, 2) = ((MR_Box) (ll_backend__peephole__LCSRval_38));
#line 599 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_154, 3) = ((MR_Box) (ll_backend__peephole__Label_156));
#line 599 "peephole.m"
                        }
#line 600 "peephole.m"
                        {
#line 600 "peephole.m"
                          ll_backend__peephole__Instr_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 600 "peephole.m"
                          MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_155, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_154));
#line 600 "peephole.m"
                          MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_155, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 600 "peephole.m"
                        }
#line 601 "peephole.m"
                        {
#line 601 "peephole.m"
                          MR_Word base;
#line 601 "peephole.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 601 "peephole.m"
                          *ll_backend__peephole__MaybeInstr_10 = base;
#line 601 "peephole.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_155));
#line 601 "peephole.m"
                        }
#line 594 "peephole.m"
                      }
#line 510 "peephole.m"
                    else
#line 510 "peephole.m"
                      if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 581 "peephole.m"
                        {
#line 581 "peephole.m"
                          MR_Word ll_backend__peephole__Lval0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 581 "peephole.m"
                          MR_Word ll_backend__peephole__Label_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 3)));
#line 581 "peephole.m"
                          MR_Word ll_backend__peephole__Rval0_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 582 "peephole.m"
                          {
#line 582 "peephole.m"
                            ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_32, ll_backend__peephole__OldLval_6);
                          }
#line 584 "peephole.m"
                          if (ll_backend__peephole__succeeded)
#line 583 "peephole.m"
                            *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "peephole.m"
                          else
#line 586 "peephole.m"
                            {
#line 584 "peephole.m"
                              MR_Word ll_backend__peephole__V_34_34;

#line 584 "peephole.m"
                              ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_32, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 584 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 584 "peephole.m"
                                {
#line 584 "peephole.m"
                                  ll_backend__peephole__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_32, (MR_Integer) 1)));
#line 585 "peephole.m"
                                  *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "peephole.m"
                                }
#line 584 "peephole.m"
                              else
#line 588 "peephole.m"
                                {
#line 588 "peephole.m"
                                  MR_Word ll_backend__peephole__Rval_141;
#line 588 "peephole.m"
                                  MR_Word ll_backend__peephole__Uinstr_142;
#line 588 "peephole.m"
                                  MR_Word ll_backend__peephole__Instr_143;

#line 587 "peephole.m"
                                  {
#line 587 "peephole.m"
                                    ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_150, &ll_backend__peephole__Rval_141);
                                  }
#line 589 "peephole.m"
                                  {
#line 589 "peephole.m"
                                    ll_backend__peephole__Uinstr_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 589 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
#line 589 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_142, 1) = ((MR_Box) (ll_backend__peephole__Rval_141));
#line 589 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_142, 2) = ((MR_Box) (ll_backend__peephole__Lval0_32));
#line 589 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_142, 3) = ((MR_Box) (ll_backend__peephole__Label_33));
#line 589 "peephole.m"
                                  }
#line 590 "peephole.m"
                                  {
#line 590 "peephole.m"
                                    ll_backend__peephole__Instr_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "peephole.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_143, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_142));
#line 590 "peephole.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_143, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 590 "peephole.m"
                                  }
#line 591 "peephole.m"
                                  {
#line 591 "peephole.m"
                                    MR_Word base;
#line 591 "peephole.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 591 "peephole.m"
                                    *ll_backend__peephole__MaybeInstr_10 = base;
#line 591 "peephole.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_143));
#line 591 "peephole.m"
                                  }
#line 588 "peephole.m"
                                }
#line 586 "peephole.m"
                            }
#line 581 "peephole.m"
                        }
#line 510 "peephole.m"
                      else
#line 510 "peephole.m"
                        if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 617 "peephole.m"
                          {
#line 617 "peephole.m"
                            MR_Word ll_backend__peephole__Lval0_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 618 "peephole.m"
                            {
#line 618 "peephole.m"
                              ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_168, ll_backend__peephole__OldLval_6);
                            }
#line 620 "peephole.m"
                            if (ll_backend__peephole__succeeded)
#line 619 "peephole.m"
                              *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "peephole.m"
                            else
#line 622 "peephole.m"
                              {
#line 620 "peephole.m"
                                MR_Word ll_backend__peephole__V_164_164;

#line 620 "peephole.m"
                                ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_168)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_168, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 620 "peephole.m"
                                if (ll_backend__peephole__succeeded)
#line 620 "peephole.m"
                                  {
#line 620 "peephole.m"
                                    ll_backend__peephole__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_168, (MR_Integer) 1)));
#line 621 "peephole.m"
                                    *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "peephole.m"
                                  }
#line 620 "peephole.m"
                                else
#line 623 "peephole.m"
                                  {
#line 623 "peephole.m"
                                    MR_Word base;
#line 623 "peephole.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 623 "peephole.m"
                                    *ll_backend__peephole__MaybeInstr_10 = base;
#line 623 "peephole.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 623 "peephole.m"
                                  }
#line 622 "peephole.m"
                              }
#line 617 "peephole.m"
                          }
#line 510 "peephole.m"
                        else
#line 510 "peephole.m"
                          if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 617 "peephole.m"
                            {
#line 617 "peephole.m"
                              MR_Word ll_backend__peephole__Lval0_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 618 "peephole.m"
                              {
#line 618 "peephole.m"
                                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_173, ll_backend__peephole__OldLval_6);
                              }
#line 620 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 619 "peephole.m"
                                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "peephole.m"
                              else
#line 622 "peephole.m"
                                {
#line 620 "peephole.m"
                                  MR_Word ll_backend__peephole__V_169_169;

#line 620 "peephole.m"
                                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_173)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_173, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 620 "peephole.m"
                                  if (ll_backend__peephole__succeeded)
#line 620 "peephole.m"
                                    {
#line 620 "peephole.m"
                                      ll_backend__peephole__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_173, (MR_Integer) 1)));
#line 621 "peephole.m"
                                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "peephole.m"
                                    }
#line 620 "peephole.m"
                                  else
#line 623 "peephole.m"
                                    {
#line 623 "peephole.m"
                                      MR_Word base;
#line 623 "peephole.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 623 "peephole.m"
                                      *ll_backend__peephole__MaybeInstr_10 = base;
#line 623 "peephole.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 623 "peephole.m"
                                    }
#line 622 "peephole.m"
                                }
#line 617 "peephole.m"
                            }
#line 510 "peephole.m"
                          else
#line 510 "peephole.m"
                            if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 574 "peephole.m"
                              {
#line 574 "peephole.m"
                                MR_Word ll_backend__peephole__Rval0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 574 "peephole.m"
                                MR_Word ll_backend__peephole__Rval_138;
#line 574 "peephole.m"
                                MR_Word ll_backend__peephole__Uinstr_139;
#line 574 "peephole.m"
                                MR_Word ll_backend__peephole__Instr_140;

#line 575 "peephole.m"
                                {
#line 575 "peephole.m"
                                  ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_137, &ll_backend__peephole__Rval_138);
                                }
#line 577 "peephole.m"
                                {
#line 577 "peephole.m"
                                  ll_backend__peephole__Uinstr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "peephole.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
#line 577 "peephole.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_139, 1) = ((MR_Box) (ll_backend__peephole__Rval_138));
#line 577 "peephole.m"
                                }
#line 578 "peephole.m"
                                {
#line 578 "peephole.m"
                                  ll_backend__peephole__Instr_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "peephole.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_140, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_139));
#line 578 "peephole.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_140, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 578 "peephole.m"
                                }
#line 579 "peephole.m"
                                {
#line 579 "peephole.m"
                                  MR_Word base;
#line 579 "peephole.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 579 "peephole.m"
                                  *ll_backend__peephole__MaybeInstr_10 = base;
#line 579 "peephole.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_140));
#line 579 "peephole.m"
                                }
#line 574 "peephole.m"
                              }
#line 510 "peephole.m"
                            else
#line 510 "peephole.m"
                              if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 567 "peephole.m"
                                {
#line 567 "peephole.m"
                                  MR_Word ll_backend__peephole__Reason_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 567 "peephole.m"
                                  MR_Word ll_backend__peephole__Rval0_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 567 "peephole.m"
                                  MR_Word ll_backend__peephole__Rval_134;
#line 567 "peephole.m"
                                  MR_Word ll_backend__peephole__Uinstr_135;
#line 567 "peephole.m"
                                  MR_Word ll_backend__peephole__Instr_136;

#line 568 "peephole.m"
                                  {
#line 568 "peephole.m"
                                    ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_133, &ll_backend__peephole__Rval_134);
                                  }
#line 570 "peephole.m"
                                  {
#line 570 "peephole.m"
                                    ll_backend__peephole__Uinstr_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 570 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 570 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_135, 1) = ((MR_Box) (ll_backend__peephole__Rval_134));
#line 570 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_135, 2) = ((MR_Box) (ll_backend__peephole__Reason_31));
#line 570 "peephole.m"
                                  }
#line 571 "peephole.m"
                                  {
#line 571 "peephole.m"
                                    ll_backend__peephole__Instr_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 571 "peephole.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_136, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_135));
#line 571 "peephole.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_136, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 571 "peephole.m"
                                  }
#line 572 "peephole.m"
                                  {
#line 572 "peephole.m"
                                    MR_Word base;
#line 572 "peephole.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 572 "peephole.m"
                                    *ll_backend__peephole__MaybeInstr_10 = base;
#line 572 "peephole.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_136));
#line 572 "peephole.m"
                                  }
#line 567 "peephole.m"
                                }
#line 510 "peephole.m"
                              else
#line 510 "peephole.m"
                                if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 553 "peephole.m"
                                  {
#line 553 "peephole.m"
                                    MR_Word ll_backend__peephole__Rval0_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 553 "peephole.m"
                                    MR_Word ll_backend__peephole__Rval_126;
#line 553 "peephole.m"
                                    MR_Word ll_backend__peephole__Uinstr_127;
#line 553 "peephole.m"
                                    MR_Word ll_backend__peephole__Instr_128;

#line 554 "peephole.m"
                                    {
#line 554 "peephole.m"
                                      ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_125, &ll_backend__peephole__Rval_126);
                                    }
#line 556 "peephole.m"
                                    {
#line 556 "peephole.m"
                                      ll_backend__peephole__Uinstr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "peephole.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 556 "peephole.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_127, 1) = ((MR_Box) (ll_backend__peephole__Rval_126));
#line 556 "peephole.m"
                                    }
#line 557 "peephole.m"
                                    {
#line 557 "peephole.m"
                                      ll_backend__peephole__Instr_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 557 "peephole.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_128, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_127));
#line 557 "peephole.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_128, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 557 "peephole.m"
                                    }
#line 558 "peephole.m"
                                    {
#line 558 "peephole.m"
                                      MR_Word base;
#line 558 "peephole.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 558 "peephole.m"
                                      *ll_backend__peephole__MaybeInstr_10 = base;
#line 558 "peephole.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_128));
#line 558 "peephole.m"
                                    }
#line 553 "peephole.m"
                                  }
#line 510 "peephole.m"
                                else
#line 510 "peephole.m"
                                  if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 617 "peephole.m"
                                    {
#line 617 "peephole.m"
                                      MR_Word ll_backend__peephole__Lval0_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 618 "peephole.m"
                                      {
#line 618 "peephole.m"
                                        ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_178, ll_backend__peephole__OldLval_6);
                                      }
#line 620 "peephole.m"
                                      if (ll_backend__peephole__succeeded)
#line 619 "peephole.m"
                                        *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "peephole.m"
                                      else
#line 622 "peephole.m"
                                        {
#line 620 "peephole.m"
                                          MR_Word ll_backend__peephole__V_174_174;

#line 620 "peephole.m"
                                          ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_178)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_178, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 620 "peephole.m"
                                          if (ll_backend__peephole__succeeded)
#line 620 "peephole.m"
                                            {
#line 620 "peephole.m"
                                              ll_backend__peephole__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_178, (MR_Integer) 1)));
#line 621 "peephole.m"
                                              *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "peephole.m"
                                            }
#line 620 "peephole.m"
                                          else
#line 623 "peephole.m"
                                            {
#line 623 "peephole.m"
                                              MR_Word base;
#line 623 "peephole.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 623 "peephole.m"
                                              *ll_backend__peephole__MaybeInstr_10 = base;
#line 623 "peephole.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 623 "peephole.m"
                                            }
#line 622 "peephole.m"
                                        }
#line 617 "peephole.m"
                                    }
#line 510 "peephole.m"
                                  else
#line 510 "peephole.m"
                                    if (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 617 "peephole.m"
                                      {
#line 617 "peephole.m"
                                        MR_Word ll_backend__peephole__Lval0_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 618 "peephole.m"
                                        {
#line 618 "peephole.m"
                                          ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_183, ll_backend__peephole__OldLval_6);
                                        }
#line 620 "peephole.m"
                                        if (ll_backend__peephole__succeeded)
#line 619 "peephole.m"
                                          *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "peephole.m"
                                        else
#line 622 "peephole.m"
                                          {
#line 620 "peephole.m"
                                            MR_Word ll_backend__peephole__V_179_179;

#line 620 "peephole.m"
                                            ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_183)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_183, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 620 "peephole.m"
                                            if (ll_backend__peephole__succeeded)
#line 620 "peephole.m"
                                              {
#line 620 "peephole.m"
                                                ll_backend__peephole__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_183, (MR_Integer) 1)));
#line 621 "peephole.m"
                                                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "peephole.m"
                                              }
#line 620 "peephole.m"
                                            else
#line 623 "peephole.m"
                                              {
#line 623 "peephole.m"
                                                MR_Word base;
#line 623 "peephole.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 623 "peephole.m"
                                                *ll_backend__peephole__MaybeInstr_10 = base;
#line 623 "peephole.m"
                                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 623 "peephole.m"
                                              }
#line 622 "peephole.m"
                                          }
#line 617 "peephole.m"
                                      }
#line 510 "peephole.m"
                                    else
#line 510 "peephole.m"
                                      if (((((((((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 1)))) || ((ll_backend__peephole__Uinstr0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || (((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 2)))))) || ((ll_backend__peephole__Uinstr0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))) || (((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) == (MR_Integer) 11))))))
#line 632 "peephole.m"
                                        {
#line 632 "peephole.m"
                                          MR_Word base;
#line 632 "peephole.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 632 "peephole.m"
                                          *ll_backend__peephole__MaybeInstr_10 = base;
#line 632 "peephole.m"
                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 632 "peephole.m"
                                        }
#line 510 "peephole.m"
                                      else
#line 652 "peephole.m"
                                        *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 495 "peephole.m"
  }
#line 491 "peephole.m"
}

#line 473 "peephole.m"
static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(
#line 473 "peephole.m"
  MR_Word ll_backend__peephole__Lval_1,
#line 473 "peephole.m"
  MR_Integer ll_backend__peephole__Tag_2,
#line 473 "peephole.m"
  MR_Word ll_backend__peephole__Base_3,
#line 473 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__4_4,
#line 473 "peephole.m"
  MR_Word * ll_backend__peephole__HeadVar__5_5)
#line 473 "peephole.m"
{
#line 476 "peephole.m"
  {
#line 476 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;

#line 476 "peephole.m"
    if ((ll_backend__peephole__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "peephole.m"
      *ll_backend__peephole__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 476 "peephole.m"
    else
#line 477 "peephole.m"
      {
#line 477 "peephole.m"
        MR_Word ll_backend__peephole__HeadInstr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__4_4, (MR_Integer) 0)));
#line 477 "peephole.m"
        MR_Word ll_backend__peephole__TailInstrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__4_4, (MR_Integer) 1)));
#line 477 "peephole.m"
        MR_Word ll_backend__peephole__MaybeHeadInstr_16;

#line 479 "peephole.m"
        {
#line 479 "peephole.m"
          ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(ll_backend__peephole__Lval_1, ll_backend__peephole__Tag_2, ll_backend__peephole__Base_3, ll_backend__peephole__HeadInstr0_14, &ll_backend__peephole__MaybeHeadInstr_16);
        }
#line 484 "peephole.m"
        if ((ll_backend__peephole__MaybeHeadInstr_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 483 "peephole.m"
          *ll_backend__peephole__HeadVar__5_5 = ll_backend__peephole__HeadVar__4_4;
#line 484 "peephole.m"
        else
#line 485 "peephole.m"
          {
#line 485 "peephole.m"
            MR_Word ll_backend__peephole__HeadInstr_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__MaybeHeadInstr_16, (MR_Integer) 0)));
#line 485 "peephole.m"
            MR_Word ll_backend__peephole__TailInstrs_18;

#line 486 "peephole.m"
            {
#line 486 "peephole.m"
              ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(ll_backend__peephole__Lval_1, ll_backend__peephole__Tag_2, ll_backend__peephole__Base_3, ll_backend__peephole__TailInstrs0_15, &ll_backend__peephole__TailInstrs_18);
            }
#line 488 "peephole.m"
            {
#line 488 "peephole.m"
              MR_Word base;
#line 488 "peephole.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "peephole.m"
              *ll_backend__peephole__HeadVar__5_5 = base;
#line 488 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__HeadInstr_17));
#line 488 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__TailInstrs_18));
#line 488 "peephole.m"
            }
#line 485 "peephole.m"
          }
#line 477 "peephole.m"
      }
#line 476 "peephole.m"
  }
#line 473 "peephole.m"
}

#line 152 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole__peephole_match_4_p_0(
#line 152 "peephole.m"
  MR_Word ll_backend__peephole__Instr0_1,
#line 152 "peephole.m"
  MR_Word ll_backend__peephole__Instrs0_2,
#line 152 "peephole.m"
  MR_Word ll_backend__peephole__InvalidPatterns_3,
#line 152 "peephole.m"
  MR_Word * ll_backend__peephole__Instrs_4)
#line 152 "peephole.m"
{
#line 162 "peephole.m"
  {
#line 162 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;
#line 162 "peephole.m"
    MR_String ll_backend__peephole__V_234_234 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_1, (MR_Integer) 1)));
#line 162 "peephole.m"
    MR_Word ll_backend__peephole__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_1, (MR_Integer) 0)));

#line 162 "peephole.m"
    if (((((MR_tag((MR_Word) ll_backend__peephole__V_235_235)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 397 "peephole.m"
      {
#line 397 "peephole.m"
        MR_Word ll_backend__peephole__Base_178;
#line 397 "peephole.m"
        MR_Word ll_backend__peephole__Redoip0_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
#line 397 "peephole.m"
        MR_Word ll_backend__peephole__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
#line 397 "peephole.m"
        MR_Word ll_backend__peephole__V_190_190;
#line 409 "peephole.m"
        MR_Word ll_backend__peephole__Redoip1_180;
#line 409 "peephole.m"
        MR_Word ll_backend__peephole__Skipped_181;
#line 409 "peephole.m"
        MR_Word ll_backend__peephole__Rest_182;
#line 402 "peephole.m"
        MR_Word ll_backend__peephole__V_191_191;
#line 402 "peephole.m"
        MR_Word ll_backend__peephole__V_192_192;
#line 402 "peephole.m"
        MR_Word ll_backend__peephole__V_193_193;
#line 402 "peephole.m"
        MR_Word ll_backend__peephole__V_194_194;

#line 399 "peephole.m"
        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_189_189)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_189_189, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 399 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 399 "peephole.m"
          {
#line 399 "peephole.m"
            ll_backend__peephole__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_189_189, (MR_Integer) 1)));
#line 399 "peephole.m"
            ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_190_190)) == (MR_mktag((MR_Integer) 0)));
#line 399 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 399 "peephole.m"
              {
#line 399 "peephole.m"
                ll_backend__peephole__Base_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_190_190, (MR_Integer) 0)));
#line 401 "peephole.m"
                ll_backend__peephole__V_193_193 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "peephole.m"
                ll_backend__peephole__V_192_192 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "peephole.m"
                {
#line 401 "peephole.m"
                  ll_backend__peephole__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "peephole.m"
                  MR_hl_field(MR_mktag(1), ll_backend__peephole__V_191_191, 0) = ((MR_Box) (ll_backend__peephole__Base_178));
#line 401 "peephole.m"
                  MR_hl_field(MR_mktag(1), ll_backend__peephole__V_191_191, 1) = ((MR_Box) (ll_backend__peephole__V_193_193));
#line 401 "peephole.m"
                }
#line 401 "peephole.m"
                {
#line 401 "peephole.m"
                  ll_backend__peephole__succeeded = ll_backend__opt_util__next_assign_to_redoip_6_p_0(ll_backend__peephole__Instrs0_2, ll_backend__peephole__V_191_191, ll_backend__peephole__V_192_192, &ll_backend__peephole__Redoip1_180, &ll_backend__peephole__Skipped_181, &ll_backend__peephole__Rest_182);
                }
#line 402 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 402 "peephole.m"
                  {
#line 403 "peephole.m"
                    {
#line 403 "peephole.m"
                      ll_backend__peephole__V_194_194 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(ll_backend__peephole__Skipped_181);
                    }
#line 403 "peephole.m"
                    ll_backend__peephole__succeeded = (ll_backend__peephole__V_194_194 == (MR_Integer) 0);
#line 402 "peephole.m"
                  }
#line 409 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 405 "peephole.m"
                  {
#line 405 "peephole.m"
                    MR_Word ll_backend__peephole__Instrs1_183;
#line 405 "peephole.m"
                    MR_Word ll_backend__peephole__RedoipInstr_184;
#line 405 "peephole.m"
                    MR_Word ll_backend__peephole__V_195_195;
#line 405 "peephole.m"
                    MR_Word ll_backend__peephole__V_198_198;
#line 405 "peephole.m"
                    MR_Word ll_backend__peephole__V_199_199;

#line 405 "peephole.m"
                    {
#line 405 "peephole.m"
                      ll_backend__peephole__Instrs1_183 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__peephole__Skipped_181, ll_backend__peephole__Rest_182);
                    }
#line 407 "peephole.m"
                    {
#line 407 "peephole.m"
                      ll_backend__peephole__V_199_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "peephole.m"
                      MR_hl_field(MR_mktag(3), ll_backend__peephole__V_199_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 407 "peephole.m"
                      MR_hl_field(MR_mktag(3), ll_backend__peephole__V_199_199, 1) = ((MR_Box) (ll_backend__peephole__Redoip1_180));
#line 407 "peephole.m"
                    }
#line 407 "peephole.m"
                    {
#line 407 "peephole.m"
                      ll_backend__peephole__V_198_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "peephole.m"
                      MR_hl_field(MR_mktag(3), ll_backend__peephole__V_198_198, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 407 "peephole.m"
                      MR_hl_field(MR_mktag(3), ll_backend__peephole__V_198_198, 1) = ((MR_Box) (ll_backend__peephole__V_199_199));
#line 407 "peephole.m"
                    }
#line 406 "peephole.m"
                    {
#line 406 "peephole.m"
                      ll_backend__peephole__V_195_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 406 "peephole.m"
                      MR_hl_field(MR_mktag(3), ll_backend__peephole__V_195_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 406 "peephole.m"
                      MR_hl_field(MR_mktag(3), ll_backend__peephole__V_195_195, 1) = ((MR_Box) (ll_backend__peephole__V_189_189));
#line 406 "peephole.m"
                      MR_hl_field(MR_mktag(3), ll_backend__peephole__V_195_195, 2) = ((MR_Box) (ll_backend__peephole__V_198_198));
#line 406 "peephole.m"
                    }
#line 406 "peephole.m"
                    {
#line 406 "peephole.m"
                      ll_backend__peephole__RedoipInstr_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "peephole.m"
                      MR_hl_field(MR_mktag(0), ll_backend__peephole__RedoipInstr_184, 0) = ((MR_Box) (ll_backend__peephole__V_195_195));
#line 406 "peephole.m"
                      MR_hl_field(MR_mktag(0), ll_backend__peephole__RedoipInstr_184, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
#line 406 "peephole.m"
                    }
#line 408 "peephole.m"
                    {
#line 408 "peephole.m"
                      MR_Word base;
#line 408 "peephole.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "peephole.m"
                      *ll_backend__peephole__Instrs_4 = base;
#line 408 "peephole.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__RedoipInstr_184));
#line 408 "peephole.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs1_183));
#line 408 "peephole.m"
                    }
#line 405 "peephole.m"
                    ll_backend__peephole__succeeded = MR_TRUE;
#line 405 "peephole.m"
                  }
#line 409 "peephole.m"
                else
#line 418 "peephole.m"
                  {
#line 418 "peephole.m"
                    MR_Word ll_backend__peephole__TypeCtorInfo_229_229;
#line 418 "peephole.m"
                    MR_Word ll_backend__peephole__Between_185;
#line 418 "peephole.m"
                    MR_Word ll_backend__peephole__After_186;
#line 418 "peephole.m"
                    MR_Word ll_backend__peephole__SucceedInstr_188;
#line 418 "peephole.m"
                    MR_Word ll_backend__peephole__V_200_200;
#line 418 "peephole.m"
                    MR_Word ll_backend__peephole__V_201_201;
#line 418 "peephole.m"
                    MR_Word ll_backend__peephole__V_202_202;
#line 418 "peephole.m"
                    MR_String ll_backend__peephole__V_203_203;
#line 418 "peephole.m"
                    MR_Word ll_backend__peephole__V_208_208;
#line 418 "peephole.m"
                    MR_Word ll_backend__peephole__V_209_209;
#line 418 "peephole.m"
                    MR_Word ll_backend__peephole__V_210_210;
#line 414 "peephole.m"
                    MR_Integer ll_backend__peephole__V_187_187;

#line 410 "peephole.m"
                    ll_backend__peephole__succeeded = (ll_backend__peephole__Base_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 418 "peephole.m"
                    if (ll_backend__peephole__succeeded)
#line 418 "peephole.m"
                      {
#line 411 "peephole.m"
                        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Redoip0_179)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Redoip0_179, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 411 "peephole.m"
                        if (ll_backend__peephole__succeeded)
#line 411 "peephole.m"
                          {
#line 411 "peephole.m"
                            ll_backend__peephole__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Redoip0_179, (MR_Integer) 1)));
#line 411 "peephole.m"
                            ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_200_200)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_200_200, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 411 "peephole.m"
                            if (ll_backend__peephole__succeeded)
#line 411 "peephole.m"
                              {
#line 411 "peephole.m"
                                ll_backend__peephole__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_200_200, (MR_Integer) 1)));
#line 411 "peephole.m"
                                ll_backend__peephole__succeeded = (ll_backend__peephole__V_201_201 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 418 "peephole.m"
                                if (ll_backend__peephole__succeeded)
#line 418 "peephole.m"
                                  {
#line 412 "peephole.m"
                                    {
#line 412 "peephole.m"
                                      ll_backend__peephole__succeeded = ll_backend__opt_util__straight_alternative_3_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Between_185, &ll_backend__peephole__After_186);
                                    }
#line 418 "peephole.m"
                                    if (ll_backend__peephole__succeeded)
#line 418 "peephole.m"
                                      {
#line 413 "peephole.m"
                                        {
#line 413 "peephole.m"
                                          ll_backend__peephole__V_202_202 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(ll_backend__peephole__Between_185);
                                        }
#line 413 "peephole.m"
                                        ll_backend__peephole__succeeded = (ll_backend__peephole__V_202_202 == (MR_Integer) 0);
#line 418 "peephole.m"
                                        if (ll_backend__peephole__succeeded)
#line 418 "peephole.m"
                                          {
#line 414 "peephole.m"
                                            ll_backend__peephole__V_203_203 = (MR_String) "curfr==maxfr";
#line 414 "peephole.m"
                                            {
#line 414 "peephole.m"
                                              ll_backend__peephole__succeeded = mercury__string__sub_string_search_3_p_0(ll_backend__peephole__V_234_234, ll_backend__peephole__V_203_203, &ll_backend__peephole__V_187_187);
                                            }
#line 418 "peephole.m"
                                            if (ll_backend__peephole__succeeded)
#line 418 "peephole.m"
                                              {
#line 416 "peephole.m"
                                                ll_backend__peephole__SucceedInstr_188 = (MR_Word) &ll_backend__peephole_scalar_common_1[3];
#line 2429 "ll_backend.peephole.c"
                                                ll_backend__peephole__TypeCtorInfo_229_229 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 417 "peephole.m"
                                                ll_backend__peephole__V_210_210 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "peephole.m"
                                                ll_backend__peephole__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__peephole_scalar_common_1[7]);
#line 417 "peephole.m"
                                                {
#line 417 "peephole.m"
                                                  ll_backend__peephole__V_208_208 = mercury__list__f_43_43_2_f_0(ll_backend__peephole__TypeCtorInfo_229_229, ll_backend__peephole__V_209_209, ll_backend__peephole__After_186);
                                                }
#line 417 "peephole.m"
                                                {
#line 417 "peephole.m"
                                                  *ll_backend__peephole__Instrs_4 = mercury__list__f_43_43_2_f_0(ll_backend__peephole__TypeCtorInfo_229_229, ll_backend__peephole__Between_185, ll_backend__peephole__V_208_208);
                                                }
#line 417 "peephole.m"
                                                ll_backend__peephole__succeeded = MR_TRUE;
#line 418 "peephole.m"
                                              }
#line 418 "peephole.m"
                                          }
#line 418 "peephole.m"
                                      }
#line 418 "peephole.m"
                                  }
#line 411 "peephole.m"
                              }
#line 411 "peephole.m"
                          }
#line 418 "peephole.m"
                      }
#line 418 "peephole.m"
                  }
#line 399 "peephole.m"
              }
#line 399 "peephole.m"
          }
#line 397 "peephole.m"
      }
#line 162 "peephole.m"
    else
#line 162 "peephole.m"
      if (((((MR_tag((MR_Word) ll_backend__peephole__V_235_235)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 162 "peephole.m"
        {
#line 162 "peephole.m"
          MR_Word ll_backend__peephole__TypeCtorInfo_223_223 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 162 "peephole.m"
          MR_Word ll_backend__peephole__TypeInfo_224_224 = (MR_Word) &ll_backend__peephole_scalar_common_1[0];
#line 162 "peephole.m"
          MR_Word ll_backend__peephole__SelectorRval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
#line 162 "peephole.m"
          MR_Word ll_backend__peephole__Labels_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
#line 162 "peephole.m"
          MR_Word ll_backend__peephole__LabelMap_13;
#line 162 "peephole.m"
          MR_Word ll_backend__peephole__LabelValsList_14;
#line 162 "peephole.m"
          MR_Word ll_backend__peephole__V_27_27;
#line 172 "peephole.m"
          MR_Word ll_backend__peephole__Label_15;
#line 168 "peephole.m"
          MR_Word ll_backend__peephole__V_28_28;
#line 168 "peephole.m"
          MR_Word ll_backend__peephole__V_29_29;
#line 168 "peephole.m"
          MR_Word ll_backend__peephole__V_16_16;

#line 165 "peephole.m"
          {
#line 165 "peephole.m"
            ll_backend__peephole__V_27_27 = mercury__map__init_0_f_0(ll_backend__peephole__TypeCtorInfo_223_223, ll_backend__peephole__TypeInfo_224_224);
          }
#line 165 "peephole.m"
          {
#line 165 "peephole.m"
            ll_backend__peephole__succeeded = ll_backend__peephole__build_peephole_jump_label_map_4_p_0(ll_backend__peephole__Labels_12, (MR_Integer) 0, ll_backend__peephole__V_27_27, &ll_backend__peephole__LabelMap_13);
          }
#line 162 "peephole.m"
          if (ll_backend__peephole__succeeded)
#line 162 "peephole.m"
            {
#line 166 "peephole.m"
              {
#line 166 "peephole.m"
                mercury__map__to_assoc_list_2_p_0(ll_backend__peephole__TypeCtorInfo_223_223, ll_backend__peephole__TypeInfo_224_224, ll_backend__peephole__LabelMap_13, &ll_backend__peephole__LabelValsList_14);
              }
#line 168 "peephole.m"
              ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__LabelValsList_14)) == (MR_mktag((MR_Integer) 1)));
#line 168 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 168 "peephole.m"
                {
#line 168 "peephole.m"
                  ll_backend__peephole__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__LabelValsList_14, (MR_Integer) 0)));
#line 168 "peephole.m"
                  ll_backend__peephole__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__LabelValsList_14, (MR_Integer) 1)));
#line 168 "peephole.m"
                  ll_backend__peephole__succeeded = (ll_backend__peephole__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 168 "peephole.m"
                    {
#line 168 "peephole.m"
                      ll_backend__peephole__Label_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_28_28, (MR_Integer) 0)));
#line 168 "peephole.m"
                      ll_backend__peephole__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_28_28, (MR_Integer) 1)));
#line 168 "peephole.m"
                      ll_backend__peephole__succeeded = MR_TRUE;
#line 168 "peephole.m"
                    }
#line 168 "peephole.m"
                }
#line 172 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 170 "peephole.m"
                {
#line 170 "peephole.m"
                  MR_Word ll_backend__peephole__GotoInstr_17;
#line 170 "peephole.m"
                  MR_Word ll_backend__peephole__V_30_30;
#line 170 "peephole.m"
                  MR_Word ll_backend__peephole__V_31_31;

#line 170 "peephole.m"
                  {
#line 170 "peephole.m"
                    ll_backend__peephole__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 170 "peephole.m"
                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_31_31, 0) = ((MR_Box) (ll_backend__peephole__Label_15));
#line 170 "peephole.m"
                  }
#line 170 "peephole.m"
                  {
#line 170 "peephole.m"
                    ll_backend__peephole__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "peephole.m"
                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 170 "peephole.m"
                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_30_30, 1) = ((MR_Box) (ll_backend__peephole__V_31_31));
#line 170 "peephole.m"
                  }
#line 170 "peephole.m"
                  {
#line 170 "peephole.m"
                    ll_backend__peephole__GotoInstr_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 170 "peephole.m"
                    MR_hl_field(MR_mktag(0), ll_backend__peephole__GotoInstr_17, 0) = ((MR_Box) (ll_backend__peephole__V_30_30));
#line 170 "peephole.m"
                    MR_hl_field(MR_mktag(0), ll_backend__peephole__GotoInstr_17, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
#line 170 "peephole.m"
                  }
#line 171 "peephole.m"
                  {
#line 171 "peephole.m"
                    MR_Word base;
#line 171 "peephole.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "peephole.m"
                    *ll_backend__peephole__Instrs_4 = base;
#line 171 "peephole.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__GotoInstr_17));
#line 171 "peephole.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs0_2));
#line 171 "peephole.m"
                  }
#line 170 "peephole.m"
                  ll_backend__peephole__succeeded = MR_TRUE;
#line 170 "peephole.m"
                }
#line 172 "peephole.m"
              else
#line 183 "peephole.m"
                {
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__LabelVals1_18;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__LabelVals2_19;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__OneValLabel_20;
#line 183 "peephole.m"
                  MR_Integer ll_backend__peephole__Val_21;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__OtherLabel_22;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__CondRval_23;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__CommentInstr_24;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__BranchInstr_25;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__V_32_32;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__V_33_33;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__V_34_34;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__V_35_35;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__V_36_36;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__V_37_37;
#line 183 "peephole.m"
                  MR_String ll_backend__peephole__V_38_38;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__V_39_39;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__V_40_40;
#line 183 "peephole.m"
                  MR_String ll_backend__peephole__V_41_41;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__V_42_42;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__V_43_43;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__V_44_44;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__V_45_45;
#line 183 "peephole.m"
                  MR_Word ll_backend__peephole__GotoInstr_46;

#line 173 "peephole.m"
                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__LabelValsList_14)) == (MR_mktag((MR_Integer) 1)));
#line 173 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 173 "peephole.m"
                    {
#line 173 "peephole.m"
                      ll_backend__peephole__LabelVals1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__LabelValsList_14, (MR_Integer) 0)));
#line 173 "peephole.m"
                      ll_backend__peephole__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__LabelValsList_14, (MR_Integer) 1)));
#line 173 "peephole.m"
                      ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 173 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 173 "peephole.m"
                        {
#line 173 "peephole.m"
                          ll_backend__peephole__LabelVals2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__V_32_32, (MR_Integer) 0)));
#line 173 "peephole.m"
                          ll_backend__peephole__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__V_32_32, (MR_Integer) 1)));
#line 173 "peephole.m"
                          ll_backend__peephole__succeeded = (ll_backend__peephole__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 183 "peephole.m"
                          if (ll_backend__peephole__succeeded)
#line 183 "peephole.m"
                            {
#line 174 "peephole.m"
                              {
#line 174 "peephole.m"
                                ll_backend__peephole__succeeded = ll_backend__peephole__peephole_pick_one_val_label_5_p_0(ll_backend__peephole__LabelVals1_18, ll_backend__peephole__LabelVals2_19, &ll_backend__peephole__OneValLabel_20, &ll_backend__peephole__Val_21, &ll_backend__peephole__OtherLabel_22);
                              }
#line 183 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 183 "peephole.m"
                                {
#line 177 "peephole.m"
                                  ll_backend__peephole__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
#line 178 "peephole.m"
                                  ll_backend__peephole__V_38_38 = (MR_String) "";
#line 180 "peephole.m"
                                  ll_backend__peephole__V_41_41 = (MR_String) "";
#line 177 "peephole.m"
                                  {
#line 177 "peephole.m"
                                    ll_backend__peephole__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 177 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_36_36, 0) = ((MR_Box) (ll_backend__peephole__Val_21));
#line 177 "peephole.m"
                                  }
#line 177 "peephole.m"
                                  {
#line 177 "peephole.m"
                                    ll_backend__peephole__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 177 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_35_35, 1) = ((MR_Box) (ll_backend__peephole__V_36_36));
#line 177 "peephole.m"
                                  }
#line 177 "peephole.m"
                                  {
#line 177 "peephole.m"
                                    ll_backend__peephole__CondRval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 177 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__CondRval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 177 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__CondRval_23, 1) = ((MR_Box) (ll_backend__peephole__V_34_34));
#line 177 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__CondRval_23, 2) = ((MR_Box) (ll_backend__peephole__SelectorRval_11));
#line 177 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__CondRval_23, 3) = ((MR_Box) (ll_backend__peephole__V_35_35));
#line 177 "peephole.m"
                                  }
#line 178 "peephole.m"
                                  {
#line 178 "peephole.m"
                                    ll_backend__peephole__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_37_37, 0) = ((MR_Box) (ll_backend__peephole__V_234_234));
#line 178 "peephole.m"
                                  }
#line 178 "peephole.m"
                                  {
#line 178 "peephole.m"
                                    ll_backend__peephole__CommentInstr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 178 "peephole.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__CommentInstr_24, 0) = ((MR_Box) (ll_backend__peephole__V_37_37));
#line 178 "peephole.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__CommentInstr_24, 1) = ((MR_Box) (ll_backend__peephole__V_38_38));
#line 178 "peephole.m"
                                  }
#line 179 "peephole.m"
                                  {
#line 179 "peephole.m"
                                    ll_backend__peephole__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 179 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_40_40, 0) = ((MR_Box) (ll_backend__peephole__OneValLabel_20));
#line 179 "peephole.m"
                                  }
#line 179 "peephole.m"
                                  {
#line 179 "peephole.m"
                                    ll_backend__peephole__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 179 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 179 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_39_39, 1) = ((MR_Box) (ll_backend__peephole__CondRval_23));
#line 179 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_39_39, 2) = ((MR_Box) (ll_backend__peephole__V_40_40));
#line 179 "peephole.m"
                                  }
#line 179 "peephole.m"
                                  {
#line 179 "peephole.m"
                                    ll_backend__peephole__BranchInstr_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 179 "peephole.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__BranchInstr_25, 0) = ((MR_Box) (ll_backend__peephole__V_39_39));
#line 179 "peephole.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__BranchInstr_25, 1) = ((MR_Box) (ll_backend__peephole__V_41_41));
#line 179 "peephole.m"
                                  }
#line 181 "peephole.m"
                                  {
#line 181 "peephole.m"
                                    ll_backend__peephole__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 181 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_43_43, 0) = ((MR_Box) (ll_backend__peephole__OtherLabel_22));
#line 181 "peephole.m"
                                  }
#line 181 "peephole.m"
                                  {
#line 181 "peephole.m"
                                    ll_backend__peephole__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 181 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_42_42, 1) = ((MR_Box) (ll_backend__peephole__V_43_43));
#line 181 "peephole.m"
                                  }
#line 181 "peephole.m"
                                  {
#line 181 "peephole.m"
                                    ll_backend__peephole__GotoInstr_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 181 "peephole.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__GotoInstr_46, 0) = ((MR_Box) (ll_backend__peephole__V_42_42));
#line 181 "peephole.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__GotoInstr_46, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
#line 181 "peephole.m"
                                  }
#line 182 "peephole.m"
                                  {
#line 182 "peephole.m"
                                    ll_backend__peephole__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_45_45, 0) = ((MR_Box) (ll_backend__peephole__GotoInstr_46));
#line 182 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_45_45, 1) = ((MR_Box) (ll_backend__peephole__Instrs0_2));
#line 182 "peephole.m"
                                  }
#line 182 "peephole.m"
                                  {
#line 182 "peephole.m"
                                    ll_backend__peephole__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_44_44, 0) = ((MR_Box) (ll_backend__peephole__BranchInstr_25));
#line 182 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_44_44, 1) = ((MR_Box) (ll_backend__peephole__V_45_45));
#line 182 "peephole.m"
                                  }
#line 182 "peephole.m"
                                  {
#line 182 "peephole.m"
                                    MR_Word base;
#line 182 "peephole.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "peephole.m"
                                    *ll_backend__peephole__Instrs_4 = base;
#line 182 "peephole.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__CommentInstr_24));
#line 182 "peephole.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__V_44_44));
#line 182 "peephole.m"
                                  }
#line 182 "peephole.m"
                                  ll_backend__peephole__succeeded = MR_TRUE;
#line 183 "peephole.m"
                                }
#line 183 "peephole.m"
                            }
#line 173 "peephole.m"
                        }
#line 173 "peephole.m"
                    }
#line 183 "peephole.m"
                }
#line 162 "peephole.m"
            }
#line 162 "peephole.m"
        }
#line 162 "peephole.m"
      else
#line 162 "peephole.m"
        if (((((MR_tag((MR_Word) ll_backend__peephole__V_235_235)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 196 "peephole.m"
          {
#line 196 "peephole.m"
            MR_Word ll_backend__peephole__Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
#line 196 "peephole.m"
            MR_Word ll_backend__peephole__CodeAddr_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
#line 209 "peephole.m"
            MR_Word ll_backend__peephole__Taken_56;

#line 200 "peephole.m"
            {
#line 200 "peephole.m"
              ll_backend__peephole__succeeded = ll_backend__opt_util__is_const_condition_2_p_0(ll_backend__peephole__Rval_54, &ll_backend__peephole__Taken_56);
            }
#line 209 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 205 "peephole.m"
              {
#line 205 "peephole.m"
                if ((ll_backend__peephole__Taken_56 == (MR_Integer) 0))
#line 206 "peephole.m"
                  *ll_backend__peephole__Instrs_4 = ll_backend__peephole__Instrs0_2;
#line 205 "peephole.m"
                else
#line 203 "peephole.m"
                  {
#line 203 "peephole.m"
                    MR_Word ll_backend__peephole__V_63_63;
#line 203 "peephole.m"
                    MR_Word ll_backend__peephole__V_64_64;

#line 204 "peephole.m"
                    {
#line 204 "peephole.m"
                      ll_backend__peephole__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "peephole.m"
                      MR_hl_field(MR_mktag(3), ll_backend__peephole__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 204 "peephole.m"
                      MR_hl_field(MR_mktag(3), ll_backend__peephole__V_64_64, 1) = ((MR_Box) (ll_backend__peephole__CodeAddr_55));
#line 204 "peephole.m"
                    }
#line 204 "peephole.m"
                    {
#line 204 "peephole.m"
                      ll_backend__peephole__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 204 "peephole.m"
                      MR_hl_field(MR_mktag(0), ll_backend__peephole__V_63_63, 0) = ((MR_Box) (ll_backend__peephole__V_64_64));
#line 204 "peephole.m"
                      MR_hl_field(MR_mktag(0), ll_backend__peephole__V_63_63, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
#line 204 "peephole.m"
                    }
#line 204 "peephole.m"
                    {
#line 204 "peephole.m"
                      MR_Word base;
#line 204 "peephole.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 204 "peephole.m"
                      *ll_backend__peephole__Instrs_4 = base;
#line 204 "peephole.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__V_63_63));
#line 204 "peephole.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs0_2));
#line 204 "peephole.m"
                    }
#line 203 "peephole.m"
                  }
#line 205 "peephole.m"
                ll_backend__peephole__succeeded = MR_TRUE;
#line 205 "peephole.m"
              }
#line 209 "peephole.m"
            else
#line 215 "peephole.m"
              {
#line 210 "peephole.m"
                MR_Word ll_backend__peephole__Instrs1_57;
#line 210 "peephole.m"
                MR_Word ll_backend__peephole__Instr1_58;
#line 210 "peephole.m"
                MR_Word ll_backend__peephole__V_65_65;
#line 210 "peephole.m"
                MR_Word ll_backend__peephole__V_232_232;
#line 211 "peephole.m"
                MR_Word ll_backend__peephole__V_59_59;
#line 212 "peephole.m"
                MR_String ll_backend__peephole__V_60_60;

#line 210 "peephole.m"
                {
#line 210 "peephole.m"
                  ll_backend__opt_util__skip_comments_2_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Instrs1_57);
                }
#line 211 "peephole.m"
                ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_57)) == (MR_mktag((MR_Integer) 1)));
#line 211 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 211 "peephole.m"
                  {
#line 211 "peephole.m"
                    ll_backend__peephole__Instr1_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_57, (MR_Integer) 0)));
#line 211 "peephole.m"
                    ll_backend__peephole__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_57, (MR_Integer) 1)));
#line 212 "peephole.m"
                    ll_backend__peephole__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_58, (MR_Integer) 0)));
#line 212 "peephole.m"
                    ll_backend__peephole__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_58, (MR_Integer) 1)));
#line 212 "peephole.m"
                    ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_65_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_65_65, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 212 "peephole.m"
                    if (ll_backend__peephole__succeeded)
#line 212 "peephole.m"
                      {
#line 212 "peephole.m"
                        ll_backend__peephole__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_65_65, (MR_Integer) 1)));
#line 212 "peephole.m"
                        {
#line 212 "peephole.m"
                          ll_backend__peephole__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__peephole__CodeAddr_55, ll_backend__peephole__V_232_232);
                        }
#line 212 "peephole.m"
                      }
#line 211 "peephole.m"
                  }
#line 215 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 214 "peephole.m"
                  {
#line 214 "peephole.m"
                    *ll_backend__peephole__Instrs_4 = ll_backend__peephole__Instrs0_2;
#line 214 "peephole.m"
                    ll_backend__peephole__succeeded = MR_TRUE;
#line 214 "peephole.m"
                  }
#line 215 "peephole.m"
                else
#line 220 "peephole.m"
                  {
#line 220 "peephole.m"
                    MR_Word ll_backend__peephole__Label_61;
#line 217 "peephole.m"
                    MR_Word ll_backend__peephole__V_62_62;

#line 216 "peephole.m"
                    ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__CodeAddr_55)) == (MR_mktag((MR_Integer) 1)));
#line 216 "peephole.m"
                    if (ll_backend__peephole__succeeded)
#line 216 "peephole.m"
                      {
#line 216 "peephole.m"
                        ll_backend__peephole__Label_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__CodeAddr_55, (MR_Integer) 0)));
#line 217 "peephole.m"
                        {
#line 217 "peephole.m"
                          ll_backend__peephole__succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(ll_backend__peephole__Label_61, ll_backend__peephole__Instrs0_2, &ll_backend__peephole__V_62_62);
                        }
#line 220 "peephole.m"
                        if (ll_backend__peephole__succeeded)
#line 220 "peephole.m"
                          {
#line 219 "peephole.m"
                            *ll_backend__peephole__Instrs_4 = ll_backend__peephole__Instrs0_2;
#line 219 "peephole.m"
                            ll_backend__peephole__succeeded = MR_TRUE;
#line 220 "peephole.m"
                          }
#line 216 "peephole.m"
                      }
#line 220 "peephole.m"
                  }
#line 215 "peephole.m"
              }
#line 196 "peephole.m"
          }
#line 162 "peephole.m"
        else
#line 162 "peephole.m"
          if (((((MR_tag((MR_Word) ll_backend__peephole__V_235_235)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 436 "peephole.m"
            {
#line 436 "peephole.m"
              MR_Word ll_backend__peephole__TypeCtorInfo_231_231;
#line 436 "peephole.m"
              MR_Integer ll_backend__peephole__N_217 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
#line 436 "peephole.m"
              MR_Word ll_backend__peephole__Between_220;
#line 436 "peephole.m"
              MR_Word ll_backend__peephole__Remain_221;
#line 438 "peephole.m"
              MR_String ll_backend__peephole__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
#line 438 "peephole.m"
              MR_Word ll_backend__peephole__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 3)));

#line 439 "peephole.m"
              {
#line 439 "peephole.m"
                ll_backend__peephole__succeeded = mercury__list__member_2_p_0((MR_Word) &ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0, ((MR_Box) ((MR_Integer) 0)), ll_backend__peephole__InvalidPatterns_3);
              }
#line 439 "peephole.m"
              ll_backend__peephole__succeeded = !(ll_backend__peephole__succeeded);
#line 436 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 436 "peephole.m"
                {
#line 440 "peephole.m"
                  {
#line 440 "peephole.m"
                    ll_backend__peephole__succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(ll_backend__peephole__Instrs0_2, ll_backend__peephole__N_217, &ll_backend__peephole__Between_220, &ll_backend__peephole__Remain_221);
                  }
#line 436 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 436 "peephole.m"
                    {
#line 3067 "ll_backend.peephole.c"
                      ll_backend__peephole__TypeCtorInfo_231_231 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 441 "peephole.m"
                      {
#line 441 "peephole.m"
                        *ll_backend__peephole__Instrs_4 = mercury__list__f_43_43_2_f_0(ll_backend__peephole__TypeCtorInfo_231_231, ll_backend__peephole__Between_220, ll_backend__peephole__Remain_221);
                      }
#line 441 "peephole.m"
                      ll_backend__peephole__succeeded = MR_TRUE;
#line 436 "peephole.m"
                    }
#line 436 "peephole.m"
                }
#line 436 "peephole.m"
            }
#line 162 "peephole.m"
          else
#line 162 "peephole.m"
            if (((((MR_tag((MR_Word) ll_backend__peephole__V_235_235)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 277 "peephole.m"
              {
#line 277 "peephole.m"
                MR_Word ll_backend__peephole__NondetFrameInfo_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
#line 277 "peephole.m"
                MR_Word ll_backend__peephole__Redoip0_73;
#line 277 "peephole.m"
                MR_Word ll_backend__peephole__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
#line 298 "peephole.m"
                MR_Word ll_backend__peephole__Redoip1_78;
#line 298 "peephole.m"
                MR_Word ll_backend__peephole__Skipped_79;
#line 298 "peephole.m"
                MR_Word ll_backend__peephole__Rest_80;
#line 289 "peephole.m"
                MR_Word ll_backend__peephole__AllowedBases_76;
#line 289 "peephole.m"
                MR_Word ll_backend__peephole__V_107_107;
#line 289 "peephole.m"
                MR_Word ll_backend__peephole__V_108_108;

#line 279 "peephole.m"
                ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_100_100)) == (MR_mktag((MR_Integer) 1)));
#line 279 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 279 "peephole.m"
                  {
#line 279 "peephole.m"
                    ll_backend__peephole__Redoip0_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__V_100_100, (MR_Integer) 0)));
#line 286 "peephole.m"
                    if (((MR_tag((MR_Word) ll_backend__peephole__NondetFrameInfo_72)) == (MR_mktag((MR_Integer) 1))))
#line 285 "peephole.m"
                      ll_backend__peephole__AllowedBases_76 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__peephole_scalar_common_1[5]);
#line 286 "peephole.m"
                    else
#line 287 "peephole.m"
                      {
#line 288 "peephole.m"
                        ll_backend__peephole__AllowedBases_76 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__peephole_scalar_common_1[8]);
#line 287 "peephole.m"
                      }
#line 290 "peephole.m"
                    ll_backend__peephole__V_107_107 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 290 "peephole.m"
                    {
#line 290 "peephole.m"
                      ll_backend__peephole__succeeded = ll_backend__opt_util__next_assign_to_redoip_6_p_0(ll_backend__peephole__Instrs0_2, ll_backend__peephole__AllowedBases_76, ll_backend__peephole__V_107_107, &ll_backend__peephole__Redoip1_78, &ll_backend__peephole__Skipped_79, &ll_backend__peephole__Rest_80);
                    }
#line 289 "peephole.m"
                    if (ll_backend__peephole__succeeded)
#line 289 "peephole.m"
                      {
#line 292 "peephole.m"
                        {
#line 292 "peephole.m"
                          ll_backend__peephole__V_108_108 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(ll_backend__peephole__Skipped_79);
                        }
#line 292 "peephole.m"
                        ll_backend__peephole__succeeded = (ll_backend__peephole__V_108_108 == (MR_Integer) 0);
#line 289 "peephole.m"
                      }
#line 298 "peephole.m"
                    if (ll_backend__peephole__succeeded)
#line 294 "peephole.m"
                      {
#line 294 "peephole.m"
                        MR_Word ll_backend__peephole__Instrs1_81;
#line 294 "peephole.m"
                        MR_Word ll_backend__peephole__NewInstr_82;
#line 294 "peephole.m"
                        MR_Word ll_backend__peephole__V_109_109;
#line 294 "peephole.m"
                        MR_Word ll_backend__peephole__V_110_110;

#line 294 "peephole.m"
                        {
#line 294 "peephole.m"
                          ll_backend__peephole__Instrs1_81 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__peephole__Skipped_79, ll_backend__peephole__Rest_80);
                        }
#line 295 "peephole.m"
                        {
#line 295 "peephole.m"
                          ll_backend__peephole__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 295 "peephole.m"
                          MR_hl_field(MR_mktag(1), ll_backend__peephole__V_110_110, 0) = ((MR_Box) (ll_backend__peephole__Redoip1_78));
#line 295 "peephole.m"
                        }
#line 295 "peephole.m"
                        {
#line 295 "peephole.m"
                          ll_backend__peephole__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 295 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 295 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__V_109_109, 1) = ((MR_Box) (ll_backend__peephole__NondetFrameInfo_72));
#line 295 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__V_109_109, 2) = ((MR_Box) (ll_backend__peephole__V_110_110));
#line 295 "peephole.m"
                        }
#line 295 "peephole.m"
                        {
#line 295 "peephole.m"
                          ll_backend__peephole__NewInstr_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 295 "peephole.m"
                          MR_hl_field(MR_mktag(0), ll_backend__peephole__NewInstr_82, 0) = ((MR_Box) (ll_backend__peephole__V_109_109));
#line 295 "peephole.m"
                          MR_hl_field(MR_mktag(0), ll_backend__peephole__NewInstr_82, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
#line 295 "peephole.m"
                        }
#line 297 "peephole.m"
                        {
#line 297 "peephole.m"
                          MR_Word base;
#line 297 "peephole.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "peephole.m"
                          *ll_backend__peephole__Instrs_4 = base;
#line 297 "peephole.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__NewInstr_82));
#line 297 "peephole.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs1_81));
#line 297 "peephole.m"
                        }
#line 294 "peephole.m"
                        ll_backend__peephole__succeeded = MR_TRUE;
#line 294 "peephole.m"
                      }
#line 298 "peephole.m"
                    else
#line 338 "peephole.m"
                      {
#line 338 "peephole.m"
                        MR_Word ll_backend__peephole__InstrsPrime_88;
#line 299 "peephole.m"
                        MR_Word ll_backend__peephole__Instr1_83;
#line 299 "peephole.m"
                        MR_Word ll_backend__peephole__Instrs2_84;
#line 299 "peephole.m"
                        MR_Word ll_backend__peephole__Test_85;
#line 299 "peephole.m"
                        MR_Word ll_backend__peephole__Target_86;
#line 299 "peephole.m"
                        MR_String ll_backend__peephole__Comment1_87;
#line 299 "peephole.m"
                        MR_Word ll_backend__peephole__V_111_111;
#line 299 "peephole.m"
                        MR_Word ll_backend__peephole__Instrs1_143;

#line 299 "peephole.m"
                        {
#line 299 "peephole.m"
                          ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Instrs1_143);
                        }
#line 300 "peephole.m"
                        ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_143)) == (MR_mktag((MR_Integer) 1)));
#line 300 "peephole.m"
                        if (ll_backend__peephole__succeeded)
#line 300 "peephole.m"
                          {
#line 300 "peephole.m"
                            ll_backend__peephole__Instr1_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_143, (MR_Integer) 0)));
#line 300 "peephole.m"
                            ll_backend__peephole__Instrs2_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_143, (MR_Integer) 1)));
#line 301 "peephole.m"
                            ll_backend__peephole__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_83, (MR_Integer) 0)));
#line 301 "peephole.m"
                            ll_backend__peephole__Comment1_87 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_83, (MR_Integer) 1)));
#line 301 "peephole.m"
                            ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_111_111)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_111_111, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 301 "peephole.m"
                            if (ll_backend__peephole__succeeded)
#line 301 "peephole.m"
                              {
#line 301 "peephole.m"
                                ll_backend__peephole__Test_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_111_111, (MR_Integer) 1)));
#line 301 "peephole.m"
                                ll_backend__peephole__Target_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_111_111, (MR_Integer) 2)));
#line 303 "peephole.m"
                                ll_backend__peephole__succeeded = (ll_backend__peephole__Redoip0_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 303 "peephole.m"
                                if (ll_backend__peephole__succeeded)
#line 304 "peephole.m"
                                  {
#line 304 "peephole.m"
                                    if ((ll_backend__peephole__Target_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 304 "peephole.m"
                                      ll_backend__peephole__succeeded = MR_TRUE;
#line 304 "peephole.m"
                                    else
#line 304 "peephole.m"
                                      if ((ll_backend__peephole__Target_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 304 "peephole.m"
                                        ll_backend__peephole__succeeded = MR_TRUE;
#line 304 "peephole.m"
                                      else
#line 304 "peephole.m"
                                        ll_backend__peephole__succeeded = MR_FALSE;
#line 304 "peephole.m"
                                  }
#line 311 "peephole.m"
                                if (ll_backend__peephole__succeeded)
#line 306 "peephole.m"
                                  {
#line 306 "peephole.m"
                                    MR_Word ll_backend__peephole__V_112_112;
#line 306 "peephole.m"
                                    MR_Word ll_backend__peephole__V_113_113;
#line 306 "peephole.m"
                                    MR_Word ll_backend__peephole__V_115_115;

#line 307 "peephole.m"
                                    {
#line 307 "peephole.m"
                                      ll_backend__peephole__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 307 "peephole.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__peephole__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 307 "peephole.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__peephole__V_113_113, 1) = ((MR_Box) (ll_backend__peephole__Test_85));
#line 307 "peephole.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__peephole__V_113_113, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 307 "peephole.m"
                                    }
#line 307 "peephole.m"
                                    {
#line 307 "peephole.m"
                                      ll_backend__peephole__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 307 "peephole.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__peephole__V_112_112, 0) = ((MR_Box) (ll_backend__peephole__V_113_113));
#line 307 "peephole.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__peephole__V_112_112, 1) = ((MR_Box) (ll_backend__peephole__Comment1_87));
#line 307 "peephole.m"
                                    }
#line 309 "peephole.m"
                                    {
#line 309 "peephole.m"
                                      ll_backend__peephole__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "peephole.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_115_115, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
#line 309 "peephole.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_115_115, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_84));
#line 309 "peephole.m"
                                    }
#line 307 "peephole.m"
                                    {
#line 307 "peephole.m"
                                      ll_backend__peephole__InstrsPrime_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "peephole.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 0) = ((MR_Box) (ll_backend__peephole__V_112_112));
#line 307 "peephole.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 1) = ((MR_Box) (ll_backend__peephole__V_115_115));
#line 307 "peephole.m"
                                    }
#line 306 "peephole.m"
                                    ll_backend__peephole__succeeded = MR_TRUE;
#line 306 "peephole.m"
                                  }
#line 311 "peephole.m"
                                else
#line 333 "peephole.m"
                                  {
#line 312 "peephole.m"
                                    MR_Word ll_backend__peephole__V_89_89;

#line 312 "peephole.m"
                                    ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Redoip0_73)) == (MR_mktag((MR_Integer) 1)));
#line 312 "peephole.m"
                                    if (ll_backend__peephole__succeeded)
#line 312 "peephole.m"
                                      {
#line 312 "peephole.m"
                                        ll_backend__peephole__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Redoip0_73, (MR_Integer) 0)));
#line 315 "peephole.m"
                                        ll_backend__peephole__succeeded = (ll_backend__peephole__Target_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 322 "peephole.m"
                                        if (ll_backend__peephole__succeeded)
#line 317 "peephole.m"
                                          {
#line 317 "peephole.m"
                                            MR_Word ll_backend__peephole__V_120_120;
#line 317 "peephole.m"
                                            MR_Word ll_backend__peephole__V_121_121;
#line 317 "peephole.m"
                                            MR_Word ll_backend__peephole__V_123_123;

#line 318 "peephole.m"
                                            {
#line 318 "peephole.m"
                                              ll_backend__peephole__V_121_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 318 "peephole.m"
                                              MR_hl_field(MR_mktag(3), ll_backend__peephole__V_121_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 318 "peephole.m"
                                              MR_hl_field(MR_mktag(3), ll_backend__peephole__V_121_121, 1) = ((MR_Box) (ll_backend__peephole__Test_85));
#line 318 "peephole.m"
                                              MR_hl_field(MR_mktag(3), ll_backend__peephole__V_121_121, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 318 "peephole.m"
                                            }
#line 318 "peephole.m"
                                            {
#line 318 "peephole.m"
                                              ll_backend__peephole__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 318 "peephole.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__peephole__V_120_120, 0) = ((MR_Box) (ll_backend__peephole__V_121_121));
#line 318 "peephole.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__peephole__V_120_120, 1) = ((MR_Box) (ll_backend__peephole__Comment1_87));
#line 318 "peephole.m"
                                            }
#line 320 "peephole.m"
                                            {
#line 320 "peephole.m"
                                              ll_backend__peephole__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "peephole.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__peephole__V_123_123, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
#line 320 "peephole.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__peephole__V_123_123, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_84));
#line 320 "peephole.m"
                                            }
#line 318 "peephole.m"
                                            {
#line 318 "peephole.m"
                                              ll_backend__peephole__InstrsPrime_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "peephole.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 0) = ((MR_Box) (ll_backend__peephole__V_120_120));
#line 318 "peephole.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 1) = ((MR_Box) (ll_backend__peephole__V_123_123));
#line 318 "peephole.m"
                                            }
#line 317 "peephole.m"
                                            ll_backend__peephole__succeeded = MR_TRUE;
#line 317 "peephole.m"
                                          }
#line 322 "peephole.m"
                                        else
#line 330 "peephole.m"
                                          {
#line 330 "peephole.m"
                                            MR_Word ll_backend__peephole__V_124_124;
#line 330 "peephole.m"
                                            MR_Word ll_backend__peephole__V_125_125;
#line 330 "peephole.m"
                                            MR_Word ll_backend__peephole__V_126_126;

#line 323 "peephole.m"
                                            ll_backend__peephole__succeeded = (ll_backend__peephole__Target_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 330 "peephole.m"
                                            if (ll_backend__peephole__succeeded)
#line 330 "peephole.m"
                                              {
#line 327 "peephole.m"
                                                {
#line 327 "peephole.m"
                                                  ll_backend__peephole__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 327 "peephole.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__peephole__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 327 "peephole.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__peephole__V_126_126, 1) = ((MR_Box) (ll_backend__peephole__Test_85));
#line 327 "peephole.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__peephole__V_126_126, 2) = ((MR_Box) (ll_backend__peephole__Redoip0_73));
#line 327 "peephole.m"
                                                }
#line 327 "peephole.m"
                                                {
#line 327 "peephole.m"
                                                  ll_backend__peephole__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 327 "peephole.m"
                                                  MR_hl_field(MR_mktag(0), ll_backend__peephole__V_125_125, 0) = ((MR_Box) (ll_backend__peephole__V_126_126));
#line 327 "peephole.m"
                                                  MR_hl_field(MR_mktag(0), ll_backend__peephole__V_125_125, 1) = ((MR_Box) (ll_backend__peephole__Comment1_87));
#line 327 "peephole.m"
                                                }
#line 328 "peephole.m"
                                                {
#line 328 "peephole.m"
                                                  ll_backend__peephole__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "peephole.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__peephole__V_124_124, 0) = ((MR_Box) (ll_backend__peephole__V_125_125));
#line 328 "peephole.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__peephole__V_124_124, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_84));
#line 328 "peephole.m"
                                                }
#line 326 "peephole.m"
                                                {
#line 326 "peephole.m"
                                                  ll_backend__peephole__InstrsPrime_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "peephole.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
#line 326 "peephole.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 1) = ((MR_Box) (ll_backend__peephole__V_124_124));
#line 326 "peephole.m"
                                                }
#line 326 "peephole.m"
                                                ll_backend__peephole__succeeded = MR_TRUE;
#line 330 "peephole.m"
                                              }
#line 330 "peephole.m"
                                          }
#line 312 "peephole.m"
                                      }
#line 333 "peephole.m"
                                  }
#line 301 "peephole.m"
                              }
#line 300 "peephole.m"
                          }
#line 338 "peephole.m"
                        if (ll_backend__peephole__succeeded)
#line 337 "peephole.m"
                          {
#line 337 "peephole.m"
                            *ll_backend__peephole__Instrs_4 = ll_backend__peephole__InstrsPrime_88;
#line 337 "peephole.m"
                            ll_backend__peephole__succeeded = MR_TRUE;
#line 337 "peephole.m"
                          }
#line 338 "peephole.m"
                        else
#line 344 "peephole.m"
                          {
#line 344 "peephole.m"
                            MR_String ll_backend__peephole__Comment2_90;
#line 344 "peephole.m"
                            MR_Word ll_backend__peephole__Instrs2_154;
#line 339 "peephole.m"
                            MR_Word ll_backend__peephole__V_127_127;
#line 339 "peephole.m"
                            MR_Word ll_backend__peephole__V_128_128;
#line 339 "peephole.m"
                            MR_Word ll_backend__peephole__Instrs1_144;
#line 339 "peephole.m"
                            MR_Word ll_backend__peephole__Instr1_145;

#line 339 "peephole.m"
                            {
#line 339 "peephole.m"
                              ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Instrs1_144);
                            }
#line 340 "peephole.m"
                            ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_144)) == (MR_mktag((MR_Integer) 1)));
#line 340 "peephole.m"
                            if (ll_backend__peephole__succeeded)
#line 340 "peephole.m"
                              {
#line 340 "peephole.m"
                                ll_backend__peephole__Instr1_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_144, (MR_Integer) 0)));
#line 340 "peephole.m"
                                ll_backend__peephole__Instrs2_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_144, (MR_Integer) 1)));
#line 341 "peephole.m"
                                ll_backend__peephole__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_145, (MR_Integer) 0)));
#line 341 "peephole.m"
                                ll_backend__peephole__Comment2_90 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_145, (MR_Integer) 1)));
#line 341 "peephole.m"
                                ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_127_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_127_127, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 341 "peephole.m"
                                if (ll_backend__peephole__succeeded)
#line 341 "peephole.m"
                                  {
#line 341 "peephole.m"
                                    ll_backend__peephole__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_127_127, (MR_Integer) 1)));
#line 341 "peephole.m"
                                    ll_backend__peephole__succeeded = (ll_backend__peephole__V_128_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 341 "peephole.m"
                                  }
#line 340 "peephole.m"
                              }
#line 344 "peephole.m"
                            if (ll_backend__peephole__succeeded)
#line 343 "peephole.m"
                              {
#line 343 "peephole.m"
                                MR_Word ll_backend__peephole__V_129_129;

#line 343 "peephole.m"
                                {
#line 343 "peephole.m"
                                  ll_backend__peephole__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 343 "peephole.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__peephole__V_129_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[9])));
#line 343 "peephole.m"
                                  MR_hl_field(MR_mktag(0), ll_backend__peephole__V_129_129, 1) = ((MR_Box) (ll_backend__peephole__Comment2_90));
#line 343 "peephole.m"
                                }
#line 343 "peephole.m"
                                {
#line 343 "peephole.m"
                                  MR_Word base;
#line 343 "peephole.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "peephole.m"
                                  *ll_backend__peephole__Instrs_4 = base;
#line 343 "peephole.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__V_129_129));
#line 343 "peephole.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_154));
#line 343 "peephole.m"
                                }
#line 343 "peephole.m"
                                ll_backend__peephole__succeeded = MR_TRUE;
#line 343 "peephole.m"
                              }
#line 344 "peephole.m"
                            else
#line 353 "peephole.m"
                              {
#line 353 "peephole.m"
                                MR_Word ll_backend__peephole__Straight_91;
#line 353 "peephole.m"
                                MR_Word ll_backend__peephole__Instrs2_151;
#line 345 "peephole.m"
                                MR_Word ll_backend__peephole__V_132_132;
#line 345 "peephole.m"
                                MR_Word ll_backend__peephole__V_133_133;
#line 345 "peephole.m"
                                MR_Word ll_backend__peephole__Instrs1_146;
#line 345 "peephole.m"
                                MR_Word ll_backend__peephole__Instr1_147;
#line 348 "peephole.m"
                                MR_String ll_backend__peephole__V_93_93;
#line 348 "peephole.m"
                                MR_Word ll_backend__peephole__V_92_92;

#line 345 "peephole.m"
                                ll_backend__peephole__succeeded = (ll_backend__peephole__Redoip0_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 345 "peephole.m"
                                if (ll_backend__peephole__succeeded)
#line 345 "peephole.m"
                                  {
#line 346 "peephole.m"
                                    {
#line 346 "peephole.m"
                                      ll_backend__opt_util__no_stack_straight_line_3_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Straight_91, &ll_backend__peephole__Instrs1_146);
                                    }
#line 347 "peephole.m"
                                    ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_146)) == (MR_mktag((MR_Integer) 1)));
#line 347 "peephole.m"
                                    if (ll_backend__peephole__succeeded)
#line 347 "peephole.m"
                                      {
#line 347 "peephole.m"
                                        ll_backend__peephole__Instr1_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_146, (MR_Integer) 0)));
#line 347 "peephole.m"
                                        ll_backend__peephole__Instrs2_151 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_146, (MR_Integer) 1)));
#line 348 "peephole.m"
                                        ll_backend__peephole__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_147, (MR_Integer) 0)));
#line 348 "peephole.m"
                                        ll_backend__peephole__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_147, (MR_Integer) 1)));
#line 348 "peephole.m"
                                        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_132_132)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_132_132, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 348 "peephole.m"
                                        if (ll_backend__peephole__succeeded)
#line 348 "peephole.m"
                                          {
#line 348 "peephole.m"
                                            ll_backend__peephole__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_132_132, (MR_Integer) 1)));
#line 348 "peephole.m"
                                            ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_133_133)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_133_133, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 348 "peephole.m"
                                            if (ll_backend__peephole__succeeded)
#line 348 "peephole.m"
                                              ll_backend__peephole__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_133_133, (MR_Integer) 1)));
#line 348 "peephole.m"
                                          }
#line 347 "peephole.m"
                                      }
#line 345 "peephole.m"
                                  }
#line 353 "peephole.m"
                                if (ll_backend__peephole__succeeded)
#line 351 "peephole.m"
                                  {
#line 351 "peephole.m"
                                    MR_Word ll_backend__peephole__V_137_137;

#line 352 "peephole.m"
                                    {
#line 352 "peephole.m"
                                      ll_backend__peephole__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "peephole.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_137_137, 0) = ((MR_Box) (&ll_backend__peephole_scalar_common_1[11]));
#line 352 "peephole.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_137_137, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_151));
#line 352 "peephole.m"
                                    }
#line 352 "peephole.m"
                                    {
#line 352 "peephole.m"
                                      *ll_backend__peephole__Instrs_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__peephole__Straight_91, ll_backend__peephole__V_137_137);
                                    }
#line 351 "peephole.m"
                                    ll_backend__peephole__succeeded = MR_TRUE;
#line 351 "peephole.m"
                                  }
#line 353 "peephole.m"
                                else
#line 362 "peephole.m"
                                  {
#line 362 "peephole.m"
                                    MR_Word ll_backend__peephole__TypeCtorInfo_227_227;
#line 362 "peephole.m"
                                    MR_Word ll_backend__peephole__UntilSucceed_95;
#line 362 "peephole.m"
                                    MR_String ll_backend__peephole__SucceedComment_96;
#line 362 "peephole.m"
                                    MR_Word ll_backend__peephole__DiscardUinstr_97;
#line 362 "peephole.m"
                                    MR_String ll_backend__peephole__DiscardComment_98;
#line 362 "peephole.m"
                                    MR_Word ll_backend__peephole__DiscardInstr_99;
#line 362 "peephole.m"
                                    MR_Word ll_backend__peephole__V_138_138;
#line 362 "peephole.m"
                                    MR_Word ll_backend__peephole__V_139_139;
#line 362 "peephole.m"
                                    MR_String ll_backend__peephole__V_140_140;
#line 362 "peephole.m"
                                    MR_Word ll_backend__peephole__V_141_141;
#line 362 "peephole.m"
                                    MR_Word ll_backend__peephole__V_142_142;
#line 362 "peephole.m"
                                    MR_Word ll_backend__peephole__Instrs2_148;

#line 354 "peephole.m"
                                    ll_backend__peephole__succeeded = (ll_backend__peephole__Redoip0_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 362 "peephole.m"
                                    if (ll_backend__peephole__succeeded)
#line 362 "peephole.m"
                                      {
#line 355 "peephole.m"
                                        {
#line 355 "peephole.m"
                                          ll_backend__peephole__succeeded = ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__UntilSucceed_95, &ll_backend__peephole__SucceedComment_96, &ll_backend__peephole__Instrs2_148);
                                        }
#line 362 "peephole.m"
                                        if (ll_backend__peephole__succeeded)
#line 362 "peephole.m"
                                          {
#line 358 "peephole.m"
                                            ll_backend__peephole__V_139_139 = (MR_Integer) 0;
#line 359 "peephole.m"
                                            ll_backend__peephole__V_140_140 = (MR_String) " (added discard)";
#line 358 "peephole.m"
                                            ll_backend__peephole__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[12]);
#line 358 "peephole.m"
                                            ll_backend__peephole__DiscardUinstr_97 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[13]);
#line 359 "peephole.m"
                                            {
#line 359 "peephole.m"
                                              ll_backend__peephole__DiscardComment_98 = mercury__string__f_43_43_2_f_0(ll_backend__peephole__SucceedComment_96, ll_backend__peephole__V_140_140);
                                            }
#line 3733 "ll_backend.peephole.c"
                                            ll_backend__peephole__TypeCtorInfo_227_227 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 360 "peephole.m"
                                            {
#line 360 "peephole.m"
                                              ll_backend__peephole__DiscardInstr_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "peephole.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__peephole__DiscardInstr_99, 0) = ((MR_Box) (ll_backend__peephole__DiscardUinstr_97));
#line 360 "peephole.m"
                                              MR_hl_field(MR_mktag(0), ll_backend__peephole__DiscardInstr_99, 1) = ((MR_Box) (ll_backend__peephole__DiscardComment_98));
#line 360 "peephole.m"
                                            }
#line 361 "peephole.m"
                                            {
#line 361 "peephole.m"
                                              ll_backend__peephole__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "peephole.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__peephole__V_141_141, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
#line 361 "peephole.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__peephole__V_141_141, 1) = ((MR_Box) (ll_backend__peephole__UntilSucceed_95));
#line 361 "peephole.m"
                                            }
#line 361 "peephole.m"
                                            {
#line 361 "peephole.m"
                                              ll_backend__peephole__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "peephole.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__peephole__V_142_142, 0) = ((MR_Box) (ll_backend__peephole__DiscardInstr_99));
#line 361 "peephole.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__peephole__V_142_142, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_148));
#line 361 "peephole.m"
                                            }
#line 361 "peephole.m"
                                            {
#line 361 "peephole.m"
                                              *ll_backend__peephole__Instrs_4 = mercury__list__f_43_43_2_f_0(ll_backend__peephole__TypeCtorInfo_227_227, ll_backend__peephole__V_141_141, ll_backend__peephole__V_142_142);
                                            }
#line 361 "peephole.m"
                                            ll_backend__peephole__succeeded = MR_TRUE;
#line 362 "peephole.m"
                                          }
#line 362 "peephole.m"
                                      }
#line 362 "peephole.m"
                                  }
#line 353 "peephole.m"
                              }
#line 344 "peephole.m"
                          }
#line 338 "peephole.m"
                      }
#line 279 "peephole.m"
                  }
#line 277 "peephole.m"
              }
#line 162 "peephole.m"
            else
#line 162 "peephole.m"
              if (((((MR_tag((MR_Word) ll_backend__peephole__V_235_235)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 372 "peephole.m"
                {
#line 372 "peephole.m"
                  MR_Word ll_backend__peephole__Lval_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
#line 372 "peephole.m"
                  MR_Word ll_backend__peephole__Instrs1_163;
#line 372 "peephole.m"
                  MR_Word ll_backend__peephole__Instr1_164;
#line 372 "peephole.m"
                  MR_Word ll_backend__peephole__Instrs2_165;
#line 372 "peephole.m"
                  MR_Word ll_backend__peephole__V_169_169;
#line 372 "peephole.m"
                  MR_Word ll_backend__peephole__V_170_170;
#line 372 "peephole.m"
                  MR_Word ll_backend__peephole__V_233_233;
#line 378 "peephole.m"
                  MR_String ll_backend__peephole___Comment1_167;
#line 378 "peephole.m"
                  MR_Word ll_backend__peephole___Reason_166;

#line 376 "peephole.m"
                  {
#line 376 "peephole.m"
                    ll_backend__opt_util__skip_comments_2_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Instrs1_163);
                  }
#line 377 "peephole.m"
                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_163)) == (MR_mktag((MR_Integer) 1)));
#line 377 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 377 "peephole.m"
                    {
#line 377 "peephole.m"
                      ll_backend__peephole__Instr1_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_163, (MR_Integer) 0)));
#line 377 "peephole.m"
                      ll_backend__peephole__Instrs2_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_163, (MR_Integer) 1)));
#line 378 "peephole.m"
                      ll_backend__peephole__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_164, (MR_Integer) 0)));
#line 378 "peephole.m"
                      ll_backend__peephole___Comment1_167 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_164, (MR_Integer) 1)));
#line 378 "peephole.m"
                      ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_169_169)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_169_169, (MR_Integer) 0)))) == (MR_Integer) 21)));
#line 378 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 378 "peephole.m"
                        {
#line 378 "peephole.m"
                          ll_backend__peephole__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_169_169, (MR_Integer) 1)));
#line 378 "peephole.m"
                          ll_backend__peephole___Reason_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_169_169, (MR_Integer) 2)));
#line 378 "peephole.m"
                          ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_170_170)) == (MR_mktag((MR_Integer) 0)));
#line 378 "peephole.m"
                          if (ll_backend__peephole__succeeded)
#line 378 "peephole.m"
                            {
#line 378 "peephole.m"
                              ll_backend__peephole__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_170_170, (MR_Integer) 0)));
#line 378 "peephole.m"
                              {
#line 378 "peephole.m"
                                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval_162, ll_backend__peephole__V_233_233);
                              }
#line 372 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 372 "peephole.m"
                                {
#line 380 "peephole.m"
                                  {
#line 380 "peephole.m"
                                    MR_Word base;
#line 380 "peephole.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "peephole.m"
                                    *ll_backend__peephole__Instrs_4 = base;
#line 380 "peephole.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
#line 380 "peephole.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_165));
#line 380 "peephole.m"
                                  }
#line 380 "peephole.m"
                                  ll_backend__peephole__succeeded = MR_TRUE;
#line 372 "peephole.m"
                                }
#line 378 "peephole.m"
                            }
#line 378 "peephole.m"
                        }
#line 377 "peephole.m"
                    }
#line 372 "peephole.m"
                }
#line 162 "peephole.m"
              else
#line 162 "peephole.m"
                ll_backend__peephole__succeeded = MR_FALSE;
#line 162 "peephole.m"
    return ll_backend__peephole__succeeded;
#line 162 "peephole.m"
  }
#line 152 "peephole.m"
}

#line 124 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole__peephole_pick_one_val_label_5_p_0(
#line 124 "peephole.m"
  MR_Word ll_backend__peephole__LabelVals1_6,
#line 124 "peephole.m"
  MR_Word ll_backend__peephole__LabelVals2_7,
#line 124 "peephole.m"
  MR_Word * ll_backend__peephole__OneValLabel_8,
#line 124 "peephole.m"
  MR_Integer * ll_backend__peephole__Val_9,
#line 124 "peephole.m"
  MR_Word * ll_backend__peephole__OtherLabel_10)
#line 124 "peephole.m"
{
#line 128 "peephole.m"
  {
#line 128 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;
#line 128 "peephole.m"
    MR_Word ll_backend__peephole__Label1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__LabelVals1_6, (MR_Integer) 0)));
#line 128 "peephole.m"
    MR_Word ll_backend__peephole__Vals1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__LabelVals1_6, (MR_Integer) 1)));
#line 128 "peephole.m"
    MR_Word ll_backend__peephole__Label2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__LabelVals2_7, (MR_Integer) 0)));
#line 128 "peephole.m"
    MR_Word ll_backend__peephole__Vals2_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__LabelVals2_7, (MR_Integer) 1)));
#line 135 "peephole.m"
    MR_Integer ll_backend__peephole__Val1_15;
#line 131 "peephole.m"
    MR_Word ll_backend__peephole__V_17_17;

#line 131 "peephole.m"
    ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Vals1_12)) == (MR_mktag((MR_Integer) 1)));
#line 131 "peephole.m"
    if (ll_backend__peephole__succeeded)
#line 131 "peephole.m"
      {
#line 131 "peephole.m"
        ll_backend__peephole__Val1_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Vals1_12, (MR_Integer) 0)));
#line 131 "peephole.m"
        ll_backend__peephole__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Vals1_12, (MR_Integer) 1)));
#line 131 "peephole.m"
        ll_backend__peephole__succeeded = (ll_backend__peephole__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "peephole.m"
      }
#line 135 "peephole.m"
    if (ll_backend__peephole__succeeded)
#line 132 "peephole.m"
      {
#line 132 "peephole.m"
        *ll_backend__peephole__OneValLabel_8 = ll_backend__peephole__Label1_11;
#line 133 "peephole.m"
        *ll_backend__peephole__Val_9 = ll_backend__peephole__Val1_15;
#line 134 "peephole.m"
        *ll_backend__peephole__OtherLabel_10 = ll_backend__peephole__Label2_13;
#line 132 "peephole.m"
        ll_backend__peephole__succeeded = MR_TRUE;
#line 132 "peephole.m"
      }
#line 135 "peephole.m"
    else
#line 139 "peephole.m"
      {
#line 139 "peephole.m"
        MR_Word ll_backend__peephole__V_18_18;

#line 135 "peephole.m"
        ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Vals2_14)) == (MR_mktag((MR_Integer) 1)));
#line 135 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 135 "peephole.m"
          {
#line 135 "peephole.m"
            *ll_backend__peephole__Val_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Vals2_14, (MR_Integer) 0)));
#line 135 "peephole.m"
            ll_backend__peephole__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Vals2_14, (MR_Integer) 1)));
#line 135 "peephole.m"
            ll_backend__peephole__succeeded = (ll_backend__peephole__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 139 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 139 "peephole.m"
              {
#line 136 "peephole.m"
                *ll_backend__peephole__OneValLabel_8 = ll_backend__peephole__Label2_13;
#line 138 "peephole.m"
                *ll_backend__peephole__OtherLabel_10 = ll_backend__peephole__Label1_11;
#line 138 "peephole.m"
                ll_backend__peephole__succeeded = MR_TRUE;
#line 139 "peephole.m"
              }
#line 135 "peephole.m"
          }
#line 139 "peephole.m"
      }
#line 128 "peephole.m"
    return ll_backend__peephole__succeeded;
#line 128 "peephole.m"
  }
#line 124 "peephole.m"
}

#line 107 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole__build_peephole_jump_label_map_4_p_0(
#line 107 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__1_1,
#line 107 "peephole.m"
  MR_Integer ll_backend__peephole__Val_2,
#line 107 "peephole.m"
  MR_Word ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3,
#line 107 "peephole.m"
  MR_Word * ll_backend__peephole__STATE_VARIABLE_LabelMap_4)
#line 107 "peephole.m"
{
#line 110 "peephole.m"
  while (MR_TRUE)
#line 110 "peephole.m"
    {
#line 110 "peephole.m"
      /* tailcall optimized into a loop */
#line 110 "peephole.m"
      {
#line 110 "peephole.m"
        MR_bool ll_backend__peephole__succeeded;

#line 110 "peephole.m"
        if ((ll_backend__peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 110 "peephole.m"
          {
#line 110 "peephole.m"
            *ll_backend__peephole__STATE_VARIABLE_LabelMap_4 = ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3;
#line 110 "peephole.m"
            ll_backend__peephole__succeeded = MR_TRUE;
#line 110 "peephole.m"
          }
#line 110 "peephole.m"
        else
#line 111 "peephole.m"
          {
#line 111 "peephole.m"
            MR_Word ll_backend__peephole__MaybeLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__1_1, (MR_Integer) 0)));
#line 111 "peephole.m"
            MR_Word ll_backend__peephole__MaybeLabels_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 111 "peephole.m"
            MR_Word ll_backend__peephole__Label_13;
#line 111 "peephole.m"
            MR_Word ll_backend__peephole__STATE_VARIABLE_LabelMap_18_18;
#line 111 "peephole.m"
            MR_Integer ll_backend__peephole__V_22_22;
#line 111 "peephole.m"
            MR_Integer ll_backend__peephole__V_24_24;
#line 115 "peephole.m"
            MR_Word ll_backend__peephole__Vals0_14;
#line 113 "peephole.m"
            MR_Word ll_backend__peephole__TypeCtorInfo_25_25;
#line 113 "peephole.m"
            MR_Word ll_backend__peephole__TypeInfo_26_26;
#line 113 "peephole.m"
            MR_Box ll_backend__peephole__conv0_Vals0_14;

#line 112 "peephole.m"
            ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__MaybeLabel_9)) == (MR_mktag((MR_Integer) 1)));
#line 112 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 112 "peephole.m"
              {
#line 112 "peephole.m"
                ll_backend__peephole__Label_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__MaybeLabel_9, (MR_Integer) 0)));
#line 4065 "ll_backend.peephole.c"
                ll_backend__peephole__TypeCtorInfo_25_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 4067 "ll_backend.peephole.c"
                ll_backend__peephole__TypeInfo_26_26 = (MR_Word) &ll_backend__peephole_scalar_common_1[0];
#line 113 "peephole.m"
                {
#line 113 "peephole.m"
                  ll_backend__peephole__succeeded = mercury__map__search_3_p_0(ll_backend__peephole__TypeCtorInfo_25_25, ll_backend__peephole__TypeInfo_26_26, ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3, ((MR_Box) (ll_backend__peephole__Label_13)), &ll_backend__peephole__conv0_Vals0_14);
                }
#line 113 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 113 "peephole.m"
                  {
#line 113 "peephole.m"
                    ll_backend__peephole__Vals0_14 = ((MR_Word) ll_backend__peephole__conv0_Vals0_14);
#line 113 "peephole.m"
                    ll_backend__peephole__succeeded = MR_TRUE;
#line 113 "peephole.m"
                  }
#line 115 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 114 "peephole.m"
                  {
#line 114 "peephole.m"
                    MR_Word ll_backend__peephole__V_17_17;

#line 114 "peephole.m"
                    {
#line 114 "peephole.m"
                      ll_backend__peephole__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "peephole.m"
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_17_17, 0) = ((MR_Box) (ll_backend__peephole__Val_2));
#line 114 "peephole.m"
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_17_17, 1) = ((MR_Box) (ll_backend__peephole__Vals0_14));
#line 114 "peephole.m"
                    }
#line 114 "peephole.m"
                    {
#line 114 "peephole.m"
                      mercury__map__det_update_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__peephole_scalar_common_1[0], ((MR_Box) (ll_backend__peephole__Label_13)), ((MR_Box) (ll_backend__peephole__V_17_17)), ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3, &ll_backend__peephole__STATE_VARIABLE_LabelMap_18_18);
                    }
#line 114 "peephole.m"
                  }
#line 115 "peephole.m"
                else
#line 116 "peephole.m"
                  {
#line 116 "peephole.m"
                    MR_Word ll_backend__peephole__V_19_19;

#line 116 "peephole.m"
                    {
#line 116 "peephole.m"
                      ll_backend__peephole__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "peephole.m"
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_19_19, 0) = ((MR_Box) (ll_backend__peephole__Val_2));
#line 116 "peephole.m"
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 116 "peephole.m"
                    }
#line 116 "peephole.m"
                    {
#line 116 "peephole.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__peephole_scalar_common_1[0], ((MR_Box) (ll_backend__peephole__Label_13)), ((MR_Box) (ll_backend__peephole__V_19_19)), ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3, &ll_backend__peephole__STATE_VARIABLE_LabelMap_18_18);
                    }
#line 116 "peephole.m"
                  }
#line 118 "peephole.m"
                ll_backend__peephole__V_24_24 = (MR_Integer) 1;
#line 118 "peephole.m"
                ll_backend__peephole__V_22_22 = (ll_backend__peephole__Val_2 + ll_backend__peephole__V_24_24);
#line 118 "peephole.m"
                {
#line 118 "peephole.m"
                  /* direct tailcall eliminated */
#line 118 "peephole.m"
                  {
#line 118 "peephole.m"
                    MR_Word ll_backend__peephole__HeadVar__1__tmp_copy_1 = ll_backend__peephole__MaybeLabels_10;
#line 118 "peephole.m"
                    MR_Integer ll_backend__peephole__Val__tmp_copy_2 = ll_backend__peephole__V_22_22;
#line 118 "peephole.m"
                    MR_Word ll_backend__peephole__STATE_VARIABLE_LabelMap_0__tmp_copy_3 = ll_backend__peephole__STATE_VARIABLE_LabelMap_18_18;

#line 118 "peephole.m"
                    ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3 = ll_backend__peephole__STATE_VARIABLE_LabelMap_0__tmp_copy_3;
#line 118 "peephole.m"
                    ll_backend__peephole__Val_2 = ll_backend__peephole__Val__tmp_copy_2;
#line 118 "peephole.m"
                    ll_backend__peephole__HeadVar__1_1 = ll_backend__peephole__HeadVar__1__tmp_copy_1;
#line 118 "peephole.m"
                  }
#line 118 "peephole.m"
                  continue;
#line 118 "peephole.m"
                }
#line 112 "peephole.m"
              }
#line 111 "peephole.m"
          }
#line 110 "peephole.m"
        return ll_backend__peephole__succeeded;
#line 110 "peephole.m"
      }
#line 110 "peephole.m"
      break;
#line 110 "peephole.m"
    }
#line 107 "peephole.m"
}

#line 80 "peephole.m"
static void MR_CALL 
ll_backend__peephole__peephole_opt_instr_5_p_0(
#line 80 "peephole.m"
  MR_Word ll_backend__peephole__Instr0_6,
#line 80 "peephole.m"
  MR_Word ll_backend__peephole__Instrs0_7,
#line 80 "peephole.m"
  MR_Word ll_backend__peephole__InvalidPatterns_8,
#line 80 "peephole.m"
  MR_Word * ll_backend__peephole__Instrs_9,
#line 80 "peephole.m"
  MR_Word * ll_backend__peephole__Mod_10)
#line 80 "peephole.m"
{
#line 83 "peephole.m"
  {
#line 83 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;
#line 83 "peephole.m"
    MR_Word ll_backend__peephole__Instrs1_11;
#line 94 "peephole.m"
    MR_Word ll_backend__peephole__Instrs2_12;

#line 84 "peephole.m"
    {
#line 84 "peephole.m"
      ll_backend__opt_util__skip_comments_2_p_0(ll_backend__peephole__Instrs0_7, &ll_backend__peephole__Instrs1_11);
    }
#line 85 "peephole.m"
    {
#line 85 "peephole.m"
      ll_backend__peephole__succeeded = ll_backend__peephole__peephole_match_4_p_0(ll_backend__peephole__Instr0_6, ll_backend__peephole__Instrs1_11, ll_backend__peephole__InvalidPatterns_8, &ll_backend__peephole__Instrs2_12);
    }
#line 94 "peephole.m"
    if (ll_backend__peephole__succeeded)
#line 92 "peephole.m"
      {
#line 89 "peephole.m"
        if ((ll_backend__peephole__Instrs2_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 91 "peephole.m"
          *ll_backend__peephole__Instrs_9 = ll_backend__peephole__Instrs2_12;
#line 89 "peephole.m"
        else
#line 87 "peephole.m"
          {
#line 87 "peephole.m"
            MR_Word ll_backend__peephole__Instr2_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_12, (MR_Integer) 0)));
#line 87 "peephole.m"
            MR_Word ll_backend__peephole__Instrs3_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_12, (MR_Integer) 1)));
#line 88 "peephole.m"
            MR_Word ll_backend__peephole__V_15_15;

#line 88 "peephole.m"
            {
#line 88 "peephole.m"
              ll_backend__peephole__peephole_opt_instr_5_p_0(ll_backend__peephole__Instr2_13, ll_backend__peephole__Instrs3_14, ll_backend__peephole__InvalidPatterns_8, ll_backend__peephole__Instrs_9, &ll_backend__peephole__V_15_15);
            }
#line 87 "peephole.m"
          }
#line 93 "peephole.m"
        *ll_backend__peephole__Mod_10 = (MR_Integer) 1;
#line 92 "peephole.m"
      }
#line 94 "peephole.m"
    else
#line 97 "peephole.m"
      {
#line 97 "peephole.m"
        MR_Word ll_backend__peephole__Instrs2_16;
#line 464 "peephole.m"
        MR_Word ll_backend__peephole__Uinstr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_6, (MR_Integer) 0)));
#line 464 "peephole.m"
        MR_Word ll_backend__peephole__Lval_23;
#line 464 "peephole.m"
        MR_Integer ll_backend__peephole__Tag_24;
#line 464 "peephole.m"
        MR_Word ll_backend__peephole__Base_25;
#line 464 "peephole.m"
        MR_Word ll_backend__peephole__Instrs1_26;
#line 464 "peephole.m"
        MR_Word ll_backend__peephole__V_27_27;
#line 465 "peephole.m"
        MR_String ll_backend__peephole__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_6, (MR_Integer) 1)));
#line 467 "peephole.m"
        MR_Word ll_backend__peephole__TypeCtorInfo_17_29;
#line 467 "peephole.m"
        MR_Word ll_backend__peephole__V_28_28;

#line 466 "peephole.m"
        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 466 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 466 "peephole.m"
          {
#line 466 "peephole.m"
            ll_backend__peephole__Lval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_21, (MR_Integer) 1)));
#line 466 "peephole.m"
            ll_backend__peephole__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_21, (MR_Integer) 2)));
#line 466 "peephole.m"
            ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_27_27)) == (MR_mktag((MR_Integer) 2)));
#line 466 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 466 "peephole.m"
              {
#line 466 "peephole.m"
                ll_backend__peephole__Tag_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__peephole__V_27_27, (MR_Integer) 0)));
#line 466 "peephole.m"
                ll_backend__peephole__Base_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__peephole__V_27_27, (MR_Integer) 1)));
#line 467 "peephole.m"
                ll_backend__peephole__V_28_28 = (MR_Integer) 1;
#line 4287 "ll_backend.peephole.c"
                ll_backend__peephole__TypeCtorInfo_17_29 = (MR_Word) &ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0;
#line 467 "peephole.m"
                {
#line 467 "peephole.m"
                  ll_backend__peephole__succeeded = mercury__list__member_2_p_0(ll_backend__peephole__TypeCtorInfo_17_29, ((MR_Box) (ll_backend__peephole__V_28_28)), ll_backend__peephole__InvalidPatterns_8);
                }
#line 467 "peephole.m"
                ll_backend__peephole__succeeded = !(ll_backend__peephole__succeeded);
#line 464 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 464 "peephole.m"
                  {
#line 468 "peephole.m"
                    {
#line 468 "peephole.m"
                      ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(ll_backend__peephole__Lval_23, ll_backend__peephole__Tag_24, ll_backend__peephole__Base_25, ll_backend__peephole__Instrs1_11, &ll_backend__peephole__Instrs1_26);
                    }
#line 469 "peephole.m"
                    {
#line 469 "peephole.m"
                      ll_backend__peephole__Instrs2_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "peephole.m"
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_16, 0) = ((MR_Box) (ll_backend__peephole__Instr0_6));
#line 469 "peephole.m"
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_16, 1) = ((MR_Box) (ll_backend__peephole__Instrs1_26));
#line 469 "peephole.m"
                    }
#line 469 "peephole.m"
                    ll_backend__peephole__succeeded = MR_TRUE;
#line 464 "peephole.m"
                  }
#line 466 "peephole.m"
              }
#line 466 "peephole.m"
          }
#line 97 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 95 "peephole.m"
          {
#line 95 "peephole.m"
            *ll_backend__peephole__Instrs_9 = ll_backend__peephole__Instrs2_16;
#line 96 "peephole.m"
            *ll_backend__peephole__Mod_10 = (MR_Integer) 1;
#line 95 "peephole.m"
          }
#line 97 "peephole.m"
        else
#line 98 "peephole.m"
          {
#line 98 "peephole.m"
            {
#line 98 "peephole.m"
              MR_Word base;
#line 98 "peephole.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 98 "peephole.m"
              *ll_backend__peephole__Instrs_9 = base;
#line 98 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_6));
#line 98 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs0_7));
#line 98 "peephole.m"
            }
#line 99 "peephole.m"
            *ll_backend__peephole__Mod_10 = (MR_Integer) 0;
#line 98 "peephole.m"
          }
#line 97 "peephole.m"
      }
#line 83 "peephole.m"
  }
#line 80 "peephole.m"
}

#line 64 "peephole.m"
static void MR_CALL 
ll_backend__peephole__peephole_optimize_2_4_p_0(
#line 64 "peephole.m"
  MR_Word ll_backend__peephole__InvalidPatterns_1,
#line 64 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__2_2,
#line 64 "peephole.m"
  MR_Word * ll_backend__peephole__HeadVar__3_3,
#line 64 "peephole.m"
  MR_Word * ll_backend__peephole__HeadVar__4_4)
#line 64 "peephole.m"
{
#line 67 "peephole.m"
  {
#line 67 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;

#line 67 "peephole.m"
    if ((ll_backend__peephole__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "peephole.m"
      {
#line 67 "peephole.m"
        *ll_backend__peephole__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 67 "peephole.m"
        *ll_backend__peephole__HeadVar__4_4 = (MR_Integer) 0;
#line 67 "peephole.m"
      }
#line 67 "peephole.m"
    else
#line 68 "peephole.m"
      {
#line 68 "peephole.m"
        MR_Word ll_backend__peephole__Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "peephole.m"
        MR_Word ll_backend__peephole__Instrs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "peephole.m"
        MR_Word ll_backend__peephole__Instrs1_11;
#line 68 "peephole.m"
        MR_Word ll_backend__peephole__Mod0_12;
#line 68 "peephole.m"
        MR_Word ll_backend__peephole__Mod1_13;

#line 69 "peephole.m"
        {
#line 69 "peephole.m"
          ll_backend__peephole__peephole_optimize_2_4_p_0(ll_backend__peephole__InvalidPatterns_1, ll_backend__peephole__Instrs0_8, &ll_backend__peephole__Instrs1_11, &ll_backend__peephole__Mod0_12);
        }
#line 70 "peephole.m"
        {
#line 70 "peephole.m"
          ll_backend__peephole__peephole_opt_instr_5_p_0(ll_backend__peephole__Instr0_7, ll_backend__peephole__Instrs1_11, ll_backend__peephole__InvalidPatterns_1, ll_backend__peephole__HeadVar__3_3, &ll_backend__peephole__Mod1_13);
        }
#line 71 "peephole.m"
        ll_backend__peephole__succeeded = (ll_backend__peephole__Mod0_12 == (MR_Integer) 0);
#line 71 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 71 "peephole.m"
          ll_backend__peephole__succeeded = (ll_backend__peephole__Mod1_13 == (MR_Integer) 0);
#line 73 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 72 "peephole.m"
          *ll_backend__peephole__HeadVar__4_4 = (MR_Integer) 0;
#line 73 "peephole.m"
        else
#line 74 "peephole.m"
          *ll_backend__peephole__HeadVar__4_4 = (MR_Integer) 1;
#line 68 "peephole.m"
      }
#line 67 "peephole.m"
  }
#line 64 "peephole.m"
}

#line 30 "peephole.m"
void MR_CALL 
ll_backend__peephole__combine_decr_sp_2_p_0(
#line 30 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__1_1,
#line 30 "peephole.m"
  MR_Word * ll_backend__peephole__HeadVar__2_2)
#line 30 "peephole.m"
{
#line 732 "peephole.m"
  {
#line 732 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;

#line 732 "peephole.m"
    if ((ll_backend__peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 732 "peephole.m"
      *ll_backend__peephole__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 732 "peephole.m"
    else
#line 733 "peephole.m"
      {
#line 733 "peephole.m"
        MR_Word ll_backend__peephole__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__1_1, (MR_Integer) 0)));
#line 733 "peephole.m"
        MR_Word ll_backend__peephole__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 733 "peephole.m"
        MR_Word ll_backend__peephole__Instrs1_6;
#line 746 "peephole.m"
        MR_Integer ll_backend__peephole__N_7;
#line 746 "peephole.m"
        MR_Word ll_backend__peephole__Instrs5_15;
#line 746 "peephole.m"
        MR_String ll_backend__peephole__Comment_16;
#line 736 "peephole.m"
        MR_Word ll_backend__peephole__Instrs2_9;
#line 736 "peephole.m"
        MR_Word ll_backend__peephole__Instr2_10;
#line 736 "peephole.m"
        MR_Word ll_backend__peephole__Instrs3_11;
#line 736 "peephole.m"
        MR_Word ll_backend__peephole__Instrs4_13;
#line 736 "peephole.m"
        MR_Word ll_backend__peephole__Instr4_14;
#line 736 "peephole.m"
        MR_Word ll_backend__peephole__V_18_18;
#line 736 "peephole.m"
        MR_Word ll_backend__peephole__V_19_19;
#line 736 "peephole.m"
        MR_Word ll_backend__peephole__V_20_20;
#line 736 "peephole.m"
        MR_Word ll_backend__peephole__V_21_21;
#line 736 "peephole.m"
        MR_Word ll_backend__peephole__V_22_22;
#line 736 "peephole.m"
        MR_Word ll_backend__peephole__V_23_23;
#line 736 "peephole.m"
        MR_Word ll_backend__peephole__V_24_24;
#line 736 "peephole.m"
        MR_Integer ll_backend__peephole__V_26_26;
#line 736 "peephole.m"
        MR_String ll_backend__peephole__V_8_8;
#line 739 "peephole.m"
        MR_String ll_backend__peephole__V_12_12;

#line 734 "peephole.m"
        {
#line 734 "peephole.m"
          ll_backend__peephole__combine_decr_sp_2_p_0(ll_backend__peephole__Instrs0_4, &ll_backend__peephole__Instrs1_6);
        }
#line 736 "peephole.m"
        ll_backend__peephole__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_3, (MR_Integer) 0)));
#line 736 "peephole.m"
        ll_backend__peephole__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_3, (MR_Integer) 1)));
#line 736 "peephole.m"
        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_18_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_18_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 736 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 736 "peephole.m"
          {
#line 736 "peephole.m"
            ll_backend__peephole__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_18_18, (MR_Integer) 1)));
#line 736 "peephole.m"
            ll_backend__peephole__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_18_18, (MR_Integer) 2)));
#line 736 "peephole.m"
            ll_backend__peephole__succeeded = (ll_backend__peephole__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 736 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 736 "peephole.m"
              {
#line 736 "peephole.m"
                ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 736 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 736 "peephole.m"
                  {
#line 736 "peephole.m"
                    ll_backend__peephole__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_20_20, (MR_Integer) 0)));
#line 736 "peephole.m"
                    ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 736 "peephole.m"
                    if (ll_backend__peephole__succeeded)
#line 736 "peephole.m"
                      {
#line 736 "peephole.m"
                        ll_backend__peephole__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_21_21, (MR_Integer) 1)));
#line 737 "peephole.m"
                        {
#line 737 "peephole.m"
                          ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__peephole__Instrs1_6, &ll_backend__peephole__Instrs2_9);
                        }
#line 738 "peephole.m"
                        ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs2_9)) == (MR_mktag((MR_Integer) 1)));
#line 738 "peephole.m"
                        if (ll_backend__peephole__succeeded)
#line 738 "peephole.m"
                          {
#line 738 "peephole.m"
                            ll_backend__peephole__Instr2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_9, (MR_Integer) 0)));
#line 738 "peephole.m"
                            ll_backend__peephole__Instrs3_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_9, (MR_Integer) 1)));
#line 739 "peephole.m"
                            ll_backend__peephole__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr2_10, (MR_Integer) 0)));
#line 739 "peephole.m"
                            ll_backend__peephole__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr2_10, (MR_Integer) 1)));
#line 739 "peephole.m"
                            ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 25)));
#line 739 "peephole.m"
                            if (ll_backend__peephole__succeeded)
#line 739 "peephole.m"
                              {
#line 739 "peephole.m"
                                ll_backend__peephole__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_22_22, (MR_Integer) 1)));
#line 739 "peephole.m"
                                ll_backend__peephole__succeeded = (ll_backend__peephole__N_7 == ll_backend__peephole__V_26_26);
#line 736 "peephole.m"
                                if (ll_backend__peephole__succeeded)
#line 736 "peephole.m"
                                  {
#line 740 "peephole.m"
                                    {
#line 740 "peephole.m"
                                      ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__peephole__Instrs3_11, &ll_backend__peephole__Instrs4_13);
                                    }
#line 741 "peephole.m"
                                    ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs4_13)) == (MR_mktag((MR_Integer) 1)));
#line 741 "peephole.m"
                                    if (ll_backend__peephole__succeeded)
#line 741 "peephole.m"
                                      {
#line 741 "peephole.m"
                                        ll_backend__peephole__Instr4_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs4_13, (MR_Integer) 0)));
#line 741 "peephole.m"
                                        ll_backend__peephole__Instrs5_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs4_13, (MR_Integer) 1)));
#line 742 "peephole.m"
                                        ll_backend__peephole__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr4_14, (MR_Integer) 0)));
#line 742 "peephole.m"
                                        ll_backend__peephole__Comment_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr4_14, (MR_Integer) 1)));
#line 742 "peephole.m"
                                        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_23_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_23_23, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 742 "peephole.m"
                                        if (ll_backend__peephole__succeeded)
#line 742 "peephole.m"
                                          {
#line 742 "peephole.m"
                                            ll_backend__peephole__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_23_23, (MR_Integer) 1)));
#line 742 "peephole.m"
                                            ll_backend__peephole__succeeded = (ll_backend__peephole__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "peephole.m"
                                          }
#line 741 "peephole.m"
                                      }
#line 736 "peephole.m"
                                  }
#line 739 "peephole.m"
                              }
#line 738 "peephole.m"
                          }
#line 736 "peephole.m"
                      }
#line 736 "peephole.m"
                  }
#line 736 "peephole.m"
              }
#line 736 "peephole.m"
          }
#line 746 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 744 "peephole.m"
          {
#line 744 "peephole.m"
            MR_Word ll_backend__peephole__NewInstr_17;
#line 744 "peephole.m"
            MR_Word ll_backend__peephole__V_25_25;

#line 744 "peephole.m"
            {
#line 744 "peephole.m"
              ll_backend__peephole__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "peephole.m"
              MR_hl_field(MR_mktag(3), ll_backend__peephole__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 26));
#line 744 "peephole.m"
              MR_hl_field(MR_mktag(3), ll_backend__peephole__V_25_25, 1) = ((MR_Box) (ll_backend__peephole__N_7));
#line 744 "peephole.m"
            }
#line 744 "peephole.m"
            {
#line 744 "peephole.m"
              ll_backend__peephole__NewInstr_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 744 "peephole.m"
              MR_hl_field(MR_mktag(0), ll_backend__peephole__NewInstr_17, 0) = ((MR_Box) (ll_backend__peephole__V_25_25));
#line 744 "peephole.m"
              MR_hl_field(MR_mktag(0), ll_backend__peephole__NewInstr_17, 1) = ((MR_Box) (ll_backend__peephole__Comment_16));
#line 744 "peephole.m"
            }
#line 745 "peephole.m"
            {
#line 745 "peephole.m"
              MR_Word base;
#line 745 "peephole.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "peephole.m"
              *ll_backend__peephole__HeadVar__2_2 = base;
#line 745 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__NewInstr_17));
#line 745 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs5_15));
#line 745 "peephole.m"
            }
#line 744 "peephole.m"
          }
#line 746 "peephole.m"
        else
#line 747 "peephole.m"
          {
#line 747 "peephole.m"
            MR_Word base;
#line 747 "peephole.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "peephole.m"
            *ll_backend__peephole__HeadVar__2_2 = base;
#line 747 "peephole.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_3));
#line 747 "peephole.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs1_6));
#line 747 "peephole.m"
          }
#line 733 "peephole.m"
      }
#line 732 "peephole.m"
  }
#line 30 "peephole.m"
}

#line 27 "peephole.m"
void MR_CALL 
ll_backend__peephole__peephole_optimize_5_p_0(
#line 27 "peephole.m"
  MR_Word ll_backend__peephole__GC_Method_6,
#line 27 "peephole.m"
  MR_Word ll_backend__peephole__OptPeepMkword_7,
#line 27 "peephole.m"
  MR_Word ll_backend__peephole__Instrs0_8,
#line 27 "peephole.m"
  MR_Word * ll_backend__peephole__Instrs_9,
#line 27 "peephole.m"
  MR_Word * ll_backend__peephole__Mod_10)
#line 27 "peephole.m"
{
#line 60 "peephole.m"
  {
#line 60 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;
#line 60 "peephole.m"
    MR_Word ll_backend__peephole__InvalidPatterns_11;
#line 60 "peephole.m"
    MR_Word ll_backend__peephole__InvalidPatterns0_15;

#line 713 "peephole.m"
    if ((ll_backend__peephole__GC_Method_6 == (MR_Integer) 5))
#line 711 "peephole.m"
      {
#line 712 "peephole.m"
        ll_backend__peephole__InvalidPatterns0_15 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__peephole_scalar_common_1[6]);
#line 711 "peephole.m"
      }
#line 713 "peephole.m"
    else
#line 720 "peephole.m"
      ll_backend__peephole__InvalidPatterns0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 725 "peephole.m"
    if ((ll_backend__peephole__OptPeepMkword_7 == (MR_Integer) 0))
#line 726 "peephole.m"
      {
#line 727 "peephole.m"
        {
#line 727 "peephole.m"
          ll_backend__peephole__InvalidPatterns_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "peephole.m"
          MR_hl_field(MR_mktag(1), ll_backend__peephole__InvalidPatterns_11, 0) = ((MR_Box) ((MR_Integer) 1));
#line 727 "peephole.m"
          MR_hl_field(MR_mktag(1), ll_backend__peephole__InvalidPatterns_11, 1) = ((MR_Box) (ll_backend__peephole__InvalidPatterns0_15));
#line 727 "peephole.m"
        }
#line 726 "peephole.m"
      }
#line 725 "peephole.m"
    else
#line 724 "peephole.m"
      ll_backend__peephole__InvalidPatterns_11 = ll_backend__peephole__InvalidPatterns0_15;
#line 62 "peephole.m"
    {
#line 62 "peephole.m"
      ll_backend__peephole__peephole_optimize_2_4_p_0(ll_backend__peephole__InvalidPatterns_11, ll_backend__peephole__Instrs0_8, ll_backend__peephole__Instrs_9, ll_backend__peephole__Mod_10);
#line 62 "peephole.m"
      return;
    }
#line 60 "peephole.m"
  }
#line 27 "peephole.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.peephole. */
