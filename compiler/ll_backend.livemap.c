/*
** Automatically generated from `livemap.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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


/* :- module ll_backend.livemap. */
/* :- implementation. */

/*
INIT mercury__ll_backend__livemap__init
ENDINIT
*/

#include "ll_backend.livemap.mih"


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




#line 142 "ll_backend.livemap.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 145 "ll_backend.livemap.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__livemap__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 148 "ll_backend.livemap.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 151 "ll_backend.livemap.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 154 "ll_backend.livemap.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__livemap__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 157 "ll_backend.livemap.c"
static MR_bool MR_CALL 
ll_backend__livemap____Unify____livemap_0_0_10001(
#line 160 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_1,
#line 162 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_2);

#line 165 "ll_backend.livemap.c"
static void MR_CALL 
ll_backend__livemap____Compare____livemap_0_0_10001(
#line 168 "ll_backend.livemap.c"
  MR_Box * ll_backend__livemap__wrapper_arg_1,
#line 170 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_2,
#line 172 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_3);

#line 175 "ll_backend.livemap.c"
static MR_bool MR_CALL 
ll_backend__livemap____Unify____lvalset_0_0_10001(
#line 178 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_1,
#line 180 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_2);

#line 183 "ll_backend.livemap.c"
static void MR_CALL 
ll_backend__livemap____Compare____lvalset_0_0_10001(
#line 186 "ll_backend.livemap.c"
  MR_Box * ll_backend__livemap__wrapper_arg_1,
#line 188 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_2,
#line 190 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_3);

#line 595 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(
#line 595 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 595 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_2,
#line 595 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_3);

#line 584 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_insert_label_livevals_4_p_0(
#line 584 "livemap.m"
  MR_Word ll_backend__livemap__Livemap_5,
#line 584 "livemap.m"
  MR_Word ll_backend__livemap__Label_6,
#line 584 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_10,
#line 584 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_11);

#line 573 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_insert_maybe_label_livevals_4_p_0(
#line 573 "livemap.m"
  MR_Word ll_backend__livemap__Livemap_5,
#line 573 "livemap.m"
  MR_Word ll_backend__livemap__MaybeLabel_6,
#line 573 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_9,
#line 573 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_10);

#line 553 "livemap.m"
static void MR_CALL 
ll_backend__livemap__make_live_in_mem_ref_3_p_0(
#line 553 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 553 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Live_0_2,
#line 553 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Live_3);

#line 527 "livemap.m"
static void MR_CALL 
ll_backend__livemap__make_live_in_rval_3_p_0(
#line 527 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 527 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Live_0_2,
#line 527 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Live_3);

#line 516 "livemap.m"
static void MR_CALL 
ll_backend__livemap__make_live_in_rvals_3_p_0(
#line 516 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 516 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Live_0_2,
#line 516 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Live_3);

#line 499 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_special_code_addr_2_p_0(
#line 499 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 499 "livemap.m"
  MR_Word * ll_backend__livemap__HeadVar__2_2);

#line 476 "livemap.m"
static void MR_CALL 
ll_backend__livemap__look_for_livevals_7_p_0(
#line 476 "livemap.m"
  MR_Word ll_backend__livemap__Instrs0_8,
#line 476 "livemap.m"
  MR_Word * ll_backend__livemap__Instrs_9,
#line 476 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_18,
#line 476 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_19,
#line 476 "livemap.m"
  MR_String ll_backend__livemap__Site_11,
#line 476 "livemap.m"
  MR_Word ll_backend__livemap__Compulsory_12,
#line 476 "livemap.m"
  MR_Word * ll_backend__livemap__Found_13);

#line 463 "livemap.m"
static void MR_CALL 
ll_backend__livemap__build_livemap_foreign_proc_inputs_3_p_0(
#line 463 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 463 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_2,
#line 463 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_3);

#line 434 "livemap.m"
static void MR_CALL 
ll_backend__livemap__build_live_lval_info_7_p_0(
#line 434 "livemap.m"
  MR_Word ll_backend__livemap__AffectsLiveness_8,
#line 434 "livemap.m"
  MR_Word ll_backend__livemap__LiveLvalInfo_9,
#line 434 "livemap.m"
  MR_String ll_backend__livemap__Code_10,
#line 434 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_15,
#line 434 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_16,
#line 434 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_17,
#line 434 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18);

#line 391 "livemap.m"
static void MR_CALL 
ll_backend__livemap__build_livemap_foreign_proc_components_5_p_0(
#line 391 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 391 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_2,
#line 391 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_3,
#line 391 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4,
#line 391 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_5);

#line 238 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0_1(
#line 238 "livemap.m"
  MR_Box ll_backend__livemap__closure_arg,
#line 238 "livemap.m"
  MR_Box ll_backend__livemap__wrapper_arg_1,
#line 238 "livemap.m"
  MR_Box ll_backend__livemap__wrapper_arg_2,
#line 238 "livemap.m"
  MR_Box * ll_backend__livemap__wrapper_arg_3);

#line 141 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0(
#line 141 "livemap.m"
  MR_Word ll_backend__livemap__Instr0_10,
#line 141 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Instrs_0_100,
#line 141 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Instrs_101,
#line 141 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_102,
#line 141 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_103,
#line 141 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104,
#line 141 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105,
#line 141 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livemap_0_106,
#line 141 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livemap_107);

#line 131 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_do_build_6_p_0(
#line 131 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 131 "livemap.m"
  MR_Word ll_backend__livemap__Livevals0_2,
#line 131 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_3,
#line 131 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_4,
#line 131 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livemap_0_5,
#line 131 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livemap_6);

#line 109 "livemap.m"
static MR_bool MR_CALL 
ll_backend__livemap__equal_livemaps_keys_3_p_0(
#line 109 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 109 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__2_2,
#line 109 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__3_3);

#line 71 "livemap.m"
static void MR_CALL 
ll_backend__livemap__build_livemap_fixpoint_4_p_0(
#line 71 "livemap.m"
  MR_Word ll_backend__livemap__BackInstrs_5,
#line 71 "livemap.m"
  MR_Word ll_backend__livemap__Livemap0_6,
#line 71 "livemap.m"
  MR_Integer ll_backend__livemap__CurIteration_7,
#line 71 "livemap.m"
  MR_Word * ll_backend__livemap__MaybeLivemap_8);


static /* final */ const MR_Box ll_backend__livemap_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__livemap_scalar_common_2[1][3];

static /* final */ const MR_Box ll_backend__livemap_scalar_common_3[1][7];

static /* final */ const MR_Box ll_backend__livemap_scalar_common_4[5][1];




static /* final */ const MR_Box ll_backend__livemap_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__livemap_scalar_common_4[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__livemap_scalar_common_4[3]))
  },
};

static /* final */ const MR_Box ll_backend__livemap_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__livemap_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box ll_backend__livemap_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__livemap__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__livemap__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__livemap_scalar_common_4[5][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__livemap_scalar_common_1[3])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__livemap_scalar_common_1[4])))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 499 "ll_backend.livemap.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 507 "ll_backend.livemap.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__livemap__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_label_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_PseudoTypeInfo) &ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 516 "ll_backend.livemap.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__maybe__pti_maybe_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 524 "ll_backend.livemap.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__livemap__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 532 "ll_backend.livemap.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__livemap__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
    (MR_TypeInfo) &ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 541 "ll_backend.livemap.c"
const MR_TypeCtorInfo_Struct ll_backend__livemap__ll_backend__livemap__type_ctor_info_livemap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__livemap____Unify____livemap_0_0_10001)),
  ((MR_Box) (ll_backend__livemap____Compare____livemap_0_0_10001)),
  (MR_String) "ll_backend.livemap",
  (MR_String) "livemap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__livemap__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 562 "ll_backend.livemap.c"
const MR_TypeCtorInfo_Struct ll_backend__livemap__ll_backend__livemap__type_ctor_info_lvalset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__livemap____Unify____lvalset_0_0_10001)),
  ((MR_Box) (ll_backend__livemap____Compare____lvalset_0_0_10001)),
  (MR_String) "ll_backend.livemap",
  (MR_String) "lvalset",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__livemap__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 583 "ll_backend.livemap.c"
static MR_bool MR_CALL 
ll_backend__livemap____Unify____livemap_0_0_10001(
#line 586 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_1,
#line 588 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_2)
#line 590 "ll_backend.livemap.c"
{
#line 592 "ll_backend.livemap.c"
  {
#line 594 "ll_backend.livemap.c"
    MR_bool ll_backend__livemap__succeeded;

#line 597 "ll_backend.livemap.c"
    {
#line 599 "ll_backend.livemap.c"
      ll_backend__livemap__succeeded = ll_backend__livemap____Unify____livemap_0_0(((MR_Word) ll_backend__livemap__wrapper_arg_1), ((MR_Word) ll_backend__livemap__wrapper_arg_2));
    }
#line 602 "ll_backend.livemap.c"
    return ll_backend__livemap__succeeded;
#line 604 "ll_backend.livemap.c"
  }
#line 606 "ll_backend.livemap.c"
}

#line 609 "ll_backend.livemap.c"
static void MR_CALL 
ll_backend__livemap____Compare____livemap_0_0_10001(
#line 612 "ll_backend.livemap.c"
  MR_Box * ll_backend__livemap__wrapper_arg_1,
#line 614 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_2,
#line 616 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_3)
#line 618 "ll_backend.livemap.c"
{
#line 620 "ll_backend.livemap.c"
  {
#line 622 "ll_backend.livemap.c"
    MR_Word ll_backend__livemap__conv0_HeadVar__1_1;

#line 625 "ll_backend.livemap.c"
    {
#line 627 "ll_backend.livemap.c"
      ll_backend__livemap____Compare____livemap_0_0(&ll_backend__livemap__conv0_HeadVar__1_1, ((MR_Word) ll_backend__livemap__wrapper_arg_2), ((MR_Word) ll_backend__livemap__wrapper_arg_3));
    }
#line 630 "ll_backend.livemap.c"
    *ll_backend__livemap__wrapper_arg_1 = ((MR_Box) (ll_backend__livemap__conv0_HeadVar__1_1));
#line 632 "ll_backend.livemap.c"
  }
#line 634 "ll_backend.livemap.c"
}

#line 637 "ll_backend.livemap.c"
static MR_bool MR_CALL 
ll_backend__livemap____Unify____lvalset_0_0_10001(
#line 640 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_1,
#line 642 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_2)
#line 644 "ll_backend.livemap.c"
{
#line 646 "ll_backend.livemap.c"
  {
#line 648 "ll_backend.livemap.c"
    MR_bool ll_backend__livemap__succeeded;

#line 651 "ll_backend.livemap.c"
    {
#line 653 "ll_backend.livemap.c"
      ll_backend__livemap__succeeded = ll_backend__livemap____Unify____lvalset_0_0(((MR_Word) ll_backend__livemap__wrapper_arg_1), ((MR_Word) ll_backend__livemap__wrapper_arg_2));
    }
#line 656 "ll_backend.livemap.c"
    return ll_backend__livemap__succeeded;
#line 658 "ll_backend.livemap.c"
  }
#line 660 "ll_backend.livemap.c"
}

#line 663 "ll_backend.livemap.c"
static void MR_CALL 
ll_backend__livemap____Compare____lvalset_0_0_10001(
#line 666 "ll_backend.livemap.c"
  MR_Box * ll_backend__livemap__wrapper_arg_1,
#line 668 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_2,
#line 670 "ll_backend.livemap.c"
  MR_Box ll_backend__livemap__wrapper_arg_3)
#line 672 "ll_backend.livemap.c"
{
#line 674 "ll_backend.livemap.c"
  {
#line 676 "ll_backend.livemap.c"
    MR_Word ll_backend__livemap__conv0_HeadVar__1_1;

#line 679 "ll_backend.livemap.c"
    {
#line 681 "ll_backend.livemap.c"
      ll_backend__livemap____Compare____lvalset_0_0(&ll_backend__livemap__conv0_HeadVar__1_1, ((MR_Word) ll_backend__livemap__wrapper_arg_2), ((MR_Word) ll_backend__livemap__wrapper_arg_3));
    }
#line 684 "ll_backend.livemap.c"
    *ll_backend__livemap__wrapper_arg_1 = ((MR_Box) (ll_backend__livemap__conv0_HeadVar__1_1));
#line 686 "ll_backend.livemap.c"
  }
#line 688 "ll_backend.livemap.c"
}

#line 29 "livemap.m"
void MR_CALL 
ll_backend__livemap____Compare____lvalset_0_0(
#line 29 "livemap.m"
  MR_Word * ll_backend__livemap__HeadVar__1_1,
#line 29 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__2_2,
#line 29 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__3_3)
#line 29 "livemap.m"
{
#line 29 "livemap.m"
  {
#line 29 "livemap.m"
    MR_bool ll_backend__livemap__succeeded;
#line 29 "livemap.m"
    MR_Word ll_backend__livemap__Cast_HeadVar1_4 = ll_backend__livemap__HeadVar__2_2;
#line 29 "livemap.m"
    MR_Word ll_backend__livemap__Cast_HeadVar2_5 = ll_backend__livemap__HeadVar__3_3;

#line 29 "livemap.m"
    {
#line 29 "livemap.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__livemap_scalar_common_1[0], ll_backend__livemap__HeadVar__1_1, ((MR_Box) (ll_backend__livemap__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__livemap__Cast_HeadVar2_5)));
#line 29 "livemap.m"
      return;
    }
#line 29 "livemap.m"
  }
#line 29 "livemap.m"
}

#line 29 "livemap.m"
MR_bool MR_CALL 
ll_backend__livemap____Unify____lvalset_0_0(
#line 29 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 29 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__2_2)
#line 29 "livemap.m"
{
#line 29 "livemap.m"
  {
#line 29 "livemap.m"
    MR_bool ll_backend__livemap__succeeded;
#line 29 "livemap.m"
    MR_Word ll_backend__livemap__Cast_HeadVar1_3 = ll_backend__livemap__HeadVar__1_1;
#line 29 "livemap.m"
    MR_Word ll_backend__livemap__Cast_HeadVar2_4 = ll_backend__livemap__HeadVar__2_2;

#line 29 "livemap.m"
    {
#line 29 "livemap.m"
      return ll_backend__livemap__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__livemap_scalar_common_1[0], ((MR_Box) (ll_backend__livemap__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__livemap__Cast_HeadVar2_4)));
    }
#line 29 "livemap.m"
    return ll_backend__livemap__succeeded;
#line 29 "livemap.m"
  }
#line 29 "livemap.m"
}

#line 28 "livemap.m"
void MR_CALL 
ll_backend__livemap____Compare____livemap_0_0(
#line 28 "livemap.m"
  MR_Word * ll_backend__livemap__HeadVar__1_1,
#line 28 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__2_2,
#line 28 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__3_3)
#line 28 "livemap.m"
{
#line 28 "livemap.m"
  {
#line 28 "livemap.m"
    MR_bool ll_backend__livemap__succeeded;
#line 28 "livemap.m"
    MR_Word ll_backend__livemap__Cast_HeadVar1_4 = ll_backend__livemap__HeadVar__2_2;
#line 28 "livemap.m"
    MR_Word ll_backend__livemap__Cast_HeadVar2_5 = ll_backend__livemap__HeadVar__3_3;

#line 28 "livemap.m"
    {
#line 28 "livemap.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__livemap_scalar_common_2[0], ll_backend__livemap__HeadVar__1_1, ((MR_Box) (ll_backend__livemap__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__livemap__Cast_HeadVar2_5)));
#line 28 "livemap.m"
      return;
    }
#line 28 "livemap.m"
  }
#line 28 "livemap.m"
}

#line 28 "livemap.m"
MR_bool MR_CALL 
ll_backend__livemap____Unify____livemap_0_0(
#line 28 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 28 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__2_2)
#line 28 "livemap.m"
{
#line 28 "livemap.m"
  {
#line 28 "livemap.m"
    MR_bool ll_backend__livemap__succeeded;
#line 28 "livemap.m"
    MR_Word ll_backend__livemap__Cast_HeadVar1_3 = ll_backend__livemap__HeadVar__1_1;
#line 28 "livemap.m"
    MR_Word ll_backend__livemap__Cast_HeadVar2_4 = ll_backend__livemap__HeadVar__2_2;

#line 28 "livemap.m"
    {
#line 28 "livemap.m"
      return ll_backend__livemap__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__livemap_scalar_common_2[0], ((MR_Box) (ll_backend__livemap__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__livemap__Cast_HeadVar2_4)));
    }
#line 28 "livemap.m"
    return ll_backend__livemap__succeeded;
#line 28 "livemap.m"
  }
#line 28 "livemap.m"
}

#line 595 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(
#line 595 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 595 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_2,
#line 595 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_3)
#line 595 "livemap.m"
{
#line 598 "livemap.m"
  while (MR_TRUE)
#line 598 "livemap.m"
    {
#line 598 "livemap.m"
      /* tailcall optimized into a loop */
#line 598 "livemap.m"
      {
#line 598 "livemap.m"
        MR_bool ll_backend__livemap__succeeded;

#line 598 "livemap.m"
        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "livemap.m"
          *ll_backend__livemap__STATE_VARIABLE_Livevals_3 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 598 "livemap.m"
        else
#line 599 "livemap.m"
          {
#line 599 "livemap.m"
            MR_Word ll_backend__livemap__Live_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
#line 599 "livemap.m"
            MR_Word ll_backend__livemap__Livelist_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
#line 599 "livemap.m"
            MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_12_12;
#line 609 "livemap.m"
            MR_Word ll_backend__livemap__V_18_18;
#line 609 "livemap.m"
            MR_Word ll_backend__livemap__V_19_19;
#line 609 "livemap.m"
            MR_Word ll_backend__livemap__V_20_20;

#line 609 "livemap.m"
            ll_backend__livemap__succeeded = ((((MR_tag((MR_Word) ll_backend__livemap__Live_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Live_7, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 609 "livemap.m"
            if (ll_backend__livemap__succeeded)
#line 609 "livemap.m"
              {
#line 609 "livemap.m"
                ll_backend__livemap__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Live_7, (MR_Integer) 1)));
#line 609 "livemap.m"
                ll_backend__livemap__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Live_7, (MR_Integer) 2)));
#line 609 "livemap.m"
                ll_backend__livemap__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Live_7, (MR_Integer) 3)));
#line 609 "livemap.m"
                ll_backend__livemap__STATE_VARIABLE_Livevals_12_12 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 609 "livemap.m"
              }
#line 609 "livemap.m"
            else
#line 612 "livemap.m"
              {
#line 612 "livemap.m"
                {
#line 612 "livemap.m"
                  mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Live_7)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_2, &ll_backend__livemap__STATE_VARIABLE_Livevals_12_12);
                }
#line 612 "livemap.m"
              }
#line 601 "livemap.m"
            /* direct tailcall eliminated */
#line 601 "livemap.m"
            {
#line 601 "livemap.m"
              MR_Word ll_backend__livemap__HeadVar__1__tmp_copy_1 = ll_backend__livemap__Livelist_8;
#line 601 "livemap.m"
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0__tmp_copy_2 = ll_backend__livemap__STATE_VARIABLE_Livevals_12_12;

#line 601 "livemap.m"
              ll_backend__livemap__STATE_VARIABLE_Livevals_0_2 = ll_backend__livemap__STATE_VARIABLE_Livevals_0__tmp_copy_2;
#line 601 "livemap.m"
              ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__HeadVar__1__tmp_copy_1;
#line 601 "livemap.m"
            }
#line 601 "livemap.m"
            continue;
#line 599 "livemap.m"
          }
#line 598 "livemap.m"
      }
#line 598 "livemap.m"
      break;
#line 598 "livemap.m"
    }
#line 595 "livemap.m"
}

#line 584 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_insert_label_livevals_4_p_0(
#line 584 "livemap.m"
  MR_Word ll_backend__livemap__Livemap_5,
#line 584 "livemap.m"
  MR_Word ll_backend__livemap__Label_6,
#line 584 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_10,
#line 584 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_11)
#line 584 "livemap.m"
{
#line 591 "livemap.m"
  {
#line 591 "livemap.m"
    MR_bool ll_backend__livemap__succeeded;
#line 591 "livemap.m"
    MR_Word ll_backend__livemap__LabelLivevals_8;
#line 588 "livemap.m"
    MR_Box ll_backend__livemap__conv0_LabelLivevals_8;

#line 588 "livemap.m"
    {
#line 588 "livemap.m"
      ll_backend__livemap__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__livemap_scalar_common_1[0], ll_backend__livemap__Livemap_5, ((MR_Box) (ll_backend__livemap__Label_6)), &ll_backend__livemap__conv0_LabelLivevals_8);
    }
#line 588 "livemap.m"
    if (ll_backend__livemap__succeeded)
#line 588 "livemap.m"
      {
#line 588 "livemap.m"
        ll_backend__livemap__LabelLivevals_8 = ((MR_Word) ll_backend__livemap__conv0_LabelLivevals_8);
#line 588 "livemap.m"
        ll_backend__livemap__succeeded = MR_TRUE;
#line 588 "livemap.m"
      }
#line 591 "livemap.m"
    if (ll_backend__livemap__succeeded)
#line 589 "livemap.m"
      {
#line 589 "livemap.m"
        MR_Word ll_backend__livemap__Livelist_9;

#line 589 "livemap.m"
        {
#line 589 "livemap.m"
          mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__livemap__LabelLivevals_8, &ll_backend__livemap__Livelist_9);
        }
#line 590 "livemap.m"
        {
#line 590 "livemap.m"
          ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(ll_backend__livemap__Livelist_9, ll_backend__livemap__STATE_VARIABLE_Livevals_0_10, ll_backend__livemap__STATE_VARIABLE_Livevals_11);
#line 590 "livemap.m"
          return;
        }
#line 589 "livemap.m"
      }
#line 591 "livemap.m"
    else
#line 590 "livemap.m"
      *ll_backend__livemap__STATE_VARIABLE_Livevals_11 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_10;
#line 591 "livemap.m"
  }
#line 584 "livemap.m"
}

#line 573 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_insert_maybe_label_livevals_4_p_0(
#line 573 "livemap.m"
  MR_Word ll_backend__livemap__Livemap_5,
#line 573 "livemap.m"
  MR_Word ll_backend__livemap__MaybeLabel_6,
#line 573 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_9,
#line 573 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_10)
#line 573 "livemap.m"
{
#line 578 "livemap.m"
  {
#line 578 "livemap.m"
    MR_bool ll_backend__livemap__succeeded;

#line 578 "livemap.m"
    if ((ll_backend__livemap__MaybeLabel_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 581 "livemap.m"
      *ll_backend__livemap__STATE_VARIABLE_Livevals_10 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_9;
#line 578 "livemap.m"
    else
#line 578 "livemap.m"
      {
#line 578 "livemap.m"
        MR_Word ll_backend__livemap__Label_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeLabel_6, (MR_Integer) 0)));
#line 591 "livemap.m"
        MR_Word ll_backend__livemap__LabelLivevals_17;
#line 588 "livemap.m"
        MR_Box ll_backend__livemap__conv0_LabelLivevals_17;

#line 588 "livemap.m"
        {
#line 588 "livemap.m"
          ll_backend__livemap__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__livemap_scalar_common_1[0], ll_backend__livemap__Livemap_5, ((MR_Box) (ll_backend__livemap__Label_8)), &ll_backend__livemap__conv0_LabelLivevals_17);
        }
#line 588 "livemap.m"
        if (ll_backend__livemap__succeeded)
#line 588 "livemap.m"
          {
#line 588 "livemap.m"
            ll_backend__livemap__LabelLivevals_17 = ((MR_Word) ll_backend__livemap__conv0_LabelLivevals_17);
#line 588 "livemap.m"
            ll_backend__livemap__succeeded = MR_TRUE;
#line 588 "livemap.m"
          }
#line 591 "livemap.m"
        if (ll_backend__livemap__succeeded)
#line 589 "livemap.m"
          {
#line 589 "livemap.m"
            MR_Word ll_backend__livemap__Livelist_18;

#line 589 "livemap.m"
            {
#line 589 "livemap.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__livemap__LabelLivevals_17, &ll_backend__livemap__Livelist_18);
            }
#line 590 "livemap.m"
            {
#line 590 "livemap.m"
              ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(ll_backend__livemap__Livelist_18, ll_backend__livemap__STATE_VARIABLE_Livevals_0_9, ll_backend__livemap__STATE_VARIABLE_Livevals_10);
#line 590 "livemap.m"
              return;
            }
#line 589 "livemap.m"
          }
#line 591 "livemap.m"
        else
#line 590 "livemap.m"
          *ll_backend__livemap__STATE_VARIABLE_Livevals_10 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_9;
#line 578 "livemap.m"
      }
#line 578 "livemap.m"
  }
#line 573 "livemap.m"
}

#line 553 "livemap.m"
static void MR_CALL 
ll_backend__livemap__make_live_in_mem_ref_3_p_0(
#line 553 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 553 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Live_0_2,
#line 553 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Live_3)
#line 553 "livemap.m"
{
#line 555 "livemap.m"
  {
#line 555 "livemap.m"
    MR_bool ll_backend__livemap__succeeded;

#line 555 "livemap.m"
    if (((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 557 "livemap.m"
      {
#line 557 "livemap.m"
        MR_Word ll_backend__livemap__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));

#line 558 "livemap.m"
        {
#line 558 "livemap.m"
          ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Rval_9, ll_backend__livemap__STATE_VARIABLE_Live_0_2, ll_backend__livemap__STATE_VARIABLE_Live_3);
#line 558 "livemap.m"
          return;
        }
#line 557 "livemap.m"
      }
#line 555 "livemap.m"
    else
#line 555 "livemap.m"
      if (((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 559 "livemap.m"
        {
#line 559 "livemap.m"
          MR_Word ll_backend__livemap__Rval1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
#line 559 "livemap.m"
          MR_Word ll_backend__livemap__Rval2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 2)));
#line 559 "livemap.m"
          MR_Word ll_backend__livemap__STATE_VARIABLE_Live_20_20;
#line 559 "livemap.m"
          MR_Word ll_backend__livemap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));

#line 560 "livemap.m"
          {
#line 560 "livemap.m"
            ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Rval1_14, ll_backend__livemap__STATE_VARIABLE_Live_0_2, &ll_backend__livemap__STATE_VARIABLE_Live_20_20);
          }
#line 561 "livemap.m"
          {
#line 561 "livemap.m"
            ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Rval2_16, ll_backend__livemap__STATE_VARIABLE_Live_20_20, ll_backend__livemap__STATE_VARIABLE_Live_3);
#line 561 "livemap.m"
            return;
          }
#line 559 "livemap.m"
        }
#line 555 "livemap.m"
      else
#line 555 "livemap.m"
        {
#line 555 "livemap.m"
          MR_Word ll_backend__livemap__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));

#line 556 "livemap.m"
          {
#line 556 "livemap.m"
            ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Rval_4, ll_backend__livemap__STATE_VARIABLE_Live_0_2, ll_backend__livemap__STATE_VARIABLE_Live_3);
#line 556 "livemap.m"
            return;
          }
#line 555 "livemap.m"
        }
#line 555 "livemap.m"
  }
#line 553 "livemap.m"
}

#line 527 "livemap.m"
static void MR_CALL 
ll_backend__livemap__make_live_in_rval_3_p_0(
#line 527 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 527 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Live_0_2,
#line 527 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Live_3)
#line 527 "livemap.m"
{
#line 529 "livemap.m"
  while (MR_TRUE)
#line 529 "livemap.m"
    {
#line 529 "livemap.m"
      /* tailcall optimized into a loop */
#line 529 "livemap.m"
      {
#line 529 "livemap.m"
        MR_bool ll_backend__livemap__succeeded;

#line 529 "livemap.m"
        if (((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 529 "livemap.m"
          {
#line 529 "livemap.m"
            MR_Word ll_backend__livemap__Lval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
#line 529 "livemap.m"
            MR_Word ll_backend__livemap__AccessRvals_9;
#line 529 "livemap.m"
            MR_Word ll_backend__livemap__STATE_VARIABLE_Live_12_12;
#line 531 "livemap.m"
            MR_Word ll_backend__livemap__V_6_6;
#line 531 "livemap.m"
            MR_Word ll_backend__livemap__V_7_7;
#line 531 "livemap.m"
            MR_Word ll_backend__livemap__V_8_8;

#line 531 "livemap.m"
            ll_backend__livemap__succeeded = ((((MR_tag((MR_Word) ll_backend__livemap__Lval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_4, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 531 "livemap.m"
            if (ll_backend__livemap__succeeded)
#line 531 "livemap.m"
              {
#line 531 "livemap.m"
                ll_backend__livemap__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_4, (MR_Integer) 1)));
#line 531 "livemap.m"
                ll_backend__livemap__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_4, (MR_Integer) 2)));
#line 531 "livemap.m"
                ll_backend__livemap__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_4, (MR_Integer) 3)));
#line 531 "livemap.m"
                ll_backend__livemap__STATE_VARIABLE_Live_12_12 = ll_backend__livemap__STATE_VARIABLE_Live_0_2;
#line 531 "livemap.m"
              }
#line 531 "livemap.m"
            else
#line 534 "livemap.m"
              {
#line 534 "livemap.m"
                {
#line 534 "livemap.m"
                  mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_4)), ll_backend__livemap__STATE_VARIABLE_Live_0_2, &ll_backend__livemap__STATE_VARIABLE_Live_12_12);
                }
#line 534 "livemap.m"
              }
#line 536 "livemap.m"
            {
#line 536 "livemap.m"
              ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_4, &ll_backend__livemap__AccessRvals_9);
            }
#line 537 "livemap.m"
            {
#line 537 "livemap.m"
              ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__AccessRvals_9, ll_backend__livemap__STATE_VARIABLE_Live_12_12, ll_backend__livemap__STATE_VARIABLE_Live_3);
#line 537 "livemap.m"
              return;
            }
#line 529 "livemap.m"
          }
#line 529 "livemap.m"
        else
#line 529 "livemap.m"
          if (((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 538 "livemap.m"
            {
#line 538 "livemap.m"
              MR_Word ll_backend__livemap__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
#line 538 "livemap.m"
              MR_Integer ll_backend__livemap__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));

#line 539 "livemap.m"
              /* direct tailcall eliminated */
#line 539 "livemap.m"
              {
#line 539 "livemap.m"
                MR_Word ll_backend__livemap__HeadVar__1__tmp_copy_1 = ll_backend__livemap__Rval_15;

#line 539 "livemap.m"
                ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__HeadVar__1__tmp_copy_1;
#line 539 "livemap.m"
              }
#line 539 "livemap.m"
              continue;
#line 538 "livemap.m"
            }
#line 529 "livemap.m"
          else
#line 529 "livemap.m"
            if (((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 547 "livemap.m"
              {
#line 548 "livemap.m"
                {
#line 548 "livemap.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.make_live_in_rval\'/3", (MR_String) "var rval should not propagate to the optimizer");
#line 548 "livemap.m"
                  return;
                }
#line 547 "livemap.m"
              }
#line 529 "livemap.m"
            else
#line 529 "livemap.m"
              if (((((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 544 "livemap.m"
                {
#line 544 "livemap.m"
                  MR_Word ll_backend__livemap__Rval1_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 2)));
#line 544 "livemap.m"
                  MR_Word ll_backend__livemap__Rval2_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 3)));
#line 544 "livemap.m"
                  MR_Word ll_backend__livemap__STATE_VARIABLE_Live_40_40;
#line 544 "livemap.m"
                  MR_Word ll_backend__livemap__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));

#line 545 "livemap.m"
                  {
#line 545 "livemap.m"
                    ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Rval1_35, ll_backend__livemap__STATE_VARIABLE_Live_0_2, &ll_backend__livemap__STATE_VARIABLE_Live_40_40);
                  }
#line 546 "livemap.m"
                  /* direct tailcall eliminated */
#line 546 "livemap.m"
                  {
#line 546 "livemap.m"
                    MR_Word ll_backend__livemap__HeadVar__1__tmp_copy_1 = ll_backend__livemap__Rval2_36;
#line 546 "livemap.m"
                    MR_Word ll_backend__livemap__STATE_VARIABLE_Live_0__tmp_copy_2 = ll_backend__livemap__STATE_VARIABLE_Live_40_40;

#line 546 "livemap.m"
                    ll_backend__livemap__STATE_VARIABLE_Live_0_2 = ll_backend__livemap__STATE_VARIABLE_Live_0__tmp_copy_2;
#line 546 "livemap.m"
                    ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__HeadVar__1__tmp_copy_1;
#line 546 "livemap.m"
                  }
#line 546 "livemap.m"
                  continue;
#line 544 "livemap.m"
                }
#line 529 "livemap.m"
              else
#line 529 "livemap.m"
                if (((((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 541 "livemap.m"
                  *ll_backend__livemap__STATE_VARIABLE_Live_3 = ll_backend__livemap__STATE_VARIABLE_Live_0_2;
#line 529 "livemap.m"
                else
#line 529 "livemap.m"
                  if (((((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 550 "livemap.m"
                    {
#line 550 "livemap.m"
                      MR_Word ll_backend__livemap__MemRef_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));

#line 551 "livemap.m"
                      {
#line 551 "livemap.m"
                        ll_backend__livemap__make_live_in_mem_ref_3_p_0(ll_backend__livemap__MemRef_48, ll_backend__livemap__STATE_VARIABLE_Live_0_2, ll_backend__livemap__STATE_VARIABLE_Live_3);
#line 551 "livemap.m"
                        return;
                      }
#line 550 "livemap.m"
                    }
#line 529 "livemap.m"
                  else
#line 529 "livemap.m"
                    if (((((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 540 "livemap.m"
                      *ll_backend__livemap__STATE_VARIABLE_Live_3 = ll_backend__livemap__STATE_VARIABLE_Live_0_2;
#line 529 "livemap.m"
                    else
#line 542 "livemap.m"
                      {
#line 542 "livemap.m"
                        MR_Word ll_backend__livemap__Rval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 2)));
#line 542 "livemap.m"
                        MR_Word ll_backend__livemap__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));

#line 543 "livemap.m"
                        /* direct tailcall eliminated */
#line 543 "livemap.m"
                        {
#line 543 "livemap.m"
                          MR_Word ll_backend__livemap__HeadVar__1__tmp_copy_1 = ll_backend__livemap__Rval_29;

#line 543 "livemap.m"
                          ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__HeadVar__1__tmp_copy_1;
#line 543 "livemap.m"
                        }
#line 543 "livemap.m"
                        continue;
#line 542 "livemap.m"
                      }
#line 529 "livemap.m"
      }
#line 529 "livemap.m"
      break;
#line 529 "livemap.m"
    }
#line 527 "livemap.m"
}

#line 516 "livemap.m"
static void MR_CALL 
ll_backend__livemap__make_live_in_rvals_3_p_0(
#line 516 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 516 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Live_0_2,
#line 516 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Live_3)
#line 516 "livemap.m"
{
#line 518 "livemap.m"
  while (MR_TRUE)
#line 518 "livemap.m"
    {
#line 518 "livemap.m"
      /* tailcall optimized into a loop */
#line 518 "livemap.m"
      {
#line 518 "livemap.m"
        MR_bool ll_backend__livemap__succeeded;

#line 518 "livemap.m"
        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "livemap.m"
          *ll_backend__livemap__STATE_VARIABLE_Live_3 = ll_backend__livemap__STATE_VARIABLE_Live_0_2;
#line 518 "livemap.m"
        else
#line 519 "livemap.m"
          {
#line 519 "livemap.m"
            MR_Word ll_backend__livemap__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
#line 519 "livemap.m"
            MR_Word ll_backend__livemap__Rvals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
#line 519 "livemap.m"
            MR_Word ll_backend__livemap__STATE_VARIABLE_Live_12_12;

#line 520 "livemap.m"
            {
#line 520 "livemap.m"
              ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Rval_7, ll_backend__livemap__STATE_VARIABLE_Live_0_2, &ll_backend__livemap__STATE_VARIABLE_Live_12_12);
            }
#line 521 "livemap.m"
            /* direct tailcall eliminated */
#line 521 "livemap.m"
            {
#line 521 "livemap.m"
              MR_Word ll_backend__livemap__HeadVar__1__tmp_copy_1 = ll_backend__livemap__Rvals_8;
#line 521 "livemap.m"
              MR_Word ll_backend__livemap__STATE_VARIABLE_Live_0__tmp_copy_2 = ll_backend__livemap__STATE_VARIABLE_Live_12_12;

#line 521 "livemap.m"
              ll_backend__livemap__STATE_VARIABLE_Live_0_2 = ll_backend__livemap__STATE_VARIABLE_Live_0__tmp_copy_2;
#line 521 "livemap.m"
              ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__HeadVar__1__tmp_copy_1;
#line 521 "livemap.m"
            }
#line 521 "livemap.m"
            continue;
#line 519 "livemap.m"
          }
#line 518 "livemap.m"
      }
#line 518 "livemap.m"
      break;
#line 518 "livemap.m"
    }
#line 516 "livemap.m"
}

#line 499 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_special_code_addr_2_p_0(
#line 499 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 499 "livemap.m"
  MR_Word * ll_backend__livemap__HeadVar__2_2)
#line 499 "livemap.m"
{
#line 501 "livemap.m"
  {
#line 501 "livemap.m"
    MR_bool ll_backend__livemap__succeeded;

#line 501 "livemap.m"
    if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "livemap.m"
      {
#line 503 "livemap.m"
        *ll_backend__livemap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__livemap_scalar_common_4[0]);
#line 503 "livemap.m"
      }
#line 501 "livemap.m"
    else
#line 501 "livemap.m"
      if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 508 "livemap.m"
        *ll_backend__livemap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "livemap.m"
      else
#line 501 "livemap.m"
        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 511 "livemap.m"
          *ll_backend__livemap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "livemap.m"
        else
#line 501 "livemap.m"
          if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 505 "livemap.m"
            {
#line 505 "livemap.m"
              *ll_backend__livemap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__livemap_scalar_common_4[2]);
#line 505 "livemap.m"
            }
#line 501 "livemap.m"
          else
#line 501 "livemap.m"
            if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 507 "livemap.m"
              *ll_backend__livemap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "livemap.m"
            else
#line 501 "livemap.m"
              if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 506 "livemap.m"
                *ll_backend__livemap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "livemap.m"
              else
#line 501 "livemap.m"
                if (((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 502 "livemap.m"
                  *ll_backend__livemap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "livemap.m"
                else
#line 501 "livemap.m"
                  if (((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 501 "livemap.m"
                    *ll_backend__livemap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "livemap.m"
                  else
#line 501 "livemap.m"
                    if (((((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 510 "livemap.m"
                      *ll_backend__livemap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "livemap.m"
                    else
#line 501 "livemap.m"
                      if (((((MR_tag((MR_Word) ll_backend__livemap__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 509 "livemap.m"
                        *ll_backend__livemap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "livemap.m"
                      else
#line 504 "livemap.m"
                        {
#line 504 "livemap.m"
                          *ll_backend__livemap__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__livemap_scalar_common_4[4]);
#line 504 "livemap.m"
                        }
#line 501 "livemap.m"
  }
#line 499 "livemap.m"
}

#line 476 "livemap.m"
static void MR_CALL 
ll_backend__livemap__look_for_livevals_7_p_0(
#line 476 "livemap.m"
  MR_Word ll_backend__livemap__Instrs0_8,
#line 476 "livemap.m"
  MR_Word * ll_backend__livemap__Instrs_9,
#line 476 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_18,
#line 476 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_19,
#line 476 "livemap.m"
  MR_String ll_backend__livemap__Site_11,
#line 476 "livemap.m"
  MR_Word ll_backend__livemap__Compulsory_12,
#line 476 "livemap.m"
  MR_Word * ll_backend__livemap__Found_13)
#line 476 "livemap.m"
{
#line 480 "livemap.m"
  {
#line 480 "livemap.m"
    MR_bool ll_backend__livemap__succeeded;
#line 480 "livemap.m"
    MR_Word ll_backend__livemap__Instrs1_14;
#line 486 "livemap.m"
    MR_Word ll_backend__livemap__Livevals1_15;
#line 486 "livemap.m"
    MR_Word ll_backend__livemap__Instrs2_17;
#line 482 "livemap.m"
    MR_Word ll_backend__livemap__V_20_20;
#line 482 "livemap.m"
    MR_Word ll_backend__livemap__V_21_21;
#line 482 "livemap.m"
    MR_String ll_backend__livemap__V_16_16;

#line 481 "livemap.m"
    {
#line 481 "livemap.m"
      ll_backend__opt_util__skip_comments_2_p_0(ll_backend__livemap__Instrs0_8, &ll_backend__livemap__Instrs1_14);
    }
#line 482 "livemap.m"
    ll_backend__livemap__succeeded = ((MR_tag((MR_Word) ll_backend__livemap__Instrs1_14)) == (MR_mktag((MR_Integer) 1)));
#line 482 "livemap.m"
    if (ll_backend__livemap__succeeded)
#line 482 "livemap.m"
      {
#line 482 "livemap.m"
        ll_backend__livemap__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__Instrs1_14, (MR_Integer) 0)));
#line 482 "livemap.m"
        ll_backend__livemap__Instrs2_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__Instrs1_14, (MR_Integer) 1)));
#line 482 "livemap.m"
        ll_backend__livemap__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__V_20_20, (MR_Integer) 0)));
#line 482 "livemap.m"
        ll_backend__livemap__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__livemap__V_20_20, (MR_Integer) 1)));
#line 482 "livemap.m"
        ll_backend__livemap__succeeded = ((MR_tag((MR_Word) ll_backend__livemap__V_21_21)) == (MR_mktag((MR_Integer) 2)));
#line 482 "livemap.m"
        if (ll_backend__livemap__succeeded)
#line 482 "livemap.m"
          ll_backend__livemap__Livevals1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__livemap__V_21_21, (MR_Integer) 0)));
#line 482 "livemap.m"
      }
#line 486 "livemap.m"
    if (ll_backend__livemap__succeeded)
#line 483 "livemap.m"
      {
#line 483 "livemap.m"
        MR_Word ll_backend__livemap__TypeCtorInfo_7_31 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 483 "livemap.m"
        MR_Word ll_backend__livemap__Livelist_29;
#line 483 "livemap.m"
        MR_Word ll_backend__livemap__Livevals1_30;

#line 569 "livemap.m"
        {
#line 569 "livemap.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__livemap__TypeCtorInfo_7_31, ll_backend__livemap__Livevals1_15, &ll_backend__livemap__Livelist_29);
        }
#line 570 "livemap.m"
        {
#line 570 "livemap.m"
          mercury__set__init_1_p_0(ll_backend__livemap__TypeCtorInfo_7_31, &ll_backend__livemap__Livevals1_30);
        }
#line 571 "livemap.m"
        {
#line 571 "livemap.m"
          ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(ll_backend__livemap__Livelist_29, ll_backend__livemap__Livevals1_30, ll_backend__livemap__STATE_VARIABLE_Livevals_19);
        }
#line 484 "livemap.m"
        *ll_backend__livemap__Instrs_9 = ll_backend__livemap__Instrs2_17;
#line 485 "livemap.m"
        *ll_backend__livemap__Found_13 = (MR_Integer) 1;
#line 483 "livemap.m"
      }
#line 486 "livemap.m"
    else
#line 490 "livemap.m"
      {
#line 490 "livemap.m"
        if ((ll_backend__livemap__Compulsory_12 == (MR_Integer) 0))
#line 491 "livemap.m"
          {
#line 492 "livemap.m"
            *ll_backend__livemap__Instrs_9 = ll_backend__livemap__Instrs1_14;
#line 493 "livemap.m"
            *ll_backend__livemap__Found_13 = (MR_Integer) 0;
#line 491 "livemap.m"
          }
#line 490 "livemap.m"
        else
#line 488 "livemap.m"
          {
#line 488 "livemap.m"
            MR_String ll_backend__livemap__V_25_25;

#line 489 "livemap.m"
            {
#line 489 "livemap.m"
              ll_backend__livemap__V_25_25 = mercury__string__f_43_43_2_f_0(ll_backend__livemap__Site_11, (MR_String) " not preceded by livevals");
            }
#line 489 "livemap.m"
            {
#line 489 "livemap.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.look_for_livevals\'/7", ll_backend__livemap__V_25_25);
#line 489 "livemap.m"
              return;
            }
#line 488 "livemap.m"
          }
#line 493 "livemap.m"
        *ll_backend__livemap__STATE_VARIABLE_Livevals_19 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_18;
#line 490 "livemap.m"
      }
#line 480 "livemap.m"
  }
#line 476 "livemap.m"
}

#line 463 "livemap.m"
static void MR_CALL 
ll_backend__livemap__build_livemap_foreign_proc_inputs_3_p_0(
#line 463 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 463 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_2,
#line 463 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_3)
#line 463 "livemap.m"
{
#line 466 "livemap.m"
  while (MR_TRUE)
#line 466 "livemap.m"
    {
#line 466 "livemap.m"
      /* tailcall optimized into a loop */
#line 466 "livemap.m"
      {
#line 466 "livemap.m"
        MR_bool ll_backend__livemap__succeeded;

#line 466 "livemap.m"
        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "livemap.m"
          *ll_backend__livemap__STATE_VARIABLE_Livevals_3 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 466 "livemap.m"
        else
#line 467 "livemap.m"
          {
#line 467 "livemap.m"
            MR_Word ll_backend__livemap__Input_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
#line 467 "livemap.m"
            MR_Word ll_backend__livemap__Inputs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
#line 467 "livemap.m"
            MR_Word ll_backend__livemap__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 4)));
#line 467 "livemap.m"
            MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_20_20;
#line 468 "livemap.m"
            MR_String ll_backend__livemap__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 0)));
#line 468 "livemap.m"
            MR_Word ll_backend__livemap__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 1)));
#line 468 "livemap.m"
            MR_Word ll_backend__livemap__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 2)));
#line 468 "livemap.m"
            MR_Word ll_backend__livemap__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 3)));
#line 468 "livemap.m"
            MR_Word ll_backend__livemap__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 5)));
#line 468 "livemap.m"
            MR_Word ll_backend__livemap__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Input_7, (MR_Integer) 6)));
#line 471 "livemap.m"
            MR_Word ll_backend__livemap__Lval_17;

#line 469 "livemap.m"
            ll_backend__livemap__succeeded = ((MR_tag((MR_Word) ll_backend__livemap__Rval_14)) == (MR_mktag((MR_Integer) 0)));
#line 469 "livemap.m"
            if (ll_backend__livemap__succeeded)
#line 469 "livemap.m"
              {
#line 469 "livemap.m"
                ll_backend__livemap__Lval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Rval_14, (MR_Integer) 0)));
#line 611 "livemap.m"
                {
#line 609 "livemap.m"
                  MR_Word ll_backend__livemap__V_26_26;
#line 609 "livemap.m"
                  MR_Word ll_backend__livemap__V_27_27;
#line 609 "livemap.m"
                  MR_Word ll_backend__livemap__V_28_28;

#line 609 "livemap.m"
                  ll_backend__livemap__succeeded = ((((MR_tag((MR_Word) ll_backend__livemap__Lval_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_17, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 609 "livemap.m"
                  if (ll_backend__livemap__succeeded)
#line 609 "livemap.m"
                    {
#line 609 "livemap.m"
                      ll_backend__livemap__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_17, (MR_Integer) 1)));
#line 609 "livemap.m"
                      ll_backend__livemap__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_17, (MR_Integer) 2)));
#line 609 "livemap.m"
                      ll_backend__livemap__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Lval_17, (MR_Integer) 3)));
#line 609 "livemap.m"
                      ll_backend__livemap__STATE_VARIABLE_Livevals_20_20 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 609 "livemap.m"
                    }
#line 609 "livemap.m"
                  else
#line 612 "livemap.m"
                    {
#line 612 "livemap.m"
                      {
#line 612 "livemap.m"
                        mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_17)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_2, &ll_backend__livemap__STATE_VARIABLE_Livevals_20_20);
                      }
#line 612 "livemap.m"
                    }
#line 611 "livemap.m"
                }
#line 469 "livemap.m"
              }
#line 469 "livemap.m"
            else
#line 470 "livemap.m"
              ll_backend__livemap__STATE_VARIABLE_Livevals_20_20 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 474 "livemap.m"
            /* direct tailcall eliminated */
#line 474 "livemap.m"
            {
#line 474 "livemap.m"
              MR_Word ll_backend__livemap__HeadVar__1__tmp_copy_1 = ll_backend__livemap__Inputs_8;
#line 474 "livemap.m"
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0__tmp_copy_2 = ll_backend__livemap__STATE_VARIABLE_Livevals_20_20;

#line 474 "livemap.m"
              ll_backend__livemap__STATE_VARIABLE_Livevals_0_2 = ll_backend__livemap__STATE_VARIABLE_Livevals_0__tmp_copy_2;
#line 474 "livemap.m"
              ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__HeadVar__1__tmp_copy_1;
#line 474 "livemap.m"
            }
#line 474 "livemap.m"
            continue;
#line 467 "livemap.m"
          }
#line 466 "livemap.m"
      }
#line 466 "livemap.m"
      break;
#line 466 "livemap.m"
    }
#line 463 "livemap.m"
}

#line 434 "livemap.m"
static void MR_CALL 
ll_backend__livemap__build_live_lval_info_7_p_0(
#line 434 "livemap.m"
  MR_Word ll_backend__livemap__AffectsLiveness_8,
#line 434 "livemap.m"
  MR_Word ll_backend__livemap__LiveLvalInfo_9,
#line 434 "livemap.m"
  MR_String ll_backend__livemap__Code_10,
#line 434 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_15,
#line 434 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_16,
#line 434 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_17,
#line 434 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18)
#line 434 "livemap.m"
{
#line 440 "livemap.m"
  {
#line 440 "livemap.m"
    MR_bool ll_backend__livemap__succeeded;

#line 440 "livemap.m"
    if ((ll_backend__livemap__AffectsLiveness_8 == (MR_Integer) 0))
#line 440 "livemap.m"
      {
#line 441 "livemap.m"
        *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18 = (MR_Integer) 1;
#line 441 "livemap.m"
        *ll_backend__livemap__STATE_VARIABLE_Livevals_16 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_15;
#line 440 "livemap.m"
      }
#line 440 "livemap.m"
    else
#line 440 "livemap.m"
      if ((ll_backend__livemap__AffectsLiveness_8 == (MR_Integer) 2))
#line 443 "livemap.m"
        {
#line 444 "livemap.m"
          ll_backend__livemap__succeeded = (strcmp(ll_backend__livemap__Code_10, (MR_String) "") == 0);
#line 446 "livemap.m"
          if (ll_backend__livemap__succeeded)
#line 444 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_17;
#line 446 "livemap.m"
          else
#line 449 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18 = (MR_Integer) 1;
#line 449 "livemap.m"
          *ll_backend__livemap__STATE_VARIABLE_Livevals_16 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_15;
#line 443 "livemap.m"
        }
#line 440 "livemap.m"
      else
#line 456 "livemap.m"
        if ((ll_backend__livemap__LiveLvalInfo_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "livemap.m"
          {
#line 455 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18 = (MR_Integer) 1;
#line 455 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_Livevals_16 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_15;
#line 454 "livemap.m"
          }
#line 456 "livemap.m"
        else
#line 457 "livemap.m"
          {
#line 457 "livemap.m"
            MR_Word ll_backend__livemap__LiveLvalSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__LiveLvalInfo_9, (MR_Integer) 0)));
#line 457 "livemap.m"
            MR_Word ll_backend__livemap__LiveLvals_14;

#line 458 "livemap.m"
            {
#line 458 "livemap.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__livemap__LiveLvalSet_13, &ll_backend__livemap__LiveLvals_14);
            }
#line 459 "livemap.m"
            {
#line 459 "livemap.m"
              ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(ll_backend__livemap__LiveLvals_14, ll_backend__livemap__STATE_VARIABLE_Livevals_0_15, ll_backend__livemap__STATE_VARIABLE_Livevals_16);
            }
#line 459 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_18 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_17;
#line 457 "livemap.m"
          }
#line 440 "livemap.m"
  }
#line 434 "livemap.m"
}

#line 391 "livemap.m"
static void MR_CALL 
ll_backend__livemap__build_livemap_foreign_proc_components_5_p_0(
#line 391 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 391 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_2,
#line 391 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_3,
#line 391 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4,
#line 391 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_5)
#line 391 "livemap.m"
{
#line 394 "livemap.m"
  while (MR_TRUE)
#line 394 "livemap.m"
    {
#line 394 "livemap.m"
      /* tailcall optimized into a loop */
#line 394 "livemap.m"
      {
#line 394 "livemap.m"
        MR_bool ll_backend__livemap__succeeded;

#line 394 "livemap.m"
        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "livemap.m"
          {
#line 394 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_5 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
#line 394 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_Livevals_3 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 394 "livemap.m"
          }
#line 394 "livemap.m"
        else
#line 396 "livemap.m"
          {
#line 396 "livemap.m"
            MR_Word ll_backend__livemap__Component_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
#line 396 "livemap.m"
            MR_Word ll_backend__livemap__Components_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
#line 396 "livemap.m"
            MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32;
#line 396 "livemap.m"
            MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_33_33;

#line 400 "livemap.m"
            if ((ll_backend__livemap__Component_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 429 "livemap.m"
              {
#line 429 "livemap.m"
                ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 429 "livemap.m"
                ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
#line 429 "livemap.m"
              }
#line 400 "livemap.m"
            else
#line 400 "livemap.m"
              if (((MR_tag((MR_Word) ll_backend__livemap__Component_12)) == (MR_mktag((MR_Integer) 1))))
#line 398 "livemap.m"
                {
#line 398 "livemap.m"
                  MR_Word ll_backend__livemap__Inputs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__Component_12, (MR_Integer) 0)));

#line 399 "livemap.m"
                  {
#line 399 "livemap.m"
                    ll_backend__livemap__build_livemap_foreign_proc_inputs_3_p_0(ll_backend__livemap__Inputs_16, ll_backend__livemap__STATE_VARIABLE_Livevals_0_2, &ll_backend__livemap__STATE_VARIABLE_Livevals_33_33);
                  }
#line 399 "livemap.m"
                  ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
#line 398 "livemap.m"
                }
#line 400 "livemap.m"
              else
#line 400 "livemap.m"
                if (((MR_tag((MR_Word) ll_backend__livemap__Component_12)) == (MR_mktag((MR_Integer) 2))))
#line 401 "livemap.m"
                  {
#line 401 "livemap.m"
                    ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 401 "livemap.m"
                    ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
#line 401 "livemap.m"
                  }
#line 400 "livemap.m"
                else
#line 400 "livemap.m"
                  if (((((MR_tag((MR_Word) ll_backend__livemap__Component_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 427 "livemap.m"
                    {
#line 427 "livemap.m"
                      ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 427 "livemap.m"
                      ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
#line 427 "livemap.m"
                    }
#line 400 "livemap.m"
                  else
#line 400 "livemap.m"
                    if (((((MR_tag((MR_Word) ll_backend__livemap__Component_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 425 "livemap.m"
                      {
#line 425 "livemap.m"
                        ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 425 "livemap.m"
                        ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
#line 425 "livemap.m"
                      }
#line 400 "livemap.m"
                    else
#line 400 "livemap.m"
                      if (((((MR_tag((MR_Word) ll_backend__livemap__Component_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 421 "livemap.m"
                        {
#line 421 "livemap.m"
                          MR_Word ll_backend__livemap__LiveLvalInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 3)));
#line 421 "livemap.m"
                          MR_Word ll_backend__livemap__AffectsLiveness_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 2)));
#line 421 "livemap.m"
                          MR_String ll_backend__livemap__Code_37 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 4)));
#line 420 "livemap.m"
                          MR_Word ll_backend__livemap___Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 1)));

#line 440 "livemap.m"
                          if ((ll_backend__livemap__AffectsLiveness_36 == (MR_Integer) 0))
#line 440 "livemap.m"
                            {
#line 441 "livemap.m"
                              ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = (MR_Integer) 1;
#line 441 "livemap.m"
                              ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 440 "livemap.m"
                            }
#line 440 "livemap.m"
                          else
#line 440 "livemap.m"
                            if ((ll_backend__livemap__AffectsLiveness_36 == (MR_Integer) 2))
#line 443 "livemap.m"
                              {
#line 444 "livemap.m"
                                ll_backend__livemap__succeeded = (strcmp(ll_backend__livemap__Code_37, (MR_String) "") == 0);
#line 446 "livemap.m"
                                if (ll_backend__livemap__succeeded)
#line 444 "livemap.m"
                                  ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
#line 446 "livemap.m"
                                else
#line 449 "livemap.m"
                                  ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = (MR_Integer) 1;
#line 449 "livemap.m"
                                ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 443 "livemap.m"
                              }
#line 440 "livemap.m"
                            else
#line 456 "livemap.m"
                              if ((ll_backend__livemap__LiveLvalInfo_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "livemap.m"
                                {
#line 455 "livemap.m"
                                  ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = (MR_Integer) 1;
#line 455 "livemap.m"
                                  ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 454 "livemap.m"
                                }
#line 456 "livemap.m"
                              else
#line 457 "livemap.m"
                                {
#line 457 "livemap.m"
                                  MR_Word ll_backend__livemap__LiveLvalSet_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__LiveLvalInfo_22, (MR_Integer) 0)));
#line 457 "livemap.m"
                                  MR_Word ll_backend__livemap__LiveLvals_48;

#line 458 "livemap.m"
                                  {
#line 458 "livemap.m"
                                    mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__livemap__LiveLvalSet_47, &ll_backend__livemap__LiveLvals_48);
                                  }
#line 459 "livemap.m"
                                  {
#line 459 "livemap.m"
                                    ll_backend__livemap__livemap_insert_proper_livevals_3_p_0(ll_backend__livemap__LiveLvals_48, ll_backend__livemap__STATE_VARIABLE_Livevals_0_2, &ll_backend__livemap__STATE_VARIABLE_Livevals_33_33);
                                  }
#line 459 "livemap.m"
                                  ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
#line 457 "livemap.m"
                                }
#line 421 "livemap.m"
                        }
#line 400 "livemap.m"
                      else
#line 403 "livemap.m"
                        {
#line 403 "livemap.m"
                          MR_Word ll_backend__livemap__AffectsLiveness_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 2)));
#line 403 "livemap.m"
                          MR_String ll_backend__livemap__Code_20 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 3)));
#line 403 "livemap.m"
                          MR_Word ll_backend__livemap__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Component_12, (MR_Integer) 1)));

#line 407 "livemap.m"
                          if ((ll_backend__livemap__AffectsLiveness_19 == (MR_Integer) 0))
#line 406 "livemap.m"
                            ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = (MR_Integer) 1;
#line 407 "livemap.m"
                          else
#line 407 "livemap.m"
                            if ((ll_backend__livemap__AffectsLiveness_19 == (MR_Integer) 2))
#line 411 "livemap.m"
                              {
#line 409 "livemap.m"
                                ll_backend__livemap__succeeded = (strcmp(ll_backend__livemap__Code_20, (MR_String) "") == 0);
#line 411 "livemap.m"
                                if (ll_backend__livemap__succeeded)
#line 409 "livemap.m"
                                  ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
#line 411 "livemap.m"
                                else
#line 414 "livemap.m"
                                  ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = (MR_Integer) 1;
#line 411 "livemap.m"
                              }
#line 407 "livemap.m"
                            else
#line 417 "livemap.m"
                              ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4;
#line 417 "livemap.m"
                          ll_backend__livemap__STATE_VARIABLE_Livevals_33_33 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_2;
#line 403 "livemap.m"
                        }
#line 431 "livemap.m"
            /* direct tailcall eliminated */
#line 431 "livemap.m"
            {
#line 431 "livemap.m"
              MR_Word ll_backend__livemap__HeadVar__1__tmp_copy_1 = ll_backend__livemap__Components_13;
#line 431 "livemap.m"
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0__tmp_copy_2 = ll_backend__livemap__STATE_VARIABLE_Livevals_33_33;
#line 431 "livemap.m"
              MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0__tmp_copy_4 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_32_32;

#line 431 "livemap.m"
              ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_4 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0__tmp_copy_4;
#line 431 "livemap.m"
              ll_backend__livemap__STATE_VARIABLE_Livevals_0_2 = ll_backend__livemap__STATE_VARIABLE_Livevals_0__tmp_copy_2;
#line 431 "livemap.m"
              ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__HeadVar__1__tmp_copy_1;
#line 431 "livemap.m"
            }
#line 431 "livemap.m"
            continue;
#line 396 "livemap.m"
          }
#line 394 "livemap.m"
      }
#line 394 "livemap.m"
      break;
#line 394 "livemap.m"
    }
#line 391 "livemap.m"
}

#line 238 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0_1(
#line 238 "livemap.m"
  MR_Box ll_backend__livemap__closure_arg,
#line 238 "livemap.m"
  MR_Box ll_backend__livemap__wrapper_arg_1,
#line 238 "livemap.m"
  MR_Box ll_backend__livemap__wrapper_arg_2,
#line 238 "livemap.m"
  MR_Box * ll_backend__livemap__wrapper_arg_3)
#line 238 "livemap.m"
{
#line 238 "livemap.m"
  {
#line 238 "livemap.m"
    MR_Box ll_backend__livemap__closure = ll_backend__livemap__closure_arg;
#line 238 "livemap.m"
    MR_Word ll_backend__livemap__conv0_STATE_VARIABLE_Livevals_10;

#line 238 "livemap.m"
    {
#line 238 "livemap.m"
      ll_backend__livemap__livemap_insert_maybe_label_livevals_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__livemap__wrapper_arg_1), ((MR_Word) ll_backend__livemap__wrapper_arg_2), &ll_backend__livemap__conv0_STATE_VARIABLE_Livevals_10);
    }
#line 238 "livemap.m"
    *ll_backend__livemap__wrapper_arg_3 = ((MR_Box) (ll_backend__livemap__conv0_STATE_VARIABLE_Livevals_10));
#line 238 "livemap.m"
  }
#line 238 "livemap.m"
}

#line 141 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_do_build_instr_9_p_0(
#line 141 "livemap.m"
  MR_Word ll_backend__livemap__Instr0_10,
#line 141 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Instrs_0_100,
#line 141 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Instrs_101,
#line 141 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_0_102,
#line 141 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livevals_103,
#line 141 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104,
#line 141 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105,
#line 141 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livemap_0_106,
#line 141 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livemap_107)
#line 141 "livemap.m"
{
#line 146 "livemap.m"
  {
#line 146 "livemap.m"
    MR_bool ll_backend__livemap__succeeded;
#line 146 "livemap.m"
    MR_Word ll_backend__livemap__Uinstr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Instr0_10, (MR_Integer) 0)));
#line 147 "livemap.m"
    MR_String ll_backend__livemap__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__livemap__Instr0_10, (MR_Integer) 1)));

#line 150 "livemap.m"
    if ((ll_backend__livemap__Uinstr0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 355 "livemap.m"
      {
#line 355 "livemap.m"
        *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 355 "livemap.m"
        *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
#line 355 "livemap.m"
        *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 355 "livemap.m"
        *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 355 "livemap.m"
      }
#line 150 "livemap.m"
    else
#line 150 "livemap.m"
      if ((ll_backend__livemap__Uinstr0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "livemap.m"
        {
#line 357 "livemap.m"
          *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 357 "livemap.m"
          *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
#line 357 "livemap.m"
          *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 357 "livemap.m"
          *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 357 "livemap.m"
        }
#line 150 "livemap.m"
      else
#line 150 "livemap.m"
        if (((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 1))))
#line 149 "livemap.m"
          {
#line 149 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 149 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
#line 149 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 149 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 149 "livemap.m"
          }
#line 150 "livemap.m"
        else
#line 150 "livemap.m"
          if (((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 2))))
#line 151 "livemap.m"
            {
#line 152 "livemap.m"
              {
#line 152 "livemap.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "livevals found in backward scan in build_livemap");
#line 152 "livemap.m"
                return;
              }
#line 151 "livemap.m"
            }
#line 150 "livemap.m"
          else
#line 150 "livemap.m"
            if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 382 "livemap.m"
              {
#line 382 "livemap.m"
                MR_Word ll_backend__livemap__AffectsLiveness_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 382 "livemap.m"
                MR_Word ll_backend__livemap__LiveLvalInfo_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
#line 382 "livemap.m"
                MR_String ll_backend__livemap__Code_89 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));

#line 383 "livemap.m"
                {
#line 383 "livemap.m"
                  ll_backend__livemap__build_live_lval_info_7_p_0(ll_backend__livemap__AffectsLiveness_87, ll_backend__livemap__LiveLvalInfo_88, ll_backend__livemap__Code_89, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103, ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104, ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105);
                }
#line 383 "livemap.m"
                *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 383 "livemap.m"
                *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 382 "livemap.m"
              }
#line 150 "livemap.m"
            else
#line 150 "livemap.m"
              if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 160 "livemap.m"
                {
#line 160 "livemap.m"
                  MR_Word ll_backend__livemap__Lval_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 160 "livemap.m"
                  MR_Word ll_backend__livemap__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
#line 160 "livemap.m"
                  MR_Word ll_backend__livemap__Rvals_24;
#line 160 "livemap.m"
                  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_190_190;
#line 160 "livemap.m"
                  MR_Word ll_backend__livemap__V_191_191;

#line 169 "livemap.m"
                  {
#line 169 "livemap.m"
                    mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_22)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_190_190);
                  }
#line 170 "livemap.m"
                  {
#line 170 "livemap.m"
                    ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_22, &ll_backend__livemap__Rvals_24);
                  }
#line 171 "livemap.m"
                  {
#line 171 "livemap.m"
                    ll_backend__livemap__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "livemap.m"
                    MR_hl_field(MR_mktag(1), ll_backend__livemap__V_191_191, 0) = ((MR_Box) (ll_backend__livemap__Rval_23));
#line 171 "livemap.m"
                    MR_hl_field(MR_mktag(1), ll_backend__livemap__V_191_191, 1) = ((MR_Box) (ll_backend__livemap__Rvals_24));
#line 171 "livemap.m"
                  }
#line 171 "livemap.m"
                  {
#line 171 "livemap.m"
                    ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__V_191_191, ll_backend__livemap__STATE_VARIABLE_Livevals_190_190, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                  }
#line 171 "livemap.m"
                  *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 171 "livemap.m"
                  *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 171 "livemap.m"
                  *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 160 "livemap.m"
                }
#line 150 "livemap.m"
              else
#line 150 "livemap.m"
                if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 155 "livemap.m"
                  {
#line 156 "livemap.m"
                    {
#line 156 "livemap.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "block found in backward scan");
#line 156 "livemap.m"
                      return;
                    }
#line 155 "livemap.m"
                  }
#line 150 "livemap.m"
                else
#line 150 "livemap.m"
                  if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 236 "livemap.m"
                    {
#line 236 "livemap.m"
                      MR_Word ll_backend__livemap__MaybeLabels_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
#line 236 "livemap.m"
                      MR_Word ll_backend__livemap__V_156_156;
#line 236 "livemap.m"
                      MR_Word ll_backend__livemap__V_157_157;
#line 236 "livemap.m"
                      MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_158_158;
#line 236 "livemap.m"
                      MR_Word ll_backend__livemap__V_160_160;
#line 236 "livemap.m"
                      MR_Word ll_backend__livemap__Rval_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 238 "livemap.m"
                      MR_Box ll_backend__livemap__conv1_STATE_VARIABLE_Livevals_103;

#line 237 "livemap.m"
                      {
#line 237 "livemap.m"
                        ll_backend__livemap__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "livemap.m"
                        MR_hl_field(MR_mktag(1), ll_backend__livemap__V_156_156, 0) = ((MR_Box) (ll_backend__livemap__Rval_208));
#line 237 "livemap.m"
                        MR_hl_field(MR_mktag(1), ll_backend__livemap__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "livemap.m"
                      }
#line 237 "livemap.m"
                      {
#line 237 "livemap.m"
                        ll_backend__livemap__V_157_157 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                      }
#line 237 "livemap.m"
                      {
#line 237 "livemap.m"
                        ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__V_156_156, ll_backend__livemap__V_157_157, &ll_backend__livemap__STATE_VARIABLE_Livevals_158_158);
                      }
#line 238 "livemap.m"
                      {
#line 238 "livemap.m"
                        ll_backend__livemap__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 238 "livemap.m"
                        MR_hl_field(MR_mktag(0), ll_backend__livemap__V_160_160, 0) = ((MR_Box) (&ll_backend__livemap_scalar_common_3[0]));
#line 238 "livemap.m"
                        MR_hl_field(MR_mktag(0), ll_backend__livemap__V_160_160, 1) = ((MR_Box) (ll_backend__livemap__livemap_do_build_instr_9_p_0_1));
#line 238 "livemap.m"
                        MR_hl_field(MR_mktag(0), ll_backend__livemap__V_160_160, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 238 "livemap.m"
                        MR_hl_field(MR_mktag(0), ll_backend__livemap__V_160_160, 3) = ((MR_Box) (ll_backend__livemap__STATE_VARIABLE_Livemap_0_106));
#line 238 "livemap.m"
                      }
#line 238 "livemap.m"
                      {
#line 238 "livemap.m"
                        mercury__list__foldl_4_p_0((MR_Word) &ll_backend__livemap_scalar_common_1[1], (MR_Word) &ll_backend__livemap_scalar_common_1[0], ll_backend__livemap__V_160_160, ll_backend__livemap__MaybeLabels_51, ((MR_Box) (ll_backend__livemap__STATE_VARIABLE_Livevals_158_158)), &ll_backend__livemap__conv1_STATE_VARIABLE_Livevals_103);
                      }
#line 238 "livemap.m"
                      *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ((MR_Word) ll_backend__livemap__conv1_STATE_VARIABLE_Livevals_103);
#line 238 "livemap.m"
                      *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 238 "livemap.m"
                      *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 238 "livemap.m"
                      *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 236 "livemap.m"
                    }
#line 150 "livemap.m"
                  else
#line 150 "livemap.m"
                    if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 369 "livemap.m"
                      {
#line 369 "livemap.m"
                        *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 369 "livemap.m"
                        *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
#line 369 "livemap.m"
                        *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 369 "livemap.m"
                        *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 369 "livemap.m"
                      }
#line 150 "livemap.m"
                    else
#line 150 "livemap.m"
                      if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 371 "livemap.m"
                        {
#line 374 "livemap.m"
                          {
#line 374 "livemap.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "decr_sp_and_return");
#line 374 "livemap.m"
                            return;
                          }
#line 371 "livemap.m"
                        }
#line 150 "livemap.m"
                      else
#line 150 "livemap.m"
                        if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 386 "livemap.m"
                          {
#line 386 "livemap.m"
                            MR_Word ll_backend__livemap__Components_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
#line 386 "livemap.m"
                            MR_Word ll_backend__livemap__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 386 "livemap.m"
                            MR_Word ll_backend__livemap__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));
#line 386 "livemap.m"
                            MR_Word ll_backend__livemap__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 4)));
#line 386 "livemap.m"
                            MR_Word ll_backend__livemap__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 5)));
#line 386 "livemap.m"
                            MR_Word ll_backend__livemap__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 6)));
#line 386 "livemap.m"
                            MR_Word ll_backend__livemap__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 7)));
#line 386 "livemap.m"
                            MR_Word ll_backend__livemap__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 8)));
#line 386 "livemap.m"
                            MR_Word ll_backend__livemap__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 9)));
#line 386 "livemap.m"
                            MR_Word ll_backend__livemap__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 10)));

#line 387 "livemap.m"
                            {
#line 387 "livemap.m"
                              ll_backend__livemap__build_livemap_foreign_proc_components_5_p_0(ll_backend__livemap__Components_91, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103, ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104, ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105);
                            }
#line 387 "livemap.m"
                            *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 387 "livemap.m"
                            *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 386 "livemap.m"
                          }
#line 150 "livemap.m"
                        else
#line 150 "livemap.m"
                          if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 378 "livemap.m"
                            {
#line 378 "livemap.m"
                              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 378 "livemap.m"
                              *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
#line 378 "livemap.m"
                              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 378 "livemap.m"
                              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 378 "livemap.m"
                            }
#line 150 "livemap.m"
                          else
#line 150 "livemap.m"
                            if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 321 "livemap.m"
                              {
#line 321 "livemap.m"
                                MR_Word ll_backend__livemap__V_127_127;
#line 321 "livemap.m"
                                MR_Word ll_backend__livemap__Rval_228 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

#line 322 "livemap.m"
                                {
#line 322 "livemap.m"
                                  ll_backend__livemap__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "livemap.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__livemap__V_127_127, 0) = ((MR_Box) (ll_backend__livemap__Rval_228));
#line 322 "livemap.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__livemap__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "livemap.m"
                                }
#line 322 "livemap.m"
                                {
#line 322 "livemap.m"
                                  ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__V_127_127, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                }
#line 322 "livemap.m"
                                *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 322 "livemap.m"
                                *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 322 "livemap.m"
                                *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 321 "livemap.m"
                              }
#line 150 "livemap.m"
                            else
#line 150 "livemap.m"
                              if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 199 "livemap.m"
                                {
#line 199 "livemap.m"
                                  MR_Word ll_backend__livemap__CodeAddr_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 199 "livemap.m"
                                  MR_Word ll_backend__livemap__LivevalsNeeded_43;
#line 199 "livemap.m"
                                  MR_Word ll_backend__livemap__Found_44;
#line 199 "livemap.m"
                                  MR_Word ll_backend__livemap__MaybeSpecial_49;
#line 199 "livemap.m"
                                  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_163_163;
#line 199 "livemap.m"
                                  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_169_169;

#line 200 "livemap.m"
                                  {
#line 200 "livemap.m"
                                    ll_backend__livemap__LivevalsNeeded_43 = ll_backend__opt_util__livevals_addr_1_f_0(ll_backend__livemap__CodeAddr_42);
                                  }
#line 201 "livemap.m"
                                  {
#line 201 "livemap.m"
                                    ll_backend__livemap__look_for_livevals_7_p_0(ll_backend__livemap__STATE_VARIABLE_Instrs_0_100, ll_backend__livemap__STATE_VARIABLE_Instrs_101, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_163_163, (MR_String) "goto", ll_backend__livemap__LivevalsNeeded_43, &ll_backend__livemap__Found_44);
                                  }
#line 205 "livemap.m"
                                  if ((ll_backend__livemap__Found_44 == (MR_Integer) 0))
#line 211 "livemap.m"
                                    if ((ll_backend__livemap__CodeAddr_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 213 "livemap.m"
                                      ll_backend__livemap__STATE_VARIABLE_Livevals_169_169 = ll_backend__livemap__STATE_VARIABLE_Livevals_163_163;
#line 211 "livemap.m"
                                    else
#line 211 "livemap.m"
                                      if ((ll_backend__livemap__CodeAddr_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 214 "livemap.m"
                                        ll_backend__livemap__STATE_VARIABLE_Livevals_169_169 = ll_backend__livemap__STATE_VARIABLE_Livevals_163_163;
#line 211 "livemap.m"
                                      else
#line 211 "livemap.m"
                                        if ((ll_backend__livemap__CodeAddr_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 212 "livemap.m"
                                          ll_backend__livemap__STATE_VARIABLE_Livevals_169_169 = ll_backend__livemap__STATE_VARIABLE_Livevals_163_163;
#line 211 "livemap.m"
                                        else
#line 211 "livemap.m"
                                          if (((MR_tag((MR_Word) ll_backend__livemap__CodeAddr_42)) == (MR_mktag((MR_Integer) 1))))
#line 208 "livemap.m"
                                            {
#line 208 "livemap.m"
                                              MR_Word ll_backend__livemap__V_168_168;
#line 208 "livemap.m"
                                              MR_Word ll_backend__livemap__Label_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__CodeAddr_42, (MR_Integer) 0)));

#line 209 "livemap.m"
                                              {
#line 209 "livemap.m"
                                                ll_backend__livemap__V_168_168 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                              }
#line 209 "livemap.m"
                                              {
#line 209 "livemap.m"
                                                ll_backend__livemap__livemap_insert_label_livevals_4_p_0(ll_backend__livemap__STATE_VARIABLE_Livemap_0_106, ll_backend__livemap__Label_203, ll_backend__livemap__V_168_168, &ll_backend__livemap__STATE_VARIABLE_Livevals_169_169);
                                              }
#line 208 "livemap.m"
                                            }
#line 211 "livemap.m"
                                          else
#line 224 "livemap.m"
                                            {
#line 225 "livemap.m"
                                              {
#line 225 "livemap.m"
                                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.livemap", (MR_String) "predicate \140ll_backend.livemap.livemap_do_build_instr\'/9", (MR_String) "unknown code_addr type");
#line 225 "livemap.m"
                                                return;
                                              }
#line 224 "livemap.m"
                                            }
#line 205 "livemap.m"
                                  else
#line 204 "livemap.m"
                                    ll_backend__livemap__STATE_VARIABLE_Livevals_169_169 = ll_backend__livemap__STATE_VARIABLE_Livevals_163_163;
#line 228 "livemap.m"
                                  {
#line 228 "livemap.m"
                                    ll_backend__livemap__livemap_special_code_addr_2_p_0(ll_backend__livemap__CodeAddr_42, &ll_backend__livemap__MaybeSpecial_49);
                                  }
#line 232 "livemap.m"
                                  if ((ll_backend__livemap__MaybeSpecial_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 233 "livemap.m"
                                    *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_169_169;
#line 232 "livemap.m"
                                  else
#line 230 "livemap.m"
                                    {
#line 230 "livemap.m"
                                      MR_Word ll_backend__livemap__Special_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeSpecial_49, (MR_Integer) 0)));

#line 231 "livemap.m"
                                      {
#line 231 "livemap.m"
                                        mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Special_50)), ll_backend__livemap__STATE_VARIABLE_Livevals_169_169, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                      }
#line 230 "livemap.m"
                                    }
#line 233 "livemap.m"
                                  *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 233 "livemap.m"
                                  *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 199 "livemap.m"
                                }
#line 150 "livemap.m"
                              else
#line 150 "livemap.m"
                                if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 241 "livemap.m"
                                  {
#line 241 "livemap.m"
                                    MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_147_147;
#line 241 "livemap.m"
                                    MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_154_154;
#line 241 "livemap.m"
                                    MR_Word ll_backend__livemap__Rval_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 241 "livemap.m"
                                    MR_Word ll_backend__livemap__CodeAddr_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
#line 241 "livemap.m"
                                    MR_Word ll_backend__livemap__Found_217;
#line 241 "livemap.m"
                                    MR_Word ll_backend__livemap__MaybeSpecial_218;

#line 243 "livemap.m"
                                    {
#line 243 "livemap.m"
                                      ll_backend__livemap__look_for_livevals_7_p_0(ll_backend__livemap__STATE_VARIABLE_Instrs_0_100, ll_backend__livemap__STATE_VARIABLE_Instrs_101, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_147_147, (MR_String) "if_val", (MR_Integer) 0, &ll_backend__livemap__Found_217);
                                    }
#line 253 "livemap.m"
                                    if ((ll_backend__livemap__Found_217 == (MR_Integer) 0))
#line 254 "livemap.m"
                                      {
#line 254 "livemap.m"
                                        MR_Word ll_backend__livemap__V_150_150;
#line 254 "livemap.m"
                                        MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_151_151;
#line 258 "livemap.m"
                                        MR_Word ll_backend__livemap__Label_209;

#line 255 "livemap.m"
                                        {
#line 255 "livemap.m"
                                          ll_backend__livemap__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "livemap.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__livemap__V_150_150, 0) = ((MR_Box) (ll_backend__livemap__Rval_214));
#line 255 "livemap.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__livemap__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "livemap.m"
                                        }
#line 255 "livemap.m"
                                        {
#line 255 "livemap.m"
                                          ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__V_150_150, ll_backend__livemap__STATE_VARIABLE_Livevals_147_147, &ll_backend__livemap__STATE_VARIABLE_Livevals_151_151);
                                        }
#line 256 "livemap.m"
                                        ll_backend__livemap__succeeded = ((MR_tag((MR_Word) ll_backend__livemap__CodeAddr_216)) == (MR_mktag((MR_Integer) 1)));
#line 256 "livemap.m"
                                        if (ll_backend__livemap__succeeded)
#line 256 "livemap.m"
                                          {
#line 256 "livemap.m"
                                            ll_backend__livemap__Label_209 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__CodeAddr_216, (MR_Integer) 0)));
#line 257 "livemap.m"
                                            {
#line 257 "livemap.m"
                                              ll_backend__livemap__livemap_insert_label_livevals_4_p_0(ll_backend__livemap__STATE_VARIABLE_Livemap_0_106, ll_backend__livemap__Label_209, ll_backend__livemap__STATE_VARIABLE_Livevals_151_151, &ll_backend__livemap__STATE_VARIABLE_Livevals_154_154);
                                            }
#line 256 "livemap.m"
                                          }
#line 256 "livemap.m"
                                        else
#line 257 "livemap.m"
                                          ll_backend__livemap__STATE_VARIABLE_Livevals_154_154 = ll_backend__livemap__STATE_VARIABLE_Livevals_151_151;
#line 254 "livemap.m"
                                      }
#line 253 "livemap.m"
                                    else
#line 245 "livemap.m"
                                      {
#line 252 "livemap.m"
                                        {
#line 252 "livemap.m"
                                          mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_147_147, &ll_backend__livemap__STATE_VARIABLE_Livevals_154_154);
                                        }
#line 245 "livemap.m"
                                      }
#line 262 "livemap.m"
                                    {
#line 262 "livemap.m"
                                      ll_backend__livemap__livemap_special_code_addr_2_p_0(ll_backend__livemap__CodeAddr_216, &ll_backend__livemap__MaybeSpecial_218);
                                    }
#line 266 "livemap.m"
                                    if ((ll_backend__livemap__MaybeSpecial_218 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 267 "livemap.m"
                                      *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_154_154;
#line 266 "livemap.m"
                                    else
#line 264 "livemap.m"
                                      {
#line 264 "livemap.m"
                                        MR_Word ll_backend__livemap__Special_212 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeSpecial_218, (MR_Integer) 0)));

#line 265 "livemap.m"
                                        {
#line 265 "livemap.m"
                                          mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Special_212)), ll_backend__livemap__STATE_VARIABLE_Livevals_154_154, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                        }
#line 264 "livemap.m"
                                      }
#line 267 "livemap.m"
                                    *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 267 "livemap.m"
                                    *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 241 "livemap.m"
                                  }
#line 150 "livemap.m"
                                else
#line 150 "livemap.m"
                                  if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 279 "livemap.m"
                                    {
#line 279 "livemap.m"
                                      MR_Word ll_backend__livemap__TypeCtorInfo_258_258 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 279 "livemap.m"
                                      MR_Word ll_backend__livemap__SizeRval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 4)));
#line 279 "livemap.m"
                                      MR_Word ll_backend__livemap__MaybeRegionRval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 7)));
#line 279 "livemap.m"
                                      MR_Word ll_backend__livemap__MaybeReuse_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 8)));
#line 279 "livemap.m"
                                      MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_135_135;
#line 279 "livemap.m"
                                      MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_136_136;
#line 279 "livemap.m"
                                      MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_137_137;
#line 279 "livemap.m"
                                      MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_138_138;
#line 279 "livemap.m"
                                      MR_Word ll_backend__livemap__Lval_223 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 279 "livemap.m"
                                      MR_Word ll_backend__livemap__Rvals_224;
#line 278 "livemap.m"
                                      MR_Word ll_backend__livemap__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
#line 278 "livemap.m"
                                      MR_Word ll_backend__livemap__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));
#line 278 "livemap.m"
                                      MR_Word ll_backend__livemap__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 5)));
#line 278 "livemap.m"
                                      MR_Word ll_backend__livemap__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 6)));

#line 288 "livemap.m"
                                      {
#line 288 "livemap.m"
                                        mercury__set__delete_3_p_0(ll_backend__livemap__TypeCtorInfo_258_258, ((MR_Box) (ll_backend__livemap__Lval_223)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_135_135);
                                      }
#line 289 "livemap.m"
                                      {
#line 289 "livemap.m"
                                        ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_223, &ll_backend__livemap__Rvals_224);
                                      }
#line 290 "livemap.m"
                                      {
#line 290 "livemap.m"
                                        ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Rvals_224, ll_backend__livemap__STATE_VARIABLE_Livevals_135_135, &ll_backend__livemap__STATE_VARIABLE_Livevals_136_136);
                                      }
#line 291 "livemap.m"
                                      {
#line 291 "livemap.m"
                                        ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__SizeRval_55, ll_backend__livemap__STATE_VARIABLE_Livevals_136_136, &ll_backend__livemap__STATE_VARIABLE_Livevals_137_137);
                                      }
#line 294 "livemap.m"
                                      if ((ll_backend__livemap__MaybeRegionRval_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 293 "livemap.m"
                                        ll_backend__livemap__STATE_VARIABLE_Livevals_138_138 = ll_backend__livemap__STATE_VARIABLE_Livevals_137_137;
#line 294 "livemap.m"
                                      else
#line 295 "livemap.m"
                                        {
#line 295 "livemap.m"
                                          MR_Word ll_backend__livemap__RegionRval_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeRegionRval_58, (MR_Integer) 0)));

#line 296 "livemap.m"
                                          {
#line 296 "livemap.m"
                                            ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__RegionRval_60, ll_backend__livemap__STATE_VARIABLE_Livevals_137_137, &ll_backend__livemap__STATE_VARIABLE_Livevals_138_138);
                                          }
#line 295 "livemap.m"
                                        }
#line 300 "livemap.m"
                                      if ((ll_backend__livemap__MaybeReuse_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "livemap.m"
                                        *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_138_138;
#line 300 "livemap.m"
                                      else
#line 301 "livemap.m"
                                        {
#line 301 "livemap.m"
                                          MR_Word ll_backend__livemap__ReuseRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeReuse_59, (MR_Integer) 0)));
#line 301 "livemap.m"
                                          MR_Word ll_backend__livemap__MaybeFlagLval_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeReuse_59, (MR_Integer) 1)));
#line 301 "livemap.m"
                                          MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_139_139;

#line 302 "livemap.m"
                                          {
#line 302 "livemap.m"
                                            ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__ReuseRval_61, ll_backend__livemap__STATE_VARIABLE_Livevals_138_138, &ll_backend__livemap__STATE_VARIABLE_Livevals_139_139);
                                          }
#line 305 "livemap.m"
                                          if ((ll_backend__livemap__MaybeFlagLval_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "livemap.m"
                                            *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_139_139;
#line 305 "livemap.m"
                                          else
#line 306 "livemap.m"
                                            {
#line 306 "livemap.m"
                                              MR_Word ll_backend__livemap__FlagLval_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__MaybeFlagLval_62, (MR_Integer) 0)));
#line 306 "livemap.m"
                                              MR_Word ll_backend__livemap__FlagRvals_64;
#line 306 "livemap.m"
                                              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_140_140;

#line 307 "livemap.m"
                                              {
#line 307 "livemap.m"
                                                mercury__set__delete_3_p_0(ll_backend__livemap__TypeCtorInfo_258_258, ((MR_Box) (ll_backend__livemap__FlagLval_63)), ll_backend__livemap__STATE_VARIABLE_Livevals_139_139, &ll_backend__livemap__STATE_VARIABLE_Livevals_140_140);
                                              }
#line 308 "livemap.m"
                                              {
#line 308 "livemap.m"
                                                ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__FlagLval_63, &ll_backend__livemap__FlagRvals_64);
                                              }
#line 309 "livemap.m"
                                              {
#line 309 "livemap.m"
                                                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__FlagRvals_64, ll_backend__livemap__STATE_VARIABLE_Livevals_140_140, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                              }
#line 306 "livemap.m"
                                            }
#line 301 "livemap.m"
                                        }
#line 309 "livemap.m"
                                      *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 309 "livemap.m"
                                      *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 309 "livemap.m"
                                      *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 279 "livemap.m"
                                    }
#line 150 "livemap.m"
                                  else
#line 150 "livemap.m"
                                    if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 367 "livemap.m"
                                      {
#line 367 "livemap.m"
                                        *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 367 "livemap.m"
                                        *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
#line 367 "livemap.m"
                                        *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 367 "livemap.m"
                                        *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 367 "livemap.m"
                                      }
#line 150 "livemap.m"
                                    else
#line 150 "livemap.m"
                                      if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 376 "livemap.m"
                                        {
#line 376 "livemap.m"
                                          *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 376 "livemap.m"
                                          *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
#line 376 "livemap.m"
                                          *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 376 "livemap.m"
                                          *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 376 "livemap.m"
                                        }
#line 150 "livemap.m"
                                      else
#line 150 "livemap.m"
                                        if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 380 "livemap.m"
                                          {
#line 380 "livemap.m"
                                            *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 380 "livemap.m"
                                            *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
#line 380 "livemap.m"
                                            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 380 "livemap.m"
                                            *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 380 "livemap.m"
                                          }
#line 150 "livemap.m"
                                        else
#line 150 "livemap.m"
                                          if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 160 "livemap.m"
                                            {
#line 160 "livemap.m"
                                              MR_Word ll_backend__livemap__Lval_262 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 160 "livemap.m"
                                              MR_Word ll_backend__livemap__Rval_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
#line 160 "livemap.m"
                                              MR_Word ll_backend__livemap__Rvals_264;
#line 160 "livemap.m"
                                              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_190_265;
#line 160 "livemap.m"
                                              MR_Word ll_backend__livemap__V_266_266;

#line 169 "livemap.m"
                                              {
#line 169 "livemap.m"
                                                mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_262)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_190_265);
                                              }
#line 170 "livemap.m"
                                              {
#line 170 "livemap.m"
                                                ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_262, &ll_backend__livemap__Rvals_264);
                                              }
#line 171 "livemap.m"
                                              {
#line 171 "livemap.m"
                                                ll_backend__livemap__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "livemap.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__livemap__V_266_266, 0) = ((MR_Box) (ll_backend__livemap__Rval_263));
#line 171 "livemap.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__livemap__V_266_266, 1) = ((MR_Box) (ll_backend__livemap__Rvals_264));
#line 171 "livemap.m"
                                              }
#line 171 "livemap.m"
                                              {
#line 171 "livemap.m"
                                                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__V_266_266, ll_backend__livemap__STATE_VARIABLE_Livevals_190_265, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                              }
#line 171 "livemap.m"
                                              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 171 "livemap.m"
                                              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 171 "livemap.m"
                                              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 160 "livemap.m"
                                            }
#line 150 "livemap.m"
                                          else
#line 150 "livemap.m"
                                            if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 196 "livemap.m"
                                              {
#line 196 "livemap.m"
                                                MR_Word ll_backend__livemap__Label_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

#line 197 "livemap.m"
                                                {
#line 197 "livemap.m"
                                                  mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__livemap_scalar_common_1[0], ((MR_Box) (ll_backend__livemap__Label_41)), ((MR_Box) (ll_backend__livemap__STATE_VARIABLE_Livevals_0_102)), ll_backend__livemap__STATE_VARIABLE_Livemap_0_106, ll_backend__livemap__STATE_VARIABLE_Livemap_107);
                                                }
#line 197 "livemap.m"
                                                *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 197 "livemap.m"
                                                *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
#line 197 "livemap.m"
                                                *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 196 "livemap.m"
                                              }
#line 150 "livemap.m"
                                            else
#line 150 "livemap.m"
                                              if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 173 "livemap.m"
                                                {
#line 173 "livemap.m"
                                                  MR_Word ll_backend__livemap__Lval_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
#line 173 "livemap.m"
                                                  MR_Integer ll_backend__livemap___NumSlots_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

#line 174 "livemap.m"
                                                  {
#line 174 "livemap.m"
                                                    mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_199)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                  }
#line 174 "livemap.m"
                                                  *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 174 "livemap.m"
                                                  *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 174 "livemap.m"
                                                  *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 173 "livemap.m"
                                                }
#line 150 "livemap.m"
                                              else
#line 150 "livemap.m"
                                                if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 186 "livemap.m"
                                                  {
#line 186 "livemap.m"
                                                    MR_Word ll_backend__livemap__V_176_176;
#line 186 "livemap.m"
                                                    MR_Word ll_backend__livemap__V_177_177;
#line 186 "livemap.m"
                                                    MR_Word ll_backend__livemap__V_179_179;
#line 186 "livemap.m"
                                                    MR_Word ll_backend__livemap__LCRval_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 186 "livemap.m"
                                                    MR_Word ll_backend__livemap__LCSRval_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));

#line 189 "livemap.m"
                                                    {
#line 189 "livemap.m"
                                                      ll_backend__livemap__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "livemap.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__livemap__V_179_179, 0) = ((MR_Box) (ll_backend__livemap__LCSRval_202));
#line 189 "livemap.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__livemap__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 189 "livemap.m"
                                                    }
#line 189 "livemap.m"
                                                    {
#line 189 "livemap.m"
                                                      ll_backend__livemap__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "livemap.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__livemap__V_176_176, 0) = ((MR_Box) (ll_backend__livemap__LCRval_201));
#line 189 "livemap.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__livemap__V_176_176, 1) = ((MR_Box) (ll_backend__livemap__V_179_179));
#line 189 "livemap.m"
                                                    }
#line 189 "livemap.m"
                                                    {
#line 189 "livemap.m"
                                                      ll_backend__livemap__V_177_177 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                                    }
#line 189 "livemap.m"
                                                    {
#line 189 "livemap.m"
                                                      ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__V_176_176, ll_backend__livemap__V_177_177, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                    }
#line 189 "livemap.m"
                                                    *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 189 "livemap.m"
                                                    *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 189 "livemap.m"
                                                    *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 186 "livemap.m"
                                                  }
#line 150 "livemap.m"
                                                else
#line 150 "livemap.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 181 "livemap.m"
                                                    {
#line 181 "livemap.m"
                                                      MR_Word ll_backend__livemap__LCSRval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
#line 181 "livemap.m"
                                                      MR_Word ll_backend__livemap__Child_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));
#line 181 "livemap.m"
                                                      MR_Word ll_backend__livemap__V_181_181;
#line 181 "livemap.m"
                                                      MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_182_182;
#line 181 "livemap.m"
                                                      MR_Word ll_backend__livemap__V_183_183;
#line 181 "livemap.m"
                                                      MR_Word ll_backend__livemap__LCRval_200 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

#line 182 "livemap.m"
                                                      {
#line 182 "livemap.m"
                                                        ll_backend__livemap__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "livemap.m"
                                                        MR_hl_field(MR_mktag(1), ll_backend__livemap__V_183_183, 0) = ((MR_Box) (ll_backend__livemap__LCSRval_30));
#line 182 "livemap.m"
                                                        MR_hl_field(MR_mktag(1), ll_backend__livemap__V_183_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "livemap.m"
                                                      }
#line 182 "livemap.m"
                                                      {
#line 182 "livemap.m"
                                                        ll_backend__livemap__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "livemap.m"
                                                        MR_hl_field(MR_mktag(1), ll_backend__livemap__V_181_181, 0) = ((MR_Box) (ll_backend__livemap__LCRval_200));
#line 182 "livemap.m"
                                                        MR_hl_field(MR_mktag(1), ll_backend__livemap__V_181_181, 1) = ((MR_Box) (ll_backend__livemap__V_183_183));
#line 182 "livemap.m"
                                                      }
#line 182 "livemap.m"
                                                      {
#line 182 "livemap.m"
                                                        ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__V_181_181, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_182_182);
                                                      }
#line 184 "livemap.m"
                                                      {
#line 184 "livemap.m"
                                                        ll_backend__livemap__livemap_insert_label_livevals_4_p_0(ll_backend__livemap__STATE_VARIABLE_Livemap_0_106, ll_backend__livemap__Child_31, ll_backend__livemap__STATE_VARIABLE_Livevals_182_182, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                      }
#line 184 "livemap.m"
                                                      *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 184 "livemap.m"
                                                      *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 184 "livemap.m"
                                                      *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 181 "livemap.m"
                                                    }
#line 150 "livemap.m"
                                                  else
#line 150 "livemap.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 176 "livemap.m"
                                                      {
#line 176 "livemap.m"
                                                        MR_Word ll_backend__livemap__LCRval_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 176 "livemap.m"
                                                        MR_Word ll_backend__livemap__LCSLval_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));
#line 176 "livemap.m"
                                                        MR_Word ll_backend__livemap__LCSAccessRvals_29;
#line 176 "livemap.m"
                                                        MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_186_186;
#line 176 "livemap.m"
                                                        MR_Word ll_backend__livemap__V_187_187;
#line 176 "livemap.m"
                                                        MR_Word ll_backend__livemap___InternalLabel_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));

#line 177 "livemap.m"
                                                        {
#line 177 "livemap.m"
                                                          mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__LCSLval_27)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_186_186);
                                                        }
#line 178 "livemap.m"
                                                        {
#line 178 "livemap.m"
                                                          ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__LCSLval_27, &ll_backend__livemap__LCSAccessRvals_29);
                                                        }
#line 179 "livemap.m"
                                                        {
#line 179 "livemap.m"
                                                          ll_backend__livemap__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "livemap.m"
                                                          MR_hl_field(MR_mktag(1), ll_backend__livemap__V_187_187, 0) = ((MR_Box) (ll_backend__livemap__LCRval_26));
#line 179 "livemap.m"
                                                          MR_hl_field(MR_mktag(1), ll_backend__livemap__V_187_187, 1) = ((MR_Box) (ll_backend__livemap__LCSAccessRvals_29));
#line 179 "livemap.m"
                                                        }
#line 179 "livemap.m"
                                                        {
#line 179 "livemap.m"
                                                          ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__V_187_187, ll_backend__livemap__STATE_VARIABLE_Livevals_186_186, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                        }
#line 179 "livemap.m"
                                                        *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 179 "livemap.m"
                                                        *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 179 "livemap.m"
                                                        *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 176 "livemap.m"
                                                      }
#line 150 "livemap.m"
                                                    else
#line 150 "livemap.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 191 "livemap.m"
                                                        {
#line 192 "livemap.m"
                                                          MR_Word ll_backend__livemap__V_38_38;

#line 192 "livemap.m"
                                                          {
#line 192 "livemap.m"
                                                            ll_backend__livemap__look_for_livevals_7_p_0(ll_backend__livemap__STATE_VARIABLE_Instrs_0_100, ll_backend__livemap__STATE_VARIABLE_Instrs_101, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103, (MR_String) "call", (MR_Integer) 1, &ll_backend__livemap__V_38_38);
                                                          }
#line 192 "livemap.m"
                                                          *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 192 "livemap.m"
                                                          *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 191 "livemap.m"
                                                        }
#line 150 "livemap.m"
                                                      else
#line 150 "livemap.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 313 "livemap.m"
                                                          {
#line 313 "livemap.m"
                                                            MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_133_133;
#line 313 "livemap.m"
                                                            MR_Word ll_backend__livemap__Lval_225 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 313 "livemap.m"
                                                            MR_Word ll_backend__livemap__Rvals_226;

#line 314 "livemap.m"
                                                            {
#line 314 "livemap.m"
                                                              mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_225)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_133_133);
                                                            }
#line 315 "livemap.m"
                                                            {
#line 315 "livemap.m"
                                                              ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_225, &ll_backend__livemap__Rvals_226);
                                                            }
#line 316 "livemap.m"
                                                            {
#line 316 "livemap.m"
                                                              ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Rvals_226, ll_backend__livemap__STATE_VARIABLE_Livevals_133_133, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                            }
#line 316 "livemap.m"
                                                            *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 316 "livemap.m"
                                                            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 316 "livemap.m"
                                                            *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 313 "livemap.m"
                                                          }
#line 150 "livemap.m"
                                                        else
#line 150 "livemap.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 359 "livemap.m"
                                                            {
#line 359 "livemap.m"
                                                              MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_116_116;
#line 359 "livemap.m"
                                                              MR_Word ll_backend__livemap__Lval_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 359 "livemap.m"
                                                              MR_Word ll_backend__livemap__Rvals_239;

#line 360 "livemap.m"
                                                              {
#line 360 "livemap.m"
                                                                mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_238)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_116_116);
                                                              }
#line 361 "livemap.m"
                                                              {
#line 361 "livemap.m"
                                                                ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_238, &ll_backend__livemap__Rvals_239);
                                                              }
#line 362 "livemap.m"
                                                              {
#line 362 "livemap.m"
                                                                ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Rvals_239, ll_backend__livemap__STATE_VARIABLE_Livevals_116_116, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                              }
#line 362 "livemap.m"
                                                              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 362 "livemap.m"
                                                              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 362 "livemap.m"
                                                              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 359 "livemap.m"
                                                            }
#line 150 "livemap.m"
                                                          else
#line 150 "livemap.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 194 "livemap.m"
                                                              {
#line 194 "livemap.m"
                                                                *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 194 "livemap.m"
                                                                *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
#line 194 "livemap.m"
                                                                *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 194 "livemap.m"
                                                                *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 194 "livemap.m"
                                                              }
#line 150 "livemap.m"
                                                            else
#line 150 "livemap.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 364 "livemap.m"
                                                                {
#line 364 "livemap.m"
                                                                  MR_Word ll_backend__livemap__Rval_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

#line 365 "livemap.m"
                                                                  {
#line 365 "livemap.m"
                                                                    ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Rval_240, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                                  }
#line 365 "livemap.m"
                                                                  *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 365 "livemap.m"
                                                                  *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 365 "livemap.m"
                                                                  *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 364 "livemap.m"
                                                                }
#line 150 "livemap.m"
                                                              else
#line 150 "livemap.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 324 "livemap.m"
                                                                  {
#line 324 "livemap.m"
                                                                    *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 324 "livemap.m"
                                                                    *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
#line 324 "livemap.m"
                                                                    *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 324 "livemap.m"
                                                                    *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 324 "livemap.m"
                                                                  }
#line 150 "livemap.m"
                                                                else
#line 150 "livemap.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 327 "livemap.m"
                                                                    {
#line 327 "livemap.m"
                                                                      MR_Word ll_backend__livemap__IdRval_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));
#line 327 "livemap.m"
                                                                      MR_Word ll_backend__livemap__NumLval_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 4)));
#line 327 "livemap.m"
                                                                      MR_Word ll_backend__livemap__AddrLval_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 5)));
#line 327 "livemap.m"
                                                                      MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_122_122;
#line 327 "livemap.m"
                                                                      MR_Word ll_backend__livemap__V_123_123;
#line 327 "livemap.m"
                                                                      MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_124_124;
#line 327 "livemap.m"
                                                                      MR_Word ll_backend__livemap__V_125_125;
#line 326 "livemap.m"
                                                                      MR_Word ll_backend__livemap___FillOp_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 326 "livemap.m"
                                                                      MR_Word ll_backend__livemap___EmbeddedStackFrame_229 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));

#line 328 "livemap.m"
                                                                      {
#line 328 "livemap.m"
                                                                        ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__IdRval_68, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_122_122);
                                                                      }
#line 332 "livemap.m"
                                                                      {
#line 332 "livemap.m"
                                                                        ll_backend__livemap__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 332 "livemap.m"
                                                                        MR_hl_field(MR_mktag(0), ll_backend__livemap__V_123_123, 0) = ((MR_Box) (ll_backend__livemap__NumLval_69));
#line 332 "livemap.m"
                                                                      }
#line 332 "livemap.m"
                                                                      {
#line 332 "livemap.m"
                                                                        ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__V_123_123, ll_backend__livemap__STATE_VARIABLE_Livevals_122_122, &ll_backend__livemap__STATE_VARIABLE_Livevals_124_124);
                                                                      }
#line 333 "livemap.m"
                                                                      {
#line 333 "livemap.m"
                                                                        ll_backend__livemap__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 333 "livemap.m"
                                                                        MR_hl_field(MR_mktag(0), ll_backend__livemap__V_125_125, 0) = ((MR_Box) (ll_backend__livemap__AddrLval_70));
#line 333 "livemap.m"
                                                                      }
#line 333 "livemap.m"
                                                                      {
#line 333 "livemap.m"
                                                                        ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__V_125_125, ll_backend__livemap__STATE_VARIABLE_Livevals_124_124, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                                      }
#line 333 "livemap.m"
                                                                      *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 333 "livemap.m"
                                                                      *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 333 "livemap.m"
                                                                      *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 327 "livemap.m"
                                                                    }
#line 150 "livemap.m"
                                                                  else
#line 150 "livemap.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 336 "livemap.m"
                                                                      {
#line 336 "livemap.m"
                                                                        MR_Word ll_backend__livemap__ValueRval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 3)));
#line 335 "livemap.m"
                                                                        MR_Word ll_backend__livemap___SetOp_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 335 "livemap.m"
                                                                        MR_Word ll_backend__livemap___EmbeddedStackFrame_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));

#line 337 "livemap.m"
                                                                        {
#line 337 "livemap.m"
                                                                          ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__ValueRval_72, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                                        }
#line 337 "livemap.m"
                                                                        *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 337 "livemap.m"
                                                                        *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 337 "livemap.m"
                                                                        *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 336 "livemap.m"
                                                                      }
#line 150 "livemap.m"
                                                                    else
#line 150 "livemap.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 352 "livemap.m"
                                                                        {
#line 352 "livemap.m"
                                                                          MR_Word ll_backend__livemap__Rval_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 352 "livemap.m"
                                                                          MR_Word ll_backend__livemap___Reason_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 2)));

#line 353 "livemap.m"
                                                                          {
#line 353 "livemap.m"
                                                                            ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__Rval_237, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                                          }
#line 353 "livemap.m"
                                                                          *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 353 "livemap.m"
                                                                          *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 353 "livemap.m"
                                                                          *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 352 "livemap.m"
                                                                        }
#line 150 "livemap.m"
                                                                      else
#line 150 "livemap.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 318 "livemap.m"
                                                                          {
#line 318 "livemap.m"
                                                                            MR_Word ll_backend__livemap__V_130_130;
#line 318 "livemap.m"
                                                                            MR_Word ll_backend__livemap__Rval_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

#line 319 "livemap.m"
                                                                            {
#line 319 "livemap.m"
                                                                              ll_backend__livemap__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "livemap.m"
                                                                              MR_hl_field(MR_mktag(1), ll_backend__livemap__V_130_130, 0) = ((MR_Box) (ll_backend__livemap__Rval_227));
#line 319 "livemap.m"
                                                                              MR_hl_field(MR_mktag(1), ll_backend__livemap__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "livemap.m"
                                                                            }
#line 319 "livemap.m"
                                                                            {
#line 319 "livemap.m"
                                                                              ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__V_130_130, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                                            }
#line 319 "livemap.m"
                                                                            *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 319 "livemap.m"
                                                                            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 319 "livemap.m"
                                                                            *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 318 "livemap.m"
                                                                          }
#line 150 "livemap.m"
                                                                        else
#line 150 "livemap.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 275 "livemap.m"
                                                                            {
#line 275 "livemap.m"
                                                                              MR_Word ll_backend__livemap__V_142_142;
#line 275 "livemap.m"
                                                                              MR_Word ll_backend__livemap__Lval_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));

#line 276 "livemap.m"
                                                                              {
#line 276 "livemap.m"
                                                                                ll_backend__livemap__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 276 "livemap.m"
                                                                                MR_hl_field(MR_mktag(0), ll_backend__livemap__V_142_142, 0) = ((MR_Box) (ll_backend__livemap__Lval_222));
#line 276 "livemap.m"
                                                                              }
#line 276 "livemap.m"
                                                                              {
#line 276 "livemap.m"
                                                                                ll_backend__livemap__make_live_in_rval_3_p_0(ll_backend__livemap__V_142_142, ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                                              }
#line 276 "livemap.m"
                                                                              *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 276 "livemap.m"
                                                                              *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 276 "livemap.m"
                                                                              *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 275 "livemap.m"
                                                                            }
#line 150 "livemap.m"
                                                                          else
#line 150 "livemap.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 270 "livemap.m"
                                                                              {
#line 270 "livemap.m"
                                                                                MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_144_144;
#line 270 "livemap.m"
                                                                                MR_Word ll_backend__livemap__Lval_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 270 "livemap.m"
                                                                                MR_Word ll_backend__livemap__Rvals_221;

#line 271 "livemap.m"
                                                                                {
#line 271 "livemap.m"
                                                                                  mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_220)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_144_144);
                                                                                }
#line 272 "livemap.m"
                                                                                {
#line 272 "livemap.m"
                                                                                  ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_220, &ll_backend__livemap__Rvals_221);
                                                                                }
#line 273 "livemap.m"
                                                                                {
#line 273 "livemap.m"
                                                                                  ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Rvals_221, ll_backend__livemap__STATE_VARIABLE_Livevals_144_144, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                                                }
#line 273 "livemap.m"
                                                                                *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 273 "livemap.m"
                                                                                *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 273 "livemap.m"
                                                                                *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 270 "livemap.m"
                                                                              }
#line 150 "livemap.m"
                                                                            else
#line 150 "livemap.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__livemap__Uinstr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 347 "livemap.m"
                                                                                {
#line 347 "livemap.m"
                                                                                  MR_Word ll_backend__livemap__STATE_VARIABLE_Livevals_119_119;
#line 347 "livemap.m"
                                                                                  MR_Word ll_backend__livemap__Lval_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__livemap__Uinstr0_15, (MR_Integer) 1)));
#line 347 "livemap.m"
                                                                                  MR_Word ll_backend__livemap__Rvals_236;

#line 348 "livemap.m"
                                                                                  {
#line 348 "livemap.m"
                                                                                    mercury__set__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__livemap__Lval_235)), ll_backend__livemap__STATE_VARIABLE_Livevals_0_102, &ll_backend__livemap__STATE_VARIABLE_Livevals_119_119);
                                                                                  }
#line 349 "livemap.m"
                                                                                  {
#line 349 "livemap.m"
                                                                                    ll_backend__opt_util__lval_access_rvals_2_p_0(ll_backend__livemap__Lval_235, &ll_backend__livemap__Rvals_236);
                                                                                  }
#line 350 "livemap.m"
                                                                                  {
#line 350 "livemap.m"
                                                                                    ll_backend__livemap__make_live_in_rvals_3_p_0(ll_backend__livemap__Rvals_236, ll_backend__livemap__STATE_VARIABLE_Livevals_119_119, ll_backend__livemap__STATE_VARIABLE_Livevals_103);
                                                                                  }
#line 350 "livemap.m"
                                                                                  *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 350 "livemap.m"
                                                                                  *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 350 "livemap.m"
                                                                                  *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 347 "livemap.m"
                                                                                }
#line 150 "livemap.m"
                                                                              else
#line 339 "livemap.m"
                                                                                {
#line 339 "livemap.m"
                                                                                  *ll_backend__livemap__STATE_VARIABLE_Instrs_101 = ll_backend__livemap__STATE_VARIABLE_Instrs_0_100;
#line 339 "livemap.m"
                                                                                  *ll_backend__livemap__STATE_VARIABLE_Livevals_103 = ll_backend__livemap__STATE_VARIABLE_Livevals_0_102;
#line 339 "livemap.m"
                                                                                  *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_105 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_104;
#line 339 "livemap.m"
                                                                                  *ll_backend__livemap__STATE_VARIABLE_Livemap_107 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_106;
#line 339 "livemap.m"
                                                                                }
#line 146 "livemap.m"
  }
#line 141 "livemap.m"
}

#line 131 "livemap.m"
static void MR_CALL 
ll_backend__livemap__livemap_do_build_6_p_0(
#line 131 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 131 "livemap.m"
  MR_Word ll_backend__livemap__Livevals0_2,
#line 131 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_3,
#line 131 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_4,
#line 131 "livemap.m"
  MR_Word ll_backend__livemap__STATE_VARIABLE_Livemap_0_5,
#line 131 "livemap.m"
  MR_Word * ll_backend__livemap__STATE_VARIABLE_Livemap_6)
#line 131 "livemap.m"
{
#line 134 "livemap.m"
  while (MR_TRUE)
#line 134 "livemap.m"
    {
#line 134 "livemap.m"
      /* tailcall optimized into a loop */
#line 134 "livemap.m"
      {
#line 134 "livemap.m"
        MR_bool ll_backend__livemap__succeeded;

#line 134 "livemap.m"
        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 134 "livemap.m"
          {
#line 134 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_Livemap_6 = ll_backend__livemap__STATE_VARIABLE_Livemap_0_5;
#line 134 "livemap.m"
            *ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_4 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_3;
#line 134 "livemap.m"
          }
#line 134 "livemap.m"
        else
#line 136 "livemap.m"
          {
#line 136 "livemap.m"
            MR_Word ll_backend__livemap__Instr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "livemap.m"
            MR_Word ll_backend__livemap__Instrs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "livemap.m"
            MR_Word ll_backend__livemap__Instrs1_19;
#line 136 "livemap.m"
            MR_Word ll_backend__livemap__Livevals1_20;
#line 136 "livemap.m"
            MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_25_25;
#line 136 "livemap.m"
            MR_Word ll_backend__livemap__STATE_VARIABLE_Livemap_26_26;

#line 137 "livemap.m"
            {
#line 137 "livemap.m"
              ll_backend__livemap__livemap_do_build_instr_9_p_0(ll_backend__livemap__Instr0_14, ll_backend__livemap__Instrs0_15, &ll_backend__livemap__Instrs1_19, ll_backend__livemap__Livevals0_2, &ll_backend__livemap__Livevals1_20, ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_3, &ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_25_25, ll_backend__livemap__STATE_VARIABLE_Livemap_0_5, &ll_backend__livemap__STATE_VARIABLE_Livemap_26_26);
            }
#line 139 "livemap.m"
            /* direct tailcall eliminated */
#line 139 "livemap.m"
            {
#line 139 "livemap.m"
              MR_Word ll_backend__livemap__HeadVar__1__tmp_copy_1 = ll_backend__livemap__Instrs1_19;
#line 139 "livemap.m"
              MR_Word ll_backend__livemap__Livevals0__tmp_copy_2 = ll_backend__livemap__Livevals1_20;
#line 139 "livemap.m"
              MR_Word ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0__tmp_copy_3 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_25_25;
#line 139 "livemap.m"
              MR_Word ll_backend__livemap__STATE_VARIABLE_Livemap_0__tmp_copy_5 = ll_backend__livemap__STATE_VARIABLE_Livemap_26_26;

#line 139 "livemap.m"
              ll_backend__livemap__STATE_VARIABLE_Livemap_0_5 = ll_backend__livemap__STATE_VARIABLE_Livemap_0__tmp_copy_5;
#line 139 "livemap.m"
              ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0_3 = ll_backend__livemap__STATE_VARIABLE_ContainsBadUserCode_0__tmp_copy_3;
#line 139 "livemap.m"
              ll_backend__livemap__Livevals0_2 = ll_backend__livemap__Livevals0__tmp_copy_2;
#line 139 "livemap.m"
              ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__HeadVar__1__tmp_copy_1;
#line 139 "livemap.m"
            }
#line 139 "livemap.m"
            continue;
#line 136 "livemap.m"
          }
#line 134 "livemap.m"
      }
#line 134 "livemap.m"
      break;
#line 134 "livemap.m"
    }
#line 131 "livemap.m"
}

#line 109 "livemap.m"
static MR_bool MR_CALL 
ll_backend__livemap__equal_livemaps_keys_3_p_0(
#line 109 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__1_1,
#line 109 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__2_2,
#line 109 "livemap.m"
  MR_Word ll_backend__livemap__HeadVar__3_3)
#line 109 "livemap.m"
{
#line 112 "livemap.m"
  while (MR_TRUE)
#line 112 "livemap.m"
    {
#line 112 "livemap.m"
      /* tailcall optimized into a loop */
#line 112 "livemap.m"
      {
#line 112 "livemap.m"
        MR_bool ll_backend__livemap__succeeded;

#line 112 "livemap.m"
        if ((ll_backend__livemap__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 112 "livemap.m"
          ll_backend__livemap__succeeded = MR_TRUE;
#line 112 "livemap.m"
        else
#line 113 "livemap.m"
          {
#line 113 "livemap.m"
            MR_Word ll_backend__livemap__TypeCtorInfo_12_12 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 113 "livemap.m"
            MR_Word ll_backend__livemap__TypeInfo_13_13 = (MR_Word) &ll_backend__livemap_scalar_common_1[0];
#line 113 "livemap.m"
            MR_Word ll_backend__livemap__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 0)));
#line 113 "livemap.m"
            MR_Word ll_backend__livemap__Labels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__livemap__HeadVar__1_1, (MR_Integer) 1)));
#line 113 "livemap.m"
            MR_Word ll_backend__livemap__Liveset1_10;
#line 113 "livemap.m"
            MR_Word ll_backend__livemap__Liveset2_11;
#line 114 "livemap.m"
            MR_Box ll_backend__livemap__conv0_Liveset1_10;
#line 115 "livemap.m"
            MR_Box ll_backend__livemap__conv1_Liveset2_11;

#line 114 "livemap.m"
            {
#line 114 "livemap.m"
              mercury__map__lookup_3_p_0(ll_backend__livemap__TypeCtorInfo_12_12, ll_backend__livemap__TypeInfo_13_13, ll_backend__livemap__HeadVar__2_2, ((MR_Box) (ll_backend__livemap__Label_6)), &ll_backend__livemap__conv0_Liveset1_10);
            }
#line 114 "livemap.m"
            ll_backend__livemap__Liveset1_10 = ((MR_Word) ll_backend__livemap__conv0_Liveset1_10);
#line 115 "livemap.m"
            {
#line 115 "livemap.m"
              mercury__map__lookup_3_p_0(ll_backend__livemap__TypeCtorInfo_12_12, ll_backend__livemap__TypeInfo_13_13, ll_backend__livemap__HeadVar__3_3, ((MR_Box) (ll_backend__livemap__Label_6)), &ll_backend__livemap__conv1_Liveset2_11);
            }
#line 115 "livemap.m"
            ll_backend__livemap__Liveset2_11 = ((MR_Word) ll_backend__livemap__conv1_Liveset2_11);
#line 116 "livemap.m"
            {
#line 116 "livemap.m"
              ll_backend__livemap__succeeded = mercury__set__equal_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__livemap__Liveset1_10, ll_backend__livemap__Liveset2_11);
            }
#line 113 "livemap.m"
            if (ll_backend__livemap__succeeded)
#line 117 "livemap.m"
              {
#line 117 "livemap.m"
                /* direct tailcall eliminated */
#line 117 "livemap.m"
                {
#line 117 "livemap.m"
                  MR_Word ll_backend__livemap__HeadVar__1__tmp_copy_1 = ll_backend__livemap__Labels_7;

#line 117 "livemap.m"
                  ll_backend__livemap__HeadVar__1_1 = ll_backend__livemap__HeadVar__1__tmp_copy_1;
#line 117 "livemap.m"
                }
#line 117 "livemap.m"
                continue;
#line 117 "livemap.m"
              }
#line 113 "livemap.m"
          }
#line 112 "livemap.m"
        return ll_backend__livemap__succeeded;
#line 112 "livemap.m"
      }
#line 112 "livemap.m"
      break;
#line 112 "livemap.m"
    }
#line 109 "livemap.m"
}

#line 71 "livemap.m"
static void MR_CALL 
ll_backend__livemap__build_livemap_fixpoint_4_p_0(
#line 71 "livemap.m"
  MR_Word ll_backend__livemap__BackInstrs_5,
#line 71 "livemap.m"
  MR_Word ll_backend__livemap__Livemap0_6,
#line 71 "livemap.m"
  MR_Integer ll_backend__livemap__CurIteration_7,
#line 71 "livemap.m"
  MR_Word * ll_backend__livemap__MaybeLivemap_8)
#line 71 "livemap.m"
{
#line 74 "livemap.m"
  while (MR_TRUE)
#line 74 "livemap.m"
    {
#line 74 "livemap.m"
      /* tailcall optimized into a loop */
#line 74 "livemap.m"
      {
#line 74 "livemap.m"
        MR_bool ll_backend__livemap__succeeded;
#line 74 "livemap.m"
        MR_Word ll_backend__livemap__Livevals0_9;
#line 74 "livemap.m"
        MR_Word ll_backend__livemap__ContainsBadUserCode_10;
#line 74 "livemap.m"
        MR_Word ll_backend__livemap__Livemap1_11;

#line 75 "livemap.m"
        {
#line 75 "livemap.m"
          mercury__set__init_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, &ll_backend__livemap__Livevals0_9);
        }
#line 76 "livemap.m"
        {
#line 76 "livemap.m"
          ll_backend__livemap__livemap_do_build_6_p_0(ll_backend__livemap__BackInstrs_5, ll_backend__livemap__Livevals0_9, (MR_Integer) 0, &ll_backend__livemap__ContainsBadUserCode_10, ll_backend__livemap__Livemap0_6, &ll_backend__livemap__Livemap1_11);
        }
#line 81 "livemap.m"
        if ((ll_backend__livemap__ContainsBadUserCode_10 == (MR_Integer) 0))
#line 85 "livemap.m"
          {
#line 104 "livemap.m"
            MR_Word ll_backend__livemap__TypeCtorInfo_6_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 104 "livemap.m"
            MR_Word ll_backend__livemap__TypeInfo_7_21 = (MR_Word) &ll_backend__livemap_scalar_common_1[0];
#line 104 "livemap.m"
            MR_Word ll_backend__livemap__Labels_19;
#line 104 "livemap.m"
            MR_Word ll_backend__livemap__V_22_22;

#line 105 "livemap.m"
            {
#line 105 "livemap.m"
              mercury__map__keys_2_p_0(ll_backend__livemap__TypeCtorInfo_6_20, ll_backend__livemap__TypeInfo_7_21, ll_backend__livemap__Livemap0_6, &ll_backend__livemap__Labels_19);
            }
#line 106 "livemap.m"
            {
#line 106 "livemap.m"
              mercury__map__keys_2_p_0(ll_backend__livemap__TypeCtorInfo_6_20, ll_backend__livemap__TypeInfo_7_21, ll_backend__livemap__Livemap1_11, &ll_backend__livemap__V_22_22);
            }
#line 106 "livemap.m"
            {
#line 106 "livemap.m"
              ll_backend__livemap__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__livemap_scalar_common_1[2], ((MR_Box) (ll_backend__livemap__Labels_19)), ((MR_Box) (ll_backend__livemap__V_22_22)));
            }
#line 104 "livemap.m"
            if (ll_backend__livemap__succeeded)
#line 107 "livemap.m"
              {
#line 107 "livemap.m"
                ll_backend__livemap__succeeded = ll_backend__livemap__equal_livemaps_keys_3_p_0(ll_backend__livemap__Labels_19, ll_backend__livemap__Livemap0_6, ll_backend__livemap__Livemap1_11);
              }
#line 85 "livemap.m"
            if (ll_backend__livemap__succeeded)
#line 84 "livemap.m"
              {
#line 84 "livemap.m"
                MR_Word base;
#line 84 "livemap.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 84 "livemap.m"
                *ll_backend__livemap__MaybeLivemap_8 = base;
#line 84 "livemap.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__livemap__Livemap1_11));
#line 84 "livemap.m"
              }
#line 85 "livemap.m"
            else
#line 89 "livemap.m"
              {
#line 86 "livemap.m"
                ll_backend__livemap__succeeded = (ll_backend__livemap__CurIteration_7 < (MR_Integer) 5);
#line 89 "livemap.m"
                if (ll_backend__livemap__succeeded)
#line 87 "livemap.m"
                  {
#line 87 "livemap.m"
                    MR_Integer ll_backend__livemap__V_14_14 = (ll_backend__livemap__CurIteration_7 + (MR_Integer) 1);

#line 87 "livemap.m"
                    /* direct tailcall eliminated */
#line 87 "livemap.m"
                    {
#line 87 "livemap.m"
                      MR_Word ll_backend__livemap__Livemap0__tmp_copy_6 = ll_backend__livemap__Livemap1_11;
#line 87 "livemap.m"
                      MR_Integer ll_backend__livemap__CurIteration__tmp_copy_7 = ll_backend__livemap__V_14_14;

#line 87 "livemap.m"
                      ll_backend__livemap__CurIteration_7 = ll_backend__livemap__CurIteration__tmp_copy_7;
#line 87 "livemap.m"
                      ll_backend__livemap__Livemap0_6 = ll_backend__livemap__Livemap0__tmp_copy_6;
#line 87 "livemap.m"
                    }
#line 87 "livemap.m"
                    continue;
#line 87 "livemap.m"
                  }
#line 89 "livemap.m"
                else
#line 90 "livemap.m"
                  *ll_backend__livemap__MaybeLivemap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 89 "livemap.m"
              }
#line 85 "livemap.m"
          }
#line 81 "livemap.m"
        else
#line 80 "livemap.m"
          *ll_backend__livemap__MaybeLivemap_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 74 "livemap.m"
      }
#line 74 "livemap.m"
      break;
#line 74 "livemap.m"
    }
#line 71 "livemap.m"
}

#line 36 "livemap.m"
void MR_CALL 
ll_backend__livemap__build_livemap_2_p_0(
#line 36 "livemap.m"
  MR_Word ll_backend__livemap__Instrs_3,
#line 36 "livemap.m"
  MR_Word * ll_backend__livemap__MaybeLivemap_4)
#line 36 "livemap.m"
{
#line 54 "livemap.m"
  {
#line 54 "livemap.m"
    MR_bool ll_backend__livemap__succeeded;
#line 54 "livemap.m"
    MR_Word ll_backend__livemap__Livemap0_5;
#line 54 "livemap.m"
    MR_Word ll_backend__livemap__BackInstrs_6;

#line 67 "livemap.m"
    {
#line 67 "livemap.m"
      mercury__map__init_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__livemap_scalar_common_1[0], &ll_backend__livemap__Livemap0_5);
    }
#line 68 "livemap.m"
    {
#line 68 "livemap.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__livemap__Instrs_3, &ll_backend__livemap__BackInstrs_6);
    }
#line 69 "livemap.m"
    {
#line 69 "livemap.m"
      ll_backend__livemap__build_livemap_fixpoint_4_p_0(ll_backend__livemap__BackInstrs_6, ll_backend__livemap__Livemap0_5, (MR_Integer) 0, ll_backend__livemap__MaybeLivemap_4);
#line 69 "livemap.m"
      return;
    }
#line 54 "livemap.m"
  }
#line 36 "livemap.m"
}

void mercury__ll_backend__livemap__init(void)
{
}

void mercury__ll_backend__livemap__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__livemap__ll_backend__livemap__type_ctor_info_livemap_0);
	MR_register_type_ctor_info(&ll_backend__livemap__ll_backend__livemap__type_ctor_info_lvalset_0);
}

void mercury__ll_backend__livemap__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.livemap. */
