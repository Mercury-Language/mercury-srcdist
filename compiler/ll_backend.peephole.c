/*
** Automatically generated from `peephole.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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




#line 148 "ll_backend.peephole.c"
static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0;

#line 151 "ll_backend.peephole.c"
static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1;

#line 154 "ll_backend.peephole.c"
static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_value_ordered_pattern_0[2];

#line 157 "ll_backend.peephole.c"
static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_name_ordered_pattern_0[2];

#line 160 "ll_backend.peephole.c"
static const MR_Integer ll_backend__peephole__ll_backend__peephole__functor_number_map_pattern_0[2];

#line 163 "ll_backend.peephole.c"
static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0_10001(
#line 166 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_1,
#line 168 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_2);

#line 171 "ll_backend.peephole.c"
static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0_10001(
#line 174 "ll_backend.peephole.c"
  MR_Box * ll_backend__peephole__wrapper_arg_1,
#line 176 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_2,
#line 178 "ll_backend.peephole.c"
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

#line 659 "peephole.m"
static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(
#line 659 "peephole.m"
  MR_Word ll_backend__peephole__OldLval_6,
#line 659 "peephole.m"
  MR_Integer ll_backend__peephole__OldTag_7,
#line 659 "peephole.m"
  MR_Word ll_backend__peephole__OldBase_8,
#line 659 "peephole.m"
  MR_Word ll_backend__peephole__Rval0_9,
#line 659 "peephole.m"
  MR_Word * ll_backend__peephole__Rval_10);

#line 495 "peephole.m"
static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(
#line 495 "peephole.m"
  MR_Word ll_backend__peephole__OldLval_6,
#line 495 "peephole.m"
  MR_Integer ll_backend__peephole__OldTag_7,
#line 495 "peephole.m"
  MR_Word ll_backend__peephole__OldBase_8,
#line 495 "peephole.m"
  MR_Word ll_backend__peephole__Instr0_9,
#line 495 "peephole.m"
  MR_Word * ll_backend__peephole__MaybeInstr_10);

#line 477 "peephole.m"
static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(
#line 477 "peephole.m"
  MR_Word ll_backend__peephole__Lval_1,
#line 477 "peephole.m"
  MR_Integer ll_backend__peephole__Tag_2,
#line 477 "peephole.m"
  MR_Word ll_backend__peephole__Base_3,
#line 477 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__4_4,
#line 477 "peephole.m"
  MR_Word * ll_backend__peephole__HeadVar__5_5);

#line 156 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole__peephole_match_4_p_0(
#line 156 "peephole.m"
  MR_Word ll_backend__peephole__Instr0_1,
#line 156 "peephole.m"
  MR_Word ll_backend__peephole__Instrs0_2,
#line 156 "peephole.m"
  MR_Word ll_backend__peephole__InvalidPatterns_3,
#line 156 "peephole.m"
  MR_Word * ll_backend__peephole__Instrs_4);

#line 128 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole__peephole_pick_one_val_label_5_p_0(
#line 128 "peephole.m"
  MR_Word ll_backend__peephole__LabelVals1_6,
#line 128 "peephole.m"
  MR_Word ll_backend__peephole__LabelVals2_7,
#line 128 "peephole.m"
  MR_Word * ll_backend__peephole__OneValLabel_8,
#line 128 "peephole.m"
  MR_Integer * ll_backend__peephole__Val_9,
#line 128 "peephole.m"
  MR_Word * ll_backend__peephole__OtherLabel_10);

#line 111 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole__build_peephole_jump_label_map_4_p_0(
#line 111 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__1_1,
#line 111 "peephole.m"
  MR_Integer ll_backend__peephole__Val_2,
#line 111 "peephole.m"
  MR_Word ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3,
#line 111 "peephole.m"
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


#line 717 "peephole.m"
/* sealed */ struct ll_backend__peephole__vector_common_type_2_0_s {
#line 717 "peephole.m"
  const MR_Word ll_backend__peephole__vector_common_type_2_0__vct_2_f_0;
#line 717 "peephole.m"
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



#line 411 "ll_backend.peephole.c"
static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0 = {
  (MR_String) "pattern_incr_sp",
  (MR_Integer) 0
};

#line 417 "ll_backend.peephole.c"
static const MR_EnumFunctorDesc ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1 = {
  (MR_String) "pattern_mkword",
  (MR_Integer) 1
};

#line 423 "ll_backend.peephole.c"
static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_value_ordered_pattern_0[2] = {
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0,
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1
};

#line 429 "ll_backend.peephole.c"
static const MR_EnumFunctorDescPtr ll_backend__peephole__ll_backend__peephole__enum_name_ordered_pattern_0[2] = {
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_0,
  &ll_backend__peephole__ll_backend__peephole__enum_functor_desc_pattern_0_1
};

#line 435 "ll_backend.peephole.c"
static const MR_Integer ll_backend__peephole__ll_backend__peephole__functor_number_map_pattern_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 441 "ll_backend.peephole.c"
const MR_TypeCtorInfo_Struct ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 458 "ll_backend.peephole.c"
static MR_bool MR_CALL 
ll_backend__peephole____Unify____pattern_0_0_10001(
#line 461 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_1,
#line 463 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_2)
#line 465 "ll_backend.peephole.c"
{
#line 467 "ll_backend.peephole.c"
  {
#line 469 "ll_backend.peephole.c"
    MR_bool ll_backend__peephole__succeeded;

#line 472 "ll_backend.peephole.c"
    {
#line 474 "ll_backend.peephole.c"
      ll_backend__peephole__succeeded = ll_backend__peephole____Unify____pattern_0_0(((MR_Word) ll_backend__peephole__wrapper_arg_1), ((MR_Word) ll_backend__peephole__wrapper_arg_2));
    }
#line 477 "ll_backend.peephole.c"
    return ll_backend__peephole__succeeded;
#line 479 "ll_backend.peephole.c"
  }
#line 481 "ll_backend.peephole.c"
}

#line 484 "ll_backend.peephole.c"
static void MR_CALL 
ll_backend__peephole____Compare____pattern_0_0_10001(
#line 487 "ll_backend.peephole.c"
  MR_Box * ll_backend__peephole__wrapper_arg_1,
#line 489 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_2,
#line 491 "ll_backend.peephole.c"
  MR_Box ll_backend__peephole__wrapper_arg_3)
#line 493 "ll_backend.peephole.c"
{
#line 495 "ll_backend.peephole.c"
  {
#line 497 "ll_backend.peephole.c"
    MR_Word ll_backend__peephole__conv0_HeadVar__1_1;

#line 500 "ll_backend.peephole.c"
    {
#line 502 "ll_backend.peephole.c"
      ll_backend__peephole____Compare____pattern_0_0(&ll_backend__peephole__conv0_HeadVar__1_1, ((MR_Word) ll_backend__peephole__wrapper_arg_2), ((MR_Word) ll_backend__peephole__wrapper_arg_3));
    }
#line 505 "ll_backend.peephole.c"
    *ll_backend__peephole__wrapper_arg_1 = ((MR_Box) (ll_backend__peephole__conv0_HeadVar__1_1));
#line 507 "ll_backend.peephole.c"
  }
#line 509 "ll_backend.peephole.c"
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
#line 553 "ll_backend.peephole.c"
  {
#line 555 "ll_backend.peephole.c"
    MR_bool ll_backend__peephole__succeeded = (ll_backend__peephole__HeadVar__2_1 == ll_backend__peephole__HeadVar__2_2);

#line 558 "ll_backend.peephole.c"
    return ll_backend__peephole__succeeded;
#line 560 "ll_backend.peephole.c"
  }
#line 50 "peephole.m"
}

#line 659 "peephole.m"
static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(
#line 659 "peephole.m"
  MR_Word ll_backend__peephole__OldLval_6,
#line 659 "peephole.m"
  MR_Integer ll_backend__peephole__OldTag_7,
#line 659 "peephole.m"
  MR_Word ll_backend__peephole__OldBase_8,
#line 659 "peephole.m"
  MR_Word ll_backend__peephole__Rval0_9,
#line 659 "peephole.m"
  MR_Word * ll_backend__peephole__Rval_10)
#line 659 "peephole.m"
{
#line 664 "peephole.m"
  {
#line 664 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;

#line 664 "peephole.m"
#line 664 "peephole.m"
    switch (MR_tag((MR_Word) ll_backend__peephole__Rval0_9)) {
#line 664 "peephole.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 664 "peephole.m"
      case (MR_Integer) 0:
#line 664 "peephole.m"
      case (MR_Integer) 1:
#line 703 "peephole.m"
        *ll_backend__peephole__Rval_10 = ll_backend__peephole__Rval0_9;
#line 664 "peephole.m"
        break;
#line 664 "peephole.m"
      case (MR_Integer) 2:
#line 692 "peephole.m"
        {
#line 692 "peephole.m"
          MR_Integer ll_backend__peephole__Tag_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__peephole__Rval0_9, (MR_Integer) 0)));
#line 692 "peephole.m"
          MR_Word ll_backend__peephole__BaseRval0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__peephole__Rval0_9, (MR_Integer) 1)));
#line 692 "peephole.m"
          MR_Word ll_backend__peephole__BaseRval_20;

#line 693 "peephole.m"
          {
#line 693 "peephole.m"
            ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__BaseRval0_19, &ll_backend__peephole__BaseRval_20);
          }
#line 695 "peephole.m"
          {
#line 695 "peephole.m"
            MR_Word base;
#line 695 "peephole.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "peephole.m"
            *ll_backend__peephole__Rval_10 = base;
#line 695 "peephole.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__peephole__Tag_18));
#line 695 "peephole.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__peephole__BaseRval_20));
#line 695 "peephole.m"
          }
#line 692 "peephole.m"
        }
#line 664 "peephole.m"
        break;
#line 664 "peephole.m"
      case (MR_Integer) 3:
#line 664 "peephole.m"
#line 664 "peephole.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 0)))) {
#line 664 "peephole.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 664 "peephole.m"
          case (MR_Integer) 0:
#line 664 "peephole.m"
          case (MR_Integer) 1:
#line 664 "peephole.m"
          case (MR_Integer) 4:
#line 703 "peephole.m"
            *ll_backend__peephole__Rval_10 = ll_backend__peephole__Rval0_9;
#line 664 "peephole.m"
            break;
#line 664 "peephole.m"
          case (MR_Integer) 2:
#line 664 "peephole.m"
            {
#line 664 "peephole.m"
              MR_Word ll_backend__peephole__UnOp_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 1)));
#line 664 "peephole.m"
              MR_Word ll_backend__peephole__RvalA0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 2)));
#line 666 "peephole.m"
              MR_Word ll_backend__peephole__V_36_36;

#line 666 "peephole.m"
              ll_backend__peephole__succeeded = (ll_backend__peephole__UnOp_11 == (MR_Integer) 1);
#line 666 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 666 "peephole.m"
                {
#line 667 "peephole.m"
                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__RvalA0_12)) == (MR_mktag((MR_Integer) 0)));
#line 667 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 667 "peephole.m"
                    {
#line 667 "peephole.m"
                      ll_backend__peephole__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__RvalA0_12, (MR_Integer) 0)));
#line 667 "peephole.m"
                      {
#line 667 "peephole.m"
                        ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__V_36_36);
                      }
#line 667 "peephole.m"
                    }
#line 666 "peephole.m"
                }
#line 670 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 669 "peephole.m"
                {
#line 669 "peephole.m"
                  MR_Word ll_backend__peephole__V_30_30;
#line 669 "peephole.m"
                  MR_Word ll_backend__peephole__V_31_31;

#line 669 "peephole.m"
                  {
#line 669 "peephole.m"
                    ll_backend__peephole__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "peephole.m"
                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_31_31, 0) = ((MR_Box) (ll_backend__peephole__OldTag_7));
#line 669 "peephole.m"
                  }
#line 669 "peephole.m"
                  {
#line 669 "peephole.m"
                    ll_backend__peephole__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "peephole.m"
                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 669 "peephole.m"
                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_30_30, 1) = ((MR_Box) (ll_backend__peephole__V_31_31));
#line 669 "peephole.m"
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
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 669 "peephole.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__peephole__V_30_30));
#line 669 "peephole.m"
                  }
#line 669 "peephole.m"
                }
#line 670 "peephole.m"
              else
#line 672 "peephole.m"
                {
#line 672 "peephole.m"
                  MR_Word ll_backend__peephole__RvalA_13;

#line 671 "peephole.m"
                  {
#line 671 "peephole.m"
                    ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__RvalA0_12, &ll_backend__peephole__RvalA_13);
                  }
#line 673 "peephole.m"
                  {
#line 673 "peephole.m"
                    MR_Word base;
#line 673 "peephole.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 673 "peephole.m"
                    *ll_backend__peephole__Rval_10 = base;
#line 673 "peephole.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 673 "peephole.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__peephole__UnOp_11));
#line 673 "peephole.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__peephole__RvalA_13));
#line 673 "peephole.m"
                  }
#line 672 "peephole.m"
                }
#line 664 "peephole.m"
            }
#line 664 "peephole.m"
            break;
#line 664 "peephole.m"
          case (MR_Integer) 3:
#line 676 "peephole.m"
            {
#line 676 "peephole.m"
              MR_Word ll_backend__peephole__BinOp_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 1)));
#line 676 "peephole.m"
              MR_Word ll_backend__peephole__RvalB0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 3)));
#line 676 "peephole.m"
              MR_Word ll_backend__peephole__RvalA0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Rval0_9, (MR_Integer) 2)));
#line 678 "peephole.m"
              MR_Word ll_backend__peephole__V_26_26;
#line 678 "peephole.m"
              MR_Word ll_backend__peephole__V_27_27;
#line 678 "peephole.m"
              MR_Word ll_backend__peephole__V_28_28;
#line 678 "peephole.m"
              MR_Word ll_backend__peephole__V_37_37;
#line 678 "peephole.m"
              MR_Integer ll_backend__peephole__V_38_38;
#line 681 "peephole.m"
              MR_Word ll_backend__peephole__V_16_16;

#line 678 "peephole.m"
              ll_backend__peephole__succeeded = (ll_backend__peephole__BinOp_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
#line 678 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 678 "peephole.m"
                {
#line 679 "peephole.m"
                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__RvalA0_34)) == (MR_mktag((MR_Integer) 0)));
#line 679 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 679 "peephole.m"
                    {
#line 679 "peephole.m"
                      ll_backend__peephole__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__RvalA0_34, (MR_Integer) 0)));
#line 679 "peephole.m"
                      {
#line 679 "peephole.m"
                        ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__V_37_37);
                      }
#line 678 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 678 "peephole.m"
                        {
#line 681 "peephole.m"
                          ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__OldBase_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__OldBase_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 681 "peephole.m"
                          if (ll_backend__peephole__succeeded)
#line 681 "peephole.m"
                            {
#line 681 "peephole.m"
                              ll_backend__peephole__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__OldBase_8, (MR_Integer) 1)));
#line 680 "peephole.m"
                              ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__RvalB0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__RvalB0_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 680 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 680 "peephole.m"
                                {
#line 680 "peephole.m"
                                  ll_backend__peephole__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__RvalB0_15, (MR_Integer) 1)));
#line 680 "peephole.m"
                                  ll_backend__peephole__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__RvalB0_15, (MR_Integer) 2)));
#line 680 "peephole.m"
                                  ll_backend__peephole__succeeded = (ll_backend__peephole__V_26_26 == (MR_Integer) 0);
#line 678 "peephole.m"
                                  if (ll_backend__peephole__succeeded)
#line 678 "peephole.m"
                                    {
#line 680 "peephole.m"
                                      ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_27_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_27_27, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 680 "peephole.m"
                                      if (ll_backend__peephole__succeeded)
#line 680 "peephole.m"
                                        {
#line 680 "peephole.m"
                                          ll_backend__peephole__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_27_27, (MR_Integer) 1)));
#line 680 "peephole.m"
                                          ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 680 "peephole.m"
                                          if (ll_backend__peephole__succeeded)
#line 680 "peephole.m"
                                            {
#line 680 "peephole.m"
                                              ll_backend__peephole__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__peephole__V_28_28, (MR_Integer) 0)));
#line 680 "peephole.m"
                                              ll_backend__peephole__succeeded = (ll_backend__peephole__OldTag_7 == ll_backend__peephole__V_38_38);
#line 680 "peephole.m"
                                            }
#line 680 "peephole.m"
                                        }
#line 678 "peephole.m"
                                    }
#line 680 "peephole.m"
                                }
#line 681 "peephole.m"
                            }
#line 678 "peephole.m"
                        }
#line 679 "peephole.m"
                    }
#line 678 "peephole.m"
                }
#line 684 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 683 "peephole.m"
                *ll_backend__peephole__Rval_10 = ll_backend__peephole__OldBase_8;
#line 684 "peephole.m"
              else
#line 686 "peephole.m"
                {
#line 686 "peephole.m"
                  MR_Word ll_backend__peephole__RvalB_17;
#line 686 "peephole.m"
                  MR_Word ll_backend__peephole__RvalA_32;

#line 685 "peephole.m"
                  {
#line 685 "peephole.m"
                    ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__RvalA0_34, &ll_backend__peephole__RvalA_32);
                  }
#line 687 "peephole.m"
                  {
#line 687 "peephole.m"
                    ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__RvalB0_15, &ll_backend__peephole__RvalB_17);
                  }
#line 689 "peephole.m"
                  {
#line 689 "peephole.m"
                    MR_Word base;
#line 689 "peephole.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 689 "peephole.m"
                    *ll_backend__peephole__Rval_10 = base;
#line 689 "peephole.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 689 "peephole.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__peephole__BinOp_14));
#line 689 "peephole.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__peephole__RvalA_32));
#line 689 "peephole.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__peephole__RvalB_17));
#line 689 "peephole.m"
                  }
#line 686 "peephole.m"
                }
#line 676 "peephole.m"
            }
#line 664 "peephole.m"
            break;
#line 664 "peephole.m"
        }
#line 664 "peephole.m"
        break;
#line 664 "peephole.m"
    }
#line 664 "peephole.m"
  }
#line 659 "peephole.m"
}

#line 495 "peephole.m"
static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(
#line 495 "peephole.m"
  MR_Word ll_backend__peephole__OldLval_6,
#line 495 "peephole.m"
  MR_Integer ll_backend__peephole__OldTag_7,
#line 495 "peephole.m"
  MR_Word ll_backend__peephole__OldBase_8,
#line 495 "peephole.m"
  MR_Word ll_backend__peephole__Instr0_9,
#line 495 "peephole.m"
  MR_Word * ll_backend__peephole__MaybeInstr_10)
#line 495 "peephole.m"
{
#line 499 "peephole.m"
  {
#line 499 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;
#line 499 "peephole.m"
    MR_Word ll_backend__peephole__Uinstr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_9, (MR_Integer) 0)));
#line 499 "peephole.m"
    MR_String ll_backend__peephole__Comment_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_9, (MR_Integer) 1)));

#line 514 "peephole.m"
#line 514 "peephole.m"
    switch (MR_tag((MR_Word) ll_backend__peephole__Uinstr0_11)) {
#line 514 "peephole.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 514 "peephole.m"
      case (MR_Integer) 0:
#line 636 "peephole.m"
        {
#line 636 "peephole.m"
          MR_Word base;
#line 636 "peephole.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "peephole.m"
          *ll_backend__peephole__MaybeInstr_10 = base;
#line 636 "peephole.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 636 "peephole.m"
        }
#line 514 "peephole.m"
        break;
#line 514 "peephole.m"
      case (MR_Integer) 1:
#line 514 "peephole.m"
      case (MR_Integer) 2:
#line 636 "peephole.m"
        {
#line 636 "peephole.m"
          MR_Word base;
#line 636 "peephole.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "peephole.m"
          *ll_backend__peephole__MaybeInstr_10 = base;
#line 636 "peephole.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 636 "peephole.m"
        }
#line 514 "peephole.m"
        break;
#line 514 "peephole.m"
      case (MR_Integer) 3:
#line 514 "peephole.m"
#line 514 "peephole.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 0)))) {
#line 514 "peephole.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 514 "peephole.m"
          case (MR_Integer) 0:
#line 514 "peephole.m"
          case (MR_Integer) 3:
#line 514 "peephole.m"
          case (MR_Integer) 4:
#line 514 "peephole.m"
          case (MR_Integer) 5:
#line 514 "peephole.m"
          case (MR_Integer) 6:
#line 514 "peephole.m"
          case (MR_Integer) 8:
#line 514 "peephole.m"
          case (MR_Integer) 16:
#line 514 "peephole.m"
          case (MR_Integer) 17:
#line 514 "peephole.m"
          case (MR_Integer) 18:
#line 514 "peephole.m"
          case (MR_Integer) 19:
#line 514 "peephole.m"
          case (MR_Integer) 24:
#line 514 "peephole.m"
          case (MR_Integer) 25:
#line 514 "peephole.m"
          case (MR_Integer) 26:
#line 514 "peephole.m"
          case (MR_Integer) 27:
#line 514 "peephole.m"
          case (MR_Integer) 28:
#line 514 "peephole.m"
          case (MR_Integer) 29:
#line 514 "peephole.m"
          case (MR_Integer) 30:
#line 656 "peephole.m"
            *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 1:
#line 502 "peephole.m"
            {
#line 502 "peephole.m"
              MR_Word ll_backend__peephole__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 502 "peephole.m"
              MR_Word ll_backend__peephole__Rval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));

#line 503 "peephole.m"
              {
#line 503 "peephole.m"
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval_13, ll_backend__peephole__OldLval_6);
              }
#line 505 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 504 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 505 "peephole.m"
              else
#line 507 "peephole.m"
                {
#line 505 "peephole.m"
                  MR_Word ll_backend__peephole__V_15_15;

#line 505 "peephole.m"
                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval_13, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 505 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 505 "peephole.m"
                    {
#line 505 "peephole.m"
                      ll_backend__peephole__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval_13, (MR_Integer) 1)));
#line 506 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 505 "peephole.m"
                    }
#line 505 "peephole.m"
                  else
#line 509 "peephole.m"
                    {
#line 509 "peephole.m"
                      MR_Word ll_backend__peephole__Rval_16;
#line 509 "peephole.m"
                      MR_Word ll_backend__peephole__Uinstr_17;
#line 509 "peephole.m"
                      MR_Word ll_backend__peephole__Instr_18;

#line 508 "peephole.m"
                      {
#line 508 "peephole.m"
                        ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_14, &ll_backend__peephole__Rval_16);
                      }
#line 510 "peephole.m"
                      {
#line 510 "peephole.m"
                        ll_backend__peephole__Uinstr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 510 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 510 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_17, 1) = ((MR_Box) (ll_backend__peephole__Lval_13));
#line 510 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_17, 2) = ((MR_Box) (ll_backend__peephole__Rval_16));
#line 510 "peephole.m"
                      }
#line 511 "peephole.m"
                      {
#line 511 "peephole.m"
                        ll_backend__peephole__Instr_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 511 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_18, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_17));
#line 511 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_18, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 511 "peephole.m"
                      }
#line 512 "peephole.m"
                      {
#line 512 "peephole.m"
                        MR_Word base;
#line 512 "peephole.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 512 "peephole.m"
                        *ll_backend__peephole__MaybeInstr_10 = base;
#line 512 "peephole.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_18));
#line 512 "peephole.m"
                      }
#line 509 "peephole.m"
                    }
#line 507 "peephole.m"
                }
#line 502 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 2:
#line 515 "peephole.m"
            {
#line 515 "peephole.m"
              MR_Word ll_backend__peephole__Lval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 515 "peephole.m"
              MR_Word ll_backend__peephole__Rval0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));

#line 516 "peephole.m"
              {
#line 516 "peephole.m"
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval_103, ll_backend__peephole__OldLval_6);
              }
#line 518 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 517 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 518 "peephole.m"
              else
#line 520 "peephole.m"
                {
#line 518 "peephole.m"
                  MR_Word ll_backend__peephole__V_19_19;

#line 518 "peephole.m"
                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval_103)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval_103, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 518 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 518 "peephole.m"
                    {
#line 518 "peephole.m"
                      ll_backend__peephole__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval_103, (MR_Integer) 1)));
#line 519 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 518 "peephole.m"
                    }
#line 518 "peephole.m"
                  else
#line 522 "peephole.m"
                    {
#line 522 "peephole.m"
                      MR_Word ll_backend__peephole__Rval_94;
#line 522 "peephole.m"
                      MR_Word ll_backend__peephole__Uinstr_95;
#line 522 "peephole.m"
                      MR_Word ll_backend__peephole__Instr_96;

#line 521 "peephole.m"
                      {
#line 521 "peephole.m"
                        ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_104, &ll_backend__peephole__Rval_94);
                      }
#line 523 "peephole.m"
                      {
#line 523 "peephole.m"
                        ll_backend__peephole__Uinstr_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 523 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 523 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_95, 1) = ((MR_Box) (ll_backend__peephole__Lval_103));
#line 523 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_95, 2) = ((MR_Box) (ll_backend__peephole__Rval_94));
#line 523 "peephole.m"
                      }
#line 524 "peephole.m"
                      {
#line 524 "peephole.m"
                        ll_backend__peephole__Instr_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_96, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_95));
#line 524 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_96, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 524 "peephole.m"
                      }
#line 525 "peephole.m"
                      {
#line 525 "peephole.m"
                        MR_Word base;
#line 525 "peephole.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "peephole.m"
                        *ll_backend__peephole__MaybeInstr_10 = base;
#line 525 "peephole.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_96));
#line 525 "peephole.m"
                      }
#line 522 "peephole.m"
                    }
#line 520 "peephole.m"
                }
#line 515 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 7:
#line 528 "peephole.m"
            {
#line 528 "peephole.m"
              MR_Word ll_backend__peephole__Targets_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 528 "peephole.m"
              MR_Word ll_backend__peephole__Rval0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 528 "peephole.m"
              MR_Word ll_backend__peephole__Rval_109;
#line 528 "peephole.m"
              MR_Word ll_backend__peephole__Uinstr_110;
#line 528 "peephole.m"
              MR_Word ll_backend__peephole__Instr_111;

#line 529 "peephole.m"
              {
#line 529 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_108, &ll_backend__peephole__Rval_109);
              }
#line 531 "peephole.m"
              {
#line 531 "peephole.m"
                ll_backend__peephole__Uinstr_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 531 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 531 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_110, 1) = ((MR_Box) (ll_backend__peephole__Rval_109));
#line 531 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_110, 2) = ((MR_Box) (ll_backend__peephole__Targets_20));
#line 531 "peephole.m"
              }
#line 532 "peephole.m"
              {
#line 532 "peephole.m"
                ll_backend__peephole__Instr_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 532 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_111, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_110));
#line 532 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_111, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 532 "peephole.m"
              }
#line 533 "peephole.m"
              {
#line 533 "peephole.m"
                MR_Word base;
#line 533 "peephole.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 533 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = base;
#line 533 "peephole.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_111));
#line 533 "peephole.m"
              }
#line 528 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 9:
#line 535 "peephole.m"
            {
#line 535 "peephole.m"
              MR_Word ll_backend__peephole__Target_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 535 "peephole.m"
              MR_Word ll_backend__peephole__Rval0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 535 "peephole.m"
              MR_Word ll_backend__peephole__Rval_113;
#line 535 "peephole.m"
              MR_Word ll_backend__peephole__Uinstr_114;
#line 535 "peephole.m"
              MR_Word ll_backend__peephole__Instr_115;

#line 536 "peephole.m"
              {
#line 536 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_112, &ll_backend__peephole__Rval_113);
              }
#line 538 "peephole.m"
              {
#line 538 "peephole.m"
                ll_backend__peephole__Uinstr_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 538 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 538 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_114, 1) = ((MR_Box) (ll_backend__peephole__Rval_113));
#line 538 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_114, 2) = ((MR_Box) (ll_backend__peephole__Target_21));
#line 538 "peephole.m"
              }
#line 539 "peephole.m"
              {
#line 539 "peephole.m"
                ll_backend__peephole__Instr_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_115, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_114));
#line 539 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_115, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 539 "peephole.m"
              }
#line 540 "peephole.m"
              {
#line 540 "peephole.m"
                MR_Word base;
#line 540 "peephole.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = base;
#line 540 "peephole.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_115));
#line 540 "peephole.m"
              }
#line 535 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 10:
#line 621 "peephole.m"
            {
#line 621 "peephole.m"
              MR_Word ll_backend__peephole__Lval0_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 622 "peephole.m"
              {
#line 622 "peephole.m"
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_178, ll_backend__peephole__OldLval_6);
              }
#line 624 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 623 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "peephole.m"
              else
#line 626 "peephole.m"
                {
#line 624 "peephole.m"
                  MR_Word ll_backend__peephole__V_174_174;

#line 624 "peephole.m"
                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_178)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_178, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 624 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 624 "peephole.m"
                    {
#line 624 "peephole.m"
                      ll_backend__peephole__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_178, (MR_Integer) 1)));
#line 625 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "peephole.m"
                    }
#line 624 "peephole.m"
                  else
#line 627 "peephole.m"
                    {
#line 627 "peephole.m"
                      MR_Word base;
#line 627 "peephole.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 627 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = base;
#line 627 "peephole.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 627 "peephole.m"
                    }
#line 626 "peephole.m"
                }
#line 621 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 11:
#line 636 "peephole.m"
            {
#line 636 "peephole.m"
              MR_Word base;
#line 636 "peephole.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 636 "peephole.m"
              *ll_backend__peephole__MaybeInstr_10 = base;
#line 636 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 636 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 12:
#line 543 "peephole.m"
            {
#line 543 "peephole.m"
              MR_Word ll_backend__peephole__MaybeTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 543 "peephole.m"
              MR_Word ll_backend__peephole__MaybeOffset_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 3)));
#line 543 "peephole.m"
              MR_Word ll_backend__peephole__SizeRval0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 4)));
#line 543 "peephole.m"
              MR_Word ll_backend__peephole__TypeMsg_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 5)));
#line 543 "peephole.m"
              MR_Word ll_backend__peephole__MayUseAtomicAlloc_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 6)));
#line 543 "peephole.m"
              MR_Word ll_backend__peephole__MaybeRegionId_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 7)));
#line 543 "peephole.m"
              MR_Word ll_backend__peephole__MaybeReuse_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 8)));
#line 543 "peephole.m"
              MR_Word ll_backend__peephole__Target_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 544 "peephole.m"
              {
#line 544 "peephole.m"
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Target_124, ll_backend__peephole__OldLval_6);
              }
#line 546 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 545 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "peephole.m"
              else
#line 548 "peephole.m"
                {
#line 546 "peephole.m"
                  MR_Word ll_backend__peephole__V_29_29;

#line 546 "peephole.m"
                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Target_124)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Target_124, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 546 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 546 "peephole.m"
                    {
#line 546 "peephole.m"
                      ll_backend__peephole__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Target_124, (MR_Integer) 1)));
#line 547 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "peephole.m"
                    }
#line 546 "peephole.m"
                  else
#line 550 "peephole.m"
                    {
#line 550 "peephole.m"
                      MR_Word ll_backend__peephole__SizeRval_30;
#line 550 "peephole.m"
                      MR_Word ll_backend__peephole__Uinstr_116;
#line 550 "peephole.m"
                      MR_Word ll_backend__peephole__Instr_117;

#line 549 "peephole.m"
                      {
#line 549 "peephole.m"
                        ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__SizeRval0_24, &ll_backend__peephole__SizeRval_30);
                      }
#line 551 "peephole.m"
                      {
#line 551 "peephole.m"
                        ll_backend__peephole__Uinstr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
#line 551 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 551 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 1) = ((MR_Box) (ll_backend__peephole__Target_124));
#line 551 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 2) = ((MR_Box) (ll_backend__peephole__MaybeTag_22));
#line 551 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 3) = ((MR_Box) (ll_backend__peephole__MaybeOffset_23));
#line 551 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 4) = ((MR_Box) (ll_backend__peephole__SizeRval_30));
#line 551 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 5) = ((MR_Box) (ll_backend__peephole__TypeMsg_25));
#line 551 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 6) = ((MR_Box) (ll_backend__peephole__MayUseAtomicAlloc_26));
#line 551 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 7) = ((MR_Box) (ll_backend__peephole__MaybeRegionId_27));
#line 551 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_116, 8) = ((MR_Box) (ll_backend__peephole__MaybeReuse_28));
#line 551 "peephole.m"
                      }
#line 553 "peephole.m"
                      {
#line 553 "peephole.m"
                        ll_backend__peephole__Instr_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 553 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_117, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_116));
#line 553 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_117, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 553 "peephole.m"
                      }
#line 554 "peephole.m"
                      {
#line 554 "peephole.m"
                        MR_Word base;
#line 554 "peephole.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 554 "peephole.m"
                        *ll_backend__peephole__MaybeInstr_10 = base;
#line 554 "peephole.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_117));
#line 554 "peephole.m"
                      }
#line 550 "peephole.m"
                    }
#line 548 "peephole.m"
                }
#line 543 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 13:
#line 621 "peephole.m"
            {
#line 621 "peephole.m"
              MR_Word ll_backend__peephole__Lval0_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 622 "peephole.m"
              {
#line 622 "peephole.m"
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_168, ll_backend__peephole__OldLval_6);
              }
#line 624 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 623 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "peephole.m"
              else
#line 626 "peephole.m"
                {
#line 624 "peephole.m"
                  MR_Word ll_backend__peephole__V_164_164;

#line 624 "peephole.m"
                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_168)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_168, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 624 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 624 "peephole.m"
                    {
#line 624 "peephole.m"
                      ll_backend__peephole__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_168, (MR_Integer) 1)));
#line 625 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "peephole.m"
                    }
#line 624 "peephole.m"
                  else
#line 627 "peephole.m"
                    {
#line 627 "peephole.m"
                      MR_Word base;
#line 627 "peephole.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 627 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = base;
#line 627 "peephole.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 627 "peephole.m"
                    }
#line 626 "peephole.m"
                }
#line 621 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 14:
#line 557 "peephole.m"
            {
#line 557 "peephole.m"
              MR_Word ll_backend__peephole__Rval0_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 557 "peephole.m"
              MR_Word ll_backend__peephole__Rval_126;
#line 557 "peephole.m"
              MR_Word ll_backend__peephole__Uinstr_127;
#line 557 "peephole.m"
              MR_Word ll_backend__peephole__Instr_128;

#line 558 "peephole.m"
              {
#line 558 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_125, &ll_backend__peephole__Rval_126);
              }
#line 560 "peephole.m"
              {
#line 560 "peephole.m"
                ll_backend__peephole__Uinstr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 560 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_127, 1) = ((MR_Box) (ll_backend__peephole__Rval_126));
#line 560 "peephole.m"
              }
#line 561 "peephole.m"
              {
#line 561 "peephole.m"
                ll_backend__peephole__Instr_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_128, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_127));
#line 561 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_128, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 561 "peephole.m"
              }
#line 562 "peephole.m"
              {
#line 562 "peephole.m"
                MR_Word base;
#line 562 "peephole.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 562 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = base;
#line 562 "peephole.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_128));
#line 562 "peephole.m"
              }
#line 557 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 15:
#line 564 "peephole.m"
            {
#line 564 "peephole.m"
              MR_Word ll_backend__peephole__Rval0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 564 "peephole.m"
              MR_Word ll_backend__peephole__Rval_130;
#line 564 "peephole.m"
              MR_Word ll_backend__peephole__Uinstr_131;
#line 564 "peephole.m"
              MR_Word ll_backend__peephole__Instr_132;

#line 565 "peephole.m"
              {
#line 565 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_129, &ll_backend__peephole__Rval_130);
              }
#line 567 "peephole.m"
              {
#line 567 "peephole.m"
                ll_backend__peephole__Uinstr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 567 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_131, 1) = ((MR_Box) (ll_backend__peephole__Rval_130));
#line 567 "peephole.m"
              }
#line 568 "peephole.m"
              {
#line 568 "peephole.m"
                ll_backend__peephole__Instr_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 568 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_132, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_131));
#line 568 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_132, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 568 "peephole.m"
              }
#line 569 "peephole.m"
              {
#line 569 "peephole.m"
                MR_Word base;
#line 569 "peephole.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = base;
#line 569 "peephole.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_132));
#line 569 "peephole.m"
              }
#line 564 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 20:
#line 621 "peephole.m"
            {
#line 621 "peephole.m"
              MR_Word ll_backend__peephole__Lval0_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 622 "peephole.m"
              {
#line 622 "peephole.m"
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_183, ll_backend__peephole__OldLval_6);
              }
#line 624 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 623 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "peephole.m"
              else
#line 626 "peephole.m"
                {
#line 624 "peephole.m"
                  MR_Word ll_backend__peephole__V_179_179;

#line 624 "peephole.m"
                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_183)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_183, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 624 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 624 "peephole.m"
                    {
#line 624 "peephole.m"
                      ll_backend__peephole__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_183, (MR_Integer) 1)));
#line 625 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "peephole.m"
                    }
#line 624 "peephole.m"
                  else
#line 627 "peephole.m"
                    {
#line 627 "peephole.m"
                      MR_Word base;
#line 627 "peephole.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 627 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = base;
#line 627 "peephole.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 627 "peephole.m"
                    }
#line 626 "peephole.m"
                }
#line 621 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 21:
#line 571 "peephole.m"
            {
#line 571 "peephole.m"
              MR_Word ll_backend__peephole__Reason_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 571 "peephole.m"
              MR_Word ll_backend__peephole__Rval0_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 571 "peephole.m"
              MR_Word ll_backend__peephole__Rval_134;
#line 571 "peephole.m"
              MR_Word ll_backend__peephole__Uinstr_135;
#line 571 "peephole.m"
              MR_Word ll_backend__peephole__Instr_136;

#line 572 "peephole.m"
              {
#line 572 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_133, &ll_backend__peephole__Rval_134);
              }
#line 574 "peephole.m"
              {
#line 574 "peephole.m"
                ll_backend__peephole__Uinstr_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 574 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 574 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_135, 1) = ((MR_Box) (ll_backend__peephole__Rval_134));
#line 574 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_135, 2) = ((MR_Box) (ll_backend__peephole__Reason_31));
#line 574 "peephole.m"
              }
#line 575 "peephole.m"
              {
#line 575 "peephole.m"
                ll_backend__peephole__Instr_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 575 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_136, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_135));
#line 575 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_136, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 575 "peephole.m"
              }
#line 576 "peephole.m"
              {
#line 576 "peephole.m"
                MR_Word base;
#line 576 "peephole.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 576 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = base;
#line 576 "peephole.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_136));
#line 576 "peephole.m"
              }
#line 571 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 22:
#line 621 "peephole.m"
            {
#line 621 "peephole.m"
              MR_Word ll_backend__peephole__Lval0_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 622 "peephole.m"
              {
#line 622 "peephole.m"
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_173, ll_backend__peephole__OldLval_6);
              }
#line 624 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 623 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "peephole.m"
              else
#line 626 "peephole.m"
                {
#line 624 "peephole.m"
                  MR_Word ll_backend__peephole__V_169_169;

#line 624 "peephole.m"
                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_173)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_173, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 624 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 624 "peephole.m"
                    {
#line 624 "peephole.m"
                      ll_backend__peephole__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_173, (MR_Integer) 1)));
#line 625 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "peephole.m"
                    }
#line 624 "peephole.m"
                  else
#line 627 "peephole.m"
                    {
#line 627 "peephole.m"
                      MR_Word base;
#line 627 "peephole.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 627 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = base;
#line 627 "peephole.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 627 "peephole.m"
                    }
#line 626 "peephole.m"
                }
#line 621 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 23:
#line 578 "peephole.m"
            {
#line 578 "peephole.m"
              MR_Word ll_backend__peephole__Rval0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 578 "peephole.m"
              MR_Word ll_backend__peephole__Rval_138;
#line 578 "peephole.m"
              MR_Word ll_backend__peephole__Uinstr_139;
#line 578 "peephole.m"
              MR_Word ll_backend__peephole__Instr_140;

#line 579 "peephole.m"
              {
#line 579 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_137, &ll_backend__peephole__Rval_138);
              }
#line 581 "peephole.m"
              {
#line 581 "peephole.m"
                ll_backend__peephole__Uinstr_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
#line 581 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_139, 1) = ((MR_Box) (ll_backend__peephole__Rval_138));
#line 581 "peephole.m"
              }
#line 582 "peephole.m"
              {
#line 582 "peephole.m"
                ll_backend__peephole__Instr_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_140, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_139));
#line 582 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_140, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 582 "peephole.m"
              }
#line 583 "peephole.m"
              {
#line 583 "peephole.m"
                MR_Word base;
#line 583 "peephole.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 583 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = base;
#line 583 "peephole.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_140));
#line 583 "peephole.m"
              }
#line 578 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 31:
#line 621 "peephole.m"
            {
#line 621 "peephole.m"
              MR_Word ll_backend__peephole__Lval0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 620 "peephole.m"
              MR_Integer ll_backend__peephole___NumSlots_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 622 "peephole.m"
              {
#line 622 "peephole.m"
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_163, ll_backend__peephole__OldLval_6);
              }
#line 624 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 623 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "peephole.m"
              else
#line 626 "peephole.m"
                {
#line 624 "peephole.m"
                  MR_Word ll_backend__peephole__V_40_40;

#line 624 "peephole.m"
                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_163)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_163, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 624 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 624 "peephole.m"
                    {
#line 624 "peephole.m"
                      ll_backend__peephole__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_163, (MR_Integer) 1)));
#line 625 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "peephole.m"
                    }
#line 624 "peephole.m"
                  else
#line 627 "peephole.m"
                    {
#line 627 "peephole.m"
                      MR_Word base;
#line 627 "peephole.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 627 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = base;
#line 627 "peephole.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_9));
#line 627 "peephole.m"
                    }
#line 626 "peephole.m"
                }
#line 621 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 32:
#line 585 "peephole.m"
            {
#line 585 "peephole.m"
              MR_Word ll_backend__peephole__Lval0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 585 "peephole.m"
              MR_Word ll_backend__peephole__Label_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 3)));
#line 585 "peephole.m"
              MR_Word ll_backend__peephole__Rval0_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));

#line 586 "peephole.m"
              {
#line 586 "peephole.m"
                ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval0_32, ll_backend__peephole__OldLval_6);
              }
#line 588 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 587 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 588 "peephole.m"
              else
#line 590 "peephole.m"
                {
#line 588 "peephole.m"
                  MR_Word ll_backend__peephole__V_34_34;

#line 588 "peephole.m"
                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Lval0_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_32, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 588 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 588 "peephole.m"
                    {
#line 588 "peephole.m"
                      ll_backend__peephole__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Lval0_32, (MR_Integer) 1)));
#line 589 "peephole.m"
                      *ll_backend__peephole__MaybeInstr_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 588 "peephole.m"
                    }
#line 588 "peephole.m"
                  else
#line 592 "peephole.m"
                    {
#line 592 "peephole.m"
                      MR_Word ll_backend__peephole__Rval_141;
#line 592 "peephole.m"
                      MR_Word ll_backend__peephole__Uinstr_142;
#line 592 "peephole.m"
                      MR_Word ll_backend__peephole__Instr_143;

#line 591 "peephole.m"
                      {
#line 591 "peephole.m"
                        ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__Rval0_150, &ll_backend__peephole__Rval_141);
                      }
#line 593 "peephole.m"
                      {
#line 593 "peephole.m"
                        ll_backend__peephole__Uinstr_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 593 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
#line 593 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_142, 1) = ((MR_Box) (ll_backend__peephole__Rval_141));
#line 593 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_142, 2) = ((MR_Box) (ll_backend__peephole__Lval0_32));
#line 593 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_142, 3) = ((MR_Box) (ll_backend__peephole__Label_33));
#line 593 "peephole.m"
                      }
#line 594 "peephole.m"
                      {
#line 594 "peephole.m"
                        ll_backend__peephole__Instr_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 594 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_143, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_142));
#line 594 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_143, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 594 "peephole.m"
                      }
#line 595 "peephole.m"
                      {
#line 595 "peephole.m"
                        MR_Word base;
#line 595 "peephole.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 595 "peephole.m"
                        *ll_backend__peephole__MaybeInstr_10 = base;
#line 595 "peephole.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_143));
#line 595 "peephole.m"
                      }
#line 592 "peephole.m"
                    }
#line 590 "peephole.m"
                }
#line 585 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 33:
#line 598 "peephole.m"
            {
#line 598 "peephole.m"
              MR_Word ll_backend__peephole__LCRval0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 598 "peephole.m"
              MR_Word ll_backend__peephole__LCSRval0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 598 "peephole.m"
              MR_Word ll_backend__peephole__LCRval_37;
#line 598 "peephole.m"
              MR_Word ll_backend__peephole__LCSRval_38;
#line 598 "peephole.m"
              MR_Word ll_backend__peephole__Uinstr_154;
#line 598 "peephole.m"
              MR_Word ll_backend__peephole__Instr_155;
#line 598 "peephole.m"
              MR_Word ll_backend__peephole__Label_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 3)));

#line 599 "peephole.m"
              {
#line 599 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__LCRval0_35, &ll_backend__peephole__LCRval_37);
              }
#line 601 "peephole.m"
              {
#line 601 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__LCSRval0_36, &ll_backend__peephole__LCSRval_38);
              }
#line 603 "peephole.m"
              {
#line 603 "peephole.m"
                ll_backend__peephole__Uinstr_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 603 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 603 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_154, 1) = ((MR_Box) (ll_backend__peephole__LCRval_37));
#line 603 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_154, 2) = ((MR_Box) (ll_backend__peephole__LCSRval_38));
#line 603 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_154, 3) = ((MR_Box) (ll_backend__peephole__Label_156));
#line 603 "peephole.m"
              }
#line 604 "peephole.m"
              {
#line 604 "peephole.m"
                ll_backend__peephole__Instr_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 604 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_155, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_154));
#line 604 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_155, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 604 "peephole.m"
              }
#line 605 "peephole.m"
              {
#line 605 "peephole.m"
                MR_Word base;
#line 605 "peephole.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 605 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = base;
#line 605 "peephole.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_155));
#line 605 "peephole.m"
              }
#line 598 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
          case (MR_Integer) 34:
#line 607 "peephole.m"
            {
#line 607 "peephole.m"
              MR_Word ll_backend__peephole__Uinstr_157;
#line 607 "peephole.m"
              MR_Word ll_backend__peephole__Instr_158;
#line 607 "peephole.m"
              MR_Word ll_backend__peephole__LCRval0_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 1)));
#line 607 "peephole.m"
              MR_Word ll_backend__peephole__LCSRval0_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_11, (MR_Integer) 2)));
#line 607 "peephole.m"
              MR_Word ll_backend__peephole__LCRval_161;
#line 607 "peephole.m"
              MR_Word ll_backend__peephole__LCSRval_162;

#line 608 "peephole.m"
              {
#line 608 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__LCRval0_159, &ll_backend__peephole__LCRval_161);
              }
#line 610 "peephole.m"
              {
#line 610 "peephole.m"
                ll_backend__peephole__replace_tagged_ptr_components_in_rval_5_p_0(ll_backend__peephole__OldLval_6, ll_backend__peephole__OldTag_7, ll_backend__peephole__OldBase_8, ll_backend__peephole__LCSRval0_160, &ll_backend__peephole__LCSRval_162);
              }
#line 612 "peephole.m"
              {
#line 612 "peephole.m"
                ll_backend__peephole__Uinstr_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 612 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
#line 612 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_157, 1) = ((MR_Box) (ll_backend__peephole__LCRval_161));
#line 612 "peephole.m"
                MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr_157, 2) = ((MR_Box) (ll_backend__peephole__LCSRval_162));
#line 612 "peephole.m"
              }
#line 613 "peephole.m"
              {
#line 613 "peephole.m"
                ll_backend__peephole__Instr_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_158, 0) = ((MR_Box) (ll_backend__peephole__Uinstr_157));
#line 613 "peephole.m"
                MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr_158, 1) = ((MR_Box) (ll_backend__peephole__Comment_12));
#line 613 "peephole.m"
              }
#line 614 "peephole.m"
              {
#line 614 "peephole.m"
                MR_Word base;
#line 614 "peephole.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 614 "peephole.m"
                *ll_backend__peephole__MaybeInstr_10 = base;
#line 614 "peephole.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr_158));
#line 614 "peephole.m"
              }
#line 607 "peephole.m"
            }
#line 514 "peephole.m"
            break;
#line 514 "peephole.m"
        }
#line 514 "peephole.m"
        break;
#line 514 "peephole.m"
    }
#line 499 "peephole.m"
  }
#line 495 "peephole.m"
}

#line 477 "peephole.m"
static void MR_CALL 
ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(
#line 477 "peephole.m"
  MR_Word ll_backend__peephole__Lval_1,
#line 477 "peephole.m"
  MR_Integer ll_backend__peephole__Tag_2,
#line 477 "peephole.m"
  MR_Word ll_backend__peephole__Base_3,
#line 477 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__4_4,
#line 477 "peephole.m"
  MR_Word * ll_backend__peephole__HeadVar__5_5)
#line 477 "peephole.m"
{
#line 480 "peephole.m"
  {
#line 480 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;

#line 480 "peephole.m"
    if ((ll_backend__peephole__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "peephole.m"
      *ll_backend__peephole__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 480 "peephole.m"
    else
#line 481 "peephole.m"
      {
#line 481 "peephole.m"
        MR_Word ll_backend__peephole__HeadInstr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__4_4, (MR_Integer) 0)));
#line 481 "peephole.m"
        MR_Word ll_backend__peephole__TailInstrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__4_4, (MR_Integer) 1)));
#line 481 "peephole.m"
        MR_Word ll_backend__peephole__MaybeHeadInstr_16;

#line 483 "peephole.m"
        {
#line 483 "peephole.m"
          ll_backend__peephole__replace_tagged_ptr_components_in_instr_5_p_0(ll_backend__peephole__Lval_1, ll_backend__peephole__Tag_2, ll_backend__peephole__Base_3, ll_backend__peephole__HeadInstr0_14, &ll_backend__peephole__MaybeHeadInstr_16);
        }
#line 488 "peephole.m"
        if ((ll_backend__peephole__MaybeHeadInstr_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "peephole.m"
          *ll_backend__peephole__HeadVar__5_5 = ll_backend__peephole__HeadVar__4_4;
#line 488 "peephole.m"
        else
#line 489 "peephole.m"
          {
#line 489 "peephole.m"
            MR_Word ll_backend__peephole__HeadInstr_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__MaybeHeadInstr_16, (MR_Integer) 0)));
#line 489 "peephole.m"
            MR_Word ll_backend__peephole__TailInstrs_18;

#line 490 "peephole.m"
            {
#line 490 "peephole.m"
              ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(ll_backend__peephole__Lval_1, ll_backend__peephole__Tag_2, ll_backend__peephole__Base_3, ll_backend__peephole__TailInstrs0_15, &ll_backend__peephole__TailInstrs_18);
            }
#line 492 "peephole.m"
            {
#line 492 "peephole.m"
              MR_Word base;
#line 492 "peephole.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "peephole.m"
              *ll_backend__peephole__HeadVar__5_5 = base;
#line 492 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__HeadInstr_17));
#line 492 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__TailInstrs_18));
#line 492 "peephole.m"
            }
#line 489 "peephole.m"
          }
#line 481 "peephole.m"
      }
#line 480 "peephole.m"
  }
#line 477 "peephole.m"
}

#line 156 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole__peephole_match_4_p_0(
#line 156 "peephole.m"
  MR_Word ll_backend__peephole__Instr0_1,
#line 156 "peephole.m"
  MR_Word ll_backend__peephole__Instrs0_2,
#line 156 "peephole.m"
  MR_Word ll_backend__peephole__InvalidPatterns_3,
#line 156 "peephole.m"
  MR_Word * ll_backend__peephole__Instrs_4)
#line 156 "peephole.m"
{
#line 166 "peephole.m"
  {
#line 166 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;
#line 166 "peephole.m"
    MR_String ll_backend__peephole__V_234_234 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_1, (MR_Integer) 1)));
#line 166 "peephole.m"
    MR_Word ll_backend__peephole__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_1, (MR_Integer) 0)));

#line 166 "peephole.m"
#line 166 "peephole.m"
    switch (MR_tag((MR_Word) ll_backend__peephole__V_235_235)) {
#line 166 "peephole.m"
      default:
#line 166 "peephole.m"
        ll_backend__peephole__succeeded = MR_FALSE;
#line 166 "peephole.m"
        break;
#line 166 "peephole.m"
      case (MR_Integer) 3:
#line 166 "peephole.m"
#line 166 "peephole.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 0)))) {
#line 166 "peephole.m"
          default:
#line 166 "peephole.m"
            ll_backend__peephole__succeeded = MR_FALSE;
#line 166 "peephole.m"
            break;
#line 166 "peephole.m"
          case (MR_Integer) 1:
#line 401 "peephole.m"
            {
#line 401 "peephole.m"
              MR_Word ll_backend__peephole__Base_178;
#line 401 "peephole.m"
              MR_Word ll_backend__peephole__Redoip0_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
#line 401 "peephole.m"
              MR_Word ll_backend__peephole__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
#line 401 "peephole.m"
              MR_Word ll_backend__peephole__V_190_190;
#line 413 "peephole.m"
              MR_Word ll_backend__peephole__Redoip1_180;
#line 413 "peephole.m"
              MR_Word ll_backend__peephole__Skipped_181;
#line 413 "peephole.m"
              MR_Word ll_backend__peephole__Rest_182;
#line 406 "peephole.m"
              MR_Word ll_backend__peephole__V_191_191;
#line 406 "peephole.m"
              MR_Word ll_backend__peephole__V_192_192;
#line 406 "peephole.m"
              MR_Word ll_backend__peephole__V_193_193;
#line 406 "peephole.m"
              MR_Word ll_backend__peephole__V_194_194;

#line 403 "peephole.m"
              ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_189_189)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_189_189, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 403 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 403 "peephole.m"
                {
#line 403 "peephole.m"
                  ll_backend__peephole__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_189_189, (MR_Integer) 1)));
#line 403 "peephole.m"
                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_190_190)) == (MR_mktag((MR_Integer) 0)));
#line 403 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 403 "peephole.m"
                    {
#line 403 "peephole.m"
                      ll_backend__peephole__Base_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_190_190, (MR_Integer) 0)));
#line 405 "peephole.m"
                      ll_backend__peephole__V_193_193 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 405 "peephole.m"
                      ll_backend__peephole__V_192_192 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 405 "peephole.m"
                      {
#line 405 "peephole.m"
                        ll_backend__peephole__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "peephole.m"
                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_191_191, 0) = ((MR_Box) (ll_backend__peephole__Base_178));
#line 405 "peephole.m"
                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_191_191, 1) = ((MR_Box) (ll_backend__peephole__V_193_193));
#line 405 "peephole.m"
                      }
#line 405 "peephole.m"
                      {
#line 405 "peephole.m"
                        ll_backend__peephole__succeeded = ll_backend__opt_util__next_assign_to_redoip_6_p_0(ll_backend__peephole__Instrs0_2, ll_backend__peephole__V_191_191, ll_backend__peephole__V_192_192, &ll_backend__peephole__Redoip1_180, &ll_backend__peephole__Skipped_181, &ll_backend__peephole__Rest_182);
                      }
#line 406 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 406 "peephole.m"
                        {
#line 407 "peephole.m"
                          {
#line 407 "peephole.m"
                            ll_backend__peephole__V_194_194 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(ll_backend__peephole__Skipped_181);
                          }
#line 407 "peephole.m"
                          ll_backend__peephole__succeeded = (ll_backend__peephole__V_194_194 == (MR_Integer) 0);
#line 406 "peephole.m"
                        }
#line 413 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 409 "peephole.m"
                        {
#line 409 "peephole.m"
                          MR_Word ll_backend__peephole__Instrs1_183;
#line 409 "peephole.m"
                          MR_Word ll_backend__peephole__RedoipInstr_184;
#line 409 "peephole.m"
                          MR_Word ll_backend__peephole__V_195_195;
#line 409 "peephole.m"
                          MR_Word ll_backend__peephole__V_198_198;
#line 409 "peephole.m"
                          MR_Word ll_backend__peephole__V_199_199;

#line 409 "peephole.m"
                          {
#line 409 "peephole.m"
                            ll_backend__peephole__Instrs1_183 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__peephole__Skipped_181, ll_backend__peephole__Rest_182);
                          }
#line 411 "peephole.m"
                          {
#line 411 "peephole.m"
                            ll_backend__peephole__V_199_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "peephole.m"
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_199_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 411 "peephole.m"
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_199_199, 1) = ((MR_Box) (ll_backend__peephole__Redoip1_180));
#line 411 "peephole.m"
                          }
#line 411 "peephole.m"
                          {
#line 411 "peephole.m"
                            ll_backend__peephole__V_198_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "peephole.m"
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_198_198, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 411 "peephole.m"
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_198_198, 1) = ((MR_Box) (ll_backend__peephole__V_199_199));
#line 411 "peephole.m"
                          }
#line 410 "peephole.m"
                          {
#line 410 "peephole.m"
                            ll_backend__peephole__V_195_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 410 "peephole.m"
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_195_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 410 "peephole.m"
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_195_195, 1) = ((MR_Box) (ll_backend__peephole__V_189_189));
#line 410 "peephole.m"
                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_195_195, 2) = ((MR_Box) (ll_backend__peephole__V_198_198));
#line 410 "peephole.m"
                          }
#line 410 "peephole.m"
                          {
#line 410 "peephole.m"
                            ll_backend__peephole__RedoipInstr_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 410 "peephole.m"
                            MR_hl_field(MR_mktag(0), ll_backend__peephole__RedoipInstr_184, 0) = ((MR_Box) (ll_backend__peephole__V_195_195));
#line 410 "peephole.m"
                            MR_hl_field(MR_mktag(0), ll_backend__peephole__RedoipInstr_184, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
#line 410 "peephole.m"
                          }
#line 412 "peephole.m"
                          {
#line 412 "peephole.m"
                            MR_Word base;
#line 412 "peephole.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "peephole.m"
                            *ll_backend__peephole__Instrs_4 = base;
#line 412 "peephole.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__RedoipInstr_184));
#line 412 "peephole.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs1_183));
#line 412 "peephole.m"
                          }
#line 409 "peephole.m"
                          ll_backend__peephole__succeeded = MR_TRUE;
#line 409 "peephole.m"
                        }
#line 413 "peephole.m"
                      else
#line 422 "peephole.m"
                        {
#line 422 "peephole.m"
                          MR_Word ll_backend__peephole__TypeCtorInfo_229_229;
#line 422 "peephole.m"
                          MR_Word ll_backend__peephole__Between_185;
#line 422 "peephole.m"
                          MR_Word ll_backend__peephole__After_186;
#line 422 "peephole.m"
                          MR_Word ll_backend__peephole__SucceedInstr_188;
#line 422 "peephole.m"
                          MR_Word ll_backend__peephole__V_200_200;
#line 422 "peephole.m"
                          MR_Word ll_backend__peephole__V_201_201;
#line 422 "peephole.m"
                          MR_Word ll_backend__peephole__V_202_202;
#line 422 "peephole.m"
                          MR_String ll_backend__peephole__V_203_203;
#line 422 "peephole.m"
                          MR_Word ll_backend__peephole__V_208_208;
#line 422 "peephole.m"
                          MR_Word ll_backend__peephole__V_209_209;
#line 422 "peephole.m"
                          MR_Word ll_backend__peephole__V_210_210;
#line 418 "peephole.m"
                          MR_Integer ll_backend__peephole__V_187_187;

#line 414 "peephole.m"
                          ll_backend__peephole__succeeded = (ll_backend__peephole__Base_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 422 "peephole.m"
                          if (ll_backend__peephole__succeeded)
#line 422 "peephole.m"
                            {
#line 415 "peephole.m"
                              ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Redoip0_179)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Redoip0_179, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 415 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 415 "peephole.m"
                                {
#line 415 "peephole.m"
                                  ll_backend__peephole__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Redoip0_179, (MR_Integer) 1)));
#line 415 "peephole.m"
                                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_200_200)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_200_200, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 415 "peephole.m"
                                  if (ll_backend__peephole__succeeded)
#line 415 "peephole.m"
                                    {
#line 415 "peephole.m"
                                      ll_backend__peephole__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_200_200, (MR_Integer) 1)));
#line 415 "peephole.m"
                                      ll_backend__peephole__succeeded = (ll_backend__peephole__V_201_201 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 422 "peephole.m"
                                      if (ll_backend__peephole__succeeded)
#line 422 "peephole.m"
                                        {
#line 416 "peephole.m"
                                          {
#line 416 "peephole.m"
                                            ll_backend__peephole__succeeded = ll_backend__opt_util__straight_alternative_3_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Between_185, &ll_backend__peephole__After_186);
                                          }
#line 422 "peephole.m"
                                          if (ll_backend__peephole__succeeded)
#line 422 "peephole.m"
                                            {
#line 417 "peephole.m"
                                              {
#line 417 "peephole.m"
                                                ll_backend__peephole__V_202_202 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(ll_backend__peephole__Between_185);
                                              }
#line 417 "peephole.m"
                                              ll_backend__peephole__succeeded = (ll_backend__peephole__V_202_202 == (MR_Integer) 0);
#line 422 "peephole.m"
                                              if (ll_backend__peephole__succeeded)
#line 422 "peephole.m"
                                                {
#line 418 "peephole.m"
                                                  ll_backend__peephole__V_203_203 = (MR_String) "curfr==maxfr";
#line 418 "peephole.m"
                                                  {
#line 418 "peephole.m"
                                                    ll_backend__peephole__succeeded = mercury__string__sub_string_search_3_p_0(ll_backend__peephole__V_234_234, ll_backend__peephole__V_203_203, &ll_backend__peephole__V_187_187);
                                                  }
#line 422 "peephole.m"
                                                  if (ll_backend__peephole__succeeded)
#line 422 "peephole.m"
                                                    {
#line 420 "peephole.m"
                                                      ll_backend__peephole__SucceedInstr_188 = (MR_Word) &ll_backend__peephole_scalar_common_1[3];
#line 2582 "ll_backend.peephole.c"
                                                      ll_backend__peephole__TypeCtorInfo_229_229 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 421 "peephole.m"
                                                      ll_backend__peephole__V_210_210 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 421 "peephole.m"
                                                      ll_backend__peephole__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__peephole_scalar_common_1[7]);
#line 421 "peephole.m"
                                                      {
#line 421 "peephole.m"
                                                        ll_backend__peephole__V_208_208 = mercury__list__f_43_43_2_f_0(ll_backend__peephole__TypeCtorInfo_229_229, ll_backend__peephole__V_209_209, ll_backend__peephole__After_186);
                                                      }
#line 421 "peephole.m"
                                                      {
#line 421 "peephole.m"
                                                        *ll_backend__peephole__Instrs_4 = mercury__list__f_43_43_2_f_0(ll_backend__peephole__TypeCtorInfo_229_229, ll_backend__peephole__Between_185, ll_backend__peephole__V_208_208);
                                                      }
#line 421 "peephole.m"
                                                      ll_backend__peephole__succeeded = MR_TRUE;
#line 422 "peephole.m"
                                                    }
#line 422 "peephole.m"
                                                }
#line 422 "peephole.m"
                                            }
#line 422 "peephole.m"
                                        }
#line 415 "peephole.m"
                                    }
#line 415 "peephole.m"
                                }
#line 422 "peephole.m"
                            }
#line 422 "peephole.m"
                        }
#line 403 "peephole.m"
                    }
#line 403 "peephole.m"
                }
#line 401 "peephole.m"
            }
#line 166 "peephole.m"
            break;
#line 166 "peephole.m"
          case (MR_Integer) 4:
#line 281 "peephole.m"
            {
#line 281 "peephole.m"
              MR_Word ll_backend__peephole__NondetFrameInfo_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
#line 281 "peephole.m"
              MR_Word ll_backend__peephole__Redoip0_73;
#line 281 "peephole.m"
              MR_Word ll_backend__peephole__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
#line 302 "peephole.m"
              MR_Word ll_backend__peephole__Redoip1_78;
#line 302 "peephole.m"
              MR_Word ll_backend__peephole__Skipped_79;
#line 302 "peephole.m"
              MR_Word ll_backend__peephole__Rest_80;
#line 293 "peephole.m"
              MR_Word ll_backend__peephole__AllowedBases_76;
#line 293 "peephole.m"
              MR_Word ll_backend__peephole__V_107_107;
#line 293 "peephole.m"
              MR_Word ll_backend__peephole__V_108_108;

#line 283 "peephole.m"
              ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_100_100)) == (MR_mktag((MR_Integer) 1)));
#line 283 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 283 "peephole.m"
                {
#line 283 "peephole.m"
                  ll_backend__peephole__Redoip0_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__V_100_100, (MR_Integer) 0)));
#line 290 "peephole.m"
                  if (((MR_tag((MR_Word) ll_backend__peephole__NondetFrameInfo_72)) == (MR_mktag((MR_Integer) 1))))
#line 289 "peephole.m"
                    ll_backend__peephole__AllowedBases_76 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__peephole_scalar_common_1[5]);
#line 290 "peephole.m"
                  else
#line 291 "peephole.m"
                    {
#line 292 "peephole.m"
                      ll_backend__peephole__AllowedBases_76 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__peephole_scalar_common_1[8]);
#line 291 "peephole.m"
                    }
#line 294 "peephole.m"
                  ll_backend__peephole__V_107_107 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 294 "peephole.m"
                  {
#line 294 "peephole.m"
                    ll_backend__peephole__succeeded = ll_backend__opt_util__next_assign_to_redoip_6_p_0(ll_backend__peephole__Instrs0_2, ll_backend__peephole__AllowedBases_76, ll_backend__peephole__V_107_107, &ll_backend__peephole__Redoip1_78, &ll_backend__peephole__Skipped_79, &ll_backend__peephole__Rest_80);
                  }
#line 293 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 293 "peephole.m"
                    {
#line 296 "peephole.m"
                      {
#line 296 "peephole.m"
                        ll_backend__peephole__V_108_108 = ll_backend__opt_util__touches_nondet_ctrl_1_f_0(ll_backend__peephole__Skipped_79);
                      }
#line 296 "peephole.m"
                      ll_backend__peephole__succeeded = (ll_backend__peephole__V_108_108 == (MR_Integer) 0);
#line 293 "peephole.m"
                    }
#line 302 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 298 "peephole.m"
                    {
#line 298 "peephole.m"
                      MR_Word ll_backend__peephole__Instrs1_81;
#line 298 "peephole.m"
                      MR_Word ll_backend__peephole__NewInstr_82;
#line 298 "peephole.m"
                      MR_Word ll_backend__peephole__V_109_109;
#line 298 "peephole.m"
                      MR_Word ll_backend__peephole__V_110_110;

#line 298 "peephole.m"
                      {
#line 298 "peephole.m"
                        ll_backend__peephole__Instrs1_81 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__peephole__Skipped_79, ll_backend__peephole__Rest_80);
                      }
#line 299 "peephole.m"
                      {
#line 299 "peephole.m"
                        ll_backend__peephole__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 299 "peephole.m"
                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_110_110, 0) = ((MR_Box) (ll_backend__peephole__Redoip1_78));
#line 299 "peephole.m"
                      }
#line 299 "peephole.m"
                      {
#line 299 "peephole.m"
                        ll_backend__peephole__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 299 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 299 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_109_109, 1) = ((MR_Box) (ll_backend__peephole__NondetFrameInfo_72));
#line 299 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_109_109, 2) = ((MR_Box) (ll_backend__peephole__V_110_110));
#line 299 "peephole.m"
                      }
#line 299 "peephole.m"
                      {
#line 299 "peephole.m"
                        ll_backend__peephole__NewInstr_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 299 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__NewInstr_82, 0) = ((MR_Box) (ll_backend__peephole__V_109_109));
#line 299 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__NewInstr_82, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
#line 299 "peephole.m"
                      }
#line 301 "peephole.m"
                      {
#line 301 "peephole.m"
                        MR_Word base;
#line 301 "peephole.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "peephole.m"
                        *ll_backend__peephole__Instrs_4 = base;
#line 301 "peephole.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__NewInstr_82));
#line 301 "peephole.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs1_81));
#line 301 "peephole.m"
                      }
#line 298 "peephole.m"
                      ll_backend__peephole__succeeded = MR_TRUE;
#line 298 "peephole.m"
                    }
#line 302 "peephole.m"
                  else
#line 342 "peephole.m"
                    {
#line 342 "peephole.m"
                      MR_Word ll_backend__peephole__InstrsPrime_88;
#line 303 "peephole.m"
                      MR_Word ll_backend__peephole__Instr1_83;
#line 303 "peephole.m"
                      MR_Word ll_backend__peephole__Instrs2_84;
#line 303 "peephole.m"
                      MR_Word ll_backend__peephole__Test_85;
#line 303 "peephole.m"
                      MR_Word ll_backend__peephole__Target_86;
#line 303 "peephole.m"
                      MR_String ll_backend__peephole__Comment1_87;
#line 303 "peephole.m"
                      MR_Word ll_backend__peephole__V_111_111;
#line 303 "peephole.m"
                      MR_Word ll_backend__peephole__Instrs1_143;

#line 303 "peephole.m"
                      {
#line 303 "peephole.m"
                        ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Instrs1_143);
                      }
#line 304 "peephole.m"
                      ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_143)) == (MR_mktag((MR_Integer) 1)));
#line 304 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 304 "peephole.m"
                        {
#line 304 "peephole.m"
                          ll_backend__peephole__Instr1_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_143, (MR_Integer) 0)));
#line 304 "peephole.m"
                          ll_backend__peephole__Instrs2_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_143, (MR_Integer) 1)));
#line 305 "peephole.m"
                          ll_backend__peephole__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_83, (MR_Integer) 0)));
#line 305 "peephole.m"
                          ll_backend__peephole__Comment1_87 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_83, (MR_Integer) 1)));
#line 305 "peephole.m"
                          ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_111_111)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_111_111, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 305 "peephole.m"
                          if (ll_backend__peephole__succeeded)
#line 305 "peephole.m"
                            {
#line 305 "peephole.m"
                              ll_backend__peephole__Test_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_111_111, (MR_Integer) 1)));
#line 305 "peephole.m"
                              ll_backend__peephole__Target_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_111_111, (MR_Integer) 2)));
#line 307 "peephole.m"
                              ll_backend__peephole__succeeded = (ll_backend__peephole__Redoip0_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 307 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 308 "peephole.m"
                                {
#line 308 "peephole.m"
                                  if ((ll_backend__peephole__Target_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 308 "peephole.m"
                                    ll_backend__peephole__succeeded = MR_TRUE;
#line 308 "peephole.m"
                                  else
#line 308 "peephole.m"
                                  if ((ll_backend__peephole__Target_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 308 "peephole.m"
                                    ll_backend__peephole__succeeded = MR_TRUE;
#line 308 "peephole.m"
                                  else
#line 308 "peephole.m"
                                    ll_backend__peephole__succeeded = MR_FALSE;
#line 308 "peephole.m"
                                }
#line 315 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 310 "peephole.m"
                                {
#line 310 "peephole.m"
                                  MR_Word ll_backend__peephole__V_112_112;
#line 310 "peephole.m"
                                  MR_Word ll_backend__peephole__V_113_113;
#line 310 "peephole.m"
                                  MR_Word ll_backend__peephole__V_115_115;

#line 311 "peephole.m"
                                  {
#line 311 "peephole.m"
                                    ll_backend__peephole__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 311 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 311 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_113_113, 1) = ((MR_Box) (ll_backend__peephole__Test_85));
#line 311 "peephole.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__peephole__V_113_113, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 311 "peephole.m"
                                  }
#line 311 "peephole.m"
                                  {
#line 311 "peephole.m"
                                    ll_backend__peephole__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "peephole.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__V_112_112, 0) = ((MR_Box) (ll_backend__peephole__V_113_113));
#line 311 "peephole.m"
                                    MR_hl_field(MR_mktag(0), ll_backend__peephole__V_112_112, 1) = ((MR_Box) (ll_backend__peephole__Comment1_87));
#line 311 "peephole.m"
                                  }
#line 313 "peephole.m"
                                  {
#line 313 "peephole.m"
                                    ll_backend__peephole__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_115_115, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
#line 313 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_115_115, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_84));
#line 313 "peephole.m"
                                  }
#line 311 "peephole.m"
                                  {
#line 311 "peephole.m"
                                    ll_backend__peephole__InstrsPrime_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 0) = ((MR_Box) (ll_backend__peephole__V_112_112));
#line 311 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 1) = ((MR_Box) (ll_backend__peephole__V_115_115));
#line 311 "peephole.m"
                                  }
#line 310 "peephole.m"
                                  ll_backend__peephole__succeeded = MR_TRUE;
#line 310 "peephole.m"
                                }
#line 315 "peephole.m"
                              else
#line 337 "peephole.m"
                                {
#line 316 "peephole.m"
                                  MR_Word ll_backend__peephole__V_89_89;

#line 316 "peephole.m"
                                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Redoip0_73)) == (MR_mktag((MR_Integer) 1)));
#line 316 "peephole.m"
                                  if (ll_backend__peephole__succeeded)
#line 316 "peephole.m"
                                    {
#line 316 "peephole.m"
                                      ll_backend__peephole__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Redoip0_73, (MR_Integer) 0)));
#line 319 "peephole.m"
                                      ll_backend__peephole__succeeded = (ll_backend__peephole__Target_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 326 "peephole.m"
                                      if (ll_backend__peephole__succeeded)
#line 321 "peephole.m"
                                        {
#line 321 "peephole.m"
                                          MR_Word ll_backend__peephole__V_120_120;
#line 321 "peephole.m"
                                          MR_Word ll_backend__peephole__V_121_121;
#line 321 "peephole.m"
                                          MR_Word ll_backend__peephole__V_123_123;

#line 322 "peephole.m"
                                          {
#line 322 "peephole.m"
                                            ll_backend__peephole__V_121_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 322 "peephole.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_121_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 322 "peephole.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_121_121, 1) = ((MR_Box) (ll_backend__peephole__Test_85));
#line 322 "peephole.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__peephole__V_121_121, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 322 "peephole.m"
                                          }
#line 322 "peephole.m"
                                          {
#line 322 "peephole.m"
                                            ll_backend__peephole__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "peephole.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__peephole__V_120_120, 0) = ((MR_Box) (ll_backend__peephole__V_121_121));
#line 322 "peephole.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__peephole__V_120_120, 1) = ((MR_Box) (ll_backend__peephole__Comment1_87));
#line 322 "peephole.m"
                                          }
#line 324 "peephole.m"
                                          {
#line 324 "peephole.m"
                                            ll_backend__peephole__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "peephole.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__V_123_123, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
#line 324 "peephole.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__V_123_123, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_84));
#line 324 "peephole.m"
                                          }
#line 322 "peephole.m"
                                          {
#line 322 "peephole.m"
                                            ll_backend__peephole__InstrsPrime_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "peephole.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 0) = ((MR_Box) (ll_backend__peephole__V_120_120));
#line 322 "peephole.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 1) = ((MR_Box) (ll_backend__peephole__V_123_123));
#line 322 "peephole.m"
                                          }
#line 321 "peephole.m"
                                          ll_backend__peephole__succeeded = MR_TRUE;
#line 321 "peephole.m"
                                        }
#line 326 "peephole.m"
                                      else
#line 334 "peephole.m"
                                        {
#line 334 "peephole.m"
                                          MR_Word ll_backend__peephole__V_124_124;
#line 334 "peephole.m"
                                          MR_Word ll_backend__peephole__V_125_125;
#line 334 "peephole.m"
                                          MR_Word ll_backend__peephole__V_126_126;

#line 327 "peephole.m"
                                          ll_backend__peephole__succeeded = (ll_backend__peephole__Target_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 334 "peephole.m"
                                          if (ll_backend__peephole__succeeded)
#line 334 "peephole.m"
                                            {
#line 331 "peephole.m"
                                              {
#line 331 "peephole.m"
                                                ll_backend__peephole__V_126_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 331 "peephole.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__peephole__V_126_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 331 "peephole.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__peephole__V_126_126, 1) = ((MR_Box) (ll_backend__peephole__Test_85));
#line 331 "peephole.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__peephole__V_126_126, 2) = ((MR_Box) (ll_backend__peephole__Redoip0_73));
#line 331 "peephole.m"
                                              }
#line 331 "peephole.m"
                                              {
#line 331 "peephole.m"
                                                ll_backend__peephole__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "peephole.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__peephole__V_125_125, 0) = ((MR_Box) (ll_backend__peephole__V_126_126));
#line 331 "peephole.m"
                                                MR_hl_field(MR_mktag(0), ll_backend__peephole__V_125_125, 1) = ((MR_Box) (ll_backend__peephole__Comment1_87));
#line 331 "peephole.m"
                                              }
#line 332 "peephole.m"
                                              {
#line 332 "peephole.m"
                                                ll_backend__peephole__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "peephole.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__peephole__V_124_124, 0) = ((MR_Box) (ll_backend__peephole__V_125_125));
#line 332 "peephole.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__peephole__V_124_124, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_84));
#line 332 "peephole.m"
                                              }
#line 330 "peephole.m"
                                              {
#line 330 "peephole.m"
                                                ll_backend__peephole__InstrsPrime_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "peephole.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
#line 330 "peephole.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__peephole__InstrsPrime_88, 1) = ((MR_Box) (ll_backend__peephole__V_124_124));
#line 330 "peephole.m"
                                              }
#line 330 "peephole.m"
                                              ll_backend__peephole__succeeded = MR_TRUE;
#line 334 "peephole.m"
                                            }
#line 334 "peephole.m"
                                        }
#line 316 "peephole.m"
                                    }
#line 337 "peephole.m"
                                }
#line 305 "peephole.m"
                            }
#line 304 "peephole.m"
                        }
#line 342 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 341 "peephole.m"
                        {
#line 341 "peephole.m"
                          *ll_backend__peephole__Instrs_4 = ll_backend__peephole__InstrsPrime_88;
#line 341 "peephole.m"
                          ll_backend__peephole__succeeded = MR_TRUE;
#line 341 "peephole.m"
                        }
#line 342 "peephole.m"
                      else
#line 348 "peephole.m"
                        {
#line 348 "peephole.m"
                          MR_String ll_backend__peephole__Comment2_90;
#line 348 "peephole.m"
                          MR_Word ll_backend__peephole__Instrs2_154;
#line 343 "peephole.m"
                          MR_Word ll_backend__peephole__V_127_127;
#line 343 "peephole.m"
                          MR_Word ll_backend__peephole__V_128_128;
#line 343 "peephole.m"
                          MR_Word ll_backend__peephole__Instrs1_144;
#line 343 "peephole.m"
                          MR_Word ll_backend__peephole__Instr1_145;

#line 343 "peephole.m"
                          {
#line 343 "peephole.m"
                            ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Instrs1_144);
                          }
#line 344 "peephole.m"
                          ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_144)) == (MR_mktag((MR_Integer) 1)));
#line 344 "peephole.m"
                          if (ll_backend__peephole__succeeded)
#line 344 "peephole.m"
                            {
#line 344 "peephole.m"
                              ll_backend__peephole__Instr1_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_144, (MR_Integer) 0)));
#line 344 "peephole.m"
                              ll_backend__peephole__Instrs2_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_144, (MR_Integer) 1)));
#line 345 "peephole.m"
                              ll_backend__peephole__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_145, (MR_Integer) 0)));
#line 345 "peephole.m"
                              ll_backend__peephole__Comment2_90 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_145, (MR_Integer) 1)));
#line 345 "peephole.m"
                              ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_127_127)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_127_127, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 345 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 345 "peephole.m"
                                {
#line 345 "peephole.m"
                                  ll_backend__peephole__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_127_127, (MR_Integer) 1)));
#line 345 "peephole.m"
                                  ll_backend__peephole__succeeded = (ll_backend__peephole__V_128_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 345 "peephole.m"
                                }
#line 344 "peephole.m"
                            }
#line 348 "peephole.m"
                          if (ll_backend__peephole__succeeded)
#line 347 "peephole.m"
                            {
#line 347 "peephole.m"
                              MR_Word ll_backend__peephole__V_129_129;

#line 347 "peephole.m"
                              {
#line 347 "peephole.m"
                                ll_backend__peephole__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 347 "peephole.m"
                                MR_hl_field(MR_mktag(0), ll_backend__peephole__V_129_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[9])));
#line 347 "peephole.m"
                                MR_hl_field(MR_mktag(0), ll_backend__peephole__V_129_129, 1) = ((MR_Box) (ll_backend__peephole__Comment2_90));
#line 347 "peephole.m"
                              }
#line 347 "peephole.m"
                              {
#line 347 "peephole.m"
                                MR_Word base;
#line 347 "peephole.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "peephole.m"
                                *ll_backend__peephole__Instrs_4 = base;
#line 347 "peephole.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__V_129_129));
#line 347 "peephole.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_154));
#line 347 "peephole.m"
                              }
#line 347 "peephole.m"
                              ll_backend__peephole__succeeded = MR_TRUE;
#line 347 "peephole.m"
                            }
#line 348 "peephole.m"
                          else
#line 357 "peephole.m"
                            {
#line 357 "peephole.m"
                              MR_Word ll_backend__peephole__Straight_91;
#line 357 "peephole.m"
                              MR_Word ll_backend__peephole__Instrs2_151;
#line 349 "peephole.m"
                              MR_Word ll_backend__peephole__V_132_132;
#line 349 "peephole.m"
                              MR_Word ll_backend__peephole__V_133_133;
#line 349 "peephole.m"
                              MR_Word ll_backend__peephole__Instrs1_146;
#line 349 "peephole.m"
                              MR_Word ll_backend__peephole__Instr1_147;
#line 352 "peephole.m"
                              MR_String ll_backend__peephole__V_93_93;
#line 352 "peephole.m"
                              MR_Word ll_backend__peephole__V_92_92;

#line 349 "peephole.m"
                              ll_backend__peephole__succeeded = (ll_backend__peephole__Redoip0_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 349 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 349 "peephole.m"
                                {
#line 350 "peephole.m"
                                  {
#line 350 "peephole.m"
                                    ll_backend__opt_util__no_stack_straight_line_3_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Straight_91, &ll_backend__peephole__Instrs1_146);
                                  }
#line 351 "peephole.m"
                                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_146)) == (MR_mktag((MR_Integer) 1)));
#line 351 "peephole.m"
                                  if (ll_backend__peephole__succeeded)
#line 351 "peephole.m"
                                    {
#line 351 "peephole.m"
                                      ll_backend__peephole__Instr1_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_146, (MR_Integer) 0)));
#line 351 "peephole.m"
                                      ll_backend__peephole__Instrs2_151 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_146, (MR_Integer) 1)));
#line 352 "peephole.m"
                                      ll_backend__peephole__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_147, (MR_Integer) 0)));
#line 352 "peephole.m"
                                      ll_backend__peephole__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_147, (MR_Integer) 1)));
#line 352 "peephole.m"
                                      ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_132_132)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_132_132, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 352 "peephole.m"
                                      if (ll_backend__peephole__succeeded)
#line 352 "peephole.m"
                                        {
#line 352 "peephole.m"
                                          ll_backend__peephole__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_132_132, (MR_Integer) 1)));
#line 352 "peephole.m"
                                          ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_133_133)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_133_133, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 352 "peephole.m"
                                          if (ll_backend__peephole__succeeded)
#line 352 "peephole.m"
                                            ll_backend__peephole__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_133_133, (MR_Integer) 1)));
#line 352 "peephole.m"
                                        }
#line 351 "peephole.m"
                                    }
#line 349 "peephole.m"
                                }
#line 357 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 355 "peephole.m"
                                {
#line 355 "peephole.m"
                                  MR_Word ll_backend__peephole__V_137_137;

#line 356 "peephole.m"
                                  {
#line 356 "peephole.m"
                                    ll_backend__peephole__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_137_137, 0) = ((MR_Box) (&ll_backend__peephole_scalar_common_1[11]));
#line 356 "peephole.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__peephole__V_137_137, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_151));
#line 356 "peephole.m"
                                  }
#line 356 "peephole.m"
                                  {
#line 356 "peephole.m"
                                    *ll_backend__peephole__Instrs_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__peephole__Straight_91, ll_backend__peephole__V_137_137);
                                  }
#line 355 "peephole.m"
                                  ll_backend__peephole__succeeded = MR_TRUE;
#line 355 "peephole.m"
                                }
#line 357 "peephole.m"
                              else
#line 366 "peephole.m"
                                {
#line 366 "peephole.m"
                                  MR_Word ll_backend__peephole__TypeCtorInfo_227_227;
#line 366 "peephole.m"
                                  MR_Word ll_backend__peephole__UntilSucceed_95;
#line 366 "peephole.m"
                                  MR_String ll_backend__peephole__SucceedComment_96;
#line 366 "peephole.m"
                                  MR_Word ll_backend__peephole__DiscardUinstr_97;
#line 366 "peephole.m"
                                  MR_String ll_backend__peephole__DiscardComment_98;
#line 366 "peephole.m"
                                  MR_Word ll_backend__peephole__DiscardInstr_99;
#line 366 "peephole.m"
                                  MR_Word ll_backend__peephole__V_138_138;
#line 366 "peephole.m"
                                  MR_Word ll_backend__peephole__V_139_139;
#line 366 "peephole.m"
                                  MR_String ll_backend__peephole__V_140_140;
#line 366 "peephole.m"
                                  MR_Word ll_backend__peephole__V_141_141;
#line 366 "peephole.m"
                                  MR_Word ll_backend__peephole__V_142_142;
#line 366 "peephole.m"
                                  MR_Word ll_backend__peephole__Instrs2_148;

#line 358 "peephole.m"
                                  ll_backend__peephole__succeeded = (ll_backend__peephole__Redoip0_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 366 "peephole.m"
                                  if (ll_backend__peephole__succeeded)
#line 366 "peephole.m"
                                    {
#line 359 "peephole.m"
                                      {
#line 359 "peephole.m"
                                        ll_backend__peephole__succeeded = ll_backend__opt_util__may_replace_succeed_with_succeed_discard_4_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__UntilSucceed_95, &ll_backend__peephole__SucceedComment_96, &ll_backend__peephole__Instrs2_148);
                                      }
#line 366 "peephole.m"
                                      if (ll_backend__peephole__succeeded)
#line 366 "peephole.m"
                                        {
#line 362 "peephole.m"
                                          ll_backend__peephole__V_139_139 = (MR_Integer) 0;
#line 363 "peephole.m"
                                          ll_backend__peephole__V_140_140 = (MR_String) " (added discard)";
#line 362 "peephole.m"
                                          ll_backend__peephole__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[12]);
#line 362 "peephole.m"
                                          ll_backend__peephole__DiscardUinstr_97 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__peephole_scalar_common_1[13]);
#line 363 "peephole.m"
                                          {
#line 363 "peephole.m"
                                            ll_backend__peephole__DiscardComment_98 = mercury__string__f_43_43_2_f_0(ll_backend__peephole__SucceedComment_96, ll_backend__peephole__V_140_140);
                                          }
#line 3273 "ll_backend.peephole.c"
                                          ll_backend__peephole__TypeCtorInfo_227_227 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 364 "peephole.m"
                                          {
#line 364 "peephole.m"
                                            ll_backend__peephole__DiscardInstr_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 364 "peephole.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__peephole__DiscardInstr_99, 0) = ((MR_Box) (ll_backend__peephole__DiscardUinstr_97));
#line 364 "peephole.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__peephole__DiscardInstr_99, 1) = ((MR_Box) (ll_backend__peephole__DiscardComment_98));
#line 364 "peephole.m"
                                          }
#line 365 "peephole.m"
                                          {
#line 365 "peephole.m"
                                            ll_backend__peephole__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "peephole.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__V_141_141, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
#line 365 "peephole.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__V_141_141, 1) = ((MR_Box) (ll_backend__peephole__UntilSucceed_95));
#line 365 "peephole.m"
                                          }
#line 365 "peephole.m"
                                          {
#line 365 "peephole.m"
                                            ll_backend__peephole__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "peephole.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__V_142_142, 0) = ((MR_Box) (ll_backend__peephole__DiscardInstr_99));
#line 365 "peephole.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__peephole__V_142_142, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_148));
#line 365 "peephole.m"
                                          }
#line 365 "peephole.m"
                                          {
#line 365 "peephole.m"
                                            *ll_backend__peephole__Instrs_4 = mercury__list__f_43_43_2_f_0(ll_backend__peephole__TypeCtorInfo_227_227, ll_backend__peephole__V_141_141, ll_backend__peephole__V_142_142);
                                          }
#line 365 "peephole.m"
                                          ll_backend__peephole__succeeded = MR_TRUE;
#line 366 "peephole.m"
                                        }
#line 366 "peephole.m"
                                    }
#line 366 "peephole.m"
                                }
#line 357 "peephole.m"
                            }
#line 348 "peephole.m"
                        }
#line 342 "peephole.m"
                    }
#line 283 "peephole.m"
                }
#line 281 "peephole.m"
            }
#line 166 "peephole.m"
            break;
#line 166 "peephole.m"
          case (MR_Integer) 7:
#line 166 "peephole.m"
            {
#line 166 "peephole.m"
              MR_Word ll_backend__peephole__TypeCtorInfo_223_223 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 166 "peephole.m"
              MR_Word ll_backend__peephole__TypeInfo_224_224 = (MR_Word) &ll_backend__peephole_scalar_common_1[0];
#line 166 "peephole.m"
              MR_Word ll_backend__peephole__SelectorRval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
#line 166 "peephole.m"
              MR_Word ll_backend__peephole__Labels_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
#line 166 "peephole.m"
              MR_Word ll_backend__peephole__LabelMap_13;
#line 166 "peephole.m"
              MR_Word ll_backend__peephole__LabelValsList_14;
#line 166 "peephole.m"
              MR_Word ll_backend__peephole__V_27_27;
#line 176 "peephole.m"
              MR_Word ll_backend__peephole__Label_15;
#line 172 "peephole.m"
              MR_Word ll_backend__peephole__V_28_28;
#line 172 "peephole.m"
              MR_Word ll_backend__peephole__V_29_29;
#line 172 "peephole.m"
              MR_Word ll_backend__peephole__V_16_16;

#line 169 "peephole.m"
              {
#line 169 "peephole.m"
                ll_backend__peephole__V_27_27 = mercury__map__init_0_f_0(ll_backend__peephole__TypeCtorInfo_223_223, ll_backend__peephole__TypeInfo_224_224);
              }
#line 169 "peephole.m"
              {
#line 169 "peephole.m"
                ll_backend__peephole__succeeded = ll_backend__peephole__build_peephole_jump_label_map_4_p_0(ll_backend__peephole__Labels_12, (MR_Integer) 0, ll_backend__peephole__V_27_27, &ll_backend__peephole__LabelMap_13);
              }
#line 166 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 166 "peephole.m"
                {
#line 170 "peephole.m"
                  {
#line 170 "peephole.m"
                    mercury__map__to_assoc_list_2_p_0(ll_backend__peephole__TypeCtorInfo_223_223, ll_backend__peephole__TypeInfo_224_224, ll_backend__peephole__LabelMap_13, &ll_backend__peephole__LabelValsList_14);
                  }
#line 172 "peephole.m"
                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__LabelValsList_14)) == (MR_mktag((MR_Integer) 1)));
#line 172 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 172 "peephole.m"
                    {
#line 172 "peephole.m"
                      ll_backend__peephole__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__LabelValsList_14, (MR_Integer) 0)));
#line 172 "peephole.m"
                      ll_backend__peephole__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__LabelValsList_14, (MR_Integer) 1)));
#line 172 "peephole.m"
                      ll_backend__peephole__succeeded = (ll_backend__peephole__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 172 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 172 "peephole.m"
                        {
#line 172 "peephole.m"
                          ll_backend__peephole__Label_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_28_28, (MR_Integer) 0)));
#line 172 "peephole.m"
                          ll_backend__peephole__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_28_28, (MR_Integer) 1)));
#line 172 "peephole.m"
                          ll_backend__peephole__succeeded = MR_TRUE;
#line 172 "peephole.m"
                        }
#line 172 "peephole.m"
                    }
#line 176 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 174 "peephole.m"
                    {
#line 174 "peephole.m"
                      MR_Word ll_backend__peephole__GotoInstr_17;
#line 174 "peephole.m"
                      MR_Word ll_backend__peephole__V_30_30;
#line 174 "peephole.m"
                      MR_Word ll_backend__peephole__V_31_31;

#line 174 "peephole.m"
                      {
#line 174 "peephole.m"
                        ll_backend__peephole__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 174 "peephole.m"
                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_31_31, 0) = ((MR_Box) (ll_backend__peephole__Label_15));
#line 174 "peephole.m"
                      }
#line 174 "peephole.m"
                      {
#line 174 "peephole.m"
                        ll_backend__peephole__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 174 "peephole.m"
                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_30_30, 1) = ((MR_Box) (ll_backend__peephole__V_31_31));
#line 174 "peephole.m"
                      }
#line 174 "peephole.m"
                      {
#line 174 "peephole.m"
                        ll_backend__peephole__GotoInstr_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 174 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__GotoInstr_17, 0) = ((MR_Box) (ll_backend__peephole__V_30_30));
#line 174 "peephole.m"
                        MR_hl_field(MR_mktag(0), ll_backend__peephole__GotoInstr_17, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
#line 174 "peephole.m"
                      }
#line 175 "peephole.m"
                      {
#line 175 "peephole.m"
                        MR_Word base;
#line 175 "peephole.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "peephole.m"
                        *ll_backend__peephole__Instrs_4 = base;
#line 175 "peephole.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__GotoInstr_17));
#line 175 "peephole.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs0_2));
#line 175 "peephole.m"
                      }
#line 174 "peephole.m"
                      ll_backend__peephole__succeeded = MR_TRUE;
#line 174 "peephole.m"
                    }
#line 176 "peephole.m"
                  else
#line 187 "peephole.m"
                    {
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__LabelVals1_18;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__LabelVals2_19;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__OneValLabel_20;
#line 187 "peephole.m"
                      MR_Integer ll_backend__peephole__Val_21;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__OtherLabel_22;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__CondRval_23;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__CommentInstr_24;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__BranchInstr_25;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__V_32_32;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__V_33_33;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__V_34_34;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__V_35_35;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__V_36_36;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__V_37_37;
#line 187 "peephole.m"
                      MR_String ll_backend__peephole__V_38_38;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__V_39_39;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__V_40_40;
#line 187 "peephole.m"
                      MR_String ll_backend__peephole__V_41_41;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__V_42_42;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__V_43_43;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__V_44_44;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__V_45_45;
#line 187 "peephole.m"
                      MR_Word ll_backend__peephole__GotoInstr_46;

#line 177 "peephole.m"
                      ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__LabelValsList_14)) == (MR_mktag((MR_Integer) 1)));
#line 177 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 177 "peephole.m"
                        {
#line 177 "peephole.m"
                          ll_backend__peephole__LabelVals1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__LabelValsList_14, (MR_Integer) 0)));
#line 177 "peephole.m"
                          ll_backend__peephole__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__LabelValsList_14, (MR_Integer) 1)));
#line 177 "peephole.m"
                          ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 177 "peephole.m"
                          if (ll_backend__peephole__succeeded)
#line 177 "peephole.m"
                            {
#line 177 "peephole.m"
                              ll_backend__peephole__LabelVals2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__V_32_32, (MR_Integer) 0)));
#line 177 "peephole.m"
                              ll_backend__peephole__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__V_32_32, (MR_Integer) 1)));
#line 177 "peephole.m"
                              ll_backend__peephole__succeeded = (ll_backend__peephole__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "peephole.m"
                              if (ll_backend__peephole__succeeded)
#line 187 "peephole.m"
                                {
#line 178 "peephole.m"
                                  {
#line 178 "peephole.m"
                                    ll_backend__peephole__succeeded = ll_backend__peephole__peephole_pick_one_val_label_5_p_0(ll_backend__peephole__LabelVals1_18, ll_backend__peephole__LabelVals2_19, &ll_backend__peephole__OneValLabel_20, &ll_backend__peephole__Val_21, &ll_backend__peephole__OtherLabel_22);
                                  }
#line 187 "peephole.m"
                                  if (ll_backend__peephole__succeeded)
#line 187 "peephole.m"
                                    {
#line 181 "peephole.m"
                                      ll_backend__peephole__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
#line 182 "peephole.m"
                                      ll_backend__peephole__V_38_38 = (MR_String) "";
#line 184 "peephole.m"
                                      ll_backend__peephole__V_41_41 = (MR_String) "";
#line 181 "peephole.m"
                                      {
#line 181 "peephole.m"
                                        ll_backend__peephole__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 181 "peephole.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_36_36, 0) = ((MR_Box) (ll_backend__peephole__Val_21));
#line 181 "peephole.m"
                                      }
#line 181 "peephole.m"
                                      {
#line 181 "peephole.m"
                                        ll_backend__peephole__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "peephole.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 181 "peephole.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_35_35, 1) = ((MR_Box) (ll_backend__peephole__V_36_36));
#line 181 "peephole.m"
                                      }
#line 181 "peephole.m"
                                      {
#line 181 "peephole.m"
                                        ll_backend__peephole__CondRval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 181 "peephole.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__CondRval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 181 "peephole.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__CondRval_23, 1) = ((MR_Box) (ll_backend__peephole__V_34_34));
#line 181 "peephole.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__CondRval_23, 2) = ((MR_Box) (ll_backend__peephole__SelectorRval_11));
#line 181 "peephole.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__CondRval_23, 3) = ((MR_Box) (ll_backend__peephole__V_35_35));
#line 181 "peephole.m"
                                      }
#line 182 "peephole.m"
                                      {
#line 182 "peephole.m"
                                        ll_backend__peephole__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 182 "peephole.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_37_37, 0) = ((MR_Box) (ll_backend__peephole__V_234_234));
#line 182 "peephole.m"
                                      }
#line 182 "peephole.m"
                                      {
#line 182 "peephole.m"
                                        ll_backend__peephole__CommentInstr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 182 "peephole.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__peephole__CommentInstr_24, 0) = ((MR_Box) (ll_backend__peephole__V_37_37));
#line 182 "peephole.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__peephole__CommentInstr_24, 1) = ((MR_Box) (ll_backend__peephole__V_38_38));
#line 182 "peephole.m"
                                      }
#line 183 "peephole.m"
                                      {
#line 183 "peephole.m"
                                        ll_backend__peephole__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 183 "peephole.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_40_40, 0) = ((MR_Box) (ll_backend__peephole__OneValLabel_20));
#line 183 "peephole.m"
                                      }
#line 183 "peephole.m"
                                      {
#line 183 "peephole.m"
                                        ll_backend__peephole__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 183 "peephole.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 183 "peephole.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_39_39, 1) = ((MR_Box) (ll_backend__peephole__CondRval_23));
#line 183 "peephole.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_39_39, 2) = ((MR_Box) (ll_backend__peephole__V_40_40));
#line 183 "peephole.m"
                                      }
#line 183 "peephole.m"
                                      {
#line 183 "peephole.m"
                                        ll_backend__peephole__BranchInstr_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "peephole.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__peephole__BranchInstr_25, 0) = ((MR_Box) (ll_backend__peephole__V_39_39));
#line 183 "peephole.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__peephole__BranchInstr_25, 1) = ((MR_Box) (ll_backend__peephole__V_41_41));
#line 183 "peephole.m"
                                      }
#line 185 "peephole.m"
                                      {
#line 185 "peephole.m"
                                        ll_backend__peephole__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 185 "peephole.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_43_43, 0) = ((MR_Box) (ll_backend__peephole__OtherLabel_22));
#line 185 "peephole.m"
                                      }
#line 185 "peephole.m"
                                      {
#line 185 "peephole.m"
                                        ll_backend__peephole__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "peephole.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 185 "peephole.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__peephole__V_42_42, 1) = ((MR_Box) (ll_backend__peephole__V_43_43));
#line 185 "peephole.m"
                                      }
#line 185 "peephole.m"
                                      {
#line 185 "peephole.m"
                                        ll_backend__peephole__GotoInstr_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "peephole.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__peephole__GotoInstr_46, 0) = ((MR_Box) (ll_backend__peephole__V_42_42));
#line 185 "peephole.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__peephole__GotoInstr_46, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
#line 185 "peephole.m"
                                      }
#line 186 "peephole.m"
                                      {
#line 186 "peephole.m"
                                        ll_backend__peephole__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "peephole.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_45_45, 0) = ((MR_Box) (ll_backend__peephole__GotoInstr_46));
#line 186 "peephole.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_45_45, 1) = ((MR_Box) (ll_backend__peephole__Instrs0_2));
#line 186 "peephole.m"
                                      }
#line 186 "peephole.m"
                                      {
#line 186 "peephole.m"
                                        ll_backend__peephole__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "peephole.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_44_44, 0) = ((MR_Box) (ll_backend__peephole__BranchInstr_25));
#line 186 "peephole.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__peephole__V_44_44, 1) = ((MR_Box) (ll_backend__peephole__V_45_45));
#line 186 "peephole.m"
                                      }
#line 186 "peephole.m"
                                      {
#line 186 "peephole.m"
                                        MR_Word base;
#line 186 "peephole.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "peephole.m"
                                        *ll_backend__peephole__Instrs_4 = base;
#line 186 "peephole.m"
                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__CommentInstr_24));
#line 186 "peephole.m"
                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__V_44_44));
#line 186 "peephole.m"
                                      }
#line 186 "peephole.m"
                                      ll_backend__peephole__succeeded = MR_TRUE;
#line 187 "peephole.m"
                                    }
#line 187 "peephole.m"
                                }
#line 177 "peephole.m"
                            }
#line 177 "peephole.m"
                        }
#line 187 "peephole.m"
                    }
#line 166 "peephole.m"
                }
#line 166 "peephole.m"
            }
#line 166 "peephole.m"
            break;
#line 166 "peephole.m"
          case (MR_Integer) 9:
#line 200 "peephole.m"
            {
#line 200 "peephole.m"
              MR_Word ll_backend__peephole__Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
#line 200 "peephole.m"
              MR_Word ll_backend__peephole__CodeAddr_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
#line 213 "peephole.m"
              MR_Word ll_backend__peephole__Taken_56;

#line 204 "peephole.m"
              {
#line 204 "peephole.m"
                ll_backend__peephole__succeeded = ll_backend__opt_util__is_const_condition_2_p_0(ll_backend__peephole__Rval_54, &ll_backend__peephole__Taken_56);
              }
#line 213 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 209 "peephole.m"
                {
#line 209 "peephole.m"
#line 209 "peephole.m"
                  switch (ll_backend__peephole__Taken_56) {
#line 209 "peephole.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 209 "peephole.m"
                    case (MR_Integer) 0:
#line 210 "peephole.m"
                      *ll_backend__peephole__Instrs_4 = ll_backend__peephole__Instrs0_2;
#line 209 "peephole.m"
                      break;
#line 209 "peephole.m"
                    case (MR_Integer) 1:
#line 207 "peephole.m"
                      {
#line 207 "peephole.m"
                        MR_Word ll_backend__peephole__V_63_63;
#line 207 "peephole.m"
                        MR_Word ll_backend__peephole__V_64_64;

#line 208 "peephole.m"
                        {
#line 208 "peephole.m"
                          ll_backend__peephole__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 208 "peephole.m"
                          MR_hl_field(MR_mktag(3), ll_backend__peephole__V_64_64, 1) = ((MR_Box) (ll_backend__peephole__CodeAddr_55));
#line 208 "peephole.m"
                        }
#line 208 "peephole.m"
                        {
#line 208 "peephole.m"
                          ll_backend__peephole__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "peephole.m"
                          MR_hl_field(MR_mktag(0), ll_backend__peephole__V_63_63, 0) = ((MR_Box) (ll_backend__peephole__V_64_64));
#line 208 "peephole.m"
                          MR_hl_field(MR_mktag(0), ll_backend__peephole__V_63_63, 1) = ((MR_Box) (ll_backend__peephole__V_234_234));
#line 208 "peephole.m"
                        }
#line 208 "peephole.m"
                        {
#line 208 "peephole.m"
                          MR_Word base;
#line 208 "peephole.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "peephole.m"
                          *ll_backend__peephole__Instrs_4 = base;
#line 208 "peephole.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__V_63_63));
#line 208 "peephole.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs0_2));
#line 208 "peephole.m"
                        }
#line 207 "peephole.m"
                      }
#line 209 "peephole.m"
                      break;
#line 209 "peephole.m"
                  }
#line 209 "peephole.m"
                  ll_backend__peephole__succeeded = MR_TRUE;
#line 209 "peephole.m"
                }
#line 213 "peephole.m"
              else
#line 219 "peephole.m"
                {
#line 214 "peephole.m"
                  MR_Word ll_backend__peephole__Instrs1_57;
#line 214 "peephole.m"
                  MR_Word ll_backend__peephole__Instr1_58;
#line 214 "peephole.m"
                  MR_Word ll_backend__peephole__V_65_65;
#line 214 "peephole.m"
                  MR_Word ll_backend__peephole__V_232_232;
#line 215 "peephole.m"
                  MR_Word ll_backend__peephole__V_59_59;
#line 216 "peephole.m"
                  MR_String ll_backend__peephole__V_60_60;

#line 214 "peephole.m"
                  {
#line 214 "peephole.m"
                    ll_backend__opt_util__skip_comments_2_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Instrs1_57);
                  }
#line 215 "peephole.m"
                  ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_57)) == (MR_mktag((MR_Integer) 1)));
#line 215 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 215 "peephole.m"
                    {
#line 215 "peephole.m"
                      ll_backend__peephole__Instr1_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_57, (MR_Integer) 0)));
#line 215 "peephole.m"
                      ll_backend__peephole__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_57, (MR_Integer) 1)));
#line 216 "peephole.m"
                      ll_backend__peephole__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_58, (MR_Integer) 0)));
#line 216 "peephole.m"
                      ll_backend__peephole__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_58, (MR_Integer) 1)));
#line 216 "peephole.m"
                      ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_65_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_65_65, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 216 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 216 "peephole.m"
                        {
#line 216 "peephole.m"
                          ll_backend__peephole__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_65_65, (MR_Integer) 1)));
#line 216 "peephole.m"
                          {
#line 216 "peephole.m"
                            ll_backend__peephole__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__peephole__CodeAddr_55, ll_backend__peephole__V_232_232);
                          }
#line 216 "peephole.m"
                        }
#line 215 "peephole.m"
                    }
#line 219 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 218 "peephole.m"
                    {
#line 218 "peephole.m"
                      *ll_backend__peephole__Instrs_4 = ll_backend__peephole__Instrs0_2;
#line 218 "peephole.m"
                      ll_backend__peephole__succeeded = MR_TRUE;
#line 218 "peephole.m"
                    }
#line 219 "peephole.m"
                  else
#line 224 "peephole.m"
                    {
#line 224 "peephole.m"
                      MR_Word ll_backend__peephole__Label_61;
#line 221 "peephole.m"
                      MR_Word ll_backend__peephole__V_62_62;

#line 220 "peephole.m"
                      ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__CodeAddr_55)) == (MR_mktag((MR_Integer) 1)));
#line 220 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 220 "peephole.m"
                        {
#line 220 "peephole.m"
                          ll_backend__peephole__Label_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__CodeAddr_55, (MR_Integer) 0)));
#line 221 "peephole.m"
                          {
#line 221 "peephole.m"
                            ll_backend__peephole__succeeded = ll_backend__opt_util__is_this_label_next_3_p_0(ll_backend__peephole__Label_61, ll_backend__peephole__Instrs0_2, &ll_backend__peephole__V_62_62);
                          }
#line 224 "peephole.m"
                          if (ll_backend__peephole__succeeded)
#line 224 "peephole.m"
                            {
#line 223 "peephole.m"
                              *ll_backend__peephole__Instrs_4 = ll_backend__peephole__Instrs0_2;
#line 223 "peephole.m"
                              ll_backend__peephole__succeeded = MR_TRUE;
#line 224 "peephole.m"
                            }
#line 220 "peephole.m"
                        }
#line 224 "peephole.m"
                    }
#line 219 "peephole.m"
                }
#line 200 "peephole.m"
            }
#line 166 "peephole.m"
            break;
#line 166 "peephole.m"
          case (MR_Integer) 20:
#line 376 "peephole.m"
            {
#line 376 "peephole.m"
              MR_Word ll_backend__peephole__Lval_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
#line 376 "peephole.m"
              MR_Word ll_backend__peephole__Instrs1_163;
#line 376 "peephole.m"
              MR_Word ll_backend__peephole__Instr1_164;
#line 376 "peephole.m"
              MR_Word ll_backend__peephole__Instrs2_165;
#line 376 "peephole.m"
              MR_Word ll_backend__peephole__V_169_169;
#line 376 "peephole.m"
              MR_Word ll_backend__peephole__V_170_170;
#line 376 "peephole.m"
              MR_Word ll_backend__peephole__V_233_233;
#line 382 "peephole.m"
              MR_String ll_backend__peephole___Comment1_167;
#line 382 "peephole.m"
              MR_Word ll_backend__peephole___Reason_166;

#line 380 "peephole.m"
              {
#line 380 "peephole.m"
                ll_backend__opt_util__skip_comments_2_p_0(ll_backend__peephole__Instrs0_2, &ll_backend__peephole__Instrs1_163);
              }
#line 381 "peephole.m"
              ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs1_163)) == (MR_mktag((MR_Integer) 1)));
#line 381 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 381 "peephole.m"
                {
#line 381 "peephole.m"
                  ll_backend__peephole__Instr1_164 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_163, (MR_Integer) 0)));
#line 381 "peephole.m"
                  ll_backend__peephole__Instrs2_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs1_163, (MR_Integer) 1)));
#line 382 "peephole.m"
                  ll_backend__peephole__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_164, (MR_Integer) 0)));
#line 382 "peephole.m"
                  ll_backend__peephole___Comment1_167 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr1_164, (MR_Integer) 1)));
#line 382 "peephole.m"
                  ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_169_169)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_169_169, (MR_Integer) 0)))) == (MR_Integer) 21)));
#line 382 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 382 "peephole.m"
                    {
#line 382 "peephole.m"
                      ll_backend__peephole__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_169_169, (MR_Integer) 1)));
#line 382 "peephole.m"
                      ll_backend__peephole___Reason_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_169_169, (MR_Integer) 2)));
#line 382 "peephole.m"
                      ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_170_170)) == (MR_mktag((MR_Integer) 0)));
#line 382 "peephole.m"
                      if (ll_backend__peephole__succeeded)
#line 382 "peephole.m"
                        {
#line 382 "peephole.m"
                          ll_backend__peephole__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_170_170, (MR_Integer) 0)));
#line 382 "peephole.m"
                          {
#line 382 "peephole.m"
                            ll_backend__peephole__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__peephole__Lval_162, ll_backend__peephole__V_233_233);
                          }
#line 376 "peephole.m"
                          if (ll_backend__peephole__succeeded)
#line 376 "peephole.m"
                            {
#line 384 "peephole.m"
                              {
#line 384 "peephole.m"
                                MR_Word base;
#line 384 "peephole.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "peephole.m"
                                *ll_backend__peephole__Instrs_4 = base;
#line 384 "peephole.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_1));
#line 384 "peephole.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs2_165));
#line 384 "peephole.m"
                              }
#line 384 "peephole.m"
                              ll_backend__peephole__succeeded = MR_TRUE;
#line 376 "peephole.m"
                            }
#line 382 "peephole.m"
                        }
#line 382 "peephole.m"
                    }
#line 381 "peephole.m"
                }
#line 376 "peephole.m"
            }
#line 166 "peephole.m"
            break;
#line 166 "peephole.m"
          case (MR_Integer) 24:
#line 440 "peephole.m"
            {
#line 440 "peephole.m"
              MR_Word ll_backend__peephole__TypeCtorInfo_231_231;
#line 440 "peephole.m"
              MR_Integer ll_backend__peephole__N_217 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 1)));
#line 440 "peephole.m"
              MR_Word ll_backend__peephole__Between_220;
#line 440 "peephole.m"
              MR_Word ll_backend__peephole__Remain_221;
#line 442 "peephole.m"
              MR_String ll_backend__peephole__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 2)));
#line 442 "peephole.m"
              MR_Word ll_backend__peephole__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_235_235, (MR_Integer) 3)));

#line 443 "peephole.m"
              {
#line 443 "peephole.m"
                ll_backend__peephole__succeeded = mercury__list__member_2_p_0((MR_Word) &ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0, ((MR_Box) ((MR_Integer) 0)), ll_backend__peephole__InvalidPatterns_3);
              }
#line 443 "peephole.m"
              ll_backend__peephole__succeeded = !(ll_backend__peephole__succeeded);
#line 440 "peephole.m"
              if (ll_backend__peephole__succeeded)
#line 440 "peephole.m"
                {
#line 444 "peephole.m"
                  {
#line 444 "peephole.m"
                    ll_backend__peephole__succeeded = ll_backend__opt_util__no_stackvars_til_decr_sp_4_p_0(ll_backend__peephole__Instrs0_2, ll_backend__peephole__N_217, &ll_backend__peephole__Between_220, &ll_backend__peephole__Remain_221);
                  }
#line 440 "peephole.m"
                  if (ll_backend__peephole__succeeded)
#line 440 "peephole.m"
                    {
#line 4034 "ll_backend.peephole.c"
                      ll_backend__peephole__TypeCtorInfo_231_231 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 445 "peephole.m"
                      {
#line 445 "peephole.m"
                        *ll_backend__peephole__Instrs_4 = mercury__list__f_43_43_2_f_0(ll_backend__peephole__TypeCtorInfo_231_231, ll_backend__peephole__Between_220, ll_backend__peephole__Remain_221);
                      }
#line 445 "peephole.m"
                      ll_backend__peephole__succeeded = MR_TRUE;
#line 440 "peephole.m"
                    }
#line 440 "peephole.m"
                }
#line 440 "peephole.m"
            }
#line 166 "peephole.m"
            break;
#line 166 "peephole.m"
        }
#line 166 "peephole.m"
        break;
#line 166 "peephole.m"
    }
#line 166 "peephole.m"
    return ll_backend__peephole__succeeded;
#line 166 "peephole.m"
  }
#line 156 "peephole.m"
}

#line 128 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole__peephole_pick_one_val_label_5_p_0(
#line 128 "peephole.m"
  MR_Word ll_backend__peephole__LabelVals1_6,
#line 128 "peephole.m"
  MR_Word ll_backend__peephole__LabelVals2_7,
#line 128 "peephole.m"
  MR_Word * ll_backend__peephole__OneValLabel_8,
#line 128 "peephole.m"
  MR_Integer * ll_backend__peephole__Val_9,
#line 128 "peephole.m"
  MR_Word * ll_backend__peephole__OtherLabel_10)
#line 128 "peephole.m"
{
#line 132 "peephole.m"
  {
#line 132 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;
#line 132 "peephole.m"
    MR_Word ll_backend__peephole__Label1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__LabelVals1_6, (MR_Integer) 0)));
#line 132 "peephole.m"
    MR_Word ll_backend__peephole__Vals1_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__LabelVals1_6, (MR_Integer) 1)));
#line 132 "peephole.m"
    MR_Word ll_backend__peephole__Label2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__LabelVals2_7, (MR_Integer) 0)));
#line 132 "peephole.m"
    MR_Word ll_backend__peephole__Vals2_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__LabelVals2_7, (MR_Integer) 1)));
#line 139 "peephole.m"
    MR_Integer ll_backend__peephole__Val1_15;
#line 135 "peephole.m"
    MR_Word ll_backend__peephole__V_17_17;

#line 135 "peephole.m"
    ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Vals1_12)) == (MR_mktag((MR_Integer) 1)));
#line 135 "peephole.m"
    if (ll_backend__peephole__succeeded)
#line 135 "peephole.m"
      {
#line 135 "peephole.m"
        ll_backend__peephole__Val1_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Vals1_12, (MR_Integer) 0)));
#line 135 "peephole.m"
        ll_backend__peephole__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Vals1_12, (MR_Integer) 1)));
#line 135 "peephole.m"
        ll_backend__peephole__succeeded = (ll_backend__peephole__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 135 "peephole.m"
      }
#line 139 "peephole.m"
    if (ll_backend__peephole__succeeded)
#line 136 "peephole.m"
      {
#line 136 "peephole.m"
        *ll_backend__peephole__OneValLabel_8 = ll_backend__peephole__Label1_11;
#line 137 "peephole.m"
        *ll_backend__peephole__Val_9 = ll_backend__peephole__Val1_15;
#line 138 "peephole.m"
        *ll_backend__peephole__OtherLabel_10 = ll_backend__peephole__Label2_13;
#line 136 "peephole.m"
        ll_backend__peephole__succeeded = MR_TRUE;
#line 136 "peephole.m"
      }
#line 139 "peephole.m"
    else
#line 143 "peephole.m"
      {
#line 143 "peephole.m"
        MR_Word ll_backend__peephole__V_18_18;

#line 139 "peephole.m"
        ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Vals2_14)) == (MR_mktag((MR_Integer) 1)));
#line 139 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 139 "peephole.m"
          {
#line 139 "peephole.m"
            *ll_backend__peephole__Val_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Vals2_14, (MR_Integer) 0)));
#line 139 "peephole.m"
            ll_backend__peephole__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Vals2_14, (MR_Integer) 1)));
#line 139 "peephole.m"
            ll_backend__peephole__succeeded = (ll_backend__peephole__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 143 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 143 "peephole.m"
              {
#line 140 "peephole.m"
                *ll_backend__peephole__OneValLabel_8 = ll_backend__peephole__Label2_13;
#line 142 "peephole.m"
                *ll_backend__peephole__OtherLabel_10 = ll_backend__peephole__Label1_11;
#line 142 "peephole.m"
                ll_backend__peephole__succeeded = MR_TRUE;
#line 143 "peephole.m"
              }
#line 139 "peephole.m"
          }
#line 143 "peephole.m"
      }
#line 132 "peephole.m"
    return ll_backend__peephole__succeeded;
#line 132 "peephole.m"
  }
#line 128 "peephole.m"
}

#line 111 "peephole.m"
static MR_bool MR_CALL 
ll_backend__peephole__build_peephole_jump_label_map_4_p_0(
#line 111 "peephole.m"
  MR_Word ll_backend__peephole__HeadVar__1_1,
#line 111 "peephole.m"
  MR_Integer ll_backend__peephole__Val_2,
#line 111 "peephole.m"
  MR_Word ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3,
#line 111 "peephole.m"
  MR_Word * ll_backend__peephole__STATE_VARIABLE_LabelMap_4)
#line 111 "peephole.m"
{
#line 114 "peephole.m"
  while (MR_TRUE)
#line 114 "peephole.m"
    {
#line 114 "peephole.m"
      /* tailcall optimized into a loop */
#line 114 "peephole.m"
      {
#line 114 "peephole.m"
        MR_bool ll_backend__peephole__succeeded;

#line 114 "peephole.m"
        if ((ll_backend__peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 114 "peephole.m"
          {
#line 114 "peephole.m"
            *ll_backend__peephole__STATE_VARIABLE_LabelMap_4 = ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3;
#line 114 "peephole.m"
            ll_backend__peephole__succeeded = MR_TRUE;
#line 114 "peephole.m"
          }
#line 114 "peephole.m"
        else
#line 115 "peephole.m"
          {
#line 115 "peephole.m"
            MR_Word ll_backend__peephole__MaybeLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__1_1, (MR_Integer) 0)));
#line 115 "peephole.m"
            MR_Word ll_backend__peephole__MaybeLabels_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 115 "peephole.m"
            MR_Word ll_backend__peephole__Label_13;
#line 115 "peephole.m"
            MR_Word ll_backend__peephole__STATE_VARIABLE_LabelMap_18_18;
#line 115 "peephole.m"
            MR_Integer ll_backend__peephole__V_22_22;
#line 115 "peephole.m"
            MR_Integer ll_backend__peephole__V_24_24;
#line 119 "peephole.m"
            MR_Word ll_backend__peephole__Vals0_14;
#line 117 "peephole.m"
            MR_Word ll_backend__peephole__TypeCtorInfo_25_25;
#line 117 "peephole.m"
            MR_Word ll_backend__peephole__TypeInfo_26_26;
#line 117 "peephole.m"
            MR_Box ll_backend__peephole__conv0_Vals0_14;

#line 116 "peephole.m"
            ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__MaybeLabel_9)) == (MR_mktag((MR_Integer) 1)));
#line 116 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 116 "peephole.m"
              {
#line 116 "peephole.m"
                ll_backend__peephole__Label_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__MaybeLabel_9, (MR_Integer) 0)));
#line 4233 "ll_backend.peephole.c"
                ll_backend__peephole__TypeCtorInfo_25_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 4235 "ll_backend.peephole.c"
                ll_backend__peephole__TypeInfo_26_26 = (MR_Word) &ll_backend__peephole_scalar_common_1[0];
#line 117 "peephole.m"
                {
#line 117 "peephole.m"
                  ll_backend__peephole__succeeded = mercury__map__search_3_p_0(ll_backend__peephole__TypeCtorInfo_25_25, ll_backend__peephole__TypeInfo_26_26, ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3, ((MR_Box) (ll_backend__peephole__Label_13)), &ll_backend__peephole__conv0_Vals0_14);
                }
#line 117 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 117 "peephole.m"
                  {
#line 117 "peephole.m"
                    ll_backend__peephole__Vals0_14 = ((MR_Word) ll_backend__peephole__conv0_Vals0_14);
#line 117 "peephole.m"
                    ll_backend__peephole__succeeded = MR_TRUE;
#line 117 "peephole.m"
                  }
#line 119 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 118 "peephole.m"
                  {
#line 118 "peephole.m"
                    MR_Word ll_backend__peephole__V_17_17;

#line 118 "peephole.m"
                    {
#line 118 "peephole.m"
                      ll_backend__peephole__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 118 "peephole.m"
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_17_17, 0) = ((MR_Box) (ll_backend__peephole__Val_2));
#line 118 "peephole.m"
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_17_17, 1) = ((MR_Box) (ll_backend__peephole__Vals0_14));
#line 118 "peephole.m"
                    }
#line 118 "peephole.m"
                    {
#line 118 "peephole.m"
                      mercury__map__det_update_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__peephole_scalar_common_1[0], ((MR_Box) (ll_backend__peephole__Label_13)), ((MR_Box) (ll_backend__peephole__V_17_17)), ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3, &ll_backend__peephole__STATE_VARIABLE_LabelMap_18_18);
                    }
#line 118 "peephole.m"
                  }
#line 119 "peephole.m"
                else
#line 120 "peephole.m"
                  {
#line 120 "peephole.m"
                    MR_Word ll_backend__peephole__V_19_19;

#line 120 "peephole.m"
                    {
#line 120 "peephole.m"
                      ll_backend__peephole__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "peephole.m"
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_19_19, 0) = ((MR_Box) (ll_backend__peephole__Val_2));
#line 120 "peephole.m"
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "peephole.m"
                    }
#line 120 "peephole.m"
                    {
#line 120 "peephole.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__peephole_scalar_common_1[0], ((MR_Box) (ll_backend__peephole__Label_13)), ((MR_Box) (ll_backend__peephole__V_19_19)), ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3, &ll_backend__peephole__STATE_VARIABLE_LabelMap_18_18);
                    }
#line 120 "peephole.m"
                  }
#line 122 "peephole.m"
                ll_backend__peephole__V_24_24 = (MR_Integer) 1;
#line 122 "peephole.m"
                ll_backend__peephole__V_22_22 = (ll_backend__peephole__Val_2 + ll_backend__peephole__V_24_24);
#line 122 "peephole.m"
                {
#line 122 "peephole.m"
                  /* direct tailcall eliminated */
#line 122 "peephole.m"
                  {
#line 122 "peephole.m"
                    MR_Word ll_backend__peephole__HeadVar__1__tmp_copy_1 = ll_backend__peephole__MaybeLabels_10;
#line 122 "peephole.m"
                    MR_Integer ll_backend__peephole__Val__tmp_copy_2 = ll_backend__peephole__V_22_22;
#line 122 "peephole.m"
                    MR_Word ll_backend__peephole__STATE_VARIABLE_LabelMap_0__tmp_copy_3 = ll_backend__peephole__STATE_VARIABLE_LabelMap_18_18;

#line 122 "peephole.m"
                    ll_backend__peephole__STATE_VARIABLE_LabelMap_0_3 = ll_backend__peephole__STATE_VARIABLE_LabelMap_0__tmp_copy_3;
#line 122 "peephole.m"
                    ll_backend__peephole__Val_2 = ll_backend__peephole__Val__tmp_copy_2;
#line 122 "peephole.m"
                    ll_backend__peephole__HeadVar__1_1 = ll_backend__peephole__HeadVar__1__tmp_copy_1;
#line 122 "peephole.m"
                  }
#line 122 "peephole.m"
                  continue;
#line 122 "peephole.m"
                }
#line 116 "peephole.m"
              }
#line 115 "peephole.m"
          }
#line 114 "peephole.m"
        return ll_backend__peephole__succeeded;
#line 114 "peephole.m"
      }
#line 114 "peephole.m"
      break;
#line 114 "peephole.m"
    }
#line 111 "peephole.m"
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
#line 96 "peephole.m"
    MR_Word ll_backend__peephole__Instrs2_12;

#line 84 "peephole.m"
    {
#line 84 "peephole.m"
      ll_backend__opt_util__skip_comments_2_p_0(ll_backend__peephole__Instrs0_7, &ll_backend__peephole__Instrs1_11);
    }
#line 86 "peephole.m"
    {
#line 86 "peephole.m"
      ll_backend__peephole__succeeded = ll_backend__peephole__peephole_match_4_p_0(ll_backend__peephole__Instr0_6, ll_backend__peephole__Instrs1_11, ll_backend__peephole__InvalidPatterns_8, &ll_backend__peephole__Instrs2_12);
    }
#line 96 "peephole.m"
    if (ll_backend__peephole__succeeded)
#line 94 "peephole.m"
      {
#line 91 "peephole.m"
        if ((ll_backend__peephole__Instrs2_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 93 "peephole.m"
          *ll_backend__peephole__Instrs_9 = ll_backend__peephole__Instrs2_12;
#line 91 "peephole.m"
        else
#line 89 "peephole.m"
          {
#line 89 "peephole.m"
            MR_Word ll_backend__peephole__Instr2_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_12, (MR_Integer) 0)));
#line 89 "peephole.m"
            MR_Word ll_backend__peephole__Instrs3_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_12, (MR_Integer) 1)));
#line 90 "peephole.m"
            MR_Word ll_backend__peephole__V_15_15;

#line 90 "peephole.m"
            {
#line 90 "peephole.m"
              ll_backend__peephole__peephole_opt_instr_5_p_0(ll_backend__peephole__Instr2_13, ll_backend__peephole__Instrs3_14, ll_backend__peephole__InvalidPatterns_8, ll_backend__peephole__Instrs_9, &ll_backend__peephole__V_15_15);
            }
#line 89 "peephole.m"
          }
#line 95 "peephole.m"
        *ll_backend__peephole__Mod_10 = (MR_Integer) 1;
#line 94 "peephole.m"
      }
#line 96 "peephole.m"
    else
#line 101 "peephole.m"
      {
#line 101 "peephole.m"
        MR_Word ll_backend__peephole__Instrs2_16;
#line 468 "peephole.m"
        MR_Word ll_backend__peephole__Uinstr0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_6, (MR_Integer) 0)));
#line 468 "peephole.m"
        MR_Word ll_backend__peephole__Lval_23;
#line 468 "peephole.m"
        MR_Integer ll_backend__peephole__Tag_24;
#line 468 "peephole.m"
        MR_Word ll_backend__peephole__Base_25;
#line 468 "peephole.m"
        MR_Word ll_backend__peephole__Instrs1_26;
#line 468 "peephole.m"
        MR_Word ll_backend__peephole__V_27_27;
#line 469 "peephole.m"
        MR_String ll_backend__peephole__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_6, (MR_Integer) 1)));
#line 471 "peephole.m"
        MR_Word ll_backend__peephole__TypeCtorInfo_17_29;
#line 471 "peephole.m"
        MR_Word ll_backend__peephole__V_28_28;

#line 470 "peephole.m"
        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__Uinstr0_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 470 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 470 "peephole.m"
          {
#line 470 "peephole.m"
            ll_backend__peephole__Lval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_21, (MR_Integer) 1)));
#line 470 "peephole.m"
            ll_backend__peephole__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__Uinstr0_21, (MR_Integer) 2)));
#line 470 "peephole.m"
            ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_27_27)) == (MR_mktag((MR_Integer) 2)));
#line 470 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 470 "peephole.m"
              {
#line 470 "peephole.m"
                ll_backend__peephole__Tag_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__peephole__V_27_27, (MR_Integer) 0)));
#line 470 "peephole.m"
                ll_backend__peephole__Base_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__peephole__V_27_27, (MR_Integer) 1)));
#line 471 "peephole.m"
                ll_backend__peephole__V_28_28 = (MR_Integer) 1;
#line 4455 "ll_backend.peephole.c"
                ll_backend__peephole__TypeCtorInfo_17_29 = (MR_Word) &ll_backend__peephole__ll_backend__peephole__type_ctor_info_pattern_0;
#line 471 "peephole.m"
                {
#line 471 "peephole.m"
                  ll_backend__peephole__succeeded = mercury__list__member_2_p_0(ll_backend__peephole__TypeCtorInfo_17_29, ((MR_Box) (ll_backend__peephole__V_28_28)), ll_backend__peephole__InvalidPatterns_8);
                }
#line 471 "peephole.m"
                ll_backend__peephole__succeeded = !(ll_backend__peephole__succeeded);
#line 468 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 468 "peephole.m"
                  {
#line 472 "peephole.m"
                    {
#line 472 "peephole.m"
                      ll_backend__peephole__replace_tagged_ptr_components_in_instrs_5_p_0(ll_backend__peephole__Lval_23, ll_backend__peephole__Tag_24, ll_backend__peephole__Base_25, ll_backend__peephole__Instrs1_11, &ll_backend__peephole__Instrs1_26);
                    }
#line 473 "peephole.m"
                    {
#line 473 "peephole.m"
                      ll_backend__peephole__Instrs2_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "peephole.m"
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_16, 0) = ((MR_Box) (ll_backend__peephole__Instr0_6));
#line 473 "peephole.m"
                      MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_16, 1) = ((MR_Box) (ll_backend__peephole__Instrs1_26));
#line 473 "peephole.m"
                    }
#line 473 "peephole.m"
                    ll_backend__peephole__succeeded = MR_TRUE;
#line 468 "peephole.m"
                  }
#line 470 "peephole.m"
              }
#line 470 "peephole.m"
          }
#line 101 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 99 "peephole.m"
          {
#line 99 "peephole.m"
            *ll_backend__peephole__Instrs_9 = ll_backend__peephole__Instrs2_16;
#line 100 "peephole.m"
            *ll_backend__peephole__Mod_10 = (MR_Integer) 1;
#line 99 "peephole.m"
          }
#line 101 "peephole.m"
        else
#line 102 "peephole.m"
          {
#line 102 "peephole.m"
            {
#line 102 "peephole.m"
              MR_Word base;
#line 102 "peephole.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 102 "peephole.m"
              *ll_backend__peephole__Instrs_9 = base;
#line 102 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_6));
#line 102 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs0_7));
#line 102 "peephole.m"
            }
#line 103 "peephole.m"
            *ll_backend__peephole__Mod_10 = (MR_Integer) 0;
#line 102 "peephole.m"
          }
#line 101 "peephole.m"
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
#line 736 "peephole.m"
  {
#line 736 "peephole.m"
    MR_bool ll_backend__peephole__succeeded;

#line 736 "peephole.m"
    if ((ll_backend__peephole__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 736 "peephole.m"
      *ll_backend__peephole__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 736 "peephole.m"
    else
#line 737 "peephole.m"
      {
#line 737 "peephole.m"
        MR_Word ll_backend__peephole__Instr0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__1_1, (MR_Integer) 0)));
#line 737 "peephole.m"
        MR_Word ll_backend__peephole__Instrs0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__HeadVar__1_1, (MR_Integer) 1)));
#line 737 "peephole.m"
        MR_Word ll_backend__peephole__Instrs1_6;
#line 750 "peephole.m"
        MR_Integer ll_backend__peephole__N_7;
#line 750 "peephole.m"
        MR_Word ll_backend__peephole__Instrs5_15;
#line 750 "peephole.m"
        MR_String ll_backend__peephole__Comment_16;
#line 740 "peephole.m"
        MR_Word ll_backend__peephole__Instrs2_9;
#line 740 "peephole.m"
        MR_Word ll_backend__peephole__Instr2_10;
#line 740 "peephole.m"
        MR_Word ll_backend__peephole__Instrs3_11;
#line 740 "peephole.m"
        MR_Word ll_backend__peephole__Instrs4_13;
#line 740 "peephole.m"
        MR_Word ll_backend__peephole__Instr4_14;
#line 740 "peephole.m"
        MR_Word ll_backend__peephole__V_18_18;
#line 740 "peephole.m"
        MR_Word ll_backend__peephole__V_19_19;
#line 740 "peephole.m"
        MR_Word ll_backend__peephole__V_20_20;
#line 740 "peephole.m"
        MR_Word ll_backend__peephole__V_21_21;
#line 740 "peephole.m"
        MR_Word ll_backend__peephole__V_22_22;
#line 740 "peephole.m"
        MR_Word ll_backend__peephole__V_23_23;
#line 740 "peephole.m"
        MR_Word ll_backend__peephole__V_24_24;
#line 740 "peephole.m"
        MR_Integer ll_backend__peephole__V_26_26;
#line 740 "peephole.m"
        MR_String ll_backend__peephole__V_8_8;
#line 743 "peephole.m"
        MR_String ll_backend__peephole__V_12_12;

#line 738 "peephole.m"
        {
#line 738 "peephole.m"
          ll_backend__peephole__combine_decr_sp_2_p_0(ll_backend__peephole__Instrs0_4, &ll_backend__peephole__Instrs1_6);
        }
#line 740 "peephole.m"
        ll_backend__peephole__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_3, (MR_Integer) 0)));
#line 740 "peephole.m"
        ll_backend__peephole__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr0_3, (MR_Integer) 1)));
#line 740 "peephole.m"
        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_18_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_18_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 740 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 740 "peephole.m"
          {
#line 740 "peephole.m"
            ll_backend__peephole__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_18_18, (MR_Integer) 1)));
#line 740 "peephole.m"
            ll_backend__peephole__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_18_18, (MR_Integer) 2)));
#line 740 "peephole.m"
            ll_backend__peephole__succeeded = (ll_backend__peephole__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "peephole.m"
            if (ll_backend__peephole__succeeded)
#line 740 "peephole.m"
              {
#line 740 "peephole.m"
                ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 740 "peephole.m"
                if (ll_backend__peephole__succeeded)
#line 740 "peephole.m"
                  {
#line 740 "peephole.m"
                    ll_backend__peephole__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__V_20_20, (MR_Integer) 0)));
#line 740 "peephole.m"
                    ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 740 "peephole.m"
                    if (ll_backend__peephole__succeeded)
#line 740 "peephole.m"
                      {
#line 740 "peephole.m"
                        ll_backend__peephole__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_21_21, (MR_Integer) 1)));
#line 741 "peephole.m"
                        {
#line 741 "peephole.m"
                          ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__peephole__Instrs1_6, &ll_backend__peephole__Instrs2_9);
                        }
#line 742 "peephole.m"
                        ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs2_9)) == (MR_mktag((MR_Integer) 1)));
#line 742 "peephole.m"
                        if (ll_backend__peephole__succeeded)
#line 742 "peephole.m"
                          {
#line 742 "peephole.m"
                            ll_backend__peephole__Instr2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_9, (MR_Integer) 0)));
#line 742 "peephole.m"
                            ll_backend__peephole__Instrs3_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs2_9, (MR_Integer) 1)));
#line 743 "peephole.m"
                            ll_backend__peephole__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr2_10, (MR_Integer) 0)));
#line 743 "peephole.m"
                            ll_backend__peephole__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr2_10, (MR_Integer) 1)));
#line 743 "peephole.m"
                            ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 25)));
#line 743 "peephole.m"
                            if (ll_backend__peephole__succeeded)
#line 743 "peephole.m"
                              {
#line 743 "peephole.m"
                                ll_backend__peephole__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_22_22, (MR_Integer) 1)));
#line 743 "peephole.m"
                                ll_backend__peephole__succeeded = (ll_backend__peephole__N_7 == ll_backend__peephole__V_26_26);
#line 740 "peephole.m"
                                if (ll_backend__peephole__succeeded)
#line 740 "peephole.m"
                                  {
#line 744 "peephole.m"
                                    {
#line 744 "peephole.m"
                                      ll_backend__opt_util__skip_comments_livevals_2_p_0(ll_backend__peephole__Instrs3_11, &ll_backend__peephole__Instrs4_13);
                                    }
#line 745 "peephole.m"
                                    ll_backend__peephole__succeeded = ((MR_tag((MR_Word) ll_backend__peephole__Instrs4_13)) == (MR_mktag((MR_Integer) 1)));
#line 745 "peephole.m"
                                    if (ll_backend__peephole__succeeded)
#line 745 "peephole.m"
                                      {
#line 745 "peephole.m"
                                        ll_backend__peephole__Instr4_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs4_13, (MR_Integer) 0)));
#line 745 "peephole.m"
                                        ll_backend__peephole__Instrs5_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__peephole__Instrs4_13, (MR_Integer) 1)));
#line 746 "peephole.m"
                                        ll_backend__peephole__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr4_14, (MR_Integer) 0)));
#line 746 "peephole.m"
                                        ll_backend__peephole__Comment_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__peephole__Instr4_14, (MR_Integer) 1)));
#line 746 "peephole.m"
                                        ll_backend__peephole__succeeded = ((((MR_tag((MR_Word) ll_backend__peephole__V_23_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_23_23, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 746 "peephole.m"
                                        if (ll_backend__peephole__succeeded)
#line 746 "peephole.m"
                                          {
#line 746 "peephole.m"
                                            ll_backend__peephole__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__peephole__V_23_23, (MR_Integer) 1)));
#line 746 "peephole.m"
                                            ll_backend__peephole__succeeded = (ll_backend__peephole__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "peephole.m"
                                          }
#line 745 "peephole.m"
                                      }
#line 740 "peephole.m"
                                  }
#line 743 "peephole.m"
                              }
#line 742 "peephole.m"
                          }
#line 740 "peephole.m"
                      }
#line 740 "peephole.m"
                  }
#line 740 "peephole.m"
              }
#line 740 "peephole.m"
          }
#line 750 "peephole.m"
        if (ll_backend__peephole__succeeded)
#line 748 "peephole.m"
          {
#line 748 "peephole.m"
            MR_Word ll_backend__peephole__NewInstr_17;
#line 748 "peephole.m"
            MR_Word ll_backend__peephole__V_25_25;

#line 748 "peephole.m"
            {
#line 748 "peephole.m"
              ll_backend__peephole__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "peephole.m"
              MR_hl_field(MR_mktag(3), ll_backend__peephole__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 26));
#line 748 "peephole.m"
              MR_hl_field(MR_mktag(3), ll_backend__peephole__V_25_25, 1) = ((MR_Box) (ll_backend__peephole__N_7));
#line 748 "peephole.m"
            }
#line 748 "peephole.m"
            {
#line 748 "peephole.m"
              ll_backend__peephole__NewInstr_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 748 "peephole.m"
              MR_hl_field(MR_mktag(0), ll_backend__peephole__NewInstr_17, 0) = ((MR_Box) (ll_backend__peephole__V_25_25));
#line 748 "peephole.m"
              MR_hl_field(MR_mktag(0), ll_backend__peephole__NewInstr_17, 1) = ((MR_Box) (ll_backend__peephole__Comment_16));
#line 748 "peephole.m"
            }
#line 749 "peephole.m"
            {
#line 749 "peephole.m"
              MR_Word base;
#line 749 "peephole.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "peephole.m"
              *ll_backend__peephole__HeadVar__2_2 = base;
#line 749 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__NewInstr_17));
#line 749 "peephole.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs5_15));
#line 749 "peephole.m"
            }
#line 748 "peephole.m"
          }
#line 750 "peephole.m"
        else
#line 751 "peephole.m"
          {
#line 751 "peephole.m"
            MR_Word base;
#line 751 "peephole.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "peephole.m"
            *ll_backend__peephole__HeadVar__2_2 = base;
#line 751 "peephole.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__peephole__Instr0_3));
#line 751 "peephole.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__peephole__Instrs1_6));
#line 751 "peephole.m"
          }
#line 737 "peephole.m"
      }
#line 736 "peephole.m"
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
    MR_Word ll_backend__peephole__InvalidPatterns0_15 = ((&ll_backend__peephole_vector_common_2[0 + ll_backend__peephole__GC_Method_6]))->ll_backend__peephole__vector_common_type_2_0__vct_2_f_0;

#line 729 "peephole.m"
#line 729 "peephole.m"
    switch (ll_backend__peephole__OptPeepMkword_7) {
#line 729 "peephole.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 729 "peephole.m"
      case (MR_Integer) 0:
#line 730 "peephole.m"
        {
#line 731 "peephole.m"
          {
#line 731 "peephole.m"
            ll_backend__peephole__InvalidPatterns_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "peephole.m"
            MR_hl_field(MR_mktag(1), ll_backend__peephole__InvalidPatterns_11, 0) = ((MR_Box) ((MR_Integer) 1));
#line 731 "peephole.m"
            MR_hl_field(MR_mktag(1), ll_backend__peephole__InvalidPatterns_11, 1) = ((MR_Box) (ll_backend__peephole__InvalidPatterns0_15));
#line 731 "peephole.m"
          }
#line 730 "peephole.m"
        }
#line 729 "peephole.m"
        break;
#line 729 "peephole.m"
      case (MR_Integer) 1:
#line 728 "peephole.m"
        ll_backend__peephole__InvalidPatterns_11 = ll_backend__peephole__InvalidPatterns0_15;
#line 729 "peephole.m"
        break;
#line 729 "peephole.m"
    }
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
