/*
** Automatically generated from `reassign.m'
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


/* :- module ll_backend.reassign. */
/* :- implementation. */

/*
INIT mercury__ll_backend__reassign__init
ENDINIT
*/

#include "ll_backend.reassign.mih"


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
#include "ll_backend.code_util.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
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



#line 345 "reassign.m"
struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s {
#line 348 "reassign.m"
  MR_bool ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded;
#line 348 "reassign.m"
  MR_Word ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLvals_10;
#line 364 "reassign.m"
  jmp_buf ll_backend__reassign__clobber_dependents_5_p_0_env_0__commit_0;
#line 364 "reassign.m"
  MR_Word ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23;
#line 364 "reassign.m"
  MR_Box ll_backend__reassign__clobber_dependents_5_p_0_env_0__conv3_SubLval_23;
#line 345 "reassign.m"
};


#line 157 "ll_backend.reassign.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_rval_0;

#line 160 "ll_backend.reassign.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__reassign__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 163 "ll_backend.reassign.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 166 "ll_backend.reassign.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0;

#line 169 "ll_backend.reassign.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_rval_0;

#line 172 "ll_backend.reassign.c"
static MR_bool MR_CALL 
ll_backend__reassign____Unify____dependent_lval_map_0_0_10001(
#line 175 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 177 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_2);

#line 180 "ll_backend.reassign.c"
static void MR_CALL 
ll_backend__reassign____Compare____dependent_lval_map_0_0_10001(
#line 183 "ll_backend.reassign.c"
  MR_Box * ll_backend__reassign__wrapper_arg_1,
#line 185 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 187 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_3);

#line 190 "ll_backend.reassign.c"
static MR_bool MR_CALL 
ll_backend__reassign____Unify____known_contents_0_0_10001(
#line 193 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 195 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_2);

#line 198 "ll_backend.reassign.c"
static void MR_CALL 
ll_backend__reassign____Compare____known_contents_0_0_10001(
#line 201 "ll_backend.reassign.c"
  MR_Box * ll_backend__reassign__wrapper_arg_1,
#line 203 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 205 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_3);

#line 123 "reassign.m"
static void MR_CALL 
ll_backend__reassign____Compare____known_contents_0_0(
#line 123 "reassign.m"
  MR_Word * ll_backend__reassign__HeadVar__1_1,
#line 123 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__2_2,
#line 123 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__3_3);

#line 123 "reassign.m"
static MR_bool MR_CALL 
ll_backend__reassign____Unify____known_contents_0_0(
#line 123 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__1_1,
#line 123 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__2_2);

#line 124 "reassign.m"
static void MR_CALL 
ll_backend__reassign____Compare____dependent_lval_map_0_0(
#line 124 "reassign.m"
  MR_Word * ll_backend__reassign__HeadVar__1_1,
#line 124 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__2_2,
#line 124 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__3_3);

#line 124 "reassign.m"
static MR_bool MR_CALL 
ll_backend__reassign____Unify____dependent_lval_map_0_0(
#line 124 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__1_1,
#line 124 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__2_2);

#line 437 "reassign.m"
static void MR_CALL 
ll_backend__reassign__make_dependent_4_p_0(
#line 437 "reassign.m"
  MR_Word ll_backend__reassign__Target_5,
#line 437 "reassign.m"
  MR_Word ll_backend__reassign__SubLval_6,
#line 437 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_10,
#line 437 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_DepLvalMap_11);

#line 426 "reassign.m"
static void MR_CALL 
ll_backend__reassign__make_not_dependent_4_p_0(
#line 426 "reassign.m"
  MR_Word ll_backend__reassign__Target_5,
#line 426 "reassign.m"
  MR_Word ll_backend__reassign__SubLval_6,
#line 426 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_10,
#line 426 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_DepLvalMap_11);

#line 423 "reassign.m"
static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_4(
#line 423 "reassign.m"
  MR_Box ll_backend__reassign__closure_arg,
#line 423 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 423 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 423 "reassign.m"
  MR_Box * ll_backend__reassign__wrapper_arg_3);

#line 416 "reassign.m"
static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_3(
#line 416 "reassign.m"
  MR_Box ll_backend__reassign__closure_arg,
#line 416 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 416 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 416 "reassign.m"
  MR_Box * ll_backend__reassign__wrapper_arg_3);

#line 423 "reassign.m"
static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_2(
#line 423 "reassign.m"
  MR_Box ll_backend__reassign__closure_arg,
#line 423 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 423 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 423 "reassign.m"
  MR_Box * ll_backend__reassign__wrapper_arg_3);

#line 416 "reassign.m"
static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_1(
#line 416 "reassign.m"
  MR_Box ll_backend__reassign__closure_arg,
#line 416 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 416 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 416 "reassign.m"
  MR_Box * ll_backend__reassign__wrapper_arg_3);

#line 380 "reassign.m"
static void MR_CALL 
ll_backend__reassign__record_known_6_p_0(
#line 380 "reassign.m"
  MR_Word ll_backend__reassign__TargetLval_7,
#line 380 "reassign.m"
  MR_Word ll_backend__reassign__SourceRval_8,
#line 380 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_13,
#line 380 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_14,
#line 380 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_15,
#line 380 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_DepLvalMap_16);

#line 374 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependent_3_p_0(
#line 374 "reassign.m"
  MR_Word ll_backend__reassign__Dependent_4,
#line 374 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_6,
#line 374 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_7);

#line 350 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_1(
#line 350 "reassign.m"
  MR_Box ll_backend__reassign__closure_arg,
#line 350 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 350 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 350 "reassign.m"
  MR_Box * ll_backend__reassign__wrapper_arg_3);

#line 364 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_2(
#line 364 "reassign.m"
  void * ll_backend__reassign__env_ptr_arg);

#line 364 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_4(
#line 364 "reassign.m"
  void * ll_backend__reassign__env_ptr_arg);

#line 364 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_3(
#line 364 "reassign.m"
  void * ll_backend__reassign__env_ptr_arg);

#line 364 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_5(
#line 364 "reassign.m"
  void * ll_backend__reassign__env_ptr_arg);

#line 345 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0(
#line 345 "reassign.m"
  MR_Word ll_backend__reassign__Target_6,
#line 345 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_13,
#line 345 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_14,
#line 345 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_15,
#line 345 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_DepLvalMap_16);

#line 338 "reassign.m"
static MR_bool MR_CALL 
ll_backend__reassign__no_implicit_alias_target_1_p_0(
#line 338 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__1_1);

#line 318 "reassign.m"
static void MR_CALL 
ll_backend__reassign__update_embdedded_frame_2_7_p_0(
#line 318 "reassign.m"
  MR_Word ll_backend__reassign__StackId_8,
#line 318 "reassign.m"
  MR_Integer ll_backend__reassign__CurSlot_9,
#line 318 "reassign.m"
  MR_Integer ll_backend__reassign__LastSlot_10,
#line 318 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_14,
#line 318 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_15,
#line 318 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_16,
#line 318 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_DepLvalMap_17);

#line 309 "reassign.m"
static void MR_CALL 
ll_backend__reassign__update_embdedded_frame_5_p_0(
#line 309 "reassign.m"
  MR_Word ll_backend__reassign__EmbeddedFrame_6,
#line 309 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_12,
#line 309 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_13,
#line 309 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_14,
#line 309 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_DepLvalMap_15);

#line 130 "reassign.m"
static void MR_CALL 
ll_backend__reassign__remove_reassign_loop_5_p_0(
#line 130 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__1_1,
#line 130 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2,
#line 130 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3,
#line 130 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4,
#line 130 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_RevInstrs_5);


static /* final */ const MR_Box ll_backend__reassign_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__reassign_scalar_common_2[3][3];

static /* final */ const MR_Box ll_backend__reassign_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__reassign_scalar_common_4[1][7];




static /* final */ const MR_Box ll_backend__reassign_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__reassign_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__reassign_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__reassign_scalar_common_3[0])),
    ((MR_Box) (ll_backend__reassign__clobber_dependents_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__reassign_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__reassign_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0))
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



#line 527 "ll_backend.reassign.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 536 "ll_backend.reassign.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__reassign__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 544 "ll_backend.reassign.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__reassign__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_lval_0__plain_set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_PseudoTypeInfo) &ll_backend__reassign__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 553 "ll_backend.reassign.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__reassign__set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 562 "ll_backend.reassign.c"
const MR_TypeCtorInfo_Struct ll_backend__reassign__ll_backend__reassign__type_ctor_info_dependent_lval_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__reassign____Unify____dependent_lval_map_0_0_10001)),
  ((MR_Box) (ll_backend__reassign____Compare____dependent_lval_map_0_0_10001)),
  (MR_String) "ll_backend.reassign",
  (MR_String) "dependent_lval_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0set_ordlist__ti_set_ordlist_1ll_backend__llds__type_ctor_info_lval_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 583 "ll_backend.reassign.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 592 "ll_backend.reassign.c"
const MR_TypeCtorInfo_Struct ll_backend__reassign__ll_backend__reassign__type_ctor_info_known_contents_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__reassign____Unify____known_contents_0_0_10001)),
  ((MR_Box) (ll_backend__reassign____Compare____known_contents_0_0_10001)),
  (MR_String) "ll_backend.reassign",
  (MR_String) "known_contents",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__reassign__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__llds__type_ctor_info_rval_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 613 "ll_backend.reassign.c"
static MR_bool MR_CALL 
ll_backend__reassign____Unify____dependent_lval_map_0_0_10001(
#line 616 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 618 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_2)
#line 620 "ll_backend.reassign.c"
{
#line 622 "ll_backend.reassign.c"
  {
#line 624 "ll_backend.reassign.c"
    MR_bool ll_backend__reassign__succeeded;

#line 627 "ll_backend.reassign.c"
    {
#line 629 "ll_backend.reassign.c"
      ll_backend__reassign__succeeded = ll_backend__reassign____Unify____dependent_lval_map_0_0(((MR_Word) ll_backend__reassign__wrapper_arg_1), ((MR_Word) ll_backend__reassign__wrapper_arg_2));
    }
#line 632 "ll_backend.reassign.c"
    return ll_backend__reassign__succeeded;
#line 634 "ll_backend.reassign.c"
  }
#line 636 "ll_backend.reassign.c"
}

#line 639 "ll_backend.reassign.c"
static void MR_CALL 
ll_backend__reassign____Compare____dependent_lval_map_0_0_10001(
#line 642 "ll_backend.reassign.c"
  MR_Box * ll_backend__reassign__wrapper_arg_1,
#line 644 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 646 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_3)
#line 648 "ll_backend.reassign.c"
{
#line 650 "ll_backend.reassign.c"
  {
#line 652 "ll_backend.reassign.c"
    MR_Word ll_backend__reassign__conv0_HeadVar__1_1;

#line 655 "ll_backend.reassign.c"
    {
#line 657 "ll_backend.reassign.c"
      ll_backend__reassign____Compare____dependent_lval_map_0_0(&ll_backend__reassign__conv0_HeadVar__1_1, ((MR_Word) ll_backend__reassign__wrapper_arg_2), ((MR_Word) ll_backend__reassign__wrapper_arg_3));
    }
#line 660 "ll_backend.reassign.c"
    *ll_backend__reassign__wrapper_arg_1 = ((MR_Box) (ll_backend__reassign__conv0_HeadVar__1_1));
#line 662 "ll_backend.reassign.c"
  }
#line 664 "ll_backend.reassign.c"
}

#line 667 "ll_backend.reassign.c"
static MR_bool MR_CALL 
ll_backend__reassign____Unify____known_contents_0_0_10001(
#line 670 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 672 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_2)
#line 674 "ll_backend.reassign.c"
{
#line 676 "ll_backend.reassign.c"
  {
#line 678 "ll_backend.reassign.c"
    MR_bool ll_backend__reassign__succeeded;

#line 681 "ll_backend.reassign.c"
    {
#line 683 "ll_backend.reassign.c"
      ll_backend__reassign__succeeded = ll_backend__reassign____Unify____known_contents_0_0(((MR_Word) ll_backend__reassign__wrapper_arg_1), ((MR_Word) ll_backend__reassign__wrapper_arg_2));
    }
#line 686 "ll_backend.reassign.c"
    return ll_backend__reassign__succeeded;
#line 688 "ll_backend.reassign.c"
  }
#line 690 "ll_backend.reassign.c"
}

#line 693 "ll_backend.reassign.c"
static void MR_CALL 
ll_backend__reassign____Compare____known_contents_0_0_10001(
#line 696 "ll_backend.reassign.c"
  MR_Box * ll_backend__reassign__wrapper_arg_1,
#line 698 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 700 "ll_backend.reassign.c"
  MR_Box ll_backend__reassign__wrapper_arg_3)
#line 702 "ll_backend.reassign.c"
{
#line 704 "ll_backend.reassign.c"
  {
#line 706 "ll_backend.reassign.c"
    MR_Word ll_backend__reassign__conv0_HeadVar__1_1;

#line 709 "ll_backend.reassign.c"
    {
#line 711 "ll_backend.reassign.c"
      ll_backend__reassign____Compare____known_contents_0_0(&ll_backend__reassign__conv0_HeadVar__1_1, ((MR_Word) ll_backend__reassign__wrapper_arg_2), ((MR_Word) ll_backend__reassign__wrapper_arg_3));
    }
#line 714 "ll_backend.reassign.c"
    *ll_backend__reassign__wrapper_arg_1 = ((MR_Box) (ll_backend__reassign__conv0_HeadVar__1_1));
#line 716 "ll_backend.reassign.c"
  }
#line 718 "ll_backend.reassign.c"
}

#line 123 "reassign.m"
static void MR_CALL 
ll_backend__reassign____Compare____known_contents_0_0(
#line 123 "reassign.m"
  MR_Word * ll_backend__reassign__HeadVar__1_1,
#line 123 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__2_2,
#line 123 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__3_3)
#line 123 "reassign.m"
{
#line 123 "reassign.m"
  {
#line 123 "reassign.m"
    MR_bool ll_backend__reassign__succeeded;
#line 123 "reassign.m"
    MR_Word ll_backend__reassign__Cast_HeadVar1_4 = ll_backend__reassign__HeadVar__2_2;
#line 123 "reassign.m"
    MR_Word ll_backend__reassign__Cast_HeadVar2_5 = ll_backend__reassign__HeadVar__3_3;

#line 123 "reassign.m"
    {
#line 123 "reassign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__reassign_scalar_common_2[0], ll_backend__reassign__HeadVar__1_1, ((MR_Box) (ll_backend__reassign__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__reassign__Cast_HeadVar2_5)));
#line 123 "reassign.m"
      return;
    }
#line 123 "reassign.m"
  }
#line 123 "reassign.m"
}

#line 123 "reassign.m"
static MR_bool MR_CALL 
ll_backend__reassign____Unify____known_contents_0_0(
#line 123 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__1_1,
#line 123 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__2_2)
#line 123 "reassign.m"
{
#line 123 "reassign.m"
  {
#line 123 "reassign.m"
    MR_bool ll_backend__reassign__succeeded;
#line 123 "reassign.m"
    MR_Word ll_backend__reassign__Cast_HeadVar1_3 = ll_backend__reassign__HeadVar__1_1;
#line 123 "reassign.m"
    MR_Word ll_backend__reassign__Cast_HeadVar2_4 = ll_backend__reassign__HeadVar__2_2;

#line 123 "reassign.m"
    {
#line 123 "reassign.m"
      return ll_backend__reassign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__reassign_scalar_common_2[0], ((MR_Box) (ll_backend__reassign__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__reassign__Cast_HeadVar2_4)));
    }
#line 123 "reassign.m"
    return ll_backend__reassign__succeeded;
#line 123 "reassign.m"
  }
#line 123 "reassign.m"
}

#line 124 "reassign.m"
static void MR_CALL 
ll_backend__reassign____Compare____dependent_lval_map_0_0(
#line 124 "reassign.m"
  MR_Word * ll_backend__reassign__HeadVar__1_1,
#line 124 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__2_2,
#line 124 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__3_3)
#line 124 "reassign.m"
{
#line 124 "reassign.m"
  {
#line 124 "reassign.m"
    MR_bool ll_backend__reassign__succeeded;
#line 124 "reassign.m"
    MR_Word ll_backend__reassign__Cast_HeadVar1_4 = ll_backend__reassign__HeadVar__2_2;
#line 124 "reassign.m"
    MR_Word ll_backend__reassign__Cast_HeadVar2_5 = ll_backend__reassign__HeadVar__3_3;

#line 124 "reassign.m"
    {
#line 124 "reassign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__reassign_scalar_common_2[1], ll_backend__reassign__HeadVar__1_1, ((MR_Box) (ll_backend__reassign__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__reassign__Cast_HeadVar2_5)));
#line 124 "reassign.m"
      return;
    }
#line 124 "reassign.m"
  }
#line 124 "reassign.m"
}

#line 124 "reassign.m"
static MR_bool MR_CALL 
ll_backend__reassign____Unify____dependent_lval_map_0_0(
#line 124 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__1_1,
#line 124 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__2_2)
#line 124 "reassign.m"
{
#line 124 "reassign.m"
  {
#line 124 "reassign.m"
    MR_bool ll_backend__reassign__succeeded;
#line 124 "reassign.m"
    MR_Word ll_backend__reassign__Cast_HeadVar1_3 = ll_backend__reassign__HeadVar__1_1;
#line 124 "reassign.m"
    MR_Word ll_backend__reassign__Cast_HeadVar2_4 = ll_backend__reassign__HeadVar__2_2;

#line 124 "reassign.m"
    {
#line 124 "reassign.m"
      return ll_backend__reassign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__reassign_scalar_common_2[1], ((MR_Box) (ll_backend__reassign__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__reassign__Cast_HeadVar2_4)));
    }
#line 124 "reassign.m"
    return ll_backend__reassign__succeeded;
#line 124 "reassign.m"
  }
#line 124 "reassign.m"
}

#line 437 "reassign.m"
static void MR_CALL 
ll_backend__reassign__make_dependent_4_p_0(
#line 437 "reassign.m"
  MR_Word ll_backend__reassign__Target_5,
#line 437 "reassign.m"
  MR_Word ll_backend__reassign__SubLval_6,
#line 437 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_10,
#line 437 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_DepLvalMap_11)
#line 437 "reassign.m"
{
#line 444 "reassign.m"
  {
#line 444 "reassign.m"
    MR_bool ll_backend__reassign__succeeded;
#line 444 "reassign.m"
    MR_Word ll_backend__reassign__DepLvals0_8;
#line 441 "reassign.m"
    MR_Box ll_backend__reassign__conv0_DepLvals0_8;

#line 441 "reassign.m"
    {
#line 441 "reassign.m"
      ll_backend__reassign__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__reassign_scalar_common_1[0], ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_10, ((MR_Box) (ll_backend__reassign__SubLval_6)), &ll_backend__reassign__conv0_DepLvals0_8);
    }
#line 441 "reassign.m"
    if (ll_backend__reassign__succeeded)
#line 441 "reassign.m"
      {
#line 441 "reassign.m"
        ll_backend__reassign__DepLvals0_8 = ((MR_Word) ll_backend__reassign__conv0_DepLvals0_8);
#line 441 "reassign.m"
        ll_backend__reassign__succeeded = MR_TRUE;
#line 441 "reassign.m"
      }
#line 444 "reassign.m"
    if (ll_backend__reassign__succeeded)
#line 442 "reassign.m"
      {
#line 442 "reassign.m"
        MR_Word ll_backend__reassign__TypeCtorInfo_17_17 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 442 "reassign.m"
        MR_Word ll_backend__reassign__DepLvals_9;

#line 442 "reassign.m"
        {
#line 442 "reassign.m"
          mercury__set__insert_3_p_0(ll_backend__reassign__TypeCtorInfo_17_17, ((MR_Box) (ll_backend__reassign__Target_5)), ll_backend__reassign__DepLvals0_8, &ll_backend__reassign__DepLvals_9);
        }
#line 443 "reassign.m"
        {
#line 443 "reassign.m"
          mercury__map__det_update_4_p_0(ll_backend__reassign__TypeCtorInfo_17_17, (MR_Word) &ll_backend__reassign_scalar_common_1[0], ((MR_Box) (ll_backend__reassign__SubLval_6)), ((MR_Box) (ll_backend__reassign__DepLvals_9)), ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_10, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_11);
#line 443 "reassign.m"
          return;
        }
#line 442 "reassign.m"
      }
#line 444 "reassign.m"
    else
#line 445 "reassign.m"
      {
#line 445 "reassign.m"
        MR_Word ll_backend__reassign__TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 445 "reassign.m"
        MR_Word ll_backend__reassign__DepLvals_14;

#line 445 "reassign.m"
        {
#line 445 "reassign.m"
          ll_backend__reassign__DepLvals_14 = mercury__set__make_singleton_set_1_f_0(ll_backend__reassign__TypeCtorInfo_19_19, ((MR_Box) (ll_backend__reassign__Target_5)));
        }
#line 446 "reassign.m"
        {
#line 446 "reassign.m"
          mercury__map__det_insert_4_p_0(ll_backend__reassign__TypeCtorInfo_19_19, (MR_Word) &ll_backend__reassign_scalar_common_1[0], ((MR_Box) (ll_backend__reassign__SubLval_6)), ((MR_Box) (ll_backend__reassign__DepLvals_14)), ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_10, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_11);
#line 446 "reassign.m"
          return;
        }
#line 445 "reassign.m"
      }
#line 444 "reassign.m"
  }
#line 437 "reassign.m"
}

#line 426 "reassign.m"
static void MR_CALL 
ll_backend__reassign__make_not_dependent_4_p_0(
#line 426 "reassign.m"
  MR_Word ll_backend__reassign__Target_5,
#line 426 "reassign.m"
  MR_Word ll_backend__reassign__SubLval_6,
#line 426 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_10,
#line 426 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_DepLvalMap_11)
#line 426 "reassign.m"
{
#line 433 "reassign.m"
  {
#line 433 "reassign.m"
    MR_bool ll_backend__reassign__succeeded;
#line 433 "reassign.m"
    MR_Word ll_backend__reassign__DepLvals0_8;
#line 430 "reassign.m"
    MR_Box ll_backend__reassign__conv0_DepLvals0_8;

#line 430 "reassign.m"
    {
#line 430 "reassign.m"
      ll_backend__reassign__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__reassign_scalar_common_1[0], ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_10, ((MR_Box) (ll_backend__reassign__SubLval_6)), &ll_backend__reassign__conv0_DepLvals0_8);
    }
#line 430 "reassign.m"
    if (ll_backend__reassign__succeeded)
#line 430 "reassign.m"
      {
#line 430 "reassign.m"
        ll_backend__reassign__DepLvals0_8 = ((MR_Word) ll_backend__reassign__conv0_DepLvals0_8);
#line 430 "reassign.m"
        ll_backend__reassign__succeeded = MR_TRUE;
#line 430 "reassign.m"
      }
#line 433 "reassign.m"
    if (ll_backend__reassign__succeeded)
#line 431 "reassign.m"
      {
#line 431 "reassign.m"
        MR_Word ll_backend__reassign__TypeCtorInfo_15_15 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 431 "reassign.m"
        MR_Word ll_backend__reassign__DepLvals_9;

#line 431 "reassign.m"
        {
#line 431 "reassign.m"
          mercury__set__delete_3_p_0(ll_backend__reassign__TypeCtorInfo_15_15, ((MR_Box) (ll_backend__reassign__Target_5)), ll_backend__reassign__DepLvals0_8, &ll_backend__reassign__DepLvals_9);
        }
#line 432 "reassign.m"
        {
#line 432 "reassign.m"
          mercury__map__det_update_4_p_0(ll_backend__reassign__TypeCtorInfo_15_15, (MR_Word) &ll_backend__reassign_scalar_common_1[0], ((MR_Box) (ll_backend__reassign__SubLval_6)), ((MR_Box) (ll_backend__reassign__DepLvals_9)), ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_10, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_11);
#line 432 "reassign.m"
          return;
        }
#line 431 "reassign.m"
      }
#line 433 "reassign.m"
    else
#line 432 "reassign.m"
      *ll_backend__reassign__STATE_VARIABLE_DepLvalMap_11 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_10;
#line 433 "reassign.m"
  }
#line 426 "reassign.m"
}

#line 423 "reassign.m"
static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_4(
#line 423 "reassign.m"
  MR_Box ll_backend__reassign__closure_arg,
#line 423 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 423 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 423 "reassign.m"
  MR_Box * ll_backend__reassign__wrapper_arg_3)
#line 423 "reassign.m"
{
#line 423 "reassign.m"
  {
#line 423 "reassign.m"
    MR_Box ll_backend__reassign__closure = ll_backend__reassign__closure_arg;
#line 423 "reassign.m"
    MR_Word ll_backend__reassign__conv8_STATE_VARIABLE_DepLvalMap_11;

#line 423 "reassign.m"
    {
#line 423 "reassign.m"
      ll_backend__reassign__make_dependent_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__reassign__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__reassign__wrapper_arg_1), ((MR_Word) ll_backend__reassign__wrapper_arg_2), &ll_backend__reassign__conv8_STATE_VARIABLE_DepLvalMap_11);
    }
#line 423 "reassign.m"
    *ll_backend__reassign__wrapper_arg_3 = ((MR_Box) (ll_backend__reassign__conv8_STATE_VARIABLE_DepLvalMap_11));
#line 423 "reassign.m"
  }
#line 423 "reassign.m"
}

#line 416 "reassign.m"
static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_3(
#line 416 "reassign.m"
  MR_Box ll_backend__reassign__closure_arg,
#line 416 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 416 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 416 "reassign.m"
  MR_Box * ll_backend__reassign__wrapper_arg_3)
#line 416 "reassign.m"
{
#line 416 "reassign.m"
  {
#line 416 "reassign.m"
    MR_Box ll_backend__reassign__closure = ll_backend__reassign__closure_arg;
#line 416 "reassign.m"
    MR_Word ll_backend__reassign__conv6_STATE_VARIABLE_DepLvalMap_11;

#line 416 "reassign.m"
    {
#line 416 "reassign.m"
      ll_backend__reassign__make_not_dependent_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__reassign__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__reassign__wrapper_arg_1), ((MR_Word) ll_backend__reassign__wrapper_arg_2), &ll_backend__reassign__conv6_STATE_VARIABLE_DepLvalMap_11);
    }
#line 416 "reassign.m"
    *ll_backend__reassign__wrapper_arg_3 = ((MR_Box) (ll_backend__reassign__conv6_STATE_VARIABLE_DepLvalMap_11));
#line 416 "reassign.m"
  }
#line 416 "reassign.m"
}

#line 423 "reassign.m"
static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_2(
#line 423 "reassign.m"
  MR_Box ll_backend__reassign__closure_arg,
#line 423 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 423 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 423 "reassign.m"
  MR_Box * ll_backend__reassign__wrapper_arg_3)
#line 423 "reassign.m"
{
#line 423 "reassign.m"
  {
#line 423 "reassign.m"
    MR_Box ll_backend__reassign__closure = ll_backend__reassign__closure_arg;
#line 423 "reassign.m"
    MR_Word ll_backend__reassign__conv3_STATE_VARIABLE_DepLvalMap_11;

#line 423 "reassign.m"
    {
#line 423 "reassign.m"
      ll_backend__reassign__make_dependent_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__reassign__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__reassign__wrapper_arg_1), ((MR_Word) ll_backend__reassign__wrapper_arg_2), &ll_backend__reassign__conv3_STATE_VARIABLE_DepLvalMap_11);
    }
#line 423 "reassign.m"
    *ll_backend__reassign__wrapper_arg_3 = ((MR_Box) (ll_backend__reassign__conv3_STATE_VARIABLE_DepLvalMap_11));
#line 423 "reassign.m"
  }
#line 423 "reassign.m"
}

#line 416 "reassign.m"
static void MR_CALL 
ll_backend__reassign__record_known_6_p_0_1(
#line 416 "reassign.m"
  MR_Box ll_backend__reassign__closure_arg,
#line 416 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 416 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 416 "reassign.m"
  MR_Box * ll_backend__reassign__wrapper_arg_3)
#line 416 "reassign.m"
{
#line 416 "reassign.m"
  {
#line 416 "reassign.m"
    MR_Box ll_backend__reassign__closure = ll_backend__reassign__closure_arg;
#line 416 "reassign.m"
    MR_Word ll_backend__reassign__conv1_STATE_VARIABLE_DepLvalMap_11;

#line 416 "reassign.m"
    {
#line 416 "reassign.m"
      ll_backend__reassign__make_not_dependent_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__reassign__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__reassign__wrapper_arg_1), ((MR_Word) ll_backend__reassign__wrapper_arg_2), &ll_backend__reassign__conv1_STATE_VARIABLE_DepLvalMap_11);
    }
#line 416 "reassign.m"
    *ll_backend__reassign__wrapper_arg_3 = ((MR_Box) (ll_backend__reassign__conv1_STATE_VARIABLE_DepLvalMap_11));
#line 416 "reassign.m"
  }
#line 416 "reassign.m"
}

#line 380 "reassign.m"
static void MR_CALL 
ll_backend__reassign__record_known_6_p_0(
#line 380 "reassign.m"
  MR_Word ll_backend__reassign__TargetLval_7,
#line 380 "reassign.m"
  MR_Word ll_backend__reassign__SourceRval_8,
#line 380 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_13,
#line 380 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_14,
#line 380 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_15,
#line 380 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_DepLvalMap_16)
#line 380 "reassign.m"
{
#line 384 "reassign.m"
  {
#line 384 "reassign.m"
    MR_bool ll_backend__reassign__succeeded;
#line 384 "reassign.m"
    MR_Word ll_backend__reassign__SourceSubLvals_11;

#line 385 "reassign.m"
    {
#line 385 "reassign.m"
      ll_backend__reassign__SourceSubLvals_11 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__reassign__SourceRval_8);
    }
#line 386 "reassign.m"
    {
#line 386 "reassign.m"
      ll_backend__reassign__succeeded = mercury__list__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__reassign__TargetLval_7)), ll_backend__reassign__SourceSubLvals_11);
    }
#line 391 "reassign.m"
    if (ll_backend__reassign__succeeded)
#line 390 "reassign.m"
      {
#line 390 "reassign.m"
        *ll_backend__reassign__STATE_VARIABLE_DepLvalMap_16 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_15;
#line 390 "reassign.m"
        *ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_14 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_13;
#line 390 "reassign.m"
      }
#line 391 "reassign.m"
    else
#line 393 "reassign.m"
      {
#line 393 "reassign.m"
        MR_Word ll_backend__reassign__TypeCtorInfo_32_48;
#line 393 "reassign.m"
        MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_17_17;
#line 393 "reassign.m"
        MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_18_18;
#line 393 "reassign.m"
        MR_Word ll_backend__reassign__TargetSubLvals_33;
#line 393 "reassign.m"
        MR_Word ll_backend__reassign__SourceSubLvals_34;
#line 393 "reassign.m"
        MR_Word ll_backend__reassign__AllSubLvals_35;
#line 393 "reassign.m"
        MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_21_37;
#line 393 "reassign.m"
        MR_Word ll_backend__reassign__V_38_38;
#line 417 "reassign.m"
        MR_Word ll_backend__reassign__OldRval_31;
#line 408 "reassign.m"
        MR_Box ll_backend__reassign__conv0_OldRval_31;
#line 423 "reassign.m"
        MR_Box ll_backend__reassign__conv4_STATE_VARIABLE_DepLvalMap_18_18;
#line 397 "reassign.m"
        MR_Word ll_backend__reassign__SourceLval_12;

#line 408 "reassign.m"
        {
#line 408 "reassign.m"
          ll_backend__reassign__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_13, ((MR_Box) (ll_backend__reassign__TargetLval_7)), &ll_backend__reassign__conv0_OldRval_31);
        }
#line 408 "reassign.m"
        if (ll_backend__reassign__succeeded)
#line 408 "reassign.m"
          {
#line 408 "reassign.m"
            ll_backend__reassign__OldRval_31 = ((MR_Word) ll_backend__reassign__conv0_OldRval_31);
#line 408 "reassign.m"
            ll_backend__reassign__succeeded = MR_TRUE;
#line 408 "reassign.m"
          }
#line 417 "reassign.m"
        if (ll_backend__reassign__succeeded)
#line 415 "reassign.m"
          {
#line 415 "reassign.m"
            MR_Word ll_backend__reassign__OldSubLvals_32;
#line 415 "reassign.m"
            MR_Word ll_backend__reassign__V_36_36;
#line 416 "reassign.m"
            MR_Box ll_backend__reassign__conv2_STATE_VARIABLE_DepLvalMap_21_37;

#line 415 "reassign.m"
            {
#line 415 "reassign.m"
              ll_backend__reassign__OldSubLvals_32 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__reassign__OldRval_31);
            }
#line 416 "reassign.m"
            {
#line 416 "reassign.m"
              ll_backend__reassign__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 416 "reassign.m"
              MR_hl_field(MR_mktag(0), ll_backend__reassign__V_36_36, 0) = ((MR_Box) (&ll_backend__reassign_scalar_common_4[0]));
#line 416 "reassign.m"
              MR_hl_field(MR_mktag(0), ll_backend__reassign__V_36_36, 1) = ((MR_Box) (ll_backend__reassign__record_known_6_p_0_1));
#line 416 "reassign.m"
              MR_hl_field(MR_mktag(0), ll_backend__reassign__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 416 "reassign.m"
              MR_hl_field(MR_mktag(0), ll_backend__reassign__V_36_36, 3) = ((MR_Box) (ll_backend__reassign__TargetLval_7));
#line 416 "reassign.m"
            }
#line 416 "reassign.m"
            {
#line 416 "reassign.m"
              mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__reassign_scalar_common_2[1], ll_backend__reassign__V_36_36, ll_backend__reassign__OldSubLvals_32, ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_15)), &ll_backend__reassign__conv2_STATE_VARIABLE_DepLvalMap_21_37);
            }
#line 416 "reassign.m"
            ll_backend__reassign__STATE_VARIABLE_DepLvalMap_21_37 = ((MR_Word) ll_backend__reassign__conv2_STATE_VARIABLE_DepLvalMap_21_37);
#line 415 "reassign.m"
          }
#line 417 "reassign.m"
        else
#line 416 "reassign.m"
          ll_backend__reassign__STATE_VARIABLE_DepLvalMap_21_37 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_15;
#line 420 "reassign.m"
        {
#line 420 "reassign.m"
          ll_backend__reassign__TargetSubLvals_33 = ll_backend__code_util__lvals_in_lval_1_f_0(ll_backend__reassign__TargetLval_7);
        }
#line 421 "reassign.m"
        {
#line 421 "reassign.m"
          ll_backend__reassign__SourceSubLvals_34 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__reassign__SourceRval_8);
        }
#line 1271 "ll_backend.reassign.c"
        ll_backend__reassign__TypeCtorInfo_32_48 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 422 "reassign.m"
        {
#line 422 "reassign.m"
          mercury__list__append_3_p_1(ll_backend__reassign__TypeCtorInfo_32_48, ll_backend__reassign__TargetSubLvals_33, ll_backend__reassign__SourceSubLvals_34, &ll_backend__reassign__AllSubLvals_35);
        }
#line 423 "reassign.m"
        {
#line 423 "reassign.m"
          ll_backend__reassign__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 423 "reassign.m"
          MR_hl_field(MR_mktag(0), ll_backend__reassign__V_38_38, 0) = ((MR_Box) (&ll_backend__reassign_scalar_common_4[0]));
#line 423 "reassign.m"
          MR_hl_field(MR_mktag(0), ll_backend__reassign__V_38_38, 1) = ((MR_Box) (ll_backend__reassign__record_known_6_p_0_2));
#line 423 "reassign.m"
          MR_hl_field(MR_mktag(0), ll_backend__reassign__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 423 "reassign.m"
          MR_hl_field(MR_mktag(0), ll_backend__reassign__V_38_38, 3) = ((MR_Box) (ll_backend__reassign__TargetLval_7));
#line 423 "reassign.m"
        }
#line 423 "reassign.m"
        {
#line 423 "reassign.m"
          mercury__list__foldl_4_p_0(ll_backend__reassign__TypeCtorInfo_32_48, (MR_Word) &ll_backend__reassign_scalar_common_2[1], ll_backend__reassign__V_38_38, ll_backend__reassign__AllSubLvals_35, ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_DepLvalMap_21_37)), &ll_backend__reassign__conv4_STATE_VARIABLE_DepLvalMap_18_18);
        }
#line 423 "reassign.m"
        ll_backend__reassign__STATE_VARIABLE_DepLvalMap_18_18 = ((MR_Word) ll_backend__reassign__conv4_STATE_VARIABLE_DepLvalMap_18_18);
#line 424 "reassign.m"
        {
#line 424 "reassign.m"
          mercury__map__set_4_p_0(ll_backend__reassign__TypeCtorInfo_32_48, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__TargetLval_7)), ((MR_Box) (ll_backend__reassign__SourceRval_8)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_13, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_17_17);
        }
#line 394 "reassign.m"
        ll_backend__reassign__succeeded = ((MR_tag((MR_Word) ll_backend__reassign__SourceRval_8)) == (MR_mktag((MR_Integer) 0)));
#line 394 "reassign.m"
        if (ll_backend__reassign__succeeded)
#line 394 "reassign.m"
          {
#line 394 "reassign.m"
            ll_backend__reassign__SourceLval_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__reassign__SourceRval_8, (MR_Integer) 0)));
#line 395 "reassign.m"
            {
#line 395 "reassign.m"
              MR_Word ll_backend__reassign__TypeCtorInfo_32_79;
#line 395 "reassign.m"
              MR_Word ll_backend__reassign__V_19_19;
#line 395 "reassign.m"
              MR_Word ll_backend__reassign__TargetSubLvals_64;
#line 395 "reassign.m"
              MR_Word ll_backend__reassign__SourceSubLvals_65;
#line 395 "reassign.m"
              MR_Word ll_backend__reassign__AllSubLvals_66;
#line 395 "reassign.m"
              MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_21_68;
#line 395 "reassign.m"
              MR_Word ll_backend__reassign__V_69_69;
#line 417 "reassign.m"
              MR_Word ll_backend__reassign__OldRval_62;
#line 408 "reassign.m"
              MR_Box ll_backend__reassign__conv5_OldRval_62;
#line 423 "reassign.m"
              MR_Box ll_backend__reassign__conv9_STATE_VARIABLE_DepLvalMap_16;

#line 395 "reassign.m"
              {
#line 395 "reassign.m"
                ll_backend__reassign__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 395 "reassign.m"
                MR_hl_field(MR_mktag(0), ll_backend__reassign__V_19_19, 0) = ((MR_Box) (ll_backend__reassign__TargetLval_7));
#line 395 "reassign.m"
              }
#line 408 "reassign.m"
              {
#line 408 "reassign.m"
                ll_backend__reassign__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_17_17, ((MR_Box) (ll_backend__reassign__SourceLval_12)), &ll_backend__reassign__conv5_OldRval_62);
              }
#line 408 "reassign.m"
              if (ll_backend__reassign__succeeded)
#line 408 "reassign.m"
                {
#line 408 "reassign.m"
                  ll_backend__reassign__OldRval_62 = ((MR_Word) ll_backend__reassign__conv5_OldRval_62);
#line 408 "reassign.m"
                  ll_backend__reassign__succeeded = MR_TRUE;
#line 408 "reassign.m"
                }
#line 417 "reassign.m"
              if (ll_backend__reassign__succeeded)
#line 415 "reassign.m"
                {
#line 415 "reassign.m"
                  MR_Word ll_backend__reassign__OldSubLvals_63;
#line 415 "reassign.m"
                  MR_Word ll_backend__reassign__V_67_67;
#line 416 "reassign.m"
                  MR_Box ll_backend__reassign__conv7_STATE_VARIABLE_DepLvalMap_21_68;

#line 415 "reassign.m"
                  {
#line 415 "reassign.m"
                    ll_backend__reassign__OldSubLvals_63 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__reassign__OldRval_62);
                  }
#line 416 "reassign.m"
                  {
#line 416 "reassign.m"
                    ll_backend__reassign__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 416 "reassign.m"
                    MR_hl_field(MR_mktag(0), ll_backend__reassign__V_67_67, 0) = ((MR_Box) (&ll_backend__reassign_scalar_common_4[0]));
#line 416 "reassign.m"
                    MR_hl_field(MR_mktag(0), ll_backend__reassign__V_67_67, 1) = ((MR_Box) (ll_backend__reassign__record_known_6_p_0_3));
#line 416 "reassign.m"
                    MR_hl_field(MR_mktag(0), ll_backend__reassign__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 416 "reassign.m"
                    MR_hl_field(MR_mktag(0), ll_backend__reassign__V_67_67, 3) = ((MR_Box) (ll_backend__reassign__SourceLval_12));
#line 416 "reassign.m"
                  }
#line 416 "reassign.m"
                  {
#line 416 "reassign.m"
                    mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__reassign_scalar_common_2[1], ll_backend__reassign__V_67_67, ll_backend__reassign__OldSubLvals_63, ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_DepLvalMap_18_18)), &ll_backend__reassign__conv7_STATE_VARIABLE_DepLvalMap_21_68);
                  }
#line 416 "reassign.m"
                  ll_backend__reassign__STATE_VARIABLE_DepLvalMap_21_68 = ((MR_Word) ll_backend__reassign__conv7_STATE_VARIABLE_DepLvalMap_21_68);
#line 415 "reassign.m"
                }
#line 417 "reassign.m"
              else
#line 416 "reassign.m"
                ll_backend__reassign__STATE_VARIABLE_DepLvalMap_21_68 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_18_18;
#line 420 "reassign.m"
              {
#line 420 "reassign.m"
                ll_backend__reassign__TargetSubLvals_64 = ll_backend__code_util__lvals_in_lval_1_f_0(ll_backend__reassign__SourceLval_12);
              }
#line 421 "reassign.m"
              {
#line 421 "reassign.m"
                ll_backend__reassign__SourceSubLvals_65 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__reassign__V_19_19);
              }
#line 1411 "ll_backend.reassign.c"
              ll_backend__reassign__TypeCtorInfo_32_79 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 422 "reassign.m"
              {
#line 422 "reassign.m"
                mercury__list__append_3_p_1(ll_backend__reassign__TypeCtorInfo_32_79, ll_backend__reassign__TargetSubLvals_64, ll_backend__reassign__SourceSubLvals_65, &ll_backend__reassign__AllSubLvals_66);
              }
#line 423 "reassign.m"
              {
#line 423 "reassign.m"
                ll_backend__reassign__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 423 "reassign.m"
                MR_hl_field(MR_mktag(0), ll_backend__reassign__V_69_69, 0) = ((MR_Box) (&ll_backend__reassign_scalar_common_4[0]));
#line 423 "reassign.m"
                MR_hl_field(MR_mktag(0), ll_backend__reassign__V_69_69, 1) = ((MR_Box) (ll_backend__reassign__record_known_6_p_0_4));
#line 423 "reassign.m"
                MR_hl_field(MR_mktag(0), ll_backend__reassign__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 423 "reassign.m"
                MR_hl_field(MR_mktag(0), ll_backend__reassign__V_69_69, 3) = ((MR_Box) (ll_backend__reassign__SourceLval_12));
#line 423 "reassign.m"
              }
#line 423 "reassign.m"
              {
#line 423 "reassign.m"
                mercury__list__foldl_4_p_0(ll_backend__reassign__TypeCtorInfo_32_79, (MR_Word) &ll_backend__reassign_scalar_common_2[1], ll_backend__reassign__V_69_69, ll_backend__reassign__AllSubLvals_66, ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_DepLvalMap_21_68)), &ll_backend__reassign__conv9_STATE_VARIABLE_DepLvalMap_16);
              }
#line 423 "reassign.m"
              *ll_backend__reassign__STATE_VARIABLE_DepLvalMap_16 = ((MR_Word) ll_backend__reassign__conv9_STATE_VARIABLE_DepLvalMap_16);
#line 424 "reassign.m"
              {
#line 424 "reassign.m"
                mercury__map__set_4_p_0(ll_backend__reassign__TypeCtorInfo_32_79, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__SourceLval_12)), ((MR_Box) (ll_backend__reassign__V_19_19)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_17_17, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_14);
#line 424 "reassign.m"
                return;
              }
#line 395 "reassign.m"
            }
#line 394 "reassign.m"
          }
#line 394 "reassign.m"
        else
#line 398 "reassign.m"
          {
#line 398 "reassign.m"
            *ll_backend__reassign__STATE_VARIABLE_DepLvalMap_16 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_18_18;
#line 398 "reassign.m"
            *ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_14 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_17_17;
#line 398 "reassign.m"
          }
#line 393 "reassign.m"
      }
#line 384 "reassign.m"
  }
#line 380 "reassign.m"
}

#line 374 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependent_3_p_0(
#line 374 "reassign.m"
  MR_Word ll_backend__reassign__Dependent_4,
#line 374 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_6,
#line 374 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_7)
#line 374 "reassign.m"
{
#line 378 "reassign.m"
  {
#line 378 "reassign.m"
    MR_bool ll_backend__reassign__succeeded;

#line 378 "reassign.m"
    {
#line 378 "reassign.m"
      mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__Dependent_4)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_6, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_7);
#line 378 "reassign.m"
      return;
    }
#line 378 "reassign.m"
  }
#line 374 "reassign.m"
}

#line 350 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_1(
#line 350 "reassign.m"
  MR_Box ll_backend__reassign__closure_arg,
#line 350 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_1,
#line 350 "reassign.m"
  MR_Box ll_backend__reassign__wrapper_arg_2,
#line 350 "reassign.m"
  MR_Box * ll_backend__reassign__wrapper_arg_3)
#line 350 "reassign.m"
{
#line 350 "reassign.m"
  {
#line 350 "reassign.m"
    MR_Box ll_backend__reassign__closure = ll_backend__reassign__closure_arg;
#line 350 "reassign.m"
    MR_Word ll_backend__reassign__conv1_STATE_VARIABLE_KnownContentsMap_7;

#line 350 "reassign.m"
    {
#line 350 "reassign.m"
      ll_backend__reassign__clobber_dependent_3_p_0(((MR_Word) ll_backend__reassign__wrapper_arg_1), ((MR_Word) ll_backend__reassign__wrapper_arg_2), &ll_backend__reassign__conv1_STATE_VARIABLE_KnownContentsMap_7);
    }
#line 350 "reassign.m"
    *ll_backend__reassign__wrapper_arg_3 = ((MR_Box) (ll_backend__reassign__conv1_STATE_VARIABLE_KnownContentsMap_7));
#line 350 "reassign.m"
  }
#line 350 "reassign.m"
}

#line 364 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_2(
#line 364 "reassign.m"
  void * ll_backend__reassign__env_ptr_arg)
#line 364 "reassign.m"
{
#line 364 "reassign.m"
  {
#line 364 "reassign.m"
    struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s * ll_backend__reassign__env_ptr = (struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s *) ll_backend__reassign__env_ptr_arg;

#line 364 "reassign.m"
    MR_builtin_longjmp((ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__commit_0, 1);
#line 364 "reassign.m"
  }
#line 364 "reassign.m"
}

#line 364 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_4(
#line 364 "reassign.m"
  void * ll_backend__reassign__env_ptr_arg)
#line 364 "reassign.m"
{
#line 364 "reassign.m"
  {
#line 364 "reassign.m"
    struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s * ll_backend__reassign__env_ptr = (struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s *) ll_backend__reassign__env_ptr_arg;

#line 364 "reassign.m"
    (ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23 = ((MR_Word) (ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__conv3_SubLval_23);
#line 364 "reassign.m"
    {
#line 364 "reassign.m"
      ll_backend__reassign__clobber_dependents_5_p_0_3(ll_backend__reassign__env_ptr);
#line 364 "reassign.m"
      return;
    }
#line 364 "reassign.m"
  }
#line 364 "reassign.m"
}

#line 364 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_3(
#line 364 "reassign.m"
  void * ll_backend__reassign__env_ptr_arg)
#line 364 "reassign.m"
{
#line 364 "reassign.m"
  {
#line 364 "reassign.m"
    struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s * ll_backend__reassign__env_ptr = (struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s *) ll_backend__reassign__env_ptr_arg;

#line 364 "reassign.m"
    {
#line 365 "reassign.m"
      MR_Word ll_backend__reassign__V_12_12;

#line 365 "reassign.m"
      (ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 365 "reassign.m"
      if ((ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded)
#line 365 "reassign.m"
        {
#line 365 "reassign.m"
          ll_backend__reassign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), (ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLval_23, (MR_Integer) 1)));
#line 365 "reassign.m"
          {
#line 365 "reassign.m"
            ll_backend__reassign__clobber_dependents_5_p_0_2(ll_backend__reassign__env_ptr);
#line 365 "reassign.m"
            return;
          }
#line 365 "reassign.m"
        }
#line 364 "reassign.m"
    }
#line 364 "reassign.m"
  }
#line 364 "reassign.m"
}

#line 364 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0_5(
#line 364 "reassign.m"
  void * ll_backend__reassign__env_ptr_arg)
#line 364 "reassign.m"
{
#line 364 "reassign.m"
  {
#line 364 "reassign.m"
    struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s * ll_backend__reassign__env_ptr = (struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s *) ll_backend__reassign__env_ptr_arg;

#line 364 "reassign.m"
    if (MR_builtin_setjmp((ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__commit_0) == 0)
#line 364 "reassign.m"
      {
#line 364 "reassign.m"
        {
#line 364 "reassign.m"
          {
#line 364 "reassign.m"
            mercury__list__member_2_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, &(ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__conv3_SubLval_23, (ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLvals_10, ll_backend__reassign__clobber_dependents_5_p_0_4, ll_backend__reassign__env_ptr);
          }
#line 364 "reassign.m"
        }
#line 364 "reassign.m"
        (ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = MR_FALSE;
#line 364 "reassign.m"
      }
#line 364 "reassign.m"
    else
#line 364 "reassign.m"
      (ll_backend__reassign__env_ptr)->ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = MR_TRUE;
#line 364 "reassign.m"
  }
#line 364 "reassign.m"
}

#line 345 "reassign.m"
static void MR_CALL 
ll_backend__reassign__clobber_dependents_5_p_0(
#line 345 "reassign.m"
  MR_Word ll_backend__reassign__Target_6,
#line 345 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_13,
#line 345 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_14,
#line 345 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_15,
#line 345 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_DepLvalMap_16)
#line 345 "reassign.m"
{
#line 345 "reassign.m"
  {
#line 345 "reassign.m"
    struct ll_backend__reassign__clobber_dependents_5_p_0_env_0_s ll_backend__reassign__env;

#line 348 "reassign.m"
    {
#line 348 "reassign.m"
      MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_18_18;
#line 348 "reassign.m"
      MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_19_19;
#line 348 "reassign.m"
      MR_Word ll_backend__reassign__V_20_20;
#line 352 "reassign.m"
      MR_Word ll_backend__reassign__DepLvals_9;
#line 349 "reassign.m"
      MR_Box ll_backend__reassign__conv0_DepLvals_9;

#line 349 "reassign.m"
      {
#line 349 "reassign.m"
        (ll_backend__reassign__env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__reassign_scalar_common_1[0], ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_15, ((MR_Box) (ll_backend__reassign__Target_6)), &ll_backend__reassign__conv0_DepLvals_9);
      }
#line 349 "reassign.m"
      if ((ll_backend__reassign__env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded)
#line 349 "reassign.m"
        {
#line 349 "reassign.m"
          ll_backend__reassign__DepLvals_9 = ((MR_Word) ll_backend__reassign__conv0_DepLvals_9);
#line 349 "reassign.m"
          (ll_backend__reassign__env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded = MR_TRUE;
#line 349 "reassign.m"
        }
#line 352 "reassign.m"
      if ((ll_backend__reassign__env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded)
#line 350 "reassign.m"
        {
#line 350 "reassign.m"
          MR_Word ll_backend__reassign__TypeCtorInfo_29_29 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 350 "reassign.m"
          MR_Box ll_backend__reassign__conv2_STATE_VARIABLE_KnownContentsMap_18_18;

#line 350 "reassign.m"
          {
#line 350 "reassign.m"
            mercury__set__fold_4_p_0(ll_backend__reassign__TypeCtorInfo_29_29, (MR_Word) &ll_backend__reassign_scalar_common_2[0], (MR_Word) &ll_backend__reassign_scalar_common_2[2], ll_backend__reassign__DepLvals_9, ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_13)), &ll_backend__reassign__conv2_STATE_VARIABLE_KnownContentsMap_18_18);
          }
#line 350 "reassign.m"
          ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_18_18 = ((MR_Word) ll_backend__reassign__conv2_STATE_VARIABLE_KnownContentsMap_18_18);
#line 351 "reassign.m"
          {
#line 351 "reassign.m"
            mercury__map__delete_3_p_0(ll_backend__reassign__TypeCtorInfo_29_29, (MR_Word) &ll_backend__reassign_scalar_common_1[0], ((MR_Box) (ll_backend__reassign__Target_6)), ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_15, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_19_19);
          }
#line 350 "reassign.m"
        }
#line 352 "reassign.m"
      else
#line 353 "reassign.m"
        {
#line 353 "reassign.m"
          ll_backend__reassign__STATE_VARIABLE_DepLvalMap_19_19 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_15;
#line 353 "reassign.m"
          ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_18_18 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_13;
#line 353 "reassign.m"
        }
#line 361 "reassign.m"
      {
#line 361 "reassign.m"
        ll_backend__reassign__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 361 "reassign.m"
        MR_hl_field(MR_mktag(0), ll_backend__reassign__V_20_20, 0) = ((MR_Box) (ll_backend__reassign__Target_6));
#line 361 "reassign.m"
      }
#line 361 "reassign.m"
      {
#line 361 "reassign.m"
        (ll_backend__reassign__env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__SubLvals_10 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__reassign__V_20_20);
      }
#line 364 "reassign.m"
      {
#line 364 "reassign.m"
        ll_backend__reassign__clobber_dependents_5_p_0_5(&ll_backend__reassign__env);
      }
#line 370 "reassign.m"
      if ((ll_backend__reassign__env).ll_backend__reassign__clobber_dependents_5_p_0_env_0__succeeded)
#line 368 "reassign.m"
        {
#line 368 "reassign.m"
          MR_Word ll_backend__reassign__TypeCtorInfo_33_33 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;

#line 368 "reassign.m"
          {
#line 368 "reassign.m"
            *ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_14 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_33_33, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
          }
#line 369 "reassign.m"
          {
#line 369 "reassign.m"
            *ll_backend__reassign__STATE_VARIABLE_DepLvalMap_16 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_33_33, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
          }
#line 368 "reassign.m"
        }
#line 370 "reassign.m"
      else
#line 371 "reassign.m"
        {
#line 371 "reassign.m"
          *ll_backend__reassign__STATE_VARIABLE_DepLvalMap_16 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_19_19;
#line 371 "reassign.m"
          *ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_14 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_18_18;
#line 371 "reassign.m"
        }
#line 348 "reassign.m"
    }
#line 345 "reassign.m"
  }
#line 345 "reassign.m"
}

#line 338 "reassign.m"
static MR_bool MR_CALL 
ll_backend__reassign__no_implicit_alias_target_1_p_0(
#line 338 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__1_1)
#line 338 "reassign.m"
{
#line 340 "reassign.m"
  {
#line 340 "reassign.m"
    MR_bool ll_backend__reassign__succeeded;

#line 340 "reassign.m"
    if (((MR_tag((MR_Word) ll_backend__reassign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 341 "reassign.m"
      ll_backend__reassign__succeeded = MR_TRUE;
#line 340 "reassign.m"
    else
#line 340 "reassign.m"
      if (((MR_tag((MR_Word) ll_backend__reassign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 340 "reassign.m"
        ll_backend__reassign__succeeded = MR_TRUE;
#line 340 "reassign.m"
      else
#line 340 "reassign.m"
        if (((((MR_tag((MR_Word) ll_backend__reassign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 343 "reassign.m"
          ll_backend__reassign__succeeded = MR_TRUE;
#line 340 "reassign.m"
        else
#line 340 "reassign.m"
          if (((((MR_tag((MR_Word) ll_backend__reassign__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 342 "reassign.m"
            ll_backend__reassign__succeeded = MR_TRUE;
#line 340 "reassign.m"
          else
#line 340 "reassign.m"
            ll_backend__reassign__succeeded = MR_FALSE;
#line 340 "reassign.m"
    return ll_backend__reassign__succeeded;
#line 340 "reassign.m"
  }
#line 338 "reassign.m"
}

#line 318 "reassign.m"
static void MR_CALL 
ll_backend__reassign__update_embdedded_frame_2_7_p_0(
#line 318 "reassign.m"
  MR_Word ll_backend__reassign__StackId_8,
#line 318 "reassign.m"
  MR_Integer ll_backend__reassign__CurSlot_9,
#line 318 "reassign.m"
  MR_Integer ll_backend__reassign__LastSlot_10,
#line 318 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_14,
#line 318 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_15,
#line 318 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_16,
#line 318 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_DepLvalMap_17)
#line 318 "reassign.m"
{
#line 330 "reassign.m"
  while (MR_TRUE)
#line 330 "reassign.m"
    {
#line 330 "reassign.m"
      /* tailcall optimized into a loop */
#line 330 "reassign.m"
      {
#line 330 "reassign.m"
        MR_bool ll_backend__reassign__succeeded = (ll_backend__reassign__CurSlot_9 <= ll_backend__reassign__LastSlot_10);

#line 330 "reassign.m"
        if (ll_backend__reassign__succeeded)
#line 325 "reassign.m"
          {
#line 325 "reassign.m"
            MR_Word ll_backend__reassign__StackVar_13;
#line 325 "reassign.m"
            MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_18_18;
#line 325 "reassign.m"
            MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_19_19;
#line 325 "reassign.m"
            MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_20_20;
#line 325 "reassign.m"
            MR_Integer ll_backend__reassign__V_21_21;

#line 325 "reassign.m"
            {
#line 325 "reassign.m"
              ll_backend__reassign__StackVar_13 = ll_backend__llds__stack_slot_num_to_lval_2_f_0(ll_backend__reassign__StackId_8, ll_backend__reassign__CurSlot_9);
            }
#line 326 "reassign.m"
            {
#line 326 "reassign.m"
              ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__StackVar_13, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_14, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_18_18, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_16, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_19_19);
            }
#line 327 "reassign.m"
            {
#line 327 "reassign.m"
              mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__StackVar_13)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_18_18, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_20_20);
            }
#line 328 "reassign.m"
            ll_backend__reassign__V_21_21 = (ll_backend__reassign__CurSlot_9 + (MR_Integer) 1);
#line 328 "reassign.m"
            /* direct tailcall eliminated */
#line 328 "reassign.m"
            {
#line 328 "reassign.m"
              MR_Integer ll_backend__reassign__CurSlot__tmp_copy_9 = ll_backend__reassign__V_21_21;
#line 328 "reassign.m"
              MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0__tmp_copy_14 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_20_20;
#line 328 "reassign.m"
              MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0__tmp_copy_16 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_19_19;

#line 328 "reassign.m"
              ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_16 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0__tmp_copy_16;
#line 328 "reassign.m"
              ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_14 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0__tmp_copy_14;
#line 328 "reassign.m"
              ll_backend__reassign__CurSlot_9 = ll_backend__reassign__CurSlot__tmp_copy_9;
#line 328 "reassign.m"
            }
#line 328 "reassign.m"
            continue;
#line 325 "reassign.m"
          }
#line 330 "reassign.m"
        else
#line 331 "reassign.m"
          {
#line 331 "reassign.m"
            *ll_backend__reassign__STATE_VARIABLE_DepLvalMap_17 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_16;
#line 331 "reassign.m"
            *ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_15 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_14;
#line 331 "reassign.m"
          }
#line 330 "reassign.m"
      }
#line 330 "reassign.m"
      break;
#line 330 "reassign.m"
    }
#line 318 "reassign.m"
}

#line 309 "reassign.m"
static void MR_CALL 
ll_backend__reassign__update_embdedded_frame_5_p_0(
#line 309 "reassign.m"
  MR_Word ll_backend__reassign__EmbeddedFrame_6,
#line 309 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_12,
#line 309 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_13,
#line 309 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_14,
#line 309 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_DepLvalMap_15)
#line 309 "reassign.m"
{
#line 313 "reassign.m"
  {
#line 313 "reassign.m"
    MR_bool ll_backend__reassign__succeeded;
#line 313 "reassign.m"
    MR_Word ll_backend__reassign__StackId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__reassign__EmbeddedFrame_6, (MR_Integer) 0)));
#line 313 "reassign.m"
    MR_Integer ll_backend__reassign__FirstSlot_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__reassign__EmbeddedFrame_6, (MR_Integer) 1)));
#line 313 "reassign.m"
    MR_Integer ll_backend__reassign__LastSlot_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__reassign__EmbeddedFrame_6, (MR_Integer) 2)));

#line 315 "reassign.m"
    {
#line 315 "reassign.m"
      ll_backend__reassign__update_embdedded_frame_2_7_p_0(ll_backend__reassign__StackId_9, ll_backend__reassign__FirstSlot_10, ll_backend__reassign__LastSlot_11, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_12, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_13, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_14, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_15);
#line 315 "reassign.m"
      return;
    }
#line 313 "reassign.m"
  }
#line 309 "reassign.m"
}

#line 130 "reassign.m"
static void MR_CALL 
ll_backend__reassign__remove_reassign_loop_5_p_0(
#line 130 "reassign.m"
  MR_Word ll_backend__reassign__HeadVar__1_1,
#line 130 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2,
#line 130 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3,
#line 130 "reassign.m"
  MR_Word ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4,
#line 130 "reassign.m"
  MR_Word * ll_backend__reassign__STATE_VARIABLE_RevInstrs_5)
#line 130 "reassign.m"
{
#line 134 "reassign.m"
  while (MR_TRUE)
#line 134 "reassign.m"
    {
#line 134 "reassign.m"
      /* tailcall optimized into a loop */
#line 134 "reassign.m"
      {
#line 134 "reassign.m"
        MR_bool ll_backend__reassign__succeeded;

#line 134 "reassign.m"
        if ((ll_backend__reassign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 134 "reassign.m"
          *ll_backend__reassign__STATE_VARIABLE_RevInstrs_5 = ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4;
#line 134 "reassign.m"
        else
#line 136 "reassign.m"
          {
#line 136 "reassign.m"
            MR_Word ll_backend__reassign__Instr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__reassign__HeadVar__1_1, (MR_Integer) 0)));
#line 136 "reassign.m"
            MR_Word ll_backend__reassign__Instrs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__reassign__HeadVar__1_1, (MR_Integer) 1)));
#line 136 "reassign.m"
            MR_Word ll_backend__reassign__Uinstr0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__reassign__Instr0_11, (MR_Integer) 0)));
#line 136 "reassign.m"
            MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162;
#line 136 "reassign.m"
            MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163;
#line 136 "reassign.m"
            MR_Word ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168;
#line 137 "reassign.m"
            MR_String ll_backend__reassign__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__reassign__Instr0_11, (MR_Integer) 1)));

#line 141 "reassign.m"
            if (((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 1))))
#line 139 "reassign.m"
              {
#line 140 "reassign.m"
                {
#line 140 "reassign.m"
                  ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 140 "reassign.m"
                  MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 140 "reassign.m"
                  MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 140 "reassign.m"
                }
#line 140 "reassign.m"
                ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2;
#line 140 "reassign.m"
                ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3;
#line 139 "reassign.m"
              }
#line 141 "reassign.m"
            else
#line 141 "reassign.m"
              if (((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 2))))
#line 142 "reassign.m"
                {
#line 143 "reassign.m"
                  {
#line 143 "reassign.m"
                    ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "reassign.m"
                    MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 143 "reassign.m"
                    MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 143 "reassign.m"
                  }
#line 143 "reassign.m"
                  ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2;
#line 143 "reassign.m"
                  ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3;
#line 142 "reassign.m"
                }
#line 141 "reassign.m"
              else
#line 141 "reassign.m"
                if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 202 "reassign.m"
                  {
#line 202 "reassign.m"
                    MR_Word ll_backend__reassign__TypeCtorInfo_187_187;

#line 203 "reassign.m"
                    {
#line 203 "reassign.m"
                      ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "reassign.m"
                      MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 203 "reassign.m"
                      MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 203 "reassign.m"
                    }
#line 2083 "ll_backend.reassign.c"
                    ll_backend__reassign__TypeCtorInfo_187_187 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 205 "reassign.m"
                    {
#line 205 "reassign.m"
                      ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_187_187, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                    }
#line 206 "reassign.m"
                    {
#line 206 "reassign.m"
                      ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_187_187, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
                    }
#line 202 "reassign.m"
                  }
#line 141 "reassign.m"
                else
#line 141 "reassign.m"
                  if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 148 "reassign.m"
                    {
#line 148 "reassign.m"
                      MR_Word ll_backend__reassign__Target_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));
#line 148 "reassign.m"
                      MR_Word ll_backend__reassign__Source_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 2)));
#line 150 "reassign.m"
                      MR_Word ll_backend__reassign__KnownContents_25;
#line 150 "reassign.m"
                      MR_Box ll_backend__reassign__conv0_KnownContents_25;

#line 150 "reassign.m"
                      {
#line 150 "reassign.m"
                        ll_backend__reassign__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, ((MR_Box) (ll_backend__reassign__Target_23)), &ll_backend__reassign__conv0_KnownContents_25);
                      }
#line 150 "reassign.m"
                      if (ll_backend__reassign__succeeded)
#line 150 "reassign.m"
                        {
#line 150 "reassign.m"
                          ll_backend__reassign__KnownContents_25 = ((MR_Word) ll_backend__reassign__conv0_KnownContents_25);
#line 150 "reassign.m"
                          ll_backend__reassign__succeeded = MR_TRUE;
#line 150 "reassign.m"
                        }
#line 150 "reassign.m"
                      if (ll_backend__reassign__succeeded)
#line 151 "reassign.m"
                        {
#line 151 "reassign.m"
                          ll_backend__reassign__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__reassign__KnownContents_25, ll_backend__reassign__Source_24);
                        }
#line 155 "reassign.m"
                      if (ll_backend__reassign__succeeded)
#line 154 "reassign.m"
                        {
#line 154 "reassign.m"
                          ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4;
#line 154 "reassign.m"
                          ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3;
#line 154 "reassign.m"
                          ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2;
#line 154 "reassign.m"
                        }
#line 155 "reassign.m"
                      else
#line 156 "reassign.m"
                        {
#line 156 "reassign.m"
                          MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_160_160;
#line 156 "reassign.m"
                          MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_161_161;

#line 156 "reassign.m"
                          {
#line 156 "reassign.m"
                            ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "reassign.m"
                            MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 156 "reassign.m"
                            MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 156 "reassign.m"
                          }
#line 157 "reassign.m"
                          {
#line 157 "reassign.m"
                            ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__Target_23, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_160_160, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_161_161);
                          }
#line 164 "reassign.m"
                          {
#line 164 "reassign.m"
                            ll_backend__reassign__succeeded = ll_backend__reassign__no_implicit_alias_target_1_p_0(ll_backend__reassign__Target_23);
                          }
#line 167 "reassign.m"
                          if (ll_backend__reassign__succeeded)
#line 166 "reassign.m"
                            {
#line 166 "reassign.m"
                              ll_backend__reassign__record_known_6_p_0(ll_backend__reassign__Target_23, ll_backend__reassign__Source_24, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_160_160, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_161_161, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                            }
#line 167 "reassign.m"
                          else
#line 168 "reassign.m"
                            {
#line 168 "reassign.m"
                              ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_161_161;
#line 168 "reassign.m"
                              ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_160_160;
#line 168 "reassign.m"
                            }
#line 156 "reassign.m"
                        }
#line 148 "reassign.m"
                    }
#line 141 "reassign.m"
                  else
#line 141 "reassign.m"
                    if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 145 "reassign.m"
                      {
#line 146 "reassign.m"
                        {
#line 146 "reassign.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.reassign", (MR_String) "predicate \140ll_backend.reassign.remove_reassign_loop\'/5", (MR_String) "block");
#line 146 "reassign.m"
                          return;
                        }
#line 145 "reassign.m"
                      }
#line 141 "reassign.m"
                    else
#line 141 "reassign.m"
                      if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 267 "reassign.m"
                        {
#line 267 "reassign.m"
                          MR_Word ll_backend__reassign__TypeCtorInfo_200_200;

#line 268 "reassign.m"
                          {
#line 268 "reassign.m"
                            ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "reassign.m"
                            MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 268 "reassign.m"
                            MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 268 "reassign.m"
                          }
#line 2230 "ll_backend.reassign.c"
                          ll_backend__reassign__TypeCtorInfo_200_200 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 271 "reassign.m"
                          {
#line 271 "reassign.m"
                            ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_200_200, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                          }
#line 272 "reassign.m"
                          {
#line 272 "reassign.m"
                            ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_200_200, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
                          }
#line 267 "reassign.m"
                        }
#line 141 "reassign.m"
                      else
#line 141 "reassign.m"
                        if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 274 "reassign.m"
                          {
#line 274 "reassign.m"
                            MR_Word ll_backend__reassign__TypeCtorInfo_203_203;

#line 275 "reassign.m"
                            {
#line 275 "reassign.m"
                              ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "reassign.m"
                              MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 275 "reassign.m"
                              MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 275 "reassign.m"
                            }
#line 2263 "ll_backend.reassign.c"
                            ll_backend__reassign__TypeCtorInfo_203_203 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 278 "reassign.m"
                            {
#line 278 "reassign.m"
                              ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_203_203, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                            }
#line 279 "reassign.m"
                            {
#line 279 "reassign.m"
                              ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_203_203, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
                            }
#line 274 "reassign.m"
                          }
#line 141 "reassign.m"
                        else
#line 141 "reassign.m"
                          if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 281 "reassign.m"
                            {
#line 281 "reassign.m"
                              MR_Word ll_backend__reassign__TypeCtorInfo_206_206;

#line 282 "reassign.m"
                              {
#line 282 "reassign.m"
                                ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "reassign.m"
                                MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 282 "reassign.m"
                                MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 282 "reassign.m"
                              }
#line 2296 "ll_backend.reassign.c"
                              ll_backend__reassign__TypeCtorInfo_206_206 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 284 "reassign.m"
                              {
#line 284 "reassign.m"
                                ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_206_206, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                              }
#line 285 "reassign.m"
                              {
#line 285 "reassign.m"
                                ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_206_206, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
                              }
#line 281 "reassign.m"
                            }
#line 141 "reassign.m"
                          else
#line 141 "reassign.m"
                            if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 291 "reassign.m"
                              {
#line 291 "reassign.m"
                                MR_Word ll_backend__reassign__TypeCtorInfo_209_209;

#line 292 "reassign.m"
                                {
#line 292 "reassign.m"
                                  ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "reassign.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 292 "reassign.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 292 "reassign.m"
                                }
#line 2329 "ll_backend.reassign.c"
                                ll_backend__reassign__TypeCtorInfo_209_209 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 297 "reassign.m"
                                {
#line 297 "reassign.m"
                                  ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_209_209, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                }
#line 298 "reassign.m"
                                {
#line 298 "reassign.m"
                                  ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_209_209, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
                                }
#line 291 "reassign.m"
                              }
#line 141 "reassign.m"
                            else
#line 141 "reassign.m"
                              if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 225 "reassign.m"
                                {
#line 226 "reassign.m"
                                  {
#line 226 "reassign.m"
                                    ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "reassign.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 226 "reassign.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 226 "reassign.m"
                                  }
#line 226 "reassign.m"
                                  ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2;
#line 226 "reassign.m"
                                  ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3;
#line 225 "reassign.m"
                                }
#line 141 "reassign.m"
                              else
#line 141 "reassign.m"
                                if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 208 "reassign.m"
                                  {
#line 209 "reassign.m"
                                    {
#line 209 "reassign.m"
                                      ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "reassign.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 209 "reassign.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 209 "reassign.m"
                                    }
#line 209 "reassign.m"
                                    ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2;
#line 209 "reassign.m"
                                    ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3;
#line 208 "reassign.m"
                                  }
#line 141 "reassign.m"
                                else
#line 141 "reassign.m"
                                  if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 220 "reassign.m"
                                    {
#line 220 "reassign.m"
                                      MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_139;
#line 220 "reassign.m"
                                      MR_Word ll_backend__reassign__Target_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));
#line 212 "reassign.m"
                                      MR_Word ll_backend__reassign__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 2)));
#line 212 "reassign.m"
                                      MR_Word ll_backend__reassign__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 3)));
#line 212 "reassign.m"
                                      MR_Word ll_backend__reassign__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 4)));
#line 212 "reassign.m"
                                      MR_Word ll_backend__reassign__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 5)));
#line 212 "reassign.m"
                                      MR_Word ll_backend__reassign__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 6)));
#line 212 "reassign.m"
                                      MR_Word ll_backend__reassign__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 7)));
#line 212 "reassign.m"
                                      MR_Word ll_backend__reassign__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 8)));

#line 221 "reassign.m"
                                      {
#line 221 "reassign.m"
                                        ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "reassign.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 221 "reassign.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 221 "reassign.m"
                                      }
#line 222 "reassign.m"
                                      {
#line 222 "reassign.m"
                                        ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__Target_170, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_139, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                      }
#line 223 "reassign.m"
                                      {
#line 223 "reassign.m"
                                        mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__Target_170)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_139, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162);
                                      }
#line 220 "reassign.m"
                                    }
#line 141 "reassign.m"
                                  else
#line 141 "reassign.m"
                                    if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 260 "reassign.m"
                                      {
#line 260 "reassign.m"
                                        MR_Word ll_backend__reassign__TypeCtorInfo_197_197;

#line 261 "reassign.m"
                                        {
#line 261 "reassign.m"
                                          ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "reassign.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 261 "reassign.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 261 "reassign.m"
                                        }
#line 2453 "ll_backend.reassign.c"
                                        ll_backend__reassign__TypeCtorInfo_197_197 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 264 "reassign.m"
                                        {
#line 264 "reassign.m"
                                          ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_197_197, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                        }
#line 265 "reassign.m"
                                        {
#line 265 "reassign.m"
                                          ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_197_197, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
                                        }
#line 260 "reassign.m"
                                      }
#line 141 "reassign.m"
                                    else
#line 141 "reassign.m"
                                      if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 287 "reassign.m"
                                        {
#line 287 "reassign.m"
                                          MR_Word ll_backend__reassign__Target_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));
#line 287 "reassign.m"
                                          MR_Integer ll_backend__reassign__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 2)));
#line 287 "reassign.m"
                                          MR_Integer ll_backend__reassign__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 3)));

#line 288 "reassign.m"
                                          {
#line 288 "reassign.m"
                                            ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "reassign.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 288 "reassign.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 288 "reassign.m"
                                          }
#line 289 "reassign.m"
                                          {
#line 289 "reassign.m"
                                            ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__Target_172, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                          }
#line 287 "reassign.m"
                                        }
#line 141 "reassign.m"
                                      else
#line 141 "reassign.m"
                                        if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 300 "reassign.m"
                                          {
#line 300 "reassign.m"
                                            MR_Word ll_backend__reassign__TypeCtorInfo_212_212;

#line 301 "reassign.m"
                                            {
#line 301 "reassign.m"
                                              ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "reassign.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 301 "reassign.m"
                                              MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 301 "reassign.m"
                                            }
#line 2516 "ll_backend.reassign.c"
                                            ll_backend__reassign__TypeCtorInfo_212_212 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 303 "reassign.m"
                                            {
#line 303 "reassign.m"
                                              ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_212_212, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                            }
#line 304 "reassign.m"
                                            {
#line 304 "reassign.m"
                                              ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_212_212, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
                                            }
#line 300 "reassign.m"
                                          }
#line 141 "reassign.m"
                                        else
#line 141 "reassign.m"
                                          if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 172 "reassign.m"
                                            {
#line 173 "reassign.m"
                                              {
#line 173 "reassign.m"
                                                ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "reassign.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 173 "reassign.m"
                                                MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 173 "reassign.m"
                                              }
#line 173 "reassign.m"
                                              ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2;
#line 173 "reassign.m"
                                              ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3;
#line 172 "reassign.m"
                                            }
#line 141 "reassign.m"
                                          else
#line 141 "reassign.m"
                                            if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 186 "reassign.m"
                                              {
#line 186 "reassign.m"
                                                MR_Word ll_backend__reassign__TypeCtorInfo_181_181;

#line 187 "reassign.m"
                                                {
#line 187 "reassign.m"
                                                  ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "reassign.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 187 "reassign.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 187 "reassign.m"
                                                }
#line 2571 "ll_backend.reassign.c"
                                                ll_backend__reassign__TypeCtorInfo_181_181 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 190 "reassign.m"
                                                {
#line 190 "reassign.m"
                                                  ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_181_181, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                }
#line 191 "reassign.m"
                                                {
#line 191 "reassign.m"
                                                  ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_181_181, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
                                                }
#line 186 "reassign.m"
                                              }
#line 141 "reassign.m"
                                            else
#line 141 "reassign.m"
                                              if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 220 "reassign.m"
                                                {
#line 220 "reassign.m"
                                                  MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_215;
#line 220 "reassign.m"
                                                  MR_Word ll_backend__reassign__Target_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 2)));
#line 218 "reassign.m"
                                                  MR_Integer ll_backend__reassign__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));

#line 221 "reassign.m"
                                                  {
#line 221 "reassign.m"
                                                    ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "reassign.m"
                                                    MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 221 "reassign.m"
                                                    MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 221 "reassign.m"
                                                  }
#line 222 "reassign.m"
                                                  {
#line 222 "reassign.m"
                                                    ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__Target_216, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_215, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                                  }
#line 223 "reassign.m"
                                                  {
#line 223 "reassign.m"
                                                    mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__Target_216)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_215, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162);
                                                  }
#line 220 "reassign.m"
                                                }
#line 141 "reassign.m"
                                              else
#line 141 "reassign.m"
                                                if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 220 "reassign.m"
                                                  {
#line 220 "reassign.m"
                                                    MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_219;
#line 220 "reassign.m"
                                                    MR_Word ll_backend__reassign__Target_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 2)));
#line 219 "reassign.m"
                                                    MR_Word ll_backend__reassign__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));
#line 219 "reassign.m"
                                                    MR_Word ll_backend__reassign__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 3)));

#line 221 "reassign.m"
                                                    {
#line 221 "reassign.m"
                                                      ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "reassign.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 221 "reassign.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 221 "reassign.m"
                                                    }
#line 222 "reassign.m"
                                                    {
#line 222 "reassign.m"
                                                      ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__Target_220, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_219, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                                    }
#line 223 "reassign.m"
                                                    {
#line 223 "reassign.m"
                                                      mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__Target_220)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_219, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162);
                                                    }
#line 220 "reassign.m"
                                                  }
#line 141 "reassign.m"
                                                else
#line 141 "reassign.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 175 "reassign.m"
                                                    {
#line 175 "reassign.m"
                                                      MR_Word ll_backend__reassign__TypeCtorInfo_175_175;

#line 176 "reassign.m"
                                                      {
#line 176 "reassign.m"
                                                        ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "reassign.m"
                                                        MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 176 "reassign.m"
                                                        MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 176 "reassign.m"
                                                      }
#line 2676 "ll_backend.reassign.c"
                                                      ll_backend__reassign__TypeCtorInfo_175_175 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 178 "reassign.m"
                                                      {
#line 178 "reassign.m"
                                                        ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_175_175, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                      }
#line 179 "reassign.m"
                                                      {
#line 179 "reassign.m"
                                                        ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_175_175, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
                                                      }
#line 175 "reassign.m"
                                                    }
#line 141 "reassign.m"
                                                  else
#line 141 "reassign.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 220 "reassign.m"
                                                      {
#line 220 "reassign.m"
                                                        MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_223;
#line 220 "reassign.m"
                                                        MR_Word ll_backend__reassign__Target_224 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));

#line 221 "reassign.m"
                                                        {
#line 221 "reassign.m"
                                                          ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "reassign.m"
                                                          MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 221 "reassign.m"
                                                          MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 221 "reassign.m"
                                                        }
#line 222 "reassign.m"
                                                        {
#line 222 "reassign.m"
                                                          ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__Target_224, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_223, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                                        }
#line 223 "reassign.m"
                                                        {
#line 223 "reassign.m"
                                                          mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__Target_224)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_223, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162);
                                                        }
#line 220 "reassign.m"
                                                      }
#line 141 "reassign.m"
                                                    else
#line 141 "reassign.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 220 "reassign.m"
                                                        {
#line 220 "reassign.m"
                                                          MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_227;
#line 220 "reassign.m"
                                                          MR_Word ll_backend__reassign__Target_228 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));

#line 221 "reassign.m"
                                                          {
#line 221 "reassign.m"
                                                            ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "reassign.m"
                                                            MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 221 "reassign.m"
                                                            MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 221 "reassign.m"
                                                          }
#line 222 "reassign.m"
                                                          {
#line 222 "reassign.m"
                                                            ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__Target_228, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_227, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                                          }
#line 223 "reassign.m"
                                                          {
#line 223 "reassign.m"
                                                            mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__Target_228)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_227, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162);
                                                          }
#line 220 "reassign.m"
                                                        }
#line 141 "reassign.m"
                                                      else
#line 141 "reassign.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 181 "reassign.m"
                                                          {
#line 181 "reassign.m"
                                                            MR_Word ll_backend__reassign__TypeCtorInfo_178_178;

#line 182 "reassign.m"
                                                            {
#line 182 "reassign.m"
                                                              ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "reassign.m"
                                                              MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 182 "reassign.m"
                                                              MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 182 "reassign.m"
                                                            }
#line 2775 "ll_backend.reassign.c"
                                                            ll_backend__reassign__TypeCtorInfo_178_178 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 183 "reassign.m"
                                                            {
#line 183 "reassign.m"
                                                              ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_178_178, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                            }
#line 184 "reassign.m"
                                                            {
#line 184 "reassign.m"
                                                              ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_178_178, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
                                                            }
#line 181 "reassign.m"
                                                          }
#line 141 "reassign.m"
                                                        else
#line 141 "reassign.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 233 "reassign.m"
                                                            {
#line 233 "reassign.m"
                                                              MR_Word ll_backend__reassign__EmbeddedFrame_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 2)));
#line 230 "reassign.m"
                                                              MR_Word ll_backend__reassign__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));

#line 234 "reassign.m"
                                                              {
#line 234 "reassign.m"
                                                                ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "reassign.m"
                                                                MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 234 "reassign.m"
                                                                MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 234 "reassign.m"
                                                              }
#line 235 "reassign.m"
                                                              {
#line 235 "reassign.m"
                                                                ll_backend__reassign__update_embdedded_frame_5_p_0(ll_backend__reassign__EmbeddedFrame_59, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                                              }
#line 233 "reassign.m"
                                                            }
#line 141 "reassign.m"
                                                          else
#line 141 "reassign.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 237 "reassign.m"
                                                              {
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__TypeCtorInfo_192_192;
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__TypeCtorInfo_193_193;
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__NumLval_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 4)));
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__AddrLval_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 5)));
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_126_126;
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_127_127;
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_128_128;
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_129_129;
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_130_130;
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_132_132;
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__EmbeddedFrame_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 2)));
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));
#line 237 "reassign.m"
                                                                MR_Word ll_backend__reassign__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 3)));

#line 238 "reassign.m"
                                                                {
#line 238 "reassign.m"
                                                                  ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "reassign.m"
                                                                  MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 238 "reassign.m"
                                                                  MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 238 "reassign.m"
                                                                }
#line 239 "reassign.m"
                                                                {
#line 239 "reassign.m"
                                                                  ll_backend__reassign__update_embdedded_frame_5_p_0(ll_backend__reassign__EmbeddedFrame_171, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_126_126, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_127_127);
                                                                }
#line 240 "reassign.m"
                                                                {
#line 240 "reassign.m"
                                                                  ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__NumLval_65, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_126_126, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_128_128, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_127_127, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_129_129);
                                                                }
#line 241 "reassign.m"
                                                                {
#line 241 "reassign.m"
                                                                  ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__AddrLval_66, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_128_128, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_130_130, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_129_129, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                                                }
#line 2875 "ll_backend.reassign.c"
                                                                ll_backend__reassign__TypeCtorInfo_192_192 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 2877 "ll_backend.reassign.c"
                                                                ll_backend__reassign__TypeCtorInfo_193_193 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 242 "reassign.m"
                                                                {
#line 242 "reassign.m"
                                                                  mercury__map__delete_3_p_0(ll_backend__reassign__TypeCtorInfo_192_192, ll_backend__reassign__TypeCtorInfo_193_193, ((MR_Box) (ll_backend__reassign__NumLval_65)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_130_130, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_132_132);
                                                                }
#line 243 "reassign.m"
                                                                {
#line 243 "reassign.m"
                                                                  mercury__map__delete_3_p_0(ll_backend__reassign__TypeCtorInfo_192_192, ll_backend__reassign__TypeCtorInfo_193_193, ((MR_Box) (ll_backend__reassign__AddrLval_66)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_132_132, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162);
                                                                }
#line 237 "reassign.m"
                                                              }
#line 141 "reassign.m"
                                                            else
#line 141 "reassign.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 233 "reassign.m"
                                                                {
#line 233 "reassign.m"
                                                                  MR_Word ll_backend__reassign__EmbeddedFrame_231 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 2)));
#line 231 "reassign.m"
                                                                  MR_Word ll_backend__reassign__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));
#line 231 "reassign.m"
                                                                  MR_Word ll_backend__reassign__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 3)));

#line 234 "reassign.m"
                                                                  {
#line 234 "reassign.m"
                                                                    ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "reassign.m"
                                                                    MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 234 "reassign.m"
                                                                    MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 234 "reassign.m"
                                                                  }
#line 235 "reassign.m"
                                                                  {
#line 235 "reassign.m"
                                                                    ll_backend__reassign__update_embdedded_frame_5_p_0(ll_backend__reassign__EmbeddedFrame_231, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                                                  }
#line 233 "reassign.m"
                                                                }
#line 141 "reassign.m"
                                                              else
#line 141 "reassign.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 245 "reassign.m"
                                                                  {
#line 245 "reassign.m"
                                                                    MR_Word ll_backend__reassign__TypeCtorInfo_194_194;

#line 246 "reassign.m"
                                                                    {
#line 246 "reassign.m"
                                                                      ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "reassign.m"
                                                                      MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 246 "reassign.m"
                                                                      MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 246 "reassign.m"
                                                                    }
#line 2940 "ll_backend.reassign.c"
                                                                    ll_backend__reassign__TypeCtorInfo_194_194 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 248 "reassign.m"
                                                                    {
#line 248 "reassign.m"
                                                                      ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_194_194, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                                    }
#line 249 "reassign.m"
                                                                    {
#line 249 "reassign.m"
                                                                      ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_194_194, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
                                                                    }
#line 245 "reassign.m"
                                                                  }
#line 141 "reassign.m"
                                                                else
#line 141 "reassign.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 220 "reassign.m"
                                                                    {
#line 220 "reassign.m"
                                                                      MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_232;
#line 220 "reassign.m"
                                                                      MR_Word ll_backend__reassign__Target_233 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));

#line 221 "reassign.m"
                                                                      {
#line 221 "reassign.m"
                                                                        ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "reassign.m"
                                                                        MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 221 "reassign.m"
                                                                        MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 221 "reassign.m"
                                                                      }
#line 222 "reassign.m"
                                                                      {
#line 222 "reassign.m"
                                                                        ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__Target_233, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_232, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                                                      }
#line 223 "reassign.m"
                                                                      {
#line 223 "reassign.m"
                                                                        mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__Target_233)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_232, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162);
                                                                      }
#line 220 "reassign.m"
                                                                    }
#line 141 "reassign.m"
                                                                  else
#line 141 "reassign.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 220 "reassign.m"
                                                                      {
#line 220 "reassign.m"
                                                                        MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_236;
#line 220 "reassign.m"
                                                                        MR_Word ll_backend__reassign__Target_237 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));

#line 221 "reassign.m"
                                                                        {
#line 221 "reassign.m"
                                                                          ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "reassign.m"
                                                                          MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 221 "reassign.m"
                                                                          MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 221 "reassign.m"
                                                                        }
#line 222 "reassign.m"
                                                                        {
#line 222 "reassign.m"
                                                                          ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__Target_237, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_236, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                                                        }
#line 223 "reassign.m"
                                                                        {
#line 223 "reassign.m"
                                                                          mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__Target_237)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_236, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162);
                                                                        }
#line 220 "reassign.m"
                                                                      }
#line 141 "reassign.m"
                                                                    else
#line 141 "reassign.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 220 "reassign.m"
                                                                        {
#line 220 "reassign.m"
                                                                          MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_240;
#line 220 "reassign.m"
                                                                          MR_Word ll_backend__reassign__Target_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));

#line 221 "reassign.m"
                                                                          {
#line 221 "reassign.m"
                                                                            ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "reassign.m"
                                                                            MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 221 "reassign.m"
                                                                            MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 221 "reassign.m"
                                                                          }
#line 222 "reassign.m"
                                                                          {
#line 222 "reassign.m"
                                                                            ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__Target_241, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_240, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                                                          }
#line 223 "reassign.m"
                                                                          {
#line 223 "reassign.m"
                                                                            mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__Target_241)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_240, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162);
                                                                          }
#line 220 "reassign.m"
                                                                        }
#line 141 "reassign.m"
                                                                      else
#line 141 "reassign.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 220 "reassign.m"
                                                                          {
#line 220 "reassign.m"
                                                                            MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_244;
#line 220 "reassign.m"
                                                                            MR_Word ll_backend__reassign__Target_245 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));

#line 221 "reassign.m"
                                                                            {
#line 221 "reassign.m"
                                                                              ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "reassign.m"
                                                                              MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 221 "reassign.m"
                                                                              MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 221 "reassign.m"
                                                                            }
#line 222 "reassign.m"
                                                                            {
#line 222 "reassign.m"
                                                                              ll_backend__reassign__clobber_dependents_5_p_0(ll_backend__reassign__Target_245, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_244, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                                                            }
#line 223 "reassign.m"
                                                                            {
#line 223 "reassign.m"
                                                                              mercury__map__delete_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__reassign__Target_245)), ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_139_244, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162);
                                                                            }
#line 220 "reassign.m"
                                                                          }
#line 141 "reassign.m"
                                                                        else
#line 141 "reassign.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 233 "reassign.m"
                                                                            {
#line 233 "reassign.m"
                                                                              MR_Word ll_backend__reassign__EmbeddedFrame_248 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 2)));
#line 232 "reassign.m"
                                                                              MR_Word ll_backend__reassign__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 1)));

#line 234 "reassign.m"
                                                                              {
#line 234 "reassign.m"
                                                                                ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "reassign.m"
                                                                                MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 234 "reassign.m"
                                                                                MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 234 "reassign.m"
                                                                              }
#line 235 "reassign.m"
                                                                              {
#line 235 "reassign.m"
                                                                                ll_backend__reassign__update_embdedded_frame_5_p_0(ll_backend__reassign__EmbeddedFrame_248, ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2, &ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162, ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3, &ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163);
                                                                              }
#line 233 "reassign.m"
                                                                            }
#line 141 "reassign.m"
                                                                          else
#line 141 "reassign.m"
                                                                            if (((((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 7)))) || (((((MR_tag((MR_Word) ll_backend__reassign__Uinstr0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__reassign__Uinstr0_16, (MR_Integer) 0)))) == (MR_Integer) 6))))))
#line 195 "reassign.m"
                                                                              {
#line 195 "reassign.m"
                                                                                MR_Word ll_backend__reassign__TypeCtorInfo_184_184;

#line 196 "reassign.m"
                                                                                {
#line 196 "reassign.m"
                                                                                  ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "reassign.m"
                                                                                  MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 196 "reassign.m"
                                                                                  MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 196 "reassign.m"
                                                                                }
#line 3133 "ll_backend.reassign.c"
                                                                                ll_backend__reassign__TypeCtorInfo_184_184 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 199 "reassign.m"
                                                                                {
#line 199 "reassign.m"
                                                                                  ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_184_184, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                                                }
#line 200 "reassign.m"
                                                                                {
#line 200 "reassign.m"
                                                                                  ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_184_184, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
                                                                                }
#line 195 "reassign.m"
                                                                              }
#line 141 "reassign.m"
                                                                            else
#line 257 "reassign.m"
                                                                              {
#line 258 "reassign.m"
                                                                                {
#line 258 "reassign.m"
                                                                                  ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "reassign.m"
                                                                                  MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 0) = ((MR_Box) (ll_backend__reassign__Instr0_11));
#line 258 "reassign.m"
                                                                                  MR_hl_field(MR_mktag(1), ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168, 1) = ((MR_Box) (ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4));
#line 258 "reassign.m"
                                                                                }
#line 258 "reassign.m"
                                                                                ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2;
#line 258 "reassign.m"
                                                                                ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3;
#line 257 "reassign.m"
                                                                              }
#line 306 "reassign.m"
            /* direct tailcall eliminated */
#line 306 "reassign.m"
            {
#line 306 "reassign.m"
              MR_Word ll_backend__reassign__HeadVar__1__tmp_copy_1 = ll_backend__reassign__Instrs0_12;
#line 306 "reassign.m"
              MR_Word ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0__tmp_copy_2 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_162_162;
#line 306 "reassign.m"
              MR_Word ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0__tmp_copy_3 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_163_163;
#line 306 "reassign.m"
              MR_Word ll_backend__reassign__STATE_VARIABLE_RevInstrs_0__tmp_copy_4 = ll_backend__reassign__STATE_VARIABLE_RevInstrs_168_168;

#line 306 "reassign.m"
              ll_backend__reassign__STATE_VARIABLE_RevInstrs_0_4 = ll_backend__reassign__STATE_VARIABLE_RevInstrs_0__tmp_copy_4;
#line 306 "reassign.m"
              ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0_3 = ll_backend__reassign__STATE_VARIABLE_DepLvalMap_0__tmp_copy_3;
#line 306 "reassign.m"
              ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0_2 = ll_backend__reassign__STATE_VARIABLE_KnownContentsMap_0__tmp_copy_2;
#line 306 "reassign.m"
              ll_backend__reassign__HeadVar__1_1 = ll_backend__reassign__HeadVar__1__tmp_copy_1;
#line 306 "reassign.m"
            }
#line 306 "reassign.m"
            continue;
#line 136 "reassign.m"
          }
#line 134 "reassign.m"
      }
#line 134 "reassign.m"
      break;
#line 134 "reassign.m"
    }
#line 130 "reassign.m"
}

#line 106 "reassign.m"
void MR_CALL 
ll_backend__reassign__remove_reassign_2_p_0(
#line 106 "reassign.m"
  MR_Word ll_backend__reassign__Instrs0_3,
#line 106 "reassign.m"
  MR_Word * ll_backend__reassign__Instrs_4)
#line 106 "reassign.m"
{
#line 126 "reassign.m"
  {
#line 126 "reassign.m"
    MR_bool ll_backend__reassign__succeeded;
#line 126 "reassign.m"
    MR_Word ll_backend__reassign__TypeCtorInfo_9_9 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 126 "reassign.m"
    MR_Word ll_backend__reassign__RevInstrs_5;
#line 126 "reassign.m"
    MR_Word ll_backend__reassign__V_6_6;
#line 126 "reassign.m"
    MR_Word ll_backend__reassign__V_7_7;

#line 127 "reassign.m"
    {
#line 127 "reassign.m"
      ll_backend__reassign__V_6_6 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_9_9, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
    }
#line 127 "reassign.m"
    {
#line 127 "reassign.m"
      ll_backend__reassign__V_7_7 = mercury__map__init_0_f_0(ll_backend__reassign__TypeCtorInfo_9_9, (MR_Word) &ll_backend__reassign_scalar_common_1[0]);
    }
#line 127 "reassign.m"
    {
#line 127 "reassign.m"
      ll_backend__reassign__remove_reassign_loop_5_p_0(ll_backend__reassign__Instrs0_3, ll_backend__reassign__V_6_6, ll_backend__reassign__V_7_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__reassign__RevInstrs_5);
    }
#line 128 "reassign.m"
    {
#line 128 "reassign.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__reassign__RevInstrs_5, ll_backend__reassign__Instrs_4);
#line 128 "reassign.m"
      return;
    }
#line 126 "reassign.m"
  }
#line 106 "reassign.m"
}

void mercury__ll_backend__reassign__init(void)
{
}

void mercury__ll_backend__reassign__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__reassign__ll_backend__reassign__type_ctor_info_dependent_lval_map_0);
	MR_register_type_ctor_info(&ll_backend__reassign__ll_backend__reassign__type_ctor_info_known_contents_0);
}

void mercury__ll_backend__reassign__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.reassign. */
