/*
** Automatically generated from `dupelim.m'
** by the Mercury compiler,
** version rotd-2017-01-21
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


/* :- module ll_backend.dupelim. */
/* :- implementation. */

/*
INIT mercury__ll_backend__dupelim__init
ENDINIT
*/

#include "ll_backend.dupelim.mih"


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
#include "ll_backend.basic_block.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dupelim__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

static const MR_PseudoTypeInfo ll_backend__dupelim__ll_backend__dupelim__field_types_cluster_0_0[2];

static const MR_DuFunctorDesc ll_backend__dupelim__ll_backend__dupelim__du_functor_desc_cluster_0_0;

static const MR_DuFunctorDescPtr ll_backend__dupelim__ll_backend__dupelim__du_stag_ordered_cluster_0_0[1];

static const MR_DuPtagLayout ll_backend__dupelim__ll_backend__dupelim__du_ptag_ordered_cluster_0[1];

static const MR_DuFunctorDescPtr ll_backend__dupelim__ll_backend__dupelim__du_name_ordered_cluster_0[1];

static const MR_Integer ll_backend__dupelim__ll_backend__dupelim__functor_number_map_cluster_0[1];

static const MR_FA_TypeInfo_Struct1 ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_instr_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__dupelim__tree234__ti_tree234_2list__ti_list_1ll_backend__llds__type_ctor_info_instr_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____cluster_0_0_10001(
  MR_Box ll_backend__dupelim__wrapper_arg_1,
  MR_Box ll_backend__dupelim__wrapper_arg_2);

static void MR_CALL 
ll_backend__dupelim____Compare____cluster_0_0_10001(
  MR_Box * ll_backend__dupelim__wrapper_arg_1,
  MR_Box ll_backend__dupelim__wrapper_arg_2,
  MR_Box ll_backend__dupelim__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____std_map_0_0_10001(
  MR_Box ll_backend__dupelim__wrapper_arg_1,
  MR_Box ll_backend__dupelim__wrapper_arg_2);

static void MR_CALL 
ll_backend__dupelim____Compare____std_map_0_0_10001(
  MR_Box * ll_backend__dupelim__wrapper_arg_1,
  MR_Box ll_backend__dupelim__wrapper_arg_2,
  MR_Box ll_backend__dupelim__wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__285__1_2_p_0(
  MR_Word ll_backend__dupelim__ElimLabel_24,
  MR_Word ll_backend__dupelim__ElimLabel2_34);

static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__process_clusters__253__1_2_p_0(
  MR_Word ll_backend__dupelim__Exemplar_22,
  MR_Word ll_backend__dupelim__ExLabel_25);

static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__find_clusters__216__1_2_p_0(
  MR_Word ll_backend__dupelim__Fixed_2,
  MR_Word ll_backend__dupelim__LambdaHeadVar__1_28);

static void MR_CALL 
ll_backend__dupelim____Compare____std_map_0_0(
  MR_Word * ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__HeadVar__2_2,
  MR_Word ll_backend__dupelim__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____std_map_0_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__HeadVar__2_2);

static void MR_CALL 
ll_backend__dupelim____Compare____cluster_0_0(
  MR_Word * ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__HeadVar__2_2,
  MR_Word ll_backend__dupelim__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____cluster_0_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_rval_3_p_0(
  MR_Word ll_backend__dupelim__RvalA_4,
  MR_Word ll_backend__dupelim__RvalB_5,
  MR_Word * ll_backend__dupelim__Rval_6);

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_lval_3_p_0(
  MR_Word ll_backend__dupelim__LvalA_4,
  MR_Word ll_backend__dupelim__LvalB_5,
  MR_Word * ll_backend__dupelim__Lval_6);

static void MR_CALL 
ll_backend__dupelim__most_specific_instr_3_p_0(
  MR_Word ll_backend__dupelim__InstrA_4,
  MR_Word ll_backend__dupelim__InstrB_5,
  MR_Word * ll_backend__dupelim__MaybeInstr_6);

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_instrs_3_p_0(
  MR_Word ll_backend__dupelim__InstrsA_4,
  MR_Word ll_backend__dupelim__InstrsB_5,
  MR_Word * ll_backend__dupelim__Instrs_6);

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_block_6_p_0(
  MR_Word ll_backend__dupelim__Instrs1_7,
  MR_Word ll_backend__dupelim__MaybeFallThrough1_8,
  MR_Word ll_backend__dupelim__Instrs2_9,
  MR_Word ll_backend__dupelim__MaybeFallThrough2_10,
  MR_Word * ll_backend__dupelim__Instrs_11,
  MR_Word * ll_backend__dupelim__MaybeFallThrough_12);

static void MR_CALL 
ll_backend__dupelim__standardize_rval_2_p_0(
  MR_Word ll_backend__dupelim__Rval0_3,
  MR_Word * ll_backend__dupelim__Rval_4);

static void MR_CALL 
ll_backend__dupelim__standardize_lval_2_p_0(
  MR_Word ll_backend__dupelim__Lval0_3,
  MR_Word * ll_backend__dupelim__Lval_4);

static void MR_CALL 
ll_backend__dupelim__standardize_instr_2_p_0(
  MR_Word ll_backend__dupelim__Instr0_3,
  MR_Word * ll_backend__dupelim__Instr_4);

static void MR_CALL 
ll_backend__dupelim__standardize_instrs_2_p_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word * ll_backend__dupelim__HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__dupelim__process_elim_labels_11_p_0_1(
  MR_Box ll_backend__dupelim__closure_arg);

static void MR_CALL 
ll_backend__dupelim__process_elim_labels_11_p_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__HeadVar__2_2,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_3,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_LabelSeq_4,
  MR_Word ll_backend__dupelim__BlockMap_5,
  MR_Word ll_backend__dupelim__Exemplar_6,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_7,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_ReplMap_8,
  MR_Word * ll_backend__dupelim__Instrs_9,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0_10,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_11);

static MR_bool MR_CALL 
ll_backend__dupelim__process_clusters_7_p_0_1(
  MR_Box ll_backend__dupelim__closure_arg);

static void MR_CALL 
ll_backend__dupelim__process_clusters_7_p_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_2,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_LabelSeq_3,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_BlockMap_5,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_6,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_ReplMap_7);

static MR_bool MR_CALL 
ll_backend__dupelim__find_clusters_4_p_0_1(
  MR_Box ll_backend__dupelim__closure_arg,
  MR_Box ll_backend__dupelim__wrapper_arg_1);

static void MR_CALL 
ll_backend__dupelim__find_clusters_4_p_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__Fixed_2,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_Clusters_0_3,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_Clusters_4);

static void MR_CALL 
ll_backend__dupelim__add_pragma_pref_labels_3_p_0(
  MR_Word ll_backend__dupelim__Instr_4,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_FoldFixed_0_22,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_FoldFixed_23);

static void MR_CALL 
ll_backend__dupelim__dupelim_build_maps_6_p_0_1(
  MR_Box ll_backend__dupelim__closure_arg,
  MR_Box ll_backend__dupelim__wrapper_arg_1,
  MR_Box ll_backend__dupelim__wrapper_arg_2,
  MR_Box * ll_backend__dupelim__wrapper_arg_3);

static void MR_CALL 
ll_backend__dupelim__dupelim_build_maps_6_p_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__BlockMap_2,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_StdMap_0_3,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_StdMap_4,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_Fixed_0_5,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_Fixed_6);


static /* final */ const MR_Box ll_backend__dupelim_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__dupelim_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__dupelim_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__dupelim_scalar_common_4[2][5];




static /* final */ const MR_Box ll_backend__dupelim_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0))
  },
};

static /* final */ const MR_Box ll_backend__dupelim_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__dupelim_scalar_common_1[0])),
    ((MR_Box) (&ll_backend__dupelim_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__dupelim_scalar_common_3[0])),
    ((MR_Box) (ll_backend__dupelim__dupelim_build_maps_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__dupelim_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__dupelim__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__dupelim__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0))
  },
};

static /* final */ const MR_Box ll_backend__dupelim_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__dupelim__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dupelim__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

static const MR_PseudoTypeInfo ll_backend__dupelim__ll_backend__dupelim__field_types_cluster_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_label_0
};

static const MR_DuFunctorDesc ll_backend__dupelim__ll_backend__dupelim__du_functor_desc_cluster_0_0 = {
  (MR_String) "cluster",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__dupelim__ll_backend__dupelim__field_types_cluster_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ll_backend__dupelim__ll_backend__dupelim__du_stag_ordered_cluster_0_0[1] = {
  &ll_backend__dupelim__ll_backend__dupelim__du_functor_desc_cluster_0_0
};

static const MR_DuPtagLayout ll_backend__dupelim__ll_backend__dupelim__du_ptag_ordered_cluster_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__dupelim__ll_backend__dupelim__du_stag_ordered_cluster_0_0
  }
};

static const MR_DuFunctorDescPtr ll_backend__dupelim__ll_backend__dupelim__du_name_ordered_cluster_0[1] = {
  &ll_backend__dupelim__ll_backend__dupelim__du_functor_desc_cluster_0_0
};

static const MR_Integer ll_backend__dupelim__ll_backend__dupelim__functor_number_map_cluster_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__dupelim__ll_backend__dupelim__type_ctor_info_cluster_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__dupelim____Unify____cluster_0_0_10001)),
  ((MR_Box) (ll_backend__dupelim____Compare____cluster_0_0_10001)),
  (MR_String) "ll_backend.dupelim",
  (MR_String) "cluster",
  {     ll_backend__dupelim__ll_backend__dupelim__du_name_ordered_cluster_0 },
  {     ll_backend__dupelim__ll_backend__dupelim__du_ptag_ordered_cluster_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__dupelim__ll_backend__dupelim__functor_number_map_cluster_0
};

static const MR_FA_TypeInfo_Struct1 ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instr_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__dupelim__tree234__ti_tree234_2list__ti_list_1ll_backend__llds__type_ctor_info_instr_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_instr_0,
    (MR_TypeInfo) &ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_label_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__dupelim__ll_backend__dupelim__type_ctor_info_std_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__dupelim____Unify____std_map_0_0_10001)),
  ((MR_Box) (ll_backend__dupelim____Compare____std_map_0_0_10001)),
  (MR_String) "ll_backend.dupelim",
  (MR_String) "std_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__dupelim__tree234__ti_tree234_2list__ti_list_1ll_backend__llds__type_ctor_info_instr_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____cluster_0_0_10001(
  MR_Box ll_backend__dupelim__wrapper_arg_1,
  MR_Box ll_backend__dupelim__wrapper_arg_2)
{
  {
    MR_bool ll_backend__dupelim__succeeded;

    {
      ll_backend__dupelim__succeeded = ll_backend__dupelim____Unify____cluster_0_0(((MR_Word) ll_backend__dupelim__wrapper_arg_1), ((MR_Word) ll_backend__dupelim__wrapper_arg_2));
    }
    return ll_backend__dupelim__succeeded;
  }
}

static void MR_CALL 
ll_backend__dupelim____Compare____cluster_0_0_10001(
  MR_Box * ll_backend__dupelim__wrapper_arg_1,
  MR_Box ll_backend__dupelim__wrapper_arg_2,
  MR_Box ll_backend__dupelim__wrapper_arg_3)
{
  {
    MR_Word ll_backend__dupelim__conv0_HeadVar__1_1;

    {
      ll_backend__dupelim____Compare____cluster_0_0(&ll_backend__dupelim__conv0_HeadVar__1_1, ((MR_Word) ll_backend__dupelim__wrapper_arg_2), ((MR_Word) ll_backend__dupelim__wrapper_arg_3));
    }
    *ll_backend__dupelim__wrapper_arg_1 = ((MR_Box) (ll_backend__dupelim__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____std_map_0_0_10001(
  MR_Box ll_backend__dupelim__wrapper_arg_1,
  MR_Box ll_backend__dupelim__wrapper_arg_2)
{
  {
    MR_bool ll_backend__dupelim__succeeded;

    {
      ll_backend__dupelim__succeeded = ll_backend__dupelim____Unify____std_map_0_0(((MR_Word) ll_backend__dupelim__wrapper_arg_1), ((MR_Word) ll_backend__dupelim__wrapper_arg_2));
    }
    return ll_backend__dupelim__succeeded;
  }
}

static void MR_CALL 
ll_backend__dupelim____Compare____std_map_0_0_10001(
  MR_Box * ll_backend__dupelim__wrapper_arg_1,
  MR_Box ll_backend__dupelim__wrapper_arg_2,
  MR_Box ll_backend__dupelim__wrapper_arg_3)
{
  {
    MR_Word ll_backend__dupelim__conv0_HeadVar__1_1;

    {
      ll_backend__dupelim____Compare____std_map_0_0(&ll_backend__dupelim__conv0_HeadVar__1_1, ((MR_Word) ll_backend__dupelim__wrapper_arg_2), ((MR_Word) ll_backend__dupelim__wrapper_arg_3));
    }
    *ll_backend__dupelim__wrapper_arg_1 = ((MR_Box) (ll_backend__dupelim__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__285__1_2_p_0(
  MR_Word ll_backend__dupelim__ElimLabel_24,
  MR_Word ll_backend__dupelim__ElimLabel2_34)
{
  {
    MR_bool ll_backend__dupelim__succeeded;

    {
      ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__ElimLabel_24, ll_backend__dupelim__ElimLabel2_34);
    }
    return ll_backend__dupelim__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__process_clusters__253__1_2_p_0(
  MR_Word ll_backend__dupelim__Exemplar_22,
  MR_Word ll_backend__dupelim__ExLabel_25)
{
  {
    MR_bool ll_backend__dupelim__succeeded;

    {
      ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__Exemplar_22, ll_backend__dupelim__ExLabel_25);
    }
    return ll_backend__dupelim__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__find_clusters__216__1_2_p_0(
  MR_Word ll_backend__dupelim__Fixed_2,
  MR_Word ll_backend__dupelim__LambdaHeadVar__1_28)
{
  {
    MR_bool ll_backend__dupelim__succeeded;

    {
      ll_backend__dupelim__succeeded = mercury__set__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__dupelim__LambdaHeadVar__1_28)), ll_backend__dupelim__Fixed_2);
    }
    return ll_backend__dupelim__succeeded;
  }
}

static void MR_CALL 
ll_backend__dupelim____Compare____std_map_0_0(
  MR_Word * ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__HeadVar__2_2,
  MR_Word ll_backend__dupelim__HeadVar__3_3)
{
  {
    MR_bool ll_backend__dupelim__succeeded;
    MR_Word ll_backend__dupelim__Cast_HeadVar1_4 = ll_backend__dupelim__HeadVar__2_2;
    MR_Word ll_backend__dupelim__Cast_HeadVar2_5 = ll_backend__dupelim__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__dupelim_scalar_common_2[0], ll_backend__dupelim__HeadVar__1_1, ((MR_Box) (ll_backend__dupelim__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__dupelim__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____std_map_0_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__HeadVar__2_2)
{
  {
    MR_bool ll_backend__dupelim__succeeded;
    MR_Word ll_backend__dupelim__Cast_HeadVar1_3 = ll_backend__dupelim__HeadVar__1_1;
    MR_Word ll_backend__dupelim__Cast_HeadVar2_4 = ll_backend__dupelim__HeadVar__2_2;

    {
      ll_backend__dupelim__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__dupelim_scalar_common_2[0], ((MR_Box) (ll_backend__dupelim__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__dupelim__Cast_HeadVar2_4)));
    }
    return ll_backend__dupelim__succeeded;
  }
}

static void MR_CALL 
ll_backend__dupelim____Compare____cluster_0_0(
  MR_Word * ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__HeadVar__2_2,
  MR_Word ll_backend__dupelim__HeadVar__3_3)
{
  {
    MR_bool ll_backend__dupelim__succeeded;
    MR_Integer ll_backend__dupelim__CastX_9 = (MR_Integer) ll_backend__dupelim__HeadVar__2_2;
    MR_Integer ll_backend__dupelim__CastY_10 = (MR_Integer) ll_backend__dupelim__HeadVar__3_3;

    ll_backend__dupelim__succeeded = (ll_backend__dupelim__CastX_9 == ll_backend__dupelim__CastY_10);
    if (ll_backend__dupelim__succeeded)
      *ll_backend__dupelim__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__dupelim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__dupelim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__dupelim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__dupelim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__dupelim__V_8_8;

        {
          ll_backend__llds____Compare____label_0_0(&ll_backend__dupelim__V_8_8, ll_backend__dupelim__V_4_4, ll_backend__dupelim__V_6_6);
        }
        ll_backend__dupelim__succeeded = (ll_backend__dupelim__V_8_8 == (MR_Integer) 0);
        ll_backend__dupelim__succeeded = !(ll_backend__dupelim__succeeded);
        if (ll_backend__dupelim__succeeded)
          *ll_backend__dupelim__HeadVar__1_1 = ll_backend__dupelim__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__dupelim_scalar_common_1[1], ll_backend__dupelim__HeadVar__1_1, ((MR_Box) (ll_backend__dupelim__V_5_5)), ((MR_Box) (ll_backend__dupelim__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim____Unify____cluster_0_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__HeadVar__2_2)
{
  {
    MR_bool ll_backend__dupelim__succeeded;
    MR_Integer ll_backend__dupelim__CastX_7 = (MR_Integer) ll_backend__dupelim__HeadVar__1_1;
    MR_Integer ll_backend__dupelim__CastY_8 = (MR_Integer) ll_backend__dupelim__HeadVar__2_2;

    ll_backend__dupelim__succeeded = (ll_backend__dupelim__CastX_7 == ll_backend__dupelim__CastY_8);
    if (ll_backend__dupelim__succeeded)
      ll_backend__dupelim__succeeded = MR_TRUE;
    else
      {
        MR_Word ll_backend__dupelim__TypeInfo_10_10;
        MR_Word ll_backend__dupelim__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__dupelim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__dupelim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__dupelim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__2_2, (MR_Integer) 1)));

        {
          ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__V_3_3, ll_backend__dupelim__V_5_5);
        }
        if (ll_backend__dupelim__succeeded)
          {
            ll_backend__dupelim__TypeInfo_10_10 = (MR_Word) &ll_backend__dupelim_scalar_common_1[1];
            {
              ll_backend__dupelim__succeeded = mercury__builtin__unify_2_p_0(ll_backend__dupelim__TypeInfo_10_10, ((MR_Box) (ll_backend__dupelim__V_4_4)), ((MR_Box) (ll_backend__dupelim__V_6_6)));
            }
          }
      }
    return ll_backend__dupelim__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_rval_3_p_0(
  MR_Word ll_backend__dupelim__RvalA_4,
  MR_Word ll_backend__dupelim__RvalB_5,
  MR_Word * ll_backend__dupelim__Rval_6)
{
  {
    MR_bool ll_backend__dupelim__succeeded;

    switch (MR_tag((MR_Word) ll_backend__dupelim__RvalA_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__dupelim__LvalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__RvalA_4, (MR_Integer) 0)));
          MR_Word ll_backend__dupelim__LvalB_8;
          MR_Word ll_backend__dupelim__Lval_9;

          ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__RvalB_5)) == (MR_mktag((MR_Integer) 0)));
          if (ll_backend__dupelim__succeeded)
            {
              ll_backend__dupelim__LvalB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__RvalB_5, (MR_Integer) 0)));
              {
                ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_7, ll_backend__dupelim__LvalB_8, &ll_backend__dupelim__Lval_9);
              }
              if (ll_backend__dupelim__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *ll_backend__dupelim__Rval_6 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__dupelim__Lval_9));
                  }
                  ll_backend__dupelim__succeeded = MR_TRUE;
                }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.most_specific_rval\'/3", (MR_String) "var");
          }
          ll_backend__dupelim__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          {
            ll_backend__dupelim__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__dupelim__RvalB_5, ll_backend__dupelim__RvalA_4);
          }
          if (ll_backend__dupelim__succeeded)
            {
              *ll_backend__dupelim__Rval_6 = ll_backend__dupelim__RvalA_4;
              ll_backend__dupelim__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 4:
            {
              {
                ll_backend__dupelim__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__dupelim__RvalB_5, ll_backend__dupelim__RvalA_4);
              }
              if (ll_backend__dupelim__succeeded)
                {
                  *ll_backend__dupelim__Rval_6 = ll_backend__dupelim__RvalA_4;
                  ll_backend__dupelim__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__dupelim__Unop_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__RvalAL_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__RvalBL_18;
              MR_Word ll_backend__dupelim__RvalL_19;
              MR_Word ll_backend__dupelim__V_30_30;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__RvalB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__RvalBL_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 2)));
                  ll_backend__dupelim__succeeded = (ll_backend__dupelim__Unop_16 == ll_backend__dupelim__V_30_30);
                  if (ll_backend__dupelim__succeeded)
                    {
                      {
                        ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalAL_17, ll_backend__dupelim__RvalBL_18, &ll_backend__dupelim__RvalL_19);
                      }
                      if (ll_backend__dupelim__succeeded)
                        {
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            *ll_backend__dupelim__Rval_6 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Unop_16));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__RvalL_19));
                          }
                          ll_backend__dupelim__succeeded = MR_TRUE;
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__dupelim__Binnop_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__RvalAR_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__RvalBR_22;
              MR_Word ll_backend__dupelim__RvalR_23;
              MR_Word ll_backend__dupelim__RvalAL_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__RvalBL_28;
              MR_Word ll_backend__dupelim__RvalL_29;
              MR_Word ll_backend__dupelim__V_31_31;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__RvalB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__RvalBL_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 2)));
                  ll_backend__dupelim__RvalBR_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 3)));
                  {
                    ll_backend__dupelim__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(ll_backend__dupelim__Binnop_20, ll_backend__dupelim__V_31_31);
                  }
                  if (ll_backend__dupelim__succeeded)
                    {
                      {
                        ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalAL_27, ll_backend__dupelim__RvalBL_28, &ll_backend__dupelim__RvalL_29);
                      }
                      if (ll_backend__dupelim__succeeded)
                        {
                          {
                            ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalAR_21, ll_backend__dupelim__RvalBR_22, &ll_backend__dupelim__RvalR_23);
                          }
                          if (ll_backend__dupelim__succeeded)
                            {
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                *ll_backend__dupelim__Rval_6 = base;
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Binnop_20));
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__RvalL_29));
                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__RvalR_23));
                              }
                              ll_backend__dupelim__succeeded = MR_TRUE;
                            }
                        }
                    }
                }
            }
            break;
        }
        break;
    }
    return ll_backend__dupelim__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_lval_3_p_0(
  MR_Word ll_backend__dupelim__LvalA_4,
  MR_Word ll_backend__dupelim__LvalB_5,
  MR_Word * ll_backend__dupelim__Lval_6)
{
  {
    MR_bool ll_backend__dupelim__succeeded;

    switch (MR_tag((MR_Word) ll_backend__dupelim__LvalA_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__dupelim__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__dupelim__LvalA_4, ll_backend__dupelim__LvalB_5);
          }
          if (ll_backend__dupelim__succeeded)
            {
              *ll_backend__dupelim__Lval_6 = ll_backend__dupelim__LvalA_4;
              ll_backend__dupelim__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            ll_backend__dupelim__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__dupelim__LvalA_4, ll_backend__dupelim__LvalB_5);
          }
          if (ll_backend__dupelim__succeeded)
            {
              *ll_backend__dupelim__Lval_6 = ll_backend__dupelim__LvalA_4;
              ll_backend__dupelim__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalA_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
            {
              {
                ll_backend__dupelim__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__dupelim__LvalA_4, ll_backend__dupelim__LvalB_5);
              }
              if (ll_backend__dupelim__succeeded)
                {
                  *ll_backend__dupelim__Lval_6 = ll_backend__dupelim__LvalA_4;
                  ll_backend__dupelim__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__dupelim__MaybeTagA_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Addr_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__FieldNum_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalA_4, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__MaybeTagB_26;
              MR_Word ll_backend__dupelim__MaybeTag_27;
              MR_Word ll_backend__dupelim__V_32_32;
              MR_Word ll_backend__dupelim__V_33_33;
              MR_Word ll_backend__dupelim__TypeInfo_37_37;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__LvalB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalB_5, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__MaybeTagB_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalB_5, (MR_Integer) 2)));
                  ll_backend__dupelim__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalB_5, (MR_Integer) 3)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__dupelim__Addr_24, ll_backend__dupelim__V_32_32);
                  }
                  if (ll_backend__dupelim__succeeded)
                    {
                      {
                        ll_backend__dupelim__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__dupelim__FieldNum_25, ll_backend__dupelim__V_33_33);
                      }
                      if (ll_backend__dupelim__succeeded)
                        {
                          ll_backend__dupelim__TypeInfo_37_37 = (MR_Word) &ll_backend__dupelim_scalar_common_1[3];
                          {
                            ll_backend__dupelim__succeeded = mercury__builtin__unify_2_p_0(ll_backend__dupelim__TypeInfo_37_37, ((MR_Box) (ll_backend__dupelim__MaybeTagA_23)), ((MR_Box) (ll_backend__dupelim__MaybeTagB_26)));
                          }
                          if (ll_backend__dupelim__succeeded)
                            ll_backend__dupelim__MaybeTag_27 = ll_backend__dupelim__MaybeTagA_23;
                          else
                            ll_backend__dupelim__MaybeTag_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            *ll_backend__dupelim__Lval_6 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__MaybeTag_27));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Addr_24));
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__FieldNum_25));
                          }
                          ll_backend__dupelim__succeeded = MR_TRUE;
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.most_specific_lval\'/3", (MR_String) "lvar");
              }
              ll_backend__dupelim__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return ll_backend__dupelim__succeeded;
  }
}

static void MR_CALL 
ll_backend__dupelim__most_specific_instr_3_p_0(
  MR_Word ll_backend__dupelim__InstrA_4,
  MR_Word ll_backend__dupelim__InstrB_5,
  MR_Word * ll_backend__dupelim__MaybeInstr_6)
{
  {
    MR_bool ll_backend__dupelim__succeeded;

    switch (MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__dupelim__succeeded = ll_backend__llds____Unify____instr_0_0(ll_backend__dupelim__InstrA_4, ll_backend__dupelim__InstrB_5);
          }
          if (ll_backend__dupelim__succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__dupelim__MaybeInstr_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__InstrA_4));
            }
          else
            *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          {
            ll_backend__dupelim__succeeded = ll_backend__llds____Unify____instr_0_0(ll_backend__dupelim__InstrA_4, ll_backend__dupelim__InstrB_5);
          }
          if (ll_backend__dupelim__succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__dupelim__MaybeInstr_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__InstrA_4));
            }
          else
            *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
          case (MR_Integer) 27:
          case (MR_Integer) 28:
          case (MR_Integer) 29:
          case (MR_Integer) 30:
            {
              {
                ll_backend__dupelim__succeeded = ll_backend__llds____Unify____instr_0_0(ll_backend__dupelim__InstrA_4, ll_backend__dupelim__InstrB_5);
              }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__dupelim__MaybeInstr_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__InstrA_4));
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__dupelim__LvalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__RvalA_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__Lval_11;
              MR_Word ll_backend__dupelim__Rval_12;
              MR_Word ll_backend__dupelim__LvalB_9;
              MR_Word ll_backend__dupelim__RvalB_10;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__LvalB_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__RvalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_7, ll_backend__dupelim__LvalB_9, &ll_backend__dupelim__Lval_11);
                  }
                  if (ll_backend__dupelim__succeeded)
                    {
                      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_8, ll_backend__dupelim__RvalB_10, &ll_backend__dupelim__Rval_12);
                    }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_125_125;

                  {
                    ll_backend__dupelim__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_125_125, 1) = ((MR_Box) (ll_backend__dupelim__Lval_11));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_125_125, 2) = ((MR_Box) (ll_backend__dupelim__Rval_12));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_125_125));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__dupelim__LvalA_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__RvalA_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__Lval_130;
              MR_Word ll_backend__dupelim__Rval_131;
              MR_Word ll_backend__dupelim__LvalB_126;
              MR_Word ll_backend__dupelim__RvalB_127;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__LvalB_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__RvalB_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_132, ll_backend__dupelim__LvalB_126, &ll_backend__dupelim__Lval_130);
                  }
                  if (ll_backend__dupelim__succeeded)
                    {
                      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_133, ll_backend__dupelim__RvalB_127, &ll_backend__dupelim__Rval_131);
                    }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_124_124;

                  {
                    ll_backend__dupelim__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_124_124, 1) = ((MR_Box) (ll_backend__dupelim__Lval_130));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_124_124, 2) = ((MR_Box) (ll_backend__dupelim__Rval_131));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_124_124));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__dupelim__CodeAddrA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__RvalA_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval_140;
              MR_Word ll_backend__dupelim__CodeAddrB_14;
              MR_Word ll_backend__dupelim__RvalB_138;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__RvalB_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__CodeAddrB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_141, ll_backend__dupelim__RvalB_138, &ll_backend__dupelim__Rval_140);
                  }
                  if (ll_backend__dupelim__succeeded)
                    {
                      ll_backend__dupelim__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__dupelim__CodeAddrA_13, ll_backend__dupelim__CodeAddrB_14);
                    }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_123_123;

                  {
                    ll_backend__dupelim__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_123_123, 1) = ((MR_Box) (ll_backend__dupelim__Rval_140));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_123_123, 2) = ((MR_Box) (ll_backend__dupelim__CodeAddrA_13));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_123_123));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__dupelim__MaybeTag_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__MaybeOffset_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__Msg_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 5)));
              MR_Word ll_backend__dupelim__MayUseAtomic_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 6)));
              MR_Word ll_backend__dupelim__MaybeRegionRvalA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 7)));
              MR_Word ll_backend__dupelim__MaybeReuseA_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 8)));
              MR_Word ll_backend__dupelim__LvalA_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__RvalA_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 4)));
              MR_Word ll_backend__dupelim__MaybeRegionRval_26;
              MR_Word ll_backend__dupelim__MaybeReuse_36;
              MR_Word ll_backend__dupelim__Lval_148;
              MR_Word ll_backend__dupelim__Rval_149;
              MR_Word ll_backend__dupelim__TypeInfo_250_250;
              MR_Word ll_backend__dupelim__TypeInfo_251_251;
              MR_Word ll_backend__dupelim__TypeInfo_252_252;
              MR_Word ll_backend__dupelim__MaybeRegionRvalB_21;
              MR_Word ll_backend__dupelim__MaybeReuseB_22;
              MR_Word ll_backend__dupelim__LvalB_144;
              MR_Word ll_backend__dupelim__RvalB_145;
              MR_Word ll_backend__dupelim__V_232_232;
              MR_Word ll_backend__dupelim__V_233_233;
              MR_Word ll_backend__dupelim__V_234_234;
              MR_Word ll_backend__dupelim__V_235_235;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__LvalB_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  ll_backend__dupelim__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 3)));
                  ll_backend__dupelim__RvalB_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 4)));
                  ll_backend__dupelim__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 5)));
                  ll_backend__dupelim__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 6)));
                  ll_backend__dupelim__MaybeRegionRvalB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 7)));
                  ll_backend__dupelim__MaybeReuseB_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 8)));
                  ll_backend__dupelim__TypeInfo_250_250 = (MR_Word) &ll_backend__dupelim_scalar_common_1[3];
                  {
                    ll_backend__dupelim__succeeded = mercury__builtin__unify_2_p_0(ll_backend__dupelim__TypeInfo_250_250, ((MR_Box) (ll_backend__dupelim__MaybeTag_15)), ((MR_Box) (ll_backend__dupelim__V_232_232)));
                  }
                  if (ll_backend__dupelim__succeeded)
                    {
                      ll_backend__dupelim__TypeInfo_251_251 = (MR_Word) &ll_backend__dupelim_scalar_common_1[3];
                      {
                        ll_backend__dupelim__succeeded = mercury__builtin__unify_2_p_0(ll_backend__dupelim__TypeInfo_251_251, ((MR_Box) (ll_backend__dupelim__MaybeOffset_16)), ((MR_Box) (ll_backend__dupelim__V_233_233)));
                      }
                      if (ll_backend__dupelim__succeeded)
                        {
                          ll_backend__dupelim__TypeInfo_252_252 = (MR_Word) &ll_backend__dupelim_scalar_common_1[4];
                          {
                            ll_backend__dupelim__succeeded = mercury__builtin__unify_2_p_0(ll_backend__dupelim__TypeInfo_252_252, ((MR_Box) (ll_backend__dupelim__Msg_17)), ((MR_Box) (ll_backend__dupelim__V_234_234)));
                          }
                          if (ll_backend__dupelim__succeeded)
                            {
                              ll_backend__dupelim__succeeded = (ll_backend__dupelim__MayUseAtomic_18 == ll_backend__dupelim__V_235_235);
                              if (ll_backend__dupelim__succeeded)
                                {
                                  {
                                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_150, ll_backend__dupelim__LvalB_144, &ll_backend__dupelim__Lval_148);
                                  }
                                  if (ll_backend__dupelim__succeeded)
                                    {
                                      {
                                        ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_151, ll_backend__dupelim__RvalB_145, &ll_backend__dupelim__Rval_149);
                                      }
                                      if (ll_backend__dupelim__succeeded)
                                        {
                                          if ((ll_backend__dupelim__MaybeRegionRvalA_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                            {
                                              ll_backend__dupelim__succeeded = (ll_backend__dupelim__MaybeRegionRvalB_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                              if (ll_backend__dupelim__succeeded)
                                                {
                                                  ll_backend__dupelim__MaybeRegionRval_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                  ll_backend__dupelim__succeeded = MR_TRUE;
                                                }
                                            }
                                          else
                                            {
                                              MR_Word ll_backend__dupelim__RegionRvalA_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeRegionRvalA_19, (MR_Integer) 0)));
                                              MR_Word ll_backend__dupelim__RegionRvalB_24;
                                              MR_Word ll_backend__dupelim__RegionRval_25;

                                              ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__MaybeRegionRvalB_21)) == (MR_mktag((MR_Integer) 1)));
                                              if (ll_backend__dupelim__succeeded)
                                                {
                                                  ll_backend__dupelim__RegionRvalB_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeRegionRvalB_21, (MR_Integer) 0)));
                                                  {
                                                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RegionRvalA_23, ll_backend__dupelim__RegionRvalB_24, &ll_backend__dupelim__RegionRval_25);
                                                  }
                                                  if (ll_backend__dupelim__succeeded)
                                                    {
                                                      {
                                                        ll_backend__dupelim__MaybeRegionRval_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                        MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeRegionRval_26, 0) = ((MR_Box) (ll_backend__dupelim__RegionRval_25));
                                                      }
                                                      ll_backend__dupelim__succeeded = MR_TRUE;
                                                    }
                                                }
                                            }
                                          if (ll_backend__dupelim__succeeded)
                                            {
                                              if ((ll_backend__dupelim__MaybeReuseA_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                {
                                                  ll_backend__dupelim__succeeded = (ll_backend__dupelim__MaybeReuseB_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                  if (ll_backend__dupelim__succeeded)
                                                    {
                                                      ll_backend__dupelim__MaybeReuse_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                      ll_backend__dupelim__succeeded = MR_TRUE;
                                                    }
                                                }
                                              else
                                                {
                                                  MR_Word ll_backend__dupelim__ReuseRvalA_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuseA_20, (MR_Integer) 0)));
                                                  MR_Word ll_backend__dupelim__MaybeFlagLvalA_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuseA_20, (MR_Integer) 1)));
                                                  MR_Word ll_backend__dupelim__ReuseRvalB_29;
                                                  MR_Word ll_backend__dupelim__MaybeFlagLvalB_30;
                                                  MR_Word ll_backend__dupelim__ReuseRval_31;
                                                  MR_Word ll_backend__dupelim__MaybeFlagLval_35;

                                                  ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__MaybeReuseB_22)) == (MR_mktag((MR_Integer) 1)));
                                                  if (ll_backend__dupelim__succeeded)
                                                    {
                                                      ll_backend__dupelim__ReuseRvalB_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuseB_22, (MR_Integer) 0)));
                                                      ll_backend__dupelim__MaybeFlagLvalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuseB_22, (MR_Integer) 1)));
                                                      {
                                                        ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__ReuseRvalA_27, ll_backend__dupelim__ReuseRvalB_29, &ll_backend__dupelim__ReuseRval_31);
                                                      }
                                                      if (ll_backend__dupelim__succeeded)
                                                        {
                                                          if ((ll_backend__dupelim__MaybeFlagLvalA_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                                            {
                                                              ll_backend__dupelim__succeeded = (ll_backend__dupelim__MaybeFlagLvalB_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                              if (ll_backend__dupelim__succeeded)
                                                                {
                                                                  ll_backend__dupelim__MaybeFlagLval_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                                                  ll_backend__dupelim__succeeded = MR_TRUE;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              MR_Word ll_backend__dupelim__FlagLvalA_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFlagLvalA_28, (MR_Integer) 0)));
                                                              MR_Word ll_backend__dupelim__FlagLvalB_33;
                                                              MR_Word ll_backend__dupelim__FlagLval_34;

                                                              ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__MaybeFlagLvalB_30)) == (MR_mktag((MR_Integer) 1)));
                                                              if (ll_backend__dupelim__succeeded)
                                                                {
                                                                  ll_backend__dupelim__FlagLvalB_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFlagLvalB_30, (MR_Integer) 0)));
                                                                  {
                                                                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__FlagLvalA_32, ll_backend__dupelim__FlagLvalB_33, &ll_backend__dupelim__FlagLval_34);
                                                                  }
                                                                  if (ll_backend__dupelim__succeeded)
                                                                    {
                                                                      {
                                                                        ll_backend__dupelim__MaybeFlagLval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                                                        MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFlagLval_35, 0) = ((MR_Box) (ll_backend__dupelim__FlagLval_34));
                                                                      }
                                                                      ll_backend__dupelim__succeeded = MR_TRUE;
                                                                    }
                                                                }
                                                            }
                                                          if (ll_backend__dupelim__succeeded)
                                                            {
                                                              {
                                                                ll_backend__dupelim__MaybeReuse_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                                                MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuse_36, 0) = ((MR_Box) (ll_backend__dupelim__ReuseRval_31));
                                                                MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuse_36, 1) = ((MR_Box) (ll_backend__dupelim__MaybeFlagLval_35));
                                                              }
                                                              ll_backend__dupelim__succeeded = MR_TRUE;
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
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_122_122;

                  {
                    ll_backend__dupelim__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 1) = ((MR_Box) (ll_backend__dupelim__Lval_148));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 2) = ((MR_Box) (ll_backend__dupelim__MaybeTag_15));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 3) = ((MR_Box) (ll_backend__dupelim__MaybeOffset_16));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 4) = ((MR_Box) (ll_backend__dupelim__Rval_149));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 5) = ((MR_Box) (ll_backend__dupelim__Msg_17));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 6) = ((MR_Box) (ll_backend__dupelim__MayUseAtomic_18));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 7) = ((MR_Box) (ll_backend__dupelim__MaybeRegionRval_26));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 8) = ((MR_Box) (ll_backend__dupelim__MaybeReuse_36));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_122_122));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__dupelim__LvalA_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval_158;
              MR_Word ll_backend__dupelim__LvalB_156;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 13)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__LvalB_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_159, ll_backend__dupelim__LvalB_156, &ll_backend__dupelim__Lval_158);
                  }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_121_121;

                  {
                    ll_backend__dupelim__V_121_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_121_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_121_121, 1) = ((MR_Box) (ll_backend__dupelim__Lval_158));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_121_121));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__dupelim__RvalA_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval_164;
              MR_Word ll_backend__dupelim__RvalB_162;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 14)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__RvalB_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_165, ll_backend__dupelim__RvalB_162, &ll_backend__dupelim__Rval_164);
                  }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_120_120;

                  {
                    ll_backend__dupelim__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_120_120, 1) = ((MR_Box) (ll_backend__dupelim__Rval_164));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_120_120));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__dupelim__RvalA_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval_170;
              MR_Word ll_backend__dupelim__RvalB_168;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 15)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__RvalB_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_171, ll_backend__dupelim__RvalB_168, &ll_backend__dupelim__Rval_170);
                  }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_119_119;

                  {
                    ll_backend__dupelim__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_119_119, 1) = ((MR_Box) (ll_backend__dupelim__Rval_170));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_119_119));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ll_backend__dupelim__StackId_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__EmbeddedStackFrame_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__V_236_236;
              MR_Word ll_backend__dupelim__V_237_237;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 16)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  ll_backend__dupelim__succeeded = (ll_backend__dupelim__StackId_37 == ll_backend__dupelim__V_236_236);
                  if (ll_backend__dupelim__succeeded)
                    {
                      ll_backend__dupelim__succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(ll_backend__dupelim__EmbeddedStackFrame_38, ll_backend__dupelim__V_237_237);
                    }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__dupelim__MaybeInstr_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__InstrA_4));
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__dupelim__FillOp_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__IdRvalA_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__NumLvalA_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 4)));
              MR_Word ll_backend__dupelim__AddrLvalA_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 5)));
              MR_Word ll_backend__dupelim__EmbeddedStackFrame_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__IdRval_46;
              MR_Word ll_backend__dupelim__NumLval_47;
              MR_Word ll_backend__dupelim__AddrLval_48;
              MR_Word ll_backend__dupelim__IdRvalB_43;
              MR_Word ll_backend__dupelim__NumLvalB_44;
              MR_Word ll_backend__dupelim__AddrLvalB_45;
              MR_Word ll_backend__dupelim__V_238_238;
              MR_Word ll_backend__dupelim__V_239_239;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 17)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  ll_backend__dupelim__IdRvalB_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 3)));
                  ll_backend__dupelim__NumLvalB_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 4)));
                  ll_backend__dupelim__AddrLvalB_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 5)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__llds____Unify____region_fill_frame_op_0_0(ll_backend__dupelim__FillOp_39, ll_backend__dupelim__V_238_238);
                  }
                  if (ll_backend__dupelim__succeeded)
                    {
                      {
                        ll_backend__dupelim__succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(ll_backend__dupelim__EmbeddedStackFrame_174, ll_backend__dupelim__V_239_239);
                      }
                      if (ll_backend__dupelim__succeeded)
                        {
                          {
                            ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__IdRvalA_40, ll_backend__dupelim__IdRvalB_43, &ll_backend__dupelim__IdRval_46);
                          }
                          if (ll_backend__dupelim__succeeded)
                            {
                              {
                                ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__NumLvalA_41, ll_backend__dupelim__NumLvalB_44, &ll_backend__dupelim__NumLval_47);
                              }
                              if (ll_backend__dupelim__succeeded)
                                {
                                  ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__AddrLvalA_42, ll_backend__dupelim__AddrLvalB_45, &ll_backend__dupelim__AddrLval_48);
                                }
                            }
                        }
                    }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_117_117;

                  {
                    ll_backend__dupelim__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_117_117, 1) = ((MR_Box) (ll_backend__dupelim__FillOp_39));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_117_117, 2) = ((MR_Box) (ll_backend__dupelim__EmbeddedStackFrame_174));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_117_117, 3) = ((MR_Box) (ll_backend__dupelim__IdRval_46));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_117_117, 4) = ((MR_Box) (ll_backend__dupelim__NumLval_47));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_117_117, 5) = ((MR_Box) (ll_backend__dupelim__AddrLval_48));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_117_117));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__dupelim__SetOp_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__ValueRvalA_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__EmbeddedStackFrame_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__ValueRval_52;
              MR_Word ll_backend__dupelim__ValueRvalB_51;
              MR_Word ll_backend__dupelim__V_240_240;
              MR_Word ll_backend__dupelim__V_241_241;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 18)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  ll_backend__dupelim__ValueRvalB_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 3)));
                  ll_backend__dupelim__succeeded = (ll_backend__dupelim__SetOp_49 == ll_backend__dupelim__V_240_240);
                  if (ll_backend__dupelim__succeeded)
                    {
                      {
                        ll_backend__dupelim__succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(ll_backend__dupelim__EmbeddedStackFrame_175, ll_backend__dupelim__V_241_241);
                      }
                      if (ll_backend__dupelim__succeeded)
                        {
                          ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__ValueRvalA_50, ll_backend__dupelim__ValueRvalB_51, &ll_backend__dupelim__ValueRval_52);
                        }
                    }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_116_116;

                  {
                    ll_backend__dupelim__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_116_116, 1) = ((MR_Box) (ll_backend__dupelim__SetOp_49));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_116_116, 2) = ((MR_Box) (ll_backend__dupelim__EmbeddedStackFrame_175));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_116_116, 3) = ((MR_Box) (ll_backend__dupelim__ValueRval_52));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_116_116));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word ll_backend__dupelim__UseOp_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__EmbeddedStackFrame_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__V_242_242;
              MR_Word ll_backend__dupelim__V_243_243;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 19)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__llds____Unify____region_use_frame_op_0_0(ll_backend__dupelim__UseOp_53, ll_backend__dupelim__V_242_242);
                  }
                  if (ll_backend__dupelim__succeeded)
                    {
                      ll_backend__dupelim__succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(ll_backend__dupelim__EmbeddedStackFrame_176, ll_backend__dupelim__V_243_243);
                    }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__dupelim__MaybeInstr_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__InstrA_4));
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__dupelim__LvalA_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval_179;
              MR_Word ll_backend__dupelim__LvalB_177;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 20)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__LvalB_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_180, ll_backend__dupelim__LvalB_177, &ll_backend__dupelim__Lval_179);
                  }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_114_114;

                  {
                    ll_backend__dupelim__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_114_114, 1) = ((MR_Box) (ll_backend__dupelim__Lval_179));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_114_114));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__dupelim__Reason_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__RvalA_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval_185;
              MR_Word ll_backend__dupelim__RvalB_183;
              MR_Word ll_backend__dupelim__V_244_244;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 21)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__RvalB_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  ll_backend__dupelim__succeeded = (ll_backend__dupelim__Reason_54 == ll_backend__dupelim__V_244_244);
                  if (ll_backend__dupelim__succeeded)
                    {
                      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_186, ll_backend__dupelim__RvalB_183, &ll_backend__dupelim__Rval_185);
                    }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_113_113;

                  {
                    ll_backend__dupelim__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_113_113, 1) = ((MR_Box) (ll_backend__dupelim__Rval_185));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_113_113, 2) = ((MR_Box) (ll_backend__dupelim__Reason_54));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_113_113));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__dupelim__LvalA_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval_191;
              MR_Word ll_backend__dupelim__LvalB_189;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 22)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__LvalB_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_192, ll_backend__dupelim__LvalB_189, &ll_backend__dupelim__Lval_191);
                  }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_112_112;

                  {
                    ll_backend__dupelim__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_112_112, 1) = ((MR_Box) (ll_backend__dupelim__Lval_191));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_112_112));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__dupelim__RvalA_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval_197;
              MR_Word ll_backend__dupelim__RvalB_195;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 23)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__RvalB_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_198, ll_backend__dupelim__RvalB_195, &ll_backend__dupelim__Rval_197);
                  }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_111_111;

                  {
                    ll_backend__dupelim__V_111_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_111_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_111_111, 1) = ((MR_Box) (ll_backend__dupelim__Rval_197));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_111_111));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Integer ll_backend__dupelim__NumSlots_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__LvalA_204 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__Lval_203;
              MR_Word ll_backend__dupelim__LvalB_201;
              MR_Integer ll_backend__dupelim__V_245_245;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 31)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__V_245_245 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__LvalB_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  ll_backend__dupelim__succeeded = (ll_backend__dupelim__NumSlots_55 == ll_backend__dupelim__V_245_245);
                  if (ll_backend__dupelim__succeeded)
                    {
                      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_204, ll_backend__dupelim__LvalB_201, &ll_backend__dupelim__Lval_203);
                    }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_110_110;

                  {
                    ll_backend__dupelim__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_110_110, 1) = ((MR_Box) (ll_backend__dupelim__NumSlots_55));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_110_110, 2) = ((MR_Box) (ll_backend__dupelim__Lval_203));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_110_110));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__dupelim__Label_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__LvalA_213 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__RvalA_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval_211;
              MR_Word ll_backend__dupelim__Rval_212;
              MR_Word ll_backend__dupelim__LvalB_207;
              MR_Word ll_backend__dupelim__RvalB_208;
              MR_Word ll_backend__dupelim__V_246_246;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 32)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__RvalB_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__LvalB_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  ll_backend__dupelim__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 3)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__Label_56, ll_backend__dupelim__V_246_246);
                  }
                  if (ll_backend__dupelim__succeeded)
                    {
                      {
                        ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_214, ll_backend__dupelim__RvalB_208, &ll_backend__dupelim__Rval_212);
                      }
                      if (ll_backend__dupelim__succeeded)
                        {
                          ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_213, ll_backend__dupelim__LvalB_207, &ll_backend__dupelim__Lval_211);
                        }
                    }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_109_109;

                  {
                    ll_backend__dupelim__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_109_109, 1) = ((MR_Box) (ll_backend__dupelim__Rval_212));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_109_109, 2) = ((MR_Box) (ll_backend__dupelim__Lval_211));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_109_109, 3) = ((MR_Box) (ll_backend__dupelim__Label_56));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_109_109));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__dupelim__LCRvalA_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__LCSRvalA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__Label_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__LCRval_61;
              MR_Word ll_backend__dupelim__LCSRval_62;
              MR_Word ll_backend__dupelim__LCRvalB_59;
              MR_Word ll_backend__dupelim__LCSRvalB_60;
              MR_Word ll_backend__dupelim__V_247_247;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 33)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__LCRvalB_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__LCSRvalB_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  ll_backend__dupelim__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 3)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__Label_219, ll_backend__dupelim__V_247_247);
                  }
                  if (ll_backend__dupelim__succeeded)
                    {
                      {
                        ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__LCRvalA_57, ll_backend__dupelim__LCRvalB_59, &ll_backend__dupelim__LCRval_61);
                      }
                      if (ll_backend__dupelim__succeeded)
                        {
                          ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__LCSRvalA_58, ll_backend__dupelim__LCSRvalB_60, &ll_backend__dupelim__LCSRval_62);
                        }
                    }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_108_108;

                  {
                    ll_backend__dupelim__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_108_108, 1) = ((MR_Box) (ll_backend__dupelim__LCRval_61));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_108_108, 2) = ((MR_Box) (ll_backend__dupelim__LCSRval_62));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_108_108, 3) = ((MR_Box) (ll_backend__dupelim__Label_219));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_108_108));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__dupelim__LCRvalA_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__LCSRvalA_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__LCRval_224;
              MR_Word ll_backend__dupelim__LCSRval_225;
              MR_Word ll_backend__dupelim__LCRvalB_220;
              MR_Word ll_backend__dupelim__LCSRvalB_221;

              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 34)));
              if (ll_backend__dupelim__succeeded)
                {
                  ll_backend__dupelim__LCRvalB_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
                  ll_backend__dupelim__LCSRvalB_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
                  {
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__LCRvalA_226, ll_backend__dupelim__LCRvalB_220, &ll_backend__dupelim__LCRval_224);
                  }
                  if (ll_backend__dupelim__succeeded)
                    {
                      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__LCSRvalA_227, ll_backend__dupelim__LCSRvalB_221, &ll_backend__dupelim__LCSRval_225);
                    }
                }
              if (ll_backend__dupelim__succeeded)
                {
                  MR_Word ll_backend__dupelim__V_107_107;

                  {
                    ll_backend__dupelim__V_107_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_107_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_107_107, 1) = ((MR_Box) (ll_backend__dupelim__LCRval_224));
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_107_107, 2) = ((MR_Box) (ll_backend__dupelim__LCSRval_225));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *ll_backend__dupelim__MaybeInstr_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_107_107));
                  }
                }
              else
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_instrs_3_p_0(
  MR_Word ll_backend__dupelim__InstrsA_4,
  MR_Word ll_backend__dupelim__InstrsB_5,
  MR_Word * ll_backend__dupelim__Instrs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__InstrsA_4)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__dupelim__InstrA_7;
        MR_Word ll_backend__dupelim__TailA_8;
        MR_Word ll_backend__dupelim__InstrB_9;
        MR_Word ll_backend__dupelim__TailB_10;

        if (ll_backend__dupelim__succeeded)
          {
            ll_backend__dupelim__InstrA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsA_4, (MR_Integer) 0)));
            ll_backend__dupelim__TailA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsA_4, (MR_Integer) 1)));
            ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__InstrsB_5)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__dupelim__succeeded)
              {
                ll_backend__dupelim__InstrB_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsB_5, (MR_Integer) 0)));
                ll_backend__dupelim__TailB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsB_5, (MR_Integer) 1)));
              }
          }
        if (ll_backend__dupelim__succeeded)
          {
            MR_Word ll_backend__dupelim__UinstrA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrA_7, (MR_Integer) 0)));
            MR_String ll_backend__dupelim__CommentA_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrA_7, (MR_Integer) 1)));
            MR_Word ll_backend__dupelim__UinstrB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrB_9, (MR_Integer) 0)));
            MR_String ll_backend__dupelim__CommentB_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrB_9, (MR_Integer) 1)));
            MR_Word ll_backend__dupelim__Uinstr_15;
            MR_Word ll_backend__dupelim__V_25_25;

            {
              ll_backend__dupelim__most_specific_instr_3_p_0(ll_backend__dupelim__UinstrA_11, ll_backend__dupelim__UinstrB_13, &ll_backend__dupelim__V_25_25);
            }
            ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_25_25)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__dupelim__succeeded)
              {
                ll_backend__dupelim__Uinstr_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_25_25, (MR_Integer) 0)));
                {
                  MR_String ll_backend__dupelim__Comment_16;
                  MR_Word ll_backend__dupelim__Instr_17;
                  MR_Word ll_backend__dupelim__Tail_18;

                  ll_backend__dupelim__succeeded = (strcmp(ll_backend__dupelim__CommentA_12, ll_backend__dupelim__CommentB_14) == 0);
                  if (ll_backend__dupelim__succeeded)
                    ll_backend__dupelim__Comment_16 = ll_backend__dupelim__CommentA_12;
                  else
                    ll_backend__dupelim__Comment_16 = (MR_String) "unified intruction";
                  {
                    ll_backend__dupelim__Instr_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__dupelim__Instr_17, 0) = ((MR_Box) (ll_backend__dupelim__Uinstr_15));
                    MR_hl_field(MR_mktag(0), ll_backend__dupelim__Instr_17, 1) = ((MR_Box) (ll_backend__dupelim__Comment_16));
                  }
                  {
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_instrs_3_p_0(ll_backend__dupelim__TailA_8, ll_backend__dupelim__TailB_10, &ll_backend__dupelim__Tail_18);
                  }
                  if (ll_backend__dupelim__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__dupelim__Instrs_6 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__Instr_17));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupelim__Tail_18));
                      }
                      ll_backend__dupelim__succeeded = MR_TRUE;
                    }
                }
              }
            else
              {
                MR_String ll_backend__dupelim__V_19_19;

                ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__UinstrA_11)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__dupelim__succeeded)
                  {
                    ll_backend__dupelim__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__UinstrA_11, (MR_Integer) 0)));
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__dupelim__InstrsA__tmp_copy_4 = ll_backend__dupelim__TailA_8;

                      ll_backend__dupelim__InstrsA_4 = ll_backend__dupelim__InstrsA__tmp_copy_4;
                    }
                    continue;
                  }
                else
                  {
                    MR_String ll_backend__dupelim__V_20_20;

                    ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__UinstrB_13)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__dupelim__succeeded)
                      {
                        ll_backend__dupelim__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__UinstrB_13, (MR_Integer) 0)));
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__dupelim__InstrsB__tmp_copy_5 = ll_backend__dupelim__TailB_10;

                          ll_backend__dupelim__InstrsB_5 = ll_backend__dupelim__InstrsB__tmp_copy_5;
                        }
                        continue;
                      }
                  }
              }
          }
        else
          {
            ll_backend__dupelim__succeeded = (ll_backend__dupelim__InstrsA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ll_backend__dupelim__succeeded)
              ll_backend__dupelim__succeeded = (ll_backend__dupelim__InstrsB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (ll_backend__dupelim__succeeded)
              {
                *ll_backend__dupelim__Instrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                ll_backend__dupelim__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word ll_backend__dupelim__TailA_33;
                MR_Word ll_backend__dupelim__V_26_26;
                MR_Word ll_backend__dupelim__InstrA_28;
                MR_String ll_backend__dupelim__V_22_22;
                MR_String ll_backend__dupelim__V_21_21;

                ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__InstrsA_4)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__dupelim__succeeded)
                  {
                    ll_backend__dupelim__InstrA_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsA_4, (MR_Integer) 0)));
                    ll_backend__dupelim__TailA_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsA_4, (MR_Integer) 1)));
                    ll_backend__dupelim__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrA_28, (MR_Integer) 0)));
                    ll_backend__dupelim__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrA_28, (MR_Integer) 1)));
                    ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_26_26)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__dupelim__succeeded)
                      ll_backend__dupelim__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_26_26, (MR_Integer) 0)));
                  }
                if (ll_backend__dupelim__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__dupelim__InstrsA__tmp_copy_4 = ll_backend__dupelim__TailA_33;

                      ll_backend__dupelim__InstrsA_4 = ll_backend__dupelim__InstrsA__tmp_copy_4;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word ll_backend__dupelim__V_27_27;
                    MR_Word ll_backend__dupelim__InstrB_29;
                    MR_Word ll_backend__dupelim__TailB_31;
                    MR_String ll_backend__dupelim__V_24_24;
                    MR_String ll_backend__dupelim__V_23_23;

                    ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__InstrsB_5)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__dupelim__succeeded)
                      {
                        ll_backend__dupelim__InstrB_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsB_5, (MR_Integer) 0)));
                        ll_backend__dupelim__TailB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsB_5, (MR_Integer) 1)));
                        ll_backend__dupelim__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrB_29, (MR_Integer) 0)));
                        ll_backend__dupelim__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrB_29, (MR_Integer) 1)));
                        ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_27_27)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__dupelim__succeeded)
                          {
                            ll_backend__dupelim__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_27_27, (MR_Integer) 0)));
                            /* direct tailcall eliminated */
                            {
                              MR_Word ll_backend__dupelim__InstrsB__tmp_copy_5 = ll_backend__dupelim__TailB_31;

                              ll_backend__dupelim__InstrsB_5 = ll_backend__dupelim__InstrsB__tmp_copy_5;
                            }
                            continue;
                          }
                      }
                  }
              }
          }
        return ll_backend__dupelim__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_block_6_p_0(
  MR_Word ll_backend__dupelim__Instrs1_7,
  MR_Word ll_backend__dupelim__MaybeFallThrough1_8,
  MR_Word ll_backend__dupelim__Instrs2_9,
  MR_Word ll_backend__dupelim__MaybeFallThrough2_10,
  MR_Word * ll_backend__dupelim__Instrs_11,
  MR_Word * ll_backend__dupelim__MaybeFallThrough_12)
{
  {
    MR_bool ll_backend__dupelim__succeeded;
    MR_Word ll_backend__dupelim__TypeCtorInfo_20_20;
    MR_Word ll_backend__dupelim__StdInstrs1_13;
    MR_Word ll_backend__dupelim__StdInstrs2_14;
    MR_Word ll_backend__dupelim__LastInstr_15;
    MR_Box ll_backend__dupelim__conv2_LastInstr_15;
    MR_Word ll_backend__dupelim__Label_16;
    MR_Word ll_backend__dupelim__V_18_18;
    MR_Word ll_backend__dupelim__V_19_19;
    MR_String ll_backend__dupelim__V_17_17;

    if ((ll_backend__dupelim__MaybeFallThrough1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__dupelim__StdInstrs1_13 = ll_backend__dupelim__Instrs1_7;
    else
      {
        MR_Word ll_backend__dupelim__Label_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFallThrough1_8, (MR_Integer) 0)));
        MR_Word ll_backend__dupelim__LastInstr_25;
        MR_Word ll_backend__dupelim__V_28_28;
        MR_Word ll_backend__dupelim__V_29_29;
        MR_Word ll_backend__dupelim__V_37_37;
        MR_Box ll_backend__dupelim__conv0_LastInstr_25;
        MR_String ll_backend__dupelim__V_26_26;

        {
          ll_backend__dupelim__succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__dupelim__Instrs1_7, &ll_backend__dupelim__conv0_LastInstr_25);
        }
        if (ll_backend__dupelim__succeeded)
          {
            ll_backend__dupelim__LastInstr_25 = ((MR_Word) ll_backend__dupelim__conv0_LastInstr_25);
            ll_backend__dupelim__succeeded = MR_TRUE;
          }
        if (ll_backend__dupelim__succeeded)
          {
            ll_backend__dupelim__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__LastInstr_25, (MR_Integer) 0)));
            ll_backend__dupelim__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__LastInstr_25, (MR_Integer) 1)));
            ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (ll_backend__dupelim__succeeded)
              {
                ll_backend__dupelim__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_28_28, (MR_Integer) 1)));
                ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_29_29)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__dupelim__succeeded)
                  {
                    ll_backend__dupelim__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_29_29, (MR_Integer) 0)));
                    {
                      ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__Label_24, ll_backend__dupelim__V_37_37);
                    }
                  }
              }
          }
        if (ll_backend__dupelim__succeeded)
          ll_backend__dupelim__StdInstrs1_13 = ll_backend__dupelim__Instrs1_7;
        else
          {
            MR_Word ll_backend__dupelim__Goto_27;
            MR_Word ll_backend__dupelim__V_30_30;
            MR_Word ll_backend__dupelim__V_31_31;
            MR_Word ll_backend__dupelim__V_33_33;

            {
              ll_backend__dupelim__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_31_31, 0) = ((MR_Box) (ll_backend__dupelim__Label_24));
            }
            {
              ll_backend__dupelim__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_30_30, 1) = ((MR_Box) (ll_backend__dupelim__V_31_31));
            }
            {
              ll_backend__dupelim__Goto_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__Goto_27, 0) = ((MR_Box) (ll_backend__dupelim__V_30_30));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__Goto_27, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              ll_backend__dupelim__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_33_33, 0) = ((MR_Box) (ll_backend__dupelim__Goto_27));
              MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__dupelim__StdInstrs1_13 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__dupelim__Instrs1_7, ll_backend__dupelim__V_33_33);
            }
          }
      }
    if ((ll_backend__dupelim__MaybeFallThrough2_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__dupelim__StdInstrs2_14 = ll_backend__dupelim__Instrs2_9;
    else
      {
        MR_Word ll_backend__dupelim__Label_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFallThrough2_10, (MR_Integer) 0)));
        MR_Word ll_backend__dupelim__LastInstr_43;
        MR_Word ll_backend__dupelim__V_46_46;
        MR_Word ll_backend__dupelim__V_47_47;
        MR_Word ll_backend__dupelim__V_55_55;
        MR_Box ll_backend__dupelim__conv1_LastInstr_43;
        MR_String ll_backend__dupelim__V_44_44;

        {
          ll_backend__dupelim__succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__dupelim__Instrs2_9, &ll_backend__dupelim__conv1_LastInstr_43);
        }
        if (ll_backend__dupelim__succeeded)
          {
            ll_backend__dupelim__LastInstr_43 = ((MR_Word) ll_backend__dupelim__conv1_LastInstr_43);
            ll_backend__dupelim__succeeded = MR_TRUE;
          }
        if (ll_backend__dupelim__succeeded)
          {
            ll_backend__dupelim__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__LastInstr_43, (MR_Integer) 0)));
            ll_backend__dupelim__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__LastInstr_43, (MR_Integer) 1)));
            ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (ll_backend__dupelim__succeeded)
              {
                ll_backend__dupelim__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_46_46, (MR_Integer) 1)));
                ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_47_47)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__dupelim__succeeded)
                  {
                    ll_backend__dupelim__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_47_47, (MR_Integer) 0)));
                    {
                      ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__Label_42, ll_backend__dupelim__V_55_55);
                    }
                  }
              }
          }
        if (ll_backend__dupelim__succeeded)
          ll_backend__dupelim__StdInstrs2_14 = ll_backend__dupelim__Instrs2_9;
        else
          {
            MR_Word ll_backend__dupelim__Goto_45;
            MR_Word ll_backend__dupelim__V_48_48;
            MR_Word ll_backend__dupelim__V_49_49;
            MR_Word ll_backend__dupelim__V_51_51;

            {
              ll_backend__dupelim__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_49_49, 0) = ((MR_Box) (ll_backend__dupelim__Label_42));
            }
            {
              ll_backend__dupelim__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_48_48, 1) = ((MR_Box) (ll_backend__dupelim__V_49_49));
            }
            {
              ll_backend__dupelim__Goto_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__Goto_45, 0) = ((MR_Box) (ll_backend__dupelim__V_48_48));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__Goto_45, 1) = ((MR_Box) ((MR_String) ""));
            }
            {
              ll_backend__dupelim__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_51_51, 0) = ((MR_Box) (ll_backend__dupelim__Goto_45));
              MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__dupelim__StdInstrs2_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__dupelim__Instrs2_9, ll_backend__dupelim__V_51_51);
            }
          }
      }
    {
      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_instrs_3_p_0(ll_backend__dupelim__StdInstrs1_13, ll_backend__dupelim__StdInstrs2_14, ll_backend__dupelim__Instrs_11);
    }
    if (ll_backend__dupelim__succeeded)
      {
        ll_backend__dupelim__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
        {
          mercury__list__det_last_2_p_0(ll_backend__dupelim__TypeCtorInfo_20_20, *ll_backend__dupelim__Instrs_11, &ll_backend__dupelim__conv2_LastInstr_15);
        }
        ll_backend__dupelim__LastInstr_15 = ((MR_Word) ll_backend__dupelim__conv2_LastInstr_15);
        ll_backend__dupelim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__LastInstr_15, (MR_Integer) 0)));
        ll_backend__dupelim__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__LastInstr_15, (MR_Integer) 1)));
        ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__V_18_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_18_18, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (ll_backend__dupelim__succeeded)
          {
            ll_backend__dupelim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_18_18, (MR_Integer) 1)));
            ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_19_19)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__dupelim__succeeded)
              ll_backend__dupelim__Label_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_19_19, (MR_Integer) 0)));
          }
        if (ll_backend__dupelim__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__dupelim__MaybeFallThrough_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__Label_16));
          }
        else
          *ll_backend__dupelim__MaybeFallThrough_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ll_backend__dupelim__succeeded = MR_TRUE;
      }
    return ll_backend__dupelim__succeeded;
  }
}

static void MR_CALL 
ll_backend__dupelim__standardize_rval_2_p_0(
  MR_Word ll_backend__dupelim__Rval0_3,
  MR_Word * ll_backend__dupelim__Rval_4)
{
  {
    MR_bool ll_backend__dupelim__succeeded;

    switch (MR_tag((MR_Word) ll_backend__dupelim__Rval0_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__dupelim__Lval0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__Rval0_3, (MR_Integer) 0)));
          MR_Word ll_backend__dupelim__Lval_6;

          {
            ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_5, &ll_backend__dupelim__Lval_6);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__dupelim__Rval_4 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__dupelim__Lval_6));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.standardize_rval\'/2", (MR_String) "var");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        *ll_backend__dupelim__Rval_4 = ll_backend__dupelim__Rval0_3;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 4:
            *ll_backend__dupelim__Rval_4 = ll_backend__dupelim__Rval0_3;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__dupelim__Unop_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval0L_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__RvalL_14;

              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0L_13, &ll_backend__dupelim__RvalL_14);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Rval_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Unop_12));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__RvalL_14));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__dupelim__Binop_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval0R_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__RvalR_17;
              MR_Word ll_backend__dupelim__Rval0L_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__RvalL_23;

              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0L_22, &ll_backend__dupelim__RvalL_23);
              }
              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0R_16, &ll_backend__dupelim__RvalR_17);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Rval_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Binop_15));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__RvalL_23));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__RvalR_17));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__dupelim__standardize_lval_2_p_0(
  MR_Word ll_backend__dupelim__Lval0_3,
  MR_Word * ll_backend__dupelim__Lval_4)
{
  {
    MR_bool ll_backend__dupelim__succeeded;

    switch (MR_tag((MR_Word) ll_backend__dupelim__Lval0_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__dupelim__Lval_4 = ll_backend__dupelim__Lval0_3;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *ll_backend__dupelim__Lval_4 = ll_backend__dupelim__Lval0_3;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Lval0_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
            *ll_backend__dupelim__Lval_4 = ll_backend__dupelim__Lval0_3;
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__dupelim__Addr_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Lval0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__FieldNum_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Lval0_3, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Lval0_3, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Lval_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Addr_22));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__FieldNum_23));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.standardize_lval\'/2", (MR_String) "lvar");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__dupelim__standardize_instr_2_p_0(
  MR_Word ll_backend__dupelim__Instr0_3,
  MR_Word * ll_backend__dupelim__Instr_4)
{
  {
    MR_bool ll_backend__dupelim__succeeded;

    switch (MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__dupelim__Instr_4 = ll_backend__dupelim__Instr0_3;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *ll_backend__dupelim__Instr_4 = ll_backend__dupelim__Instr0_3;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 16:
          case (MR_Integer) 19:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
          case (MR_Integer) 27:
          case (MR_Integer) 29:
            *ll_backend__dupelim__Instr_4 = ll_backend__dupelim__Instr0_3;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__dupelim__Lval0_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval0_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__Lval_7;
              MR_Word ll_backend__dupelim__Rval_8;

              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_5, &ll_backend__dupelim__Lval_7);
              }
              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_6, &ll_backend__dupelim__Rval_8);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Rval_8));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__dupelim__Lval0_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval0_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__Lval_89;
              MR_Word ll_backend__dupelim__Rval_90;

              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_87, &ll_backend__dupelim__Lval_89);
              }
              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_88, &ll_backend__dupelim__Rval_90);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_89));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Rval_90));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__dupelim__CodeAddr_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__Rval0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval_92;

              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_91, &ll_backend__dupelim__Rval_92);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Rval_92));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__CodeAddr_9));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__dupelim__Lval0_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval_94;

              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_93, &ll_backend__dupelim__Lval_94);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_94));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__dupelim__Lval0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval_96;

              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_95, &ll_backend__dupelim__Lval_96);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_96));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__dupelim__MaybeTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__MaybeOffset_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__Msg_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 5)));
              MR_Word ll_backend__dupelim__MayUseAtomic_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 6)));
              MR_Word ll_backend__dupelim__MaybeRegionRval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 7)));
              MR_Word ll_backend__dupelim__MaybeReuse0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 8)));
              MR_Word ll_backend__dupelim__MaybeRegionRval_18;
              MR_Word ll_backend__dupelim__MaybeReuse_25;
              MR_Word ll_backend__dupelim__Lval0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval0_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 4)));
              MR_Word ll_backend__dupelim__Lval_99;
              MR_Word ll_backend__dupelim__Rval_100;

              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_97, &ll_backend__dupelim__Lval_99);
              }
              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_98, &ll_backend__dupelim__Rval_100);
              }
              if ((ll_backend__dupelim__MaybeRegionRval0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__dupelim__MaybeRegionRval_18 = ll_backend__dupelim__MaybeRegionRval0_14;
              else
                {
                  MR_Word ll_backend__dupelim__RegionRval0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeRegionRval0_14, (MR_Integer) 0)));
                  MR_Word ll_backend__dupelim__RegionRval_17;

                  {
                    ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__RegionRval0_16, &ll_backend__dupelim__RegionRval_17);
                  }
                  {
                    ll_backend__dupelim__MaybeRegionRval_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeRegionRval_18, 0) = ((MR_Box) (ll_backend__dupelim__RegionRval_17));
                  }
                }
              if ((ll_backend__dupelim__MaybeReuse0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__dupelim__MaybeReuse_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Word ll_backend__dupelim__ReuseRval0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuse0_15, (MR_Integer) 0)));
                  MR_Word ll_backend__dupelim__MaybeFlagLval0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuse0_15, (MR_Integer) 1)));
                  MR_Word ll_backend__dupelim__ReuseRval_21;
                  MR_Word ll_backend__dupelim__MaybeFlagLval_24;

                  {
                    ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__ReuseRval0_19, &ll_backend__dupelim__ReuseRval_21);
                  }
                  if ((ll_backend__dupelim__MaybeFlagLval0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    ll_backend__dupelim__MaybeFlagLval_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Word ll_backend__dupelim__FlagLval0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFlagLval0_20, (MR_Integer) 0)));
                      MR_Word ll_backend__dupelim__FlagLval_23;

                      {
                        ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__FlagLval0_22, &ll_backend__dupelim__FlagLval_23);
                      }
                      {
                        ll_backend__dupelim__MaybeFlagLval_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFlagLval_24, 0) = ((MR_Box) (ll_backend__dupelim__FlagLval_23));
                      }
                    }
                  {
                    ll_backend__dupelim__MaybeReuse_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuse_25, 0) = ((MR_Box) (ll_backend__dupelim__ReuseRval_21));
                    MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuse_25, 1) = ((MR_Box) (ll_backend__dupelim__MaybeFlagLval_24));
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_99));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__MaybeTag_10));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__MaybeOffset_11));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__dupelim__Rval_100));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__dupelim__Msg_12));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__dupelim__MayUseAtomic_13));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__dupelim__MaybeRegionRval_18));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__dupelim__MaybeReuse_25));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__dupelim__Lval0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval_102;

              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_101, &ll_backend__dupelim__Lval_102);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_102));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__dupelim__Rval0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval_104;

              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_103, &ll_backend__dupelim__Rval_104);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Rval_104));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__dupelim__Rval0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval_107;

              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_106, &ll_backend__dupelim__Rval_107);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Rval_107));
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__dupelim__FillOp_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__EmbeddedStackFrame_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__IdRval0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__NumLval0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 4)));
              MR_Word ll_backend__dupelim__AddrLval0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 5)));
              MR_Word ll_backend__dupelim__IdRval_31;
              MR_Word ll_backend__dupelim__NumLval_32;
              MR_Word ll_backend__dupelim__AddrLval_33;

              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__IdRval0_28, &ll_backend__dupelim__IdRval_31);
              }
              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__NumLval0_29, &ll_backend__dupelim__NumLval_32);
              }
              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__AddrLval0_30, &ll_backend__dupelim__AddrLval_33);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__FillOp_26));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__EmbeddedStackFrame_27));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__IdRval_31));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__dupelim__NumLval_32));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__dupelim__AddrLval_33));
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__dupelim__SetOp_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__ValueRval0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__ValueRval_36;
              MR_Word ll_backend__dupelim__EmbeddedStackFrame_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));

              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__ValueRval0_35, &ll_backend__dupelim__ValueRval_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__SetOp_34));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__EmbeddedStackFrame_105));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__ValueRval_36));
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__dupelim__Lval0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval_109;

              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_108, &ll_backend__dupelim__Lval_109);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_109));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__dupelim__Reason_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__Rval0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval_111;

              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_110, &ll_backend__dupelim__Rval_111);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Rval_111));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Reason_37));
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__dupelim__Lval0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval_113;

              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_112, &ll_backend__dupelim__Lval_113);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_113));
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__dupelim__Rval0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Rval_115;

              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_114, &ll_backend__dupelim__Rval_115);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Rval_115));
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Integer ll_backend__dupelim__N_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
              MR_Integer ll_backend__dupelim__ConjId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 3)));
              MR_Word ll_backend__dupelim__Lval0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval_117;

              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_116, &ll_backend__dupelim__Lval_117);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_117));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__N_38));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__ConjId_39));
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__dupelim__Label_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__Lval0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval_119;

              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_118, &ll_backend__dupelim__Lval_119);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_119));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Label_40));
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Integer ll_backend__dupelim__NumSlots_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval0_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__Lval_121;

              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_120, &ll_backend__dupelim__Lval_121);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__NumSlots_41));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Lval_121));
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__dupelim__Lval0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__Rval0_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__Lval_124;
              MR_Word ll_backend__dupelim__Rval_125;
              MR_Word ll_backend__dupelim__Label_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 3)));

              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_123, &ll_backend__dupelim__Rval_125);
              }
              {
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_122, &ll_backend__dupelim__Lval_124);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Rval_125));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Lval_124));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__Label_126));
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__dupelim__LCRval0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__LCSRval0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__LCRval_44;
              MR_Word ll_backend__dupelim__LCSRval_45;
              MR_Word ll_backend__dupelim__Label_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 3)));

              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__LCRval0_42, &ll_backend__dupelim__LCRval_44);
              }
              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__LCSRval0_43, &ll_backend__dupelim__LCSRval_45);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__LCRval_44));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__LCSRval_45));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__Label_127));
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__dupelim__LCRval0_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
              MR_Word ll_backend__dupelim__LCSRval0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
              MR_Word ll_backend__dupelim__LCRval_130;
              MR_Word ll_backend__dupelim__LCSRval_131;

              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__LCRval0_128, &ll_backend__dupelim__LCRval_130);
              }
              {
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__LCSRval0_129, &ll_backend__dupelim__LCSRval_131);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupelim__Instr_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__LCRval_130));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__LCSRval_131));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__dupelim__standardize_instrs_2_p_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word * ll_backend__dupelim__HeadVar__2_2)
{
  {
    MR_bool ll_backend__dupelim__succeeded;

    if ((ll_backend__dupelim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__dupelim__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__dupelim__Instr_3;
        MR_Word ll_backend__dupelim__Instrs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__dupelim__StdInstrs1_7;
        MR_Word ll_backend__dupelim__StdInstr_8;
        MR_Word ll_backend__dupelim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 0)));
        MR_String ll_backend__dupelim__V_4_4;
        MR_String ll_backend__dupelim__V_9_9;

        ll_backend__dupelim__Instr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_10_10, (MR_Integer) 0)));
        ll_backend__dupelim__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_10_10, (MR_Integer) 1)));
        {
          ll_backend__dupelim__standardize_instrs_2_p_0(ll_backend__dupelim__Instrs_5, &ll_backend__dupelim__StdInstrs1_7);
        }
        {
          ll_backend__dupelim__standardize_instr_2_p_0(ll_backend__dupelim__Instr_3, &ll_backend__dupelim__StdInstr_8);
        }
        ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__StdInstr_8)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__dupelim__succeeded)
          {
            ll_backend__dupelim__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__StdInstr_8, (MR_Integer) 0)));
            *ll_backend__dupelim__HeadVar__2_2 = ll_backend__dupelim__StdInstrs1_7;
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__dupelim__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__StdInstr_8));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupelim__StdInstrs1_7));
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__dupelim__process_elim_labels_11_p_0_1(
  MR_Box ll_backend__dupelim__closure_arg)
{
  {
    MR_bool ll_backend__dupelim__succeeded;
    MR_Box ll_backend__dupelim__closure = ll_backend__dupelim__closure_arg;

    {
      ll_backend__dupelim__succeeded = ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__285__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__closure, (MR_Integer) 4))));
    }
    return ll_backend__dupelim__succeeded;
  }
}

static void MR_CALL 
ll_backend__dupelim__process_elim_labels_11_p_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__HeadVar__2_2,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_3,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_LabelSeq_4,
  MR_Word ll_backend__dupelim__BlockMap_5,
  MR_Word ll_backend__dupelim__Exemplar_6,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_7,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_ReplMap_8,
  MR_Word * ll_backend__dupelim__Instrs_9,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0_10,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__dupelim__succeeded;

        if ((ll_backend__dupelim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__dupelim__Instrs_9 = ll_backend__dupelim__HeadVar__2_2;
            *ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_11 = ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0_10;
            *ll_backend__dupelim__STATE_VARIABLE_ReplMap_8 = ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_7;
            *ll_backend__dupelim__STATE_VARIABLE_LabelSeq_4 = ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_3;
          }
        else
          {
            MR_Word ll_backend__dupelim__TypeCtorInfo_61_61 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
            MR_Word ll_backend__dupelim__ElimLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__dupelim__ElimLabels_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__dupelim__ElimLabelInfo_33;
            MR_Word ll_backend__dupelim__ElimLabel2_34;
            MR_Word ll_backend__dupelim__ElimInstrs_36;
            MR_Word ll_backend__dupelim__ElimMaybeFallThrough_40;
            MR_Word ll_backend__dupelim__V_48_48;
            MR_Box ll_backend__dupelim__conv0_ElimLabelInfo_33;
            MR_Word ll_backend__dupelim__V_35_35;
            MR_Integer ll_backend__dupelim___NumElimInstrs_37;
            MR_Word ll_backend__dupelim__V_38_38;
            MR_Word ll_backend__dupelim__V_39_39;
            MR_Word ll_backend__dupelim__Instrs1_41;
            MR_Word ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_52_52;

            {
              mercury__map__lookup_3_p_0(ll_backend__dupelim__TypeCtorInfo_61_61, (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0, ll_backend__dupelim__BlockMap_5, ((MR_Box) (ll_backend__dupelim__ElimLabel_24)), &ll_backend__dupelim__conv0_ElimLabelInfo_33);
            }
            ll_backend__dupelim__ElimLabelInfo_33 = ((MR_Word) ll_backend__dupelim__conv0_ElimLabelInfo_33);
            ll_backend__dupelim__ElimLabel2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 0)));
            ll_backend__dupelim__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 1)));
            ll_backend__dupelim__ElimInstrs_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 2)));
            ll_backend__dupelim___NumElimInstrs_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 3)));
            ll_backend__dupelim__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 4)));
            ll_backend__dupelim__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 5)));
            ll_backend__dupelim__ElimMaybeFallThrough_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 6)));
            {
              ll_backend__dupelim__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_48_48, 0) = ((MR_Box) (&ll_backend__dupelim_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_48_48, 1) = ((MR_Box) (ll_backend__dupelim__process_elim_labels_11_p_0_1));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_48_48, 3) = ((MR_Box) (ll_backend__dupelim__ElimLabel_24));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_48_48, 4) = ((MR_Box) (ll_backend__dupelim__ElimLabel2_34));
            }
            {
              mercury__require__expect_4_p_0(ll_backend__dupelim__V_48_48, (MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.process_elim_labels\'/11", (MR_String) "elim label mismatch");
            }
            {
              ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_block_6_p_0(ll_backend__dupelim__HeadVar__2_2, ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0_10, ll_backend__dupelim__ElimInstrs_36, ll_backend__dupelim__ElimMaybeFallThrough_40, &ll_backend__dupelim__Instrs1_41, &ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_52_52);
            }
            if (ll_backend__dupelim__succeeded)
              {
                MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_53_53;
                MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_54_54;

                {
                  mercury__list__delete_all_3_p_1(ll_backend__dupelim__TypeCtorInfo_61_61, ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_3, ((MR_Box) (ll_backend__dupelim__ElimLabel_24)), &ll_backend__dupelim__STATE_VARIABLE_LabelSeq_53_53);
                }
                {
                  mercury__map__det_insert_4_p_0(ll_backend__dupelim__TypeCtorInfo_61_61, ll_backend__dupelim__TypeCtorInfo_61_61, ((MR_Box) (ll_backend__dupelim__ElimLabel_24)), ((MR_Box) (ll_backend__dupelim__Exemplar_6)), ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_7, &ll_backend__dupelim__STATE_VARIABLE_ReplMap_54_54);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__dupelim__HeadVar__1__tmp_copy_1 = ll_backend__dupelim__ElimLabels_25;
                  MR_Word ll_backend__dupelim__HeadVar__2__tmp_copy_2 = ll_backend__dupelim__Instrs1_41;
                  MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0__tmp_copy_3 = ll_backend__dupelim__STATE_VARIABLE_LabelSeq_53_53;
                  MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_0__tmp_copy_7 = ll_backend__dupelim__STATE_VARIABLE_ReplMap_54_54;
                  MR_Word ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0__tmp_copy_10 = ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_52_52;

                  ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0_10 = ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0__tmp_copy_10;
                  ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_7 = ll_backend__dupelim__STATE_VARIABLE_ReplMap_0__tmp_copy_7;
                  ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_3 = ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0__tmp_copy_3;
                  ll_backend__dupelim__HeadVar__2_2 = ll_backend__dupelim__HeadVar__2__tmp_copy_2;
                  ll_backend__dupelim__HeadVar__1_1 = ll_backend__dupelim__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.process_elim_labels\'/11", (MR_String) "blocks with same standard form don\'t antiunify");
                  return;
                }
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__dupelim__process_clusters_7_p_0_1(
  MR_Box ll_backend__dupelim__closure_arg)
{
  {
    MR_bool ll_backend__dupelim__succeeded;
    MR_Box ll_backend__dupelim__closure = ll_backend__dupelim__closure_arg;

    {
      ll_backend__dupelim__succeeded = ll_backend__dupelim__IntroducedFrom__pred__process_clusters__253__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__closure, (MR_Integer) 4))));
    }
    return ll_backend__dupelim__succeeded;
  }
}

static void MR_CALL 
ll_backend__dupelim__process_clusters_7_p_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_2,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_LabelSeq_3,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_BlockMap_5,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_6,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_ReplMap_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__dupelim__succeeded;

        if ((ll_backend__dupelim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__dupelim__STATE_VARIABLE_ReplMap_7 = ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_6;
            *ll_backend__dupelim__STATE_VARIABLE_BlockMap_5 = ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4;
            *ll_backend__dupelim__STATE_VARIABLE_LabelSeq_3 = ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_2;
          }
        else
          {
            MR_Word ll_backend__dupelim__TypeCtorInfo_51_51 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
            MR_Word ll_backend__dupelim__TypeCtorInfo_52_52 = (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0;
            MR_Word ll_backend__dupelim__Cluster_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__dupelim__Clusters_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__dupelim__Exemplar_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__Cluster_17, (MR_Integer) 0)));
            MR_Word ll_backend__dupelim__ElimLabels_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__Cluster_17, (MR_Integer) 1)));
            MR_Word ll_backend__dupelim__ExemplarInfo0_24;
            MR_Word ll_backend__dupelim__ExLabel_25;
            MR_Word ll_backend__dupelim__ExLabelInstr_26;
            MR_Word ll_backend__dupelim__ExInstrs0_27;
            MR_Integer ll_backend__dupelim__ExNumInstrs_28;
            MR_Word ll_backend__dupelim__ExFallInto_29;
            MR_Word ll_backend__dupelim__ExSideLabels_30;
            MR_Word ll_backend__dupelim__ExMaybeFallThrough_31;
            MR_Word ll_backend__dupelim__UnifiedInstrs_32;
            MR_Word ll_backend__dupelim__UnifiedMaybeFallThrough_33;
            MR_Word ll_backend__dupelim__ExemplarInfo_34;
            MR_Word ll_backend__dupelim__V_41_41;
            MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_45_45;
            MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_46_46;
            MR_Word ll_backend__dupelim__STATE_VARIABLE_BlockMap_47_47;
            MR_Box ll_backend__dupelim__conv0_ExemplarInfo0_24;

            {
              mercury__map__lookup_3_p_0(ll_backend__dupelim__TypeCtorInfo_51_51, ll_backend__dupelim__TypeCtorInfo_52_52, ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4, ((MR_Box) (ll_backend__dupelim__Exemplar_22)), &ll_backend__dupelim__conv0_ExemplarInfo0_24);
            }
            ll_backend__dupelim__ExemplarInfo0_24 = ((MR_Word) ll_backend__dupelim__conv0_ExemplarInfo0_24);
            ll_backend__dupelim__ExLabel_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 0)));
            ll_backend__dupelim__ExLabelInstr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 1)));
            ll_backend__dupelim__ExInstrs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 2)));
            ll_backend__dupelim__ExNumInstrs_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 3)));
            ll_backend__dupelim__ExFallInto_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 4)));
            ll_backend__dupelim__ExSideLabels_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 5)));
            ll_backend__dupelim__ExMaybeFallThrough_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 6)));
            {
              ll_backend__dupelim__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_41_41, 0) = ((MR_Box) (&ll_backend__dupelim_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_41_41, 1) = ((MR_Box) (ll_backend__dupelim__process_clusters_7_p_0_1));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_41_41, 3) = ((MR_Box) (ll_backend__dupelim__Exemplar_22));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_41_41, 4) = ((MR_Box) (ll_backend__dupelim__ExLabel_25));
            }
            {
              mercury__require__expect_4_p_0(ll_backend__dupelim__V_41_41, (MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.process_clusters\'/7", (MR_String) "exemplar label mismatch");
            }
            {
              ll_backend__dupelim__process_elim_labels_11_p_0(ll_backend__dupelim__ElimLabels_23, ll_backend__dupelim__ExInstrs0_27, ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_2, &ll_backend__dupelim__STATE_VARIABLE_LabelSeq_45_45, ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4, ll_backend__dupelim__Exemplar_22, ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_6, &ll_backend__dupelim__STATE_VARIABLE_ReplMap_46_46, &ll_backend__dupelim__UnifiedInstrs_32, ll_backend__dupelim__ExMaybeFallThrough_31, &ll_backend__dupelim__UnifiedMaybeFallThrough_33);
            }
            {
              ll_backend__dupelim__ExemplarInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 0) = ((MR_Box) (ll_backend__dupelim__ExLabel_25));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 1) = ((MR_Box) (ll_backend__dupelim__ExLabelInstr_26));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 2) = ((MR_Box) (ll_backend__dupelim__UnifiedInstrs_32));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 3) = ((MR_Box) (ll_backend__dupelim__ExNumInstrs_28));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 4) = ((MR_Box) (ll_backend__dupelim__ExFallInto_29));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 5) = ((MR_Box) (ll_backend__dupelim__ExSideLabels_30));
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 6) = ((MR_Box) (ll_backend__dupelim__UnifiedMaybeFallThrough_33));
            }
            {
              mercury__map__det_update_4_p_0(ll_backend__dupelim__TypeCtorInfo_51_51, ll_backend__dupelim__TypeCtorInfo_52_52, ((MR_Box) (ll_backend__dupelim__Exemplar_22)), ((MR_Box) (ll_backend__dupelim__ExemplarInfo_34)), ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4, &ll_backend__dupelim__STATE_VARIABLE_BlockMap_47_47);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__dupelim__HeadVar__1__tmp_copy_1 = ll_backend__dupelim__Clusters_18;
              MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0__tmp_copy_2 = ll_backend__dupelim__STATE_VARIABLE_LabelSeq_45_45;
              MR_Word ll_backend__dupelim__STATE_VARIABLE_BlockMap_0__tmp_copy_4 = ll_backend__dupelim__STATE_VARIABLE_BlockMap_47_47;
              MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_0__tmp_copy_6 = ll_backend__dupelim__STATE_VARIABLE_ReplMap_46_46;

              ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_6 = ll_backend__dupelim__STATE_VARIABLE_ReplMap_0__tmp_copy_6;
              ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4 = ll_backend__dupelim__STATE_VARIABLE_BlockMap_0__tmp_copy_4;
              ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_2 = ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0__tmp_copy_2;
              ll_backend__dupelim__HeadVar__1_1 = ll_backend__dupelim__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__dupelim__find_clusters_4_p_0_1(
  MR_Box ll_backend__dupelim__closure_arg,
  MR_Box ll_backend__dupelim__wrapper_arg_1)
{
  {
    MR_bool ll_backend__dupelim__succeeded;
    MR_Box ll_backend__dupelim__closure = ll_backend__dupelim__closure_arg;

    {
      ll_backend__dupelim__succeeded = ll_backend__dupelim__IntroducedFrom__pred__find_clusters__216__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__dupelim__wrapper_arg_1));
    }
    return ll_backend__dupelim__succeeded;
  }
}

static void MR_CALL 
ll_backend__dupelim__find_clusters_4_p_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__Fixed_2,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_Clusters_0_3,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_Clusters_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__dupelim__succeeded;

        if ((ll_backend__dupelim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__dupelim__STATE_VARIABLE_Clusters_4 = ll_backend__dupelim__STATE_VARIABLE_Clusters_0_3;
        else
          {
            MR_Word ll_backend__dupelim__Labels_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__dupelim__LabelsList_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__dupelim__STATE_VARIABLE_Clusters_29_29;
            MR_Word ll_backend__dupelim__FixedLabels_18;
            MR_Word ll_backend__dupelim__NonFixedLabels_19;
            MR_Word ll_backend__dupelim__FirstNonFixed_20;
            MR_Word ll_backend__dupelim__OtherNonFixed_21;
            MR_Word ll_backend__dupelim__TypeCtorInfo_33_33;
            MR_Word ll_backend__dupelim__IsFallenInto_16;
            MR_Word ll_backend__dupelim__V_27_27;
            MR_Word ll_backend__dupelim__V_13_13;
            MR_Word ll_backend__dupelim__V_14_14;
            MR_Word ll_backend__dupelim__V_15_15;

            ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__Labels_9)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__dupelim__succeeded)
              {
                ll_backend__dupelim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__Labels_9, (MR_Integer) 0)));
                ll_backend__dupelim__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__Labels_9, (MR_Integer) 1)));
                ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_27_27)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__dupelim__succeeded)
                  {
                    ll_backend__dupelim__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_27_27, (MR_Integer) 0)));
                    ll_backend__dupelim__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_27_27, (MR_Integer) 1)));
                    ll_backend__dupelim__TypeCtorInfo_33_33 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
                    {
                      ll_backend__dupelim__IsFallenInto_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__dupelim__IsFallenInto_16, 0) = ((MR_Box) (&ll_backend__dupelim_scalar_common_4[0]));
                      MR_hl_field(MR_mktag(0), ll_backend__dupelim__IsFallenInto_16, 1) = ((MR_Box) (ll_backend__dupelim__find_clusters_4_p_0_1));
                      MR_hl_field(MR_mktag(0), ll_backend__dupelim__IsFallenInto_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), ll_backend__dupelim__IsFallenInto_16, 3) = ((MR_Box) (ll_backend__dupelim__Fixed_2));
                    }
                    {
                      mercury__list__filter_4_p_0(ll_backend__dupelim__TypeCtorInfo_33_33, ll_backend__dupelim__IsFallenInto_16, ll_backend__dupelim__Labels_9, &ll_backend__dupelim__FixedLabels_18, &ll_backend__dupelim__NonFixedLabels_19);
                    }
                    ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__NonFixedLabels_19)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__dupelim__succeeded)
                      {
                        ll_backend__dupelim__FirstNonFixed_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__NonFixedLabels_19, (MR_Integer) 0)));
                        ll_backend__dupelim__OtherNonFixed_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__NonFixedLabels_19, (MR_Integer) 1)));
                      }
                  }
              }
            if (ll_backend__dupelim__succeeded)
              {
                MR_Word ll_backend__dupelim__Cluster_24;

                if ((ll_backend__dupelim__FixedLabels_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    ll_backend__dupelim__Cluster_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), ll_backend__dupelim__Cluster_24, 0) = ((MR_Box) (ll_backend__dupelim__FirstNonFixed_20));
                    MR_hl_field(MR_mktag(0), ll_backend__dupelim__Cluster_24, 1) = ((MR_Box) (ll_backend__dupelim__OtherNonFixed_21));
                  }
                else
                  {
                    MR_Word ll_backend__dupelim__ChosenLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__FixedLabels_18, (MR_Integer) 0)));
                    MR_Word ll_backend__dupelim__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__FixedLabels_18, (MR_Integer) 1)));

                    {
                      ll_backend__dupelim__Cluster_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__dupelim__Cluster_24, 0) = ((MR_Box) (ll_backend__dupelim__ChosenLabel_22));
                      MR_hl_field(MR_mktag(0), ll_backend__dupelim__Cluster_24, 1) = ((MR_Box) (ll_backend__dupelim__NonFixedLabels_19));
                    }
                  }
                {
                  ll_backend__dupelim__STATE_VARIABLE_Clusters_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__dupelim__STATE_VARIABLE_Clusters_29_29, 0) = ((MR_Box) (ll_backend__dupelim__Cluster_24));
                  MR_hl_field(MR_mktag(1), ll_backend__dupelim__STATE_VARIABLE_Clusters_29_29, 1) = ((MR_Box) (ll_backend__dupelim__STATE_VARIABLE_Clusters_0_3));
                }
              }
            else
              ll_backend__dupelim__STATE_VARIABLE_Clusters_29_29 = ll_backend__dupelim__STATE_VARIABLE_Clusters_0_3;
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__dupelim__HeadVar__1__tmp_copy_1 = ll_backend__dupelim__LabelsList_10;
              MR_Word ll_backend__dupelim__STATE_VARIABLE_Clusters_0__tmp_copy_3 = ll_backend__dupelim__STATE_VARIABLE_Clusters_29_29;

              ll_backend__dupelim__STATE_VARIABLE_Clusters_0_3 = ll_backend__dupelim__STATE_VARIABLE_Clusters_0__tmp_copy_3;
              ll_backend__dupelim__HeadVar__1_1 = ll_backend__dupelim__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__dupelim__add_pragma_pref_labels_3_p_0(
  MR_Word ll_backend__dupelim__Instr_4,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_FoldFixed_0_22,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_FoldFixed_23)
{
  {
    MR_bool ll_backend__dupelim__succeeded;
    MR_Word ll_backend__dupelim__Uinstr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__Instr_4, (MR_Integer) 0)));
    MR_String ll_backend__dupelim__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__Instr_4, (MR_Integer) 1)));
    MR_Word ll_backend__dupelim__MaybeFixedLabel_11;
    MR_Word ll_backend__dupelim__MaybeLayoutLabel_12;
    MR_Word ll_backend__dupelim__MaybeOnlyLayoutLabel_13;
    MR_Word ll_backend__dupelim__MaybeDefLabel_15;
    MR_Word ll_backend__dupelim__V_8_8;
    MR_Word ll_backend__dupelim__V_9_9;
    MR_Word ll_backend__dupelim__V_10_10;
    MR_Word ll_backend__dupelim__V_14_14;
    MR_Word ll_backend__dupelim__V_16_16;
    MR_Word ll_backend__dupelim__V_17_17;

    ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
    if (ll_backend__dupelim__succeeded)
      {
        ll_backend__dupelim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 1)));
        ll_backend__dupelim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 2)));
        ll_backend__dupelim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 3)));
        ll_backend__dupelim__MaybeFixedLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 4)));
        ll_backend__dupelim__MaybeLayoutLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 5)));
        ll_backend__dupelim__MaybeOnlyLayoutLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 6)));
        ll_backend__dupelim__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 7)));
        ll_backend__dupelim__MaybeDefLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 8)));
        ll_backend__dupelim__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 9)));
        ll_backend__dupelim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 10)));
        {
          MR_Word ll_backend__dupelim__STATE_VARIABLE_FoldFixed_24_24;
          MR_Word ll_backend__dupelim__STATE_VARIABLE_FoldFixed_25_25;
          MR_Word ll_backend__dupelim__STATE_VARIABLE_FoldFixed_26_26;

          if ((ll_backend__dupelim__MaybeFixedLabel_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ll_backend__dupelim__STATE_VARIABLE_FoldFixed_24_24 = ll_backend__dupelim__STATE_VARIABLE_FoldFixed_0_22;
          else
            {
              MR_Word ll_backend__dupelim__FixedLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFixedLabel_11, (MR_Integer) 0)));

              {
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__dupelim__FixedLabel_18)), ll_backend__dupelim__STATE_VARIABLE_FoldFixed_0_22, &ll_backend__dupelim__STATE_VARIABLE_FoldFixed_24_24);
              }
            }
          if ((ll_backend__dupelim__MaybeLayoutLabel_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ll_backend__dupelim__STATE_VARIABLE_FoldFixed_25_25 = ll_backend__dupelim__STATE_VARIABLE_FoldFixed_24_24;
          else
            {
              MR_Word ll_backend__dupelim__LayoutLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeLayoutLabel_12, (MR_Integer) 0)));

              {
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__dupelim__LayoutLabel_19)), ll_backend__dupelim__STATE_VARIABLE_FoldFixed_24_24, &ll_backend__dupelim__STATE_VARIABLE_FoldFixed_25_25);
              }
            }
          if ((ll_backend__dupelim__MaybeOnlyLayoutLabel_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ll_backend__dupelim__STATE_VARIABLE_FoldFixed_26_26 = ll_backend__dupelim__STATE_VARIABLE_FoldFixed_25_25;
          else
            {
              MR_Word ll_backend__dupelim__OnlyLayoutLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeOnlyLayoutLabel_13, (MR_Integer) 0)));

              {
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__dupelim__OnlyLayoutLabel_20)), ll_backend__dupelim__STATE_VARIABLE_FoldFixed_25_25, &ll_backend__dupelim__STATE_VARIABLE_FoldFixed_26_26);
              }
            }
          if ((ll_backend__dupelim__MaybeDefLabel_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *ll_backend__dupelim__STATE_VARIABLE_FoldFixed_23 = ll_backend__dupelim__STATE_VARIABLE_FoldFixed_26_26;
          else
            {
              MR_Word ll_backend__dupelim__DefLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeDefLabel_15, (MR_Integer) 0)));

              {
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__dupelim__DefLabel_21)), ll_backend__dupelim__STATE_VARIABLE_FoldFixed_26_26, ll_backend__dupelim__STATE_VARIABLE_FoldFixed_23);
              }
            }
        }
      }
    else
      *ll_backend__dupelim__STATE_VARIABLE_FoldFixed_23 = ll_backend__dupelim__STATE_VARIABLE_FoldFixed_0_22;
  }
}

static void MR_CALL 
ll_backend__dupelim__dupelim_build_maps_6_p_0_1(
  MR_Box ll_backend__dupelim__closure_arg,
  MR_Box ll_backend__dupelim__wrapper_arg_1,
  MR_Box ll_backend__dupelim__wrapper_arg_2,
  MR_Box * ll_backend__dupelim__wrapper_arg_3)
{
  {
    MR_Box ll_backend__dupelim__closure = ll_backend__dupelim__closure_arg;
    MR_Word ll_backend__dupelim__conv1_STATE_VARIABLE_FoldFixed_23;

    {
      ll_backend__dupelim__add_pragma_pref_labels_3_p_0(((MR_Word) ll_backend__dupelim__wrapper_arg_1), ((MR_Word) ll_backend__dupelim__wrapper_arg_2), &ll_backend__dupelim__conv1_STATE_VARIABLE_FoldFixed_23);
    }
    *ll_backend__dupelim__wrapper_arg_3 = ((MR_Box) (ll_backend__dupelim__conv1_STATE_VARIABLE_FoldFixed_23));
  }
}

static void MR_CALL 
ll_backend__dupelim__dupelim_build_maps_6_p_0(
  MR_Word ll_backend__dupelim__HeadVar__1_1,
  MR_Word ll_backend__dupelim__BlockMap_2,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_StdMap_0_3,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_StdMap_4,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_Fixed_0_5,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_Fixed_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__dupelim__succeeded;

        if ((ll_backend__dupelim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__dupelim__STATE_VARIABLE_Fixed_6 = ll_backend__dupelim__STATE_VARIABLE_Fixed_0_5;
            *ll_backend__dupelim__STATE_VARIABLE_StdMap_4 = ll_backend__dupelim__STATE_VARIABLE_StdMap_0_3;
          }
        else
          {
            MR_Word ll_backend__dupelim__TypeCtorInfo_46_46 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
            MR_Word ll_backend__dupelim__Label_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__dupelim__Labels_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__dupelim__BlockInfo_19;
            MR_Word ll_backend__dupelim__Instrs_22;
            MR_Integer ll_backend__dupelim__NumInstrs_23;
            MR_Word ll_backend__dupelim__MaybeFallThrough_26;
            MR_Word ll_backend__dupelim__STATE_VARIABLE_StdMap_40_40;
            MR_Word ll_backend__dupelim__STATE_VARIABLE_Fixed_41_41;
            MR_Word ll_backend__dupelim__STATE_VARIABLE_Fixed_43_43;
            MR_Box ll_backend__dupelim__conv0_BlockInfo_19;
            MR_Word ll_backend__dupelim__V_20_20;
            MR_Word ll_backend__dupelim__V_21_21;
            MR_Word ll_backend__dupelim__V_24_24;
            MR_Word ll_backend__dupelim__V_25_25;
            MR_Box ll_backend__dupelim__conv2_STATE_VARIABLE_Fixed_43_43;

            {
              mercury__map__lookup_3_p_0(ll_backend__dupelim__TypeCtorInfo_46_46, (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0, ll_backend__dupelim__BlockMap_2, ((MR_Box) (ll_backend__dupelim__Label_14)), &ll_backend__dupelim__conv0_BlockInfo_19);
            }
            ll_backend__dupelim__BlockInfo_19 = ((MR_Word) ll_backend__dupelim__conv0_BlockInfo_19);
            ll_backend__dupelim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 0)));
            ll_backend__dupelim__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 1)));
            ll_backend__dupelim__Instrs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 2)));
            ll_backend__dupelim__NumInstrs_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 3)));
            ll_backend__dupelim__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 4)));
            ll_backend__dupelim__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 5)));
            ll_backend__dupelim__MaybeFallThrough_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 6)));
            ll_backend__dupelim__succeeded = (ll_backend__dupelim__NumInstrs_23 < (MR_Integer) 10);
            if (ll_backend__dupelim__succeeded)
              {
                MR_Word ll_backend__dupelim__TypeInfo_48_48;
                MR_Word ll_backend__dupelim__TypeInfo_49_49;
                MR_Word ll_backend__dupelim__StdInstrs_27;
                MR_Word ll_backend__dupelim__MaybeOldCluster_28;
                MR_Word ll_backend__dupelim__V_36_36;
                MR_Word ll_backend__dupelim__STATE_VARIABLE_StdMap_37_37;
                MR_Word ll_backend__dupelim__Uinstrs1_58;

                {
                  ll_backend__dupelim__standardize_instrs_2_p_0(ll_backend__dupelim__Instrs_22, &ll_backend__dupelim__Uinstrs1_58);
                }
                if ((ll_backend__dupelim__MaybeFallThrough_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  ll_backend__dupelim__StdInstrs_27 = ll_backend__dupelim__Uinstrs1_58;
                else
                  {
                    MR_Word ll_backend__dupelim__Label_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFallThrough_26, (MR_Integer) 0)));
                    MR_Word ll_backend__dupelim__Goto_60;
                    MR_Word ll_backend__dupelim__V_61_61;
                    MR_Word ll_backend__dupelim__V_62_62;

                    {
                      ll_backend__dupelim__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_61_61, 0) = ((MR_Box) (ll_backend__dupelim__Label_59));
                    }
                    {
                      ll_backend__dupelim__Goto_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__Goto_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__Goto_60, 1) = ((MR_Box) (ll_backend__dupelim__V_61_61));
                    }
                    {
                      ll_backend__dupelim__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_62_62, 0) = ((MR_Box) (ll_backend__dupelim__Goto_60));
                      MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ll_backend__dupelim__StdInstrs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instr_0, ll_backend__dupelim__Uinstrs1_58, ll_backend__dupelim__V_62_62);
                    }
                  }
                {
                  ll_backend__dupelim__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_36_36, 0) = ((MR_Box) (ll_backend__dupelim__Label_14));
                  MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                ll_backend__dupelim__TypeInfo_48_48 = (MR_Word) &ll_backend__dupelim_scalar_common_1[0];
                ll_backend__dupelim__TypeInfo_49_49 = (MR_Word) &ll_backend__dupelim_scalar_common_1[1];
                {
                  mercury__map__search_insert_5_p_0(ll_backend__dupelim__TypeInfo_48_48, ll_backend__dupelim__TypeInfo_49_49, ((MR_Box) (ll_backend__dupelim__StdInstrs_27)), ((MR_Box) (ll_backend__dupelim__V_36_36)), &ll_backend__dupelim__MaybeOldCluster_28, ll_backend__dupelim__STATE_VARIABLE_StdMap_0_3, &ll_backend__dupelim__STATE_VARIABLE_StdMap_37_37);
                }
                if ((ll_backend__dupelim__MaybeOldCluster_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  ll_backend__dupelim__STATE_VARIABLE_StdMap_40_40 = ll_backend__dupelim__STATE_VARIABLE_StdMap_37_37;
                else
                  {
                    MR_Word ll_backend__dupelim__OldCluster_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeOldCluster_28, (MR_Integer) 0)));
                    MR_Word ll_backend__dupelim__V_39_39;

                    {
                      ll_backend__dupelim__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_39_39, 0) = ((MR_Box) (ll_backend__dupelim__Label_14));
                      MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_39_39, 1) = ((MR_Box) (ll_backend__dupelim__OldCluster_29));
                    }
                    {
                      mercury__map__det_update_4_p_0(ll_backend__dupelim__TypeInfo_48_48, ll_backend__dupelim__TypeInfo_49_49, ((MR_Box) (ll_backend__dupelim__StdInstrs_27)), ((MR_Box) (ll_backend__dupelim__V_39_39)), ll_backend__dupelim__STATE_VARIABLE_StdMap_37_37, &ll_backend__dupelim__STATE_VARIABLE_StdMap_40_40);
                    }
                  }
              }
            else
              ll_backend__dupelim__STATE_VARIABLE_StdMap_40_40 = ll_backend__dupelim__STATE_VARIABLE_StdMap_0_3;
            if ((ll_backend__dupelim__MaybeFallThrough_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              ll_backend__dupelim__STATE_VARIABLE_Fixed_41_41 = ll_backend__dupelim__STATE_VARIABLE_Fixed_0_5;
            else
              {
                MR_Word ll_backend__dupelim__FallIntoLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFallThrough_26, (MR_Integer) 0)));

                {
                  mercury__set__insert_3_p_0(ll_backend__dupelim__TypeCtorInfo_46_46, ((MR_Box) (ll_backend__dupelim__FallIntoLabel_30)), ll_backend__dupelim__STATE_VARIABLE_Fixed_0_5, &ll_backend__dupelim__STATE_VARIABLE_Fixed_41_41);
                }
              }
            {
              mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, (MR_Word) &ll_backend__dupelim_scalar_common_1[2], (MR_Word) &ll_backend__dupelim_scalar_common_2[1], ll_backend__dupelim__Instrs_22, ((MR_Box) (ll_backend__dupelim__STATE_VARIABLE_Fixed_41_41)), &ll_backend__dupelim__conv2_STATE_VARIABLE_Fixed_43_43);
            }
            ll_backend__dupelim__STATE_VARIABLE_Fixed_43_43 = ((MR_Word) ll_backend__dupelim__conv2_STATE_VARIABLE_Fixed_43_43);
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__dupelim__HeadVar__1__tmp_copy_1 = ll_backend__dupelim__Labels_15;
              MR_Word ll_backend__dupelim__STATE_VARIABLE_StdMap_0__tmp_copy_3 = ll_backend__dupelim__STATE_VARIABLE_StdMap_40_40;
              MR_Word ll_backend__dupelim__STATE_VARIABLE_Fixed_0__tmp_copy_5 = ll_backend__dupelim__STATE_VARIABLE_Fixed_43_43;

              ll_backend__dupelim__STATE_VARIABLE_Fixed_0_5 = ll_backend__dupelim__STATE_VARIABLE_Fixed_0__tmp_copy_5;
              ll_backend__dupelim__STATE_VARIABLE_StdMap_0_3 = ll_backend__dupelim__STATE_VARIABLE_StdMap_0__tmp_copy_3;
              ll_backend__dupelim__HeadVar__1_1 = ll_backend__dupelim__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__dupelim__dupelim_main_5_p_0(
  MR_Word ll_backend__dupelim__ProcLabel_6,
  MR_Word ll_backend__dupelim__STATE_VARIABLE_C_0_29,
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_C_30,
  MR_Word ll_backend__dupelim__Instrs0_8,
  MR_Word * ll_backend__dupelim__Instrs_9)
{
  {
    MR_bool ll_backend__dupelim__succeeded;
    MR_Word ll_backend__dupelim__TypeInfo_35_35;
    MR_Word ll_backend__dupelim__TypeInfo_36_36;
    MR_Word ll_backend__dupelim__TypeCtorInfo_37_37;
    MR_Word ll_backend__dupelim__Comments_10;
    MR_Word ll_backend__dupelim__LabelSeq0_12;
    MR_Word ll_backend__dupelim__BlockMap0_13;
    MR_Word ll_backend__dupelim__StdMap0_14;
    MR_Word ll_backend__dupelim__Fixed0_15;
    MR_Word ll_backend__dupelim__StdMap_16;
    MR_Word ll_backend__dupelim__Fixed_17;
    MR_Word ll_backend__dupelim__StdList_18;
    MR_Word ll_backend__dupelim__Clusters_19;
    MR_Word ll_backend__dupelim___NewLabels_11;

    {
      ll_backend__basic_block__create_basic_blocks_8_p_0(ll_backend__dupelim__Instrs0_8, &ll_backend__dupelim__Comments_10, ll_backend__dupelim__ProcLabel_6, ll_backend__dupelim__STATE_VARIABLE_C_0_29, ll_backend__dupelim__STATE_VARIABLE_C_30, &ll_backend__dupelim___NewLabels_11, &ll_backend__dupelim__LabelSeq0_12, &ll_backend__dupelim__BlockMap0_13);
    }
    ll_backend__dupelim__TypeInfo_35_35 = (MR_Word) &ll_backend__dupelim_scalar_common_1[0];
    ll_backend__dupelim__TypeInfo_36_36 = (MR_Word) &ll_backend__dupelim_scalar_common_1[1];
    {
      mercury__map__init_1_p_0(ll_backend__dupelim__TypeInfo_35_35, ll_backend__dupelim__TypeInfo_36_36, &ll_backend__dupelim__StdMap0_14);
    }
    ll_backend__dupelim__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
    {
      mercury__set__init_1_p_0(ll_backend__dupelim__TypeCtorInfo_37_37, &ll_backend__dupelim__Fixed0_15);
    }
    {
      ll_backend__dupelim__dupelim_build_maps_6_p_0(ll_backend__dupelim__LabelSeq0_12, ll_backend__dupelim__BlockMap0_13, ll_backend__dupelim__StdMap0_14, &ll_backend__dupelim__StdMap_16, ll_backend__dupelim__Fixed0_15, &ll_backend__dupelim__Fixed_17);
    }
    {
      mercury__map__values_2_p_0(ll_backend__dupelim__TypeInfo_35_35, ll_backend__dupelim__TypeInfo_36_36, ll_backend__dupelim__StdMap_16, &ll_backend__dupelim__StdList_18);
    }
    {
      ll_backend__dupelim__find_clusters_4_p_0(ll_backend__dupelim__StdList_18, ll_backend__dupelim__Fixed_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__dupelim__Clusters_19);
    }
    if ((ll_backend__dupelim__Clusters_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__dupelim__Instrs_9 = ll_backend__dupelim__Instrs0_8;
    else
      {
        MR_Word ll_backend__dupelim__ReplMap0_22;
        MR_Word ll_backend__dupelim__LabelSeq_23;
        MR_Word ll_backend__dupelim__BlockMap_24;
        MR_Word ll_backend__dupelim__ReplMap_25;
        MR_Word ll_backend__dupelim__Instrs1_26;
        MR_Word ll_backend__dupelim__Instrs2_28;
        MR_Integer ll_backend__dupelim__V_27_27;

        {
          mercury__map__init_1_p_0(ll_backend__dupelim__TypeCtorInfo_37_37, ll_backend__dupelim__TypeCtorInfo_37_37, &ll_backend__dupelim__ReplMap0_22);
        }
        {
          ll_backend__dupelim__process_clusters_7_p_0(ll_backend__dupelim__Clusters_19, ll_backend__dupelim__LabelSeq0_12, &ll_backend__dupelim__LabelSeq_23, ll_backend__dupelim__BlockMap0_13, &ll_backend__dupelim__BlockMap_24, ll_backend__dupelim__ReplMap0_22, &ll_backend__dupelim__ReplMap_25);
        }
        {
          ll_backend__basic_block__flatten_basic_blocks_4_p_0(ll_backend__dupelim__LabelSeq_23, ll_backend__dupelim__BlockMap_24, &ll_backend__dupelim__Instrs1_26, &ll_backend__dupelim__V_27_27);
        }
        {
          ll_backend__opt_util__replace_labels_instruction_list_5_p_0(ll_backend__dupelim__Instrs1_26, &ll_backend__dupelim__Instrs2_28, ll_backend__dupelim__ReplMap_25, (MR_Integer) 1, (MR_Integer) 0);
        }
        {
          *ll_backend__dupelim__Instrs_9 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__dupelim__Comments_10, ll_backend__dupelim__Instrs2_28);
        }
      }
  }
}

void mercury__ll_backend__dupelim__init(void)
{
}

void mercury__ll_backend__dupelim__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__dupelim__ll_backend__dupelim__type_ctor_info_cluster_0);
	MR_register_type_ctor_info(&ll_backend__dupelim__ll_backend__dupelim__type_ctor_info_std_map_0);
}

void mercury__ll_backend__dupelim__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__dupelim__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.dupelim. */
