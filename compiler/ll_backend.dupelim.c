/*
** Automatically generated from `dupelim.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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




#line 146 "ll_backend.dupelim.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dupelim__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0;

#line 149 "ll_backend.dupelim.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

#line 152 "ll_backend.dupelim.c"
static const MR_PseudoTypeInfo ll_backend__dupelim__ll_backend__dupelim__field_types_cluster_0_0[2];

#line 155 "ll_backend.dupelim.c"
static const MR_DuFunctorDesc ll_backend__dupelim__ll_backend__dupelim__du_functor_desc_cluster_0_0;

#line 158 "ll_backend.dupelim.c"
static const MR_DuFunctorDescPtr ll_backend__dupelim__ll_backend__dupelim__du_stag_ordered_cluster_0_0[1];

#line 161 "ll_backend.dupelim.c"
static const MR_DuPtagLayout ll_backend__dupelim__ll_backend__dupelim__du_ptag_ordered_cluster_0[1];

#line 164 "ll_backend.dupelim.c"
static const MR_DuFunctorDescPtr ll_backend__dupelim__ll_backend__dupelim__du_name_ordered_cluster_0[1];

#line 167 "ll_backend.dupelim.c"
static const MR_Integer ll_backend__dupelim__ll_backend__dupelim__functor_number_map_cluster_0[1];

#line 170 "ll_backend.dupelim.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_instr_0;

#line 173 "ll_backend.dupelim.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__dupelim__tree234__ti_tree234_2list__ti_list_1ll_backend__llds__type_ctor_info_instr_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0;

#line 176 "ll_backend.dupelim.c"
static MR_bool MR_CALL 
ll_backend__dupelim____Unify____cluster_0_0_10001(
#line 179 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_1,
#line 181 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_2);

#line 184 "ll_backend.dupelim.c"
static void MR_CALL 
ll_backend__dupelim____Compare____cluster_0_0_10001(
#line 187 "ll_backend.dupelim.c"
  MR_Box * ll_backend__dupelim__wrapper_arg_1,
#line 189 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_2,
#line 191 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_3);

#line 194 "ll_backend.dupelim.c"
static MR_bool MR_CALL 
ll_backend__dupelim____Unify____std_map_0_0_10001(
#line 197 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_1,
#line 199 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_2);

#line 202 "ll_backend.dupelim.c"
static void MR_CALL 
ll_backend__dupelim____Compare____std_map_0_0_10001(
#line 205 "ll_backend.dupelim.c"
  MR_Box * ll_backend__dupelim__wrapper_arg_1,
#line 207 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_2,
#line 209 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_3);

#line 285 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__285__1_2_p_0(
#line 285 "dupelim.m"
  MR_Word ll_backend__dupelim__ElimLabel_24,
#line 285 "dupelim.m"
  MR_Word ll_backend__dupelim__ElimLabel2_34);

#line 253 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__process_clusters__253__1_2_p_0(
#line 253 "dupelim.m"
  MR_Word ll_backend__dupelim__Exemplar_22,
#line 253 "dupelim.m"
  MR_Word ll_backend__dupelim__ExLabel_25);

#line 216 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__find_clusters__216__1_2_p_0(
#line 216 "dupelim.m"
  MR_Word ll_backend__dupelim__Fixed_2,
#line 216 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__2_28);

#line 79 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim____Compare____std_map_0_0(
#line 79 "dupelim.m"
  MR_Word * ll_backend__dupelim__HeadVar__1_1,
#line 79 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__2_2,
#line 79 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__3_3);

#line 79 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim____Unify____std_map_0_0(
#line 79 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 79 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__2_2);

#line 87 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim____Compare____cluster_0_0(
#line 87 "dupelim.m"
  MR_Word * ll_backend__dupelim__HeadVar__1_1,
#line 87 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__2_2,
#line 87 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__3_3);

#line 87 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim____Unify____cluster_0_0(
#line 87 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 87 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__2_2);

#line 975 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_rval_3_p_0(
#line 975 "dupelim.m"
  MR_Word ll_backend__dupelim__RvalA_4,
#line 975 "dupelim.m"
  MR_Word ll_backend__dupelim__RvalB_5,
#line 975 "dupelim.m"
  MR_Word * ll_backend__dupelim__Rval_6);

#line 932 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_lval_3_p_0(
#line 932 "dupelim.m"
  MR_Word ll_backend__dupelim__LvalA_4,
#line 932 "dupelim.m"
  MR_Word ll_backend__dupelim__LvalB_5,
#line 932 "dupelim.m"
  MR_Word * ll_backend__dupelim__Lval_6);

#line 658 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__most_specific_instr_3_p_0(
#line 658 "dupelim.m"
  MR_Word ll_backend__dupelim__InstrA_4,
#line 658 "dupelim.m"
  MR_Word ll_backend__dupelim__InstrB_5,
#line 658 "dupelim.m"
  MR_Word * ll_backend__dupelim__MaybeInstr_6);

#line 604 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_instrs_3_p_0(
#line 604 "dupelim.m"
  MR_Word ll_backend__dupelim__InstrsA_4,
#line 604 "dupelim.m"
  MR_Word ll_backend__dupelim__InstrsB_5,
#line 604 "dupelim.m"
  MR_Word * ll_backend__dupelim__Instrs_6);

#line 583 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_block_6_p_0(
#line 583 "dupelim.m"
  MR_Word ll_backend__dupelim__Instrs1_7,
#line 583 "dupelim.m"
  MR_Word ll_backend__dupelim__MaybeFallThrough1_8,
#line 583 "dupelim.m"
  MR_Word ll_backend__dupelim__Instrs2_9,
#line 583 "dupelim.m"
  MR_Word ll_backend__dupelim__MaybeFallThrough2_10,
#line 583 "dupelim.m"
  MR_Word * ll_backend__dupelim__Instrs_11,
#line 583 "dupelim.m"
  MR_Word * ll_backend__dupelim__MaybeFallThrough_12);

#line 524 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__standardize_rval_2_p_0(
#line 524 "dupelim.m"
  MR_Word ll_backend__dupelim__Rval0_3,
#line 524 "dupelim.m"
  MR_Word * ll_backend__dupelim__Rval_4);

#line 489 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__standardize_lval_2_p_0(
#line 489 "dupelim.m"
  MR_Word ll_backend__dupelim__Lval0_3,
#line 489 "dupelim.m"
  MR_Word * ll_backend__dupelim__Lval_4);

#line 341 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__standardize_instr_2_p_0(
#line 341 "dupelim.m"
  MR_Word ll_backend__dupelim__Instr0_3,
#line 341 "dupelim.m"
  MR_Word * ll_backend__dupelim__Instr_4);

#line 327 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__standardize_instrs_2_p_0(
#line 327 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 327 "dupelim.m"
  MR_Word * ll_backend__dupelim__HeadVar__2_2);

#line 285 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__process_elim_labels_11_p_0_1(
#line 285 "dupelim.m"
  MR_Box ll_backend__dupelim__closure_arg);

#line 273 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__process_elim_labels_11_p_0(
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__2_2,
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_3,
#line 273 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_LabelSeq_4,
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__BlockMap_5,
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__Exemplar_6,
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_7,
#line 273 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_ReplMap_8,
#line 273 "dupelim.m"
  MR_Word * ll_backend__dupelim__Instrs_9,
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0_10,
#line 273 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_11);

#line 253 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__process_clusters_7_p_0_1(
#line 253 "dupelim.m"
  MR_Box ll_backend__dupelim__closure_arg);

#line 243 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__process_clusters_7_p_0(
#line 243 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 243 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_2,
#line 243 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_LabelSeq_3,
#line 243 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4,
#line 243 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_BlockMap_5,
#line 243 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_6,
#line 243 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_ReplMap_7);

#line 216 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__find_clusters_4_p_0_1(
#line 216 "dupelim.m"
  MR_Box ll_backend__dupelim__closure_arg,
#line 216 "dupelim.m"
  MR_Box ll_backend__dupelim__wrapper_arg_1);

#line 206 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__find_clusters_4_p_0(
#line 206 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 206 "dupelim.m"
  MR_Word ll_backend__dupelim__Fixed_2,
#line 206 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_Clusters_0_3,
#line 206 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_Clusters_4);

#line 156 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__add_pragma_pref_labels_3_p_0(
#line 156 "dupelim.m"
  MR_Word ll_backend__dupelim__Instr_4,
#line 156 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_FoldFixed_0_22,
#line 156 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_FoldFixed_23);

#line 145 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__dupelim_build_maps_6_p_0_1(
#line 145 "dupelim.m"
  MR_Box ll_backend__dupelim__closure_arg,
#line 145 "dupelim.m"
  MR_Box ll_backend__dupelim__wrapper_arg_1,
#line 145 "dupelim.m"
  MR_Box ll_backend__dupelim__wrapper_arg_2,
#line 145 "dupelim.m"
  MR_Box * ll_backend__dupelim__wrapper_arg_3);

#line 120 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__dupelim_build_maps_6_p_0(
#line 120 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 120 "dupelim.m"
  MR_Word ll_backend__dupelim__BlockMap_2,
#line 120 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_StdMap_0_3,
#line 120 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_StdMap_4,
#line 120 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_Fixed_0_5,
#line 120 "dupelim.m"
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



#line 577 "ll_backend.dupelim.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__dupelim__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 585 "ll_backend.dupelim.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 593 "ll_backend.dupelim.c"
static const MR_PseudoTypeInfo ll_backend__dupelim__ll_backend__dupelim__field_types_cluster_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_label_0
};

#line 599 "ll_backend.dupelim.c"
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
  NULL
};

#line 614 "ll_backend.dupelim.c"
static const MR_DuFunctorDescPtr ll_backend__dupelim__ll_backend__dupelim__du_stag_ordered_cluster_0_0[1] = {
  &ll_backend__dupelim__ll_backend__dupelim__du_functor_desc_cluster_0_0
};

#line 619 "ll_backend.dupelim.c"
static const MR_DuPtagLayout ll_backend__dupelim__ll_backend__dupelim__du_ptag_ordered_cluster_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__dupelim__ll_backend__dupelim__du_stag_ordered_cluster_0_0
  }
};

#line 628 "ll_backend.dupelim.c"
static const MR_DuFunctorDescPtr ll_backend__dupelim__ll_backend__dupelim__du_name_ordered_cluster_0[1] = {
  &ll_backend__dupelim__ll_backend__dupelim__du_functor_desc_cluster_0_0
};

#line 633 "ll_backend.dupelim.c"
static const MR_Integer ll_backend__dupelim__ll_backend__dupelim__functor_number_map_cluster_0[1] = {
  (MR_Integer) 0
};

#line 638 "ll_backend.dupelim.c"
const MR_TypeCtorInfo_Struct ll_backend__dupelim__ll_backend__dupelim__type_ctor_info_cluster_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__dupelim____Unify____cluster_0_0_10001)),
  ((MR_Box) (ll_backend__dupelim____Compare____cluster_0_0_10001)),
  (MR_String) "ll_backend.dupelim",
  (MR_String) "cluster",
  {
    ll_backend__dupelim__ll_backend__dupelim__du_name_ordered_cluster_0
  },
  {
    ll_backend__dupelim__ll_backend__dupelim__du_ptag_ordered_cluster_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__dupelim__ll_backend__dupelim__functor_number_map_cluster_0
};

#line 659 "ll_backend.dupelim.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_instr_0
  }
};

#line 667 "ll_backend.dupelim.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__dupelim__tree234__ti_tree234_2list__ti_list_1ll_backend__llds__type_ctor_info_instr_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_instr_0,
    (MR_TypeInfo) &ll_backend__dupelim__list__ti_list_1ll_backend__llds__type_ctor_info_label_0
  }
};

#line 676 "ll_backend.dupelim.c"
const MR_TypeCtorInfo_Struct ll_backend__dupelim__ll_backend__dupelim__type_ctor_info_std_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__dupelim____Unify____std_map_0_0_10001)),
  ((MR_Box) (ll_backend__dupelim____Compare____std_map_0_0_10001)),
  (MR_String) "ll_backend.dupelim",
  (MR_String) "std_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__dupelim__tree234__ti_tree234_2list__ti_list_1ll_backend__llds__type_ctor_info_instr_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 697 "ll_backend.dupelim.c"
static MR_bool MR_CALL 
ll_backend__dupelim____Unify____cluster_0_0_10001(
#line 700 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_1,
#line 702 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_2)
#line 704 "ll_backend.dupelim.c"
{
#line 706 "ll_backend.dupelim.c"
  {
#line 708 "ll_backend.dupelim.c"
    MR_bool ll_backend__dupelim__succeeded;

#line 711 "ll_backend.dupelim.c"
    {
#line 713 "ll_backend.dupelim.c"
      ll_backend__dupelim__succeeded = ll_backend__dupelim____Unify____cluster_0_0(((MR_Word) ll_backend__dupelim__wrapper_arg_1), ((MR_Word) ll_backend__dupelim__wrapper_arg_2));
    }
#line 716 "ll_backend.dupelim.c"
    return ll_backend__dupelim__succeeded;
#line 718 "ll_backend.dupelim.c"
  }
#line 720 "ll_backend.dupelim.c"
}

#line 723 "ll_backend.dupelim.c"
static void MR_CALL 
ll_backend__dupelim____Compare____cluster_0_0_10001(
#line 726 "ll_backend.dupelim.c"
  MR_Box * ll_backend__dupelim__wrapper_arg_1,
#line 728 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_2,
#line 730 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_3)
#line 732 "ll_backend.dupelim.c"
{
#line 734 "ll_backend.dupelim.c"
  {
#line 736 "ll_backend.dupelim.c"
    MR_Word ll_backend__dupelim__conv0_HeadVar__1_1;

#line 739 "ll_backend.dupelim.c"
    {
#line 741 "ll_backend.dupelim.c"
      ll_backend__dupelim____Compare____cluster_0_0(&ll_backend__dupelim__conv0_HeadVar__1_1, ((MR_Word) ll_backend__dupelim__wrapper_arg_2), ((MR_Word) ll_backend__dupelim__wrapper_arg_3));
    }
#line 744 "ll_backend.dupelim.c"
    *ll_backend__dupelim__wrapper_arg_1 = ((MR_Box) (ll_backend__dupelim__conv0_HeadVar__1_1));
#line 746 "ll_backend.dupelim.c"
  }
#line 748 "ll_backend.dupelim.c"
}

#line 751 "ll_backend.dupelim.c"
static MR_bool MR_CALL 
ll_backend__dupelim____Unify____std_map_0_0_10001(
#line 754 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_1,
#line 756 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_2)
#line 758 "ll_backend.dupelim.c"
{
#line 760 "ll_backend.dupelim.c"
  {
#line 762 "ll_backend.dupelim.c"
    MR_bool ll_backend__dupelim__succeeded;

#line 765 "ll_backend.dupelim.c"
    {
#line 767 "ll_backend.dupelim.c"
      ll_backend__dupelim__succeeded = ll_backend__dupelim____Unify____std_map_0_0(((MR_Word) ll_backend__dupelim__wrapper_arg_1), ((MR_Word) ll_backend__dupelim__wrapper_arg_2));
    }
#line 770 "ll_backend.dupelim.c"
    return ll_backend__dupelim__succeeded;
#line 772 "ll_backend.dupelim.c"
  }
#line 774 "ll_backend.dupelim.c"
}

#line 777 "ll_backend.dupelim.c"
static void MR_CALL 
ll_backend__dupelim____Compare____std_map_0_0_10001(
#line 780 "ll_backend.dupelim.c"
  MR_Box * ll_backend__dupelim__wrapper_arg_1,
#line 782 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_2,
#line 784 "ll_backend.dupelim.c"
  MR_Box ll_backend__dupelim__wrapper_arg_3)
#line 786 "ll_backend.dupelim.c"
{
#line 788 "ll_backend.dupelim.c"
  {
#line 790 "ll_backend.dupelim.c"
    MR_Word ll_backend__dupelim__conv0_HeadVar__1_1;

#line 793 "ll_backend.dupelim.c"
    {
#line 795 "ll_backend.dupelim.c"
      ll_backend__dupelim____Compare____std_map_0_0(&ll_backend__dupelim__conv0_HeadVar__1_1, ((MR_Word) ll_backend__dupelim__wrapper_arg_2), ((MR_Word) ll_backend__dupelim__wrapper_arg_3));
    }
#line 798 "ll_backend.dupelim.c"
    *ll_backend__dupelim__wrapper_arg_1 = ((MR_Box) (ll_backend__dupelim__conv0_HeadVar__1_1));
#line 800 "ll_backend.dupelim.c"
  }
#line 802 "ll_backend.dupelim.c"
}

#line 285 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__285__1_2_p_0(
#line 285 "dupelim.m"
  MR_Word ll_backend__dupelim__ElimLabel_24,
#line 285 "dupelim.m"
  MR_Word ll_backend__dupelim__ElimLabel2_34)
#line 285 "dupelim.m"
{
#line 285 "dupelim.m"
  {
#line 285 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;

#line 285 "dupelim.m"
    {
#line 285 "dupelim.m"
      return ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__ElimLabel_24, ll_backend__dupelim__ElimLabel2_34);
    }
#line 285 "dupelim.m"
    return ll_backend__dupelim__succeeded;
#line 285 "dupelim.m"
  }
#line 285 "dupelim.m"
}

#line 253 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__process_clusters__253__1_2_p_0(
#line 253 "dupelim.m"
  MR_Word ll_backend__dupelim__Exemplar_22,
#line 253 "dupelim.m"
  MR_Word ll_backend__dupelim__ExLabel_25)
#line 253 "dupelim.m"
{
#line 253 "dupelim.m"
  {
#line 253 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;

#line 253 "dupelim.m"
    {
#line 253 "dupelim.m"
      return ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__Exemplar_22, ll_backend__dupelim__ExLabel_25);
    }
#line 253 "dupelim.m"
    return ll_backend__dupelim__succeeded;
#line 253 "dupelim.m"
  }
#line 253 "dupelim.m"
}

#line 216 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__IntroducedFrom__pred__find_clusters__216__1_2_p_0(
#line 216 "dupelim.m"
  MR_Word ll_backend__dupelim__Fixed_2,
#line 216 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__2_28)
#line 216 "dupelim.m"
{
#line 216 "dupelim.m"
  {
#line 216 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;

#line 217 "dupelim.m"
    {
#line 217 "dupelim.m"
      return ll_backend__dupelim__succeeded = mercury__set__member_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__dupelim__HeadVar__2_28)), ll_backend__dupelim__Fixed_2);
    }
#line 216 "dupelim.m"
    return ll_backend__dupelim__succeeded;
#line 216 "dupelim.m"
  }
#line 216 "dupelim.m"
}

#line 79 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim____Compare____std_map_0_0(
#line 79 "dupelim.m"
  MR_Word * ll_backend__dupelim__HeadVar__1_1,
#line 79 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__2_2,
#line 79 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__3_3)
#line 79 "dupelim.m"
{
#line 79 "dupelim.m"
  {
#line 79 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;
#line 79 "dupelim.m"
    MR_Word ll_backend__dupelim__Cast_HeadVar1_4 = ll_backend__dupelim__HeadVar__2_2;
#line 79 "dupelim.m"
    MR_Word ll_backend__dupelim__Cast_HeadVar2_5 = ll_backend__dupelim__HeadVar__3_3;

#line 79 "dupelim.m"
    {
#line 79 "dupelim.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__dupelim_scalar_common_2[0], ll_backend__dupelim__HeadVar__1_1, ((MR_Box) (ll_backend__dupelim__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__dupelim__Cast_HeadVar2_5)));
#line 79 "dupelim.m"
      return;
    }
#line 79 "dupelim.m"
  }
#line 79 "dupelim.m"
}

#line 79 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim____Unify____std_map_0_0(
#line 79 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 79 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__2_2)
#line 79 "dupelim.m"
{
#line 79 "dupelim.m"
  {
#line 79 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;
#line 79 "dupelim.m"
    MR_Word ll_backend__dupelim__Cast_HeadVar1_3 = ll_backend__dupelim__HeadVar__1_1;
#line 79 "dupelim.m"
    MR_Word ll_backend__dupelim__Cast_HeadVar2_4 = ll_backend__dupelim__HeadVar__2_2;

#line 79 "dupelim.m"
    {
#line 79 "dupelim.m"
      return ll_backend__dupelim__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__dupelim_scalar_common_2[0], ((MR_Box) (ll_backend__dupelim__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__dupelim__Cast_HeadVar2_4)));
    }
#line 79 "dupelim.m"
    return ll_backend__dupelim__succeeded;
#line 79 "dupelim.m"
  }
#line 79 "dupelim.m"
}

#line 87 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim____Compare____cluster_0_0(
#line 87 "dupelim.m"
  MR_Word * ll_backend__dupelim__HeadVar__1_1,
#line 87 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__2_2,
#line 87 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__3_3)
#line 87 "dupelim.m"
{
#line 87 "dupelim.m"
  {
#line 87 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;
#line 87 "dupelim.m"
    MR_Integer ll_backend__dupelim__CastX_9 = (MR_Integer) ll_backend__dupelim__HeadVar__2_2;
#line 87 "dupelim.m"
    MR_Integer ll_backend__dupelim__CastY_10 = (MR_Integer) ll_backend__dupelim__HeadVar__3_3;

#line 87 "dupelim.m"
    ll_backend__dupelim__succeeded = (ll_backend__dupelim__CastX_9 == ll_backend__dupelim__CastY_10);
#line 87 "dupelim.m"
    if (ll_backend__dupelim__succeeded)
#line 969 "ll_backend.dupelim.c"
      *ll_backend__dupelim__HeadVar__1_1 = (MR_Integer) 0;
#line 87 "dupelim.m"
    else
#line 87 "dupelim.m"
      {
#line 87 "dupelim.m"
        MR_Word ll_backend__dupelim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__2_2, (MR_Integer) 0)));
#line 87 "dupelim.m"
        MR_Word ll_backend__dupelim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__2_2, (MR_Integer) 1)));
#line 87 "dupelim.m"
        MR_Word ll_backend__dupelim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__3_3, (MR_Integer) 0)));
#line 87 "dupelim.m"
        MR_Word ll_backend__dupelim__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__3_3, (MR_Integer) 1)));
#line 87 "dupelim.m"
        MR_Word ll_backend__dupelim__V_8_8;

#line 87 "dupelim.m"
        {
#line 87 "dupelim.m"
          ll_backend__llds____Compare____label_0_0(&ll_backend__dupelim__V_8_8, ll_backend__dupelim__V_4_4, ll_backend__dupelim__V_6_6);
        }
#line 991 "ll_backend.dupelim.c"
        ll_backend__dupelim__succeeded = (ll_backend__dupelim__V_8_8 == (MR_Integer) 0);
#line 87 "dupelim.m"
        ll_backend__dupelim__succeeded = !(ll_backend__dupelim__succeeded);
#line 87 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 87 "dupelim.m"
          *ll_backend__dupelim__HeadVar__1_1 = ll_backend__dupelim__V_8_8;
#line 87 "dupelim.m"
        else
#line 87 "dupelim.m"
          {
#line 87 "dupelim.m"
            {
#line 87 "dupelim.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__dupelim_scalar_common_1[1], ll_backend__dupelim__HeadVar__1_1, ((MR_Box) (ll_backend__dupelim__V_5_5)), ((MR_Box) (ll_backend__dupelim__V_7_7)));
#line 87 "dupelim.m"
              return;
            }
#line 87 "dupelim.m"
          }
#line 87 "dupelim.m"
      }
#line 87 "dupelim.m"
  }
#line 87 "dupelim.m"
}

#line 87 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim____Unify____cluster_0_0(
#line 87 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 87 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__2_2)
#line 87 "dupelim.m"
{
#line 87 "dupelim.m"
  {
#line 87 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;
#line 87 "dupelim.m"
    MR_Integer ll_backend__dupelim__CastX_7 = (MR_Integer) ll_backend__dupelim__HeadVar__1_1;
#line 87 "dupelim.m"
    MR_Integer ll_backend__dupelim__CastY_8 = (MR_Integer) ll_backend__dupelim__HeadVar__2_2;

#line 87 "dupelim.m"
    ll_backend__dupelim__succeeded = (ll_backend__dupelim__CastX_7 == ll_backend__dupelim__CastY_8);
#line 87 "dupelim.m"
    if (ll_backend__dupelim__succeeded)
#line 87 "dupelim.m"
      ll_backend__dupelim__succeeded = MR_TRUE;
#line 87 "dupelim.m"
    else
#line 87 "dupelim.m"
      {
#line 87 "dupelim.m"
        MR_Word ll_backend__dupelim__TypeInfo_10_10;
#line 87 "dupelim.m"
        MR_Word ll_backend__dupelim__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 0)));
#line 87 "dupelim.m"
        MR_Word ll_backend__dupelim__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 1)));
#line 87 "dupelim.m"
        MR_Word ll_backend__dupelim__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__2_2, (MR_Integer) 0)));
#line 87 "dupelim.m"
        MR_Word ll_backend__dupelim__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__HeadVar__2_2, (MR_Integer) 1)));

#line 1058 "ll_backend.dupelim.c"
        {
#line 1060 "ll_backend.dupelim.c"
          ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__V_3_3, ll_backend__dupelim__V_5_5);
        }
#line 87 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 87 "dupelim.m"
          {
#line 1067 "ll_backend.dupelim.c"
            ll_backend__dupelim__TypeInfo_10_10 = (MR_Word) &ll_backend__dupelim_scalar_common_1[1];
#line 1069 "ll_backend.dupelim.c"
            {
#line 1071 "ll_backend.dupelim.c"
              return ll_backend__dupelim__succeeded = mercury__builtin__unify_2_p_0(ll_backend__dupelim__TypeInfo_10_10, ((MR_Box) (ll_backend__dupelim__V_4_4)), ((MR_Box) (ll_backend__dupelim__V_6_6)));
            }
#line 87 "dupelim.m"
          }
#line 87 "dupelim.m"
      }
#line 87 "dupelim.m"
    return ll_backend__dupelim__succeeded;
#line 87 "dupelim.m"
  }
#line 87 "dupelim.m"
}

#line 975 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_rval_3_p_0(
#line 975 "dupelim.m"
  MR_Word ll_backend__dupelim__RvalA_4,
#line 975 "dupelim.m"
  MR_Word ll_backend__dupelim__RvalB_5,
#line 975 "dupelim.m"
  MR_Word * ll_backend__dupelim__Rval_6)
#line 975 "dupelim.m"
{
#line 984 "dupelim.m"
  {
#line 984 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;

#line 984 "dupelim.m"
    if (((MR_tag((MR_Word) ll_backend__dupelim__RvalA_4)) == (MR_mktag((MR_Integer) 0))))
#line 980 "dupelim.m"
      {
#line 980 "dupelim.m"
        MR_Word ll_backend__dupelim__LvalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__RvalA_4, (MR_Integer) 0)));
#line 980 "dupelim.m"
        MR_Word ll_backend__dupelim__LvalB_8;
#line 980 "dupelim.m"
        MR_Word ll_backend__dupelim__Lval_9;

#line 981 "dupelim.m"
        ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__RvalB_5)) == (MR_mktag((MR_Integer) 0)));
#line 981 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 981 "dupelim.m"
          {
#line 981 "dupelim.m"
            ll_backend__dupelim__LvalB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__RvalB_5, (MR_Integer) 0)));
#line 982 "dupelim.m"
            {
#line 982 "dupelim.m"
              ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_7, ll_backend__dupelim__LvalB_8, &ll_backend__dupelim__Lval_9);
            }
#line 980 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 980 "dupelim.m"
              {
#line 983 "dupelim.m"
                {
#line 983 "dupelim.m"
                  MR_Word base;
#line 983 "dupelim.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 983 "dupelim.m"
                  *ll_backend__dupelim__Rval_6 = base;
#line 983 "dupelim.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__dupelim__Lval_9));
#line 983 "dupelim.m"
                }
#line 983 "dupelim.m"
                ll_backend__dupelim__succeeded = MR_TRUE;
#line 980 "dupelim.m"
              }
#line 981 "dupelim.m"
          }
#line 980 "dupelim.m"
      }
#line 984 "dupelim.m"
    else
#line 984 "dupelim.m"
      if (((MR_tag((MR_Word) ll_backend__dupelim__RvalA_4)) == (MR_mktag((MR_Integer) 1))))
#line 985 "dupelim.m"
        {
#line 986 "dupelim.m"
          {
#line 986 "dupelim.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.most_specific_rval\'/3", (MR_String) "var");
          }
#line 985 "dupelim.m"
          ll_backend__dupelim__succeeded = MR_TRUE;
#line 985 "dupelim.m"
        }
#line 984 "dupelim.m"
      else
#line 984 "dupelim.m"
        if (((((MR_tag((MR_Word) ll_backend__dupelim__RvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1001 "dupelim.m"
          {
#line 1001 "dupelim.m"
            MR_Word ll_backend__dupelim__Binnop_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 1)));
#line 1001 "dupelim.m"
            MR_Word ll_backend__dupelim__RvalAR_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 3)));
#line 1001 "dupelim.m"
            MR_Word ll_backend__dupelim__RvalBR_22;
#line 1001 "dupelim.m"
            MR_Word ll_backend__dupelim__RvalR_23;
#line 1001 "dupelim.m"
            MR_Word ll_backend__dupelim__RvalAL_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 2)));
#line 1001 "dupelim.m"
            MR_Word ll_backend__dupelim__RvalBL_28;
#line 1001 "dupelim.m"
            MR_Word ll_backend__dupelim__RvalL_29;
#line 1001 "dupelim.m"
            MR_Word ll_backend__dupelim__V_31_31;

#line 1002 "dupelim.m"
            ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__RvalB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1002 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 1002 "dupelim.m"
              {
#line 1002 "dupelim.m"
                ll_backend__dupelim__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 1)));
#line 1002 "dupelim.m"
                ll_backend__dupelim__RvalBL_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 2)));
#line 1002 "dupelim.m"
                ll_backend__dupelim__RvalBR_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 3)));
#line 1002 "dupelim.m"
                {
#line 1002 "dupelim.m"
                  ll_backend__dupelim__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(ll_backend__dupelim__Binnop_20, ll_backend__dupelim__V_31_31);
                }
#line 1001 "dupelim.m"
                if (ll_backend__dupelim__succeeded)
#line 1001 "dupelim.m"
                  {
#line 1003 "dupelim.m"
                    {
#line 1003 "dupelim.m"
                      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalAL_27, ll_backend__dupelim__RvalBL_28, &ll_backend__dupelim__RvalL_29);
                    }
#line 1001 "dupelim.m"
                    if (ll_backend__dupelim__succeeded)
#line 1001 "dupelim.m"
                      {
#line 1004 "dupelim.m"
                        {
#line 1004 "dupelim.m"
                          ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalAR_21, ll_backend__dupelim__RvalBR_22, &ll_backend__dupelim__RvalR_23);
                        }
#line 1001 "dupelim.m"
                        if (ll_backend__dupelim__succeeded)
#line 1001 "dupelim.m"
                          {
#line 1005 "dupelim.m"
                            {
#line 1005 "dupelim.m"
                              MR_Word base;
#line 1005 "dupelim.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1005 "dupelim.m"
                              *ll_backend__dupelim__Rval_6 = base;
#line 1005 "dupelim.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1005 "dupelim.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Binnop_20));
#line 1005 "dupelim.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__RvalL_29));
#line 1005 "dupelim.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__RvalR_23));
#line 1005 "dupelim.m"
                            }
#line 1005 "dupelim.m"
                            ll_backend__dupelim__succeeded = MR_TRUE;
#line 1001 "dupelim.m"
                          }
#line 1001 "dupelim.m"
                      }
#line 1001 "dupelim.m"
                  }
#line 1002 "dupelim.m"
              }
#line 1001 "dupelim.m"
          }
#line 984 "dupelim.m"
        else
#line 984 "dupelim.m"
          if (((((MR_tag((MR_Word) ll_backend__dupelim__RvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 996 "dupelim.m"
            {
#line 996 "dupelim.m"
              MR_Word ll_backend__dupelim__Unop_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 1)));
#line 996 "dupelim.m"
              MR_Word ll_backend__dupelim__RvalAL_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalA_4, (MR_Integer) 2)));
#line 996 "dupelim.m"
              MR_Word ll_backend__dupelim__RvalBL_18;
#line 996 "dupelim.m"
              MR_Word ll_backend__dupelim__RvalL_19;
#line 996 "dupelim.m"
              MR_Word ll_backend__dupelim__V_30_30;

#line 997 "dupelim.m"
              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__RvalB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 997 "dupelim.m"
              if (ll_backend__dupelim__succeeded)
#line 997 "dupelim.m"
                {
#line 997 "dupelim.m"
                  ll_backend__dupelim__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 1)));
#line 997 "dupelim.m"
                  ll_backend__dupelim__RvalBL_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__RvalB_5, (MR_Integer) 2)));
#line 997 "dupelim.m"
                  ll_backend__dupelim__succeeded = (ll_backend__dupelim__Unop_16 == ll_backend__dupelim__V_30_30);
#line 996 "dupelim.m"
                  if (ll_backend__dupelim__succeeded)
#line 996 "dupelim.m"
                    {
#line 998 "dupelim.m"
                      {
#line 998 "dupelim.m"
                        ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalAL_17, ll_backend__dupelim__RvalBL_18, &ll_backend__dupelim__RvalL_19);
                      }
#line 996 "dupelim.m"
                      if (ll_backend__dupelim__succeeded)
#line 996 "dupelim.m"
                        {
#line 999 "dupelim.m"
                          {
#line 999 "dupelim.m"
                            MR_Word base;
#line 999 "dupelim.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 999 "dupelim.m"
                            *ll_backend__dupelim__Rval_6 = base;
#line 999 "dupelim.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 999 "dupelim.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Unop_16));
#line 999 "dupelim.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__RvalL_19));
#line 999 "dupelim.m"
                          }
#line 999 "dupelim.m"
                          ll_backend__dupelim__succeeded = MR_TRUE;
#line 996 "dupelim.m"
                        }
#line 996 "dupelim.m"
                    }
#line 997 "dupelim.m"
                }
#line 996 "dupelim.m"
            }
#line 984 "dupelim.m"
          else
#line 992 "dupelim.m"
            {
#line 993 "dupelim.m"
              {
#line 993 "dupelim.m"
                ll_backend__dupelim__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__dupelim__RvalB_5, ll_backend__dupelim__RvalA_4);
              }
#line 992 "dupelim.m"
              if (ll_backend__dupelim__succeeded)
#line 992 "dupelim.m"
                {
#line 994 "dupelim.m"
                  *ll_backend__dupelim__Rval_6 = ll_backend__dupelim__RvalA_4;
#line 994 "dupelim.m"
                  ll_backend__dupelim__succeeded = MR_TRUE;
#line 992 "dupelim.m"
                }
#line 992 "dupelim.m"
            }
#line 984 "dupelim.m"
    return ll_backend__dupelim__succeeded;
#line 984 "dupelim.m"
  }
#line 975 "dupelim.m"
}

#line 932 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_lval_3_p_0(
#line 932 "dupelim.m"
  MR_Word ll_backend__dupelim__LvalA_4,
#line 932 "dupelim.m"
  MR_Word ll_backend__dupelim__LvalB_5,
#line 932 "dupelim.m"
  MR_Word * ll_backend__dupelim__Lval_6)
#line 932 "dupelim.m"
{
#line 955 "dupelim.m"
  {
#line 955 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;

#line 955 "dupelim.m"
    if (((((MR_tag((MR_Word) ll_backend__dupelim__LvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalA_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 959 "dupelim.m"
      {
#line 959 "dupelim.m"
        MR_Word ll_backend__dupelim__MaybeTagA_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalA_4, (MR_Integer) 1)));
#line 959 "dupelim.m"
        MR_Word ll_backend__dupelim__Addr_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalA_4, (MR_Integer) 2)));
#line 959 "dupelim.m"
        MR_Word ll_backend__dupelim__FieldNum_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalA_4, (MR_Integer) 3)));
#line 959 "dupelim.m"
        MR_Word ll_backend__dupelim__MaybeTagB_26;
#line 959 "dupelim.m"
        MR_Word ll_backend__dupelim__MaybeTag_27;
#line 959 "dupelim.m"
        MR_Word ll_backend__dupelim__V_32_32;
#line 959 "dupelim.m"
        MR_Word ll_backend__dupelim__V_33_33;
#line 961 "dupelim.m"
        MR_Word ll_backend__dupelim__TypeInfo_37_37;

#line 960 "dupelim.m"
        ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__LvalB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalB_5, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 960 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 960 "dupelim.m"
          {
#line 960 "dupelim.m"
            ll_backend__dupelim__MaybeTagB_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalB_5, (MR_Integer) 1)));
#line 960 "dupelim.m"
            ll_backend__dupelim__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalB_5, (MR_Integer) 2)));
#line 960 "dupelim.m"
            ll_backend__dupelim__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalB_5, (MR_Integer) 3)));
#line 960 "dupelim.m"
            {
#line 960 "dupelim.m"
              ll_backend__dupelim__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__dupelim__Addr_24, ll_backend__dupelim__V_32_32);
            }
#line 959 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 959 "dupelim.m"
              {
#line 960 "dupelim.m"
                {
#line 960 "dupelim.m"
                  ll_backend__dupelim__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__dupelim__FieldNum_25, ll_backend__dupelim__V_33_33);
                }
#line 959 "dupelim.m"
                if (ll_backend__dupelim__succeeded)
#line 959 "dupelim.m"
                  {
#line 1419 "ll_backend.dupelim.c"
                    ll_backend__dupelim__TypeInfo_37_37 = (MR_Word) &ll_backend__dupelim_scalar_common_1[3];
#line 961 "dupelim.m"
                    {
#line 961 "dupelim.m"
                      ll_backend__dupelim__succeeded = mercury__builtin__unify_2_p_0(ll_backend__dupelim__TypeInfo_37_37, ((MR_Box) (ll_backend__dupelim__MaybeTagA_23)), ((MR_Box) (ll_backend__dupelim__MaybeTagB_26)));
                    }
#line 963 "dupelim.m"
                    if (ll_backend__dupelim__succeeded)
#line 962 "dupelim.m"
                      ll_backend__dupelim__MaybeTag_27 = ll_backend__dupelim__MaybeTagA_23;
#line 963 "dupelim.m"
                    else
#line 964 "dupelim.m"
                      ll_backend__dupelim__MaybeTag_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 966 "dupelim.m"
                    {
#line 966 "dupelim.m"
                      MR_Word base;
#line 966 "dupelim.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 966 "dupelim.m"
                      *ll_backend__dupelim__Lval_6 = base;
#line 966 "dupelim.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 966 "dupelim.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__MaybeTag_27));
#line 966 "dupelim.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Addr_24));
#line 966 "dupelim.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__FieldNum_25));
#line 966 "dupelim.m"
                    }
#line 966 "dupelim.m"
                    ll_backend__dupelim__succeeded = MR_TRUE;
#line 959 "dupelim.m"
                  }
#line 959 "dupelim.m"
              }
#line 960 "dupelim.m"
          }
#line 959 "dupelim.m"
      }
#line 955 "dupelim.m"
    else
#line 955 "dupelim.m"
      if (((((MR_tag((MR_Word) ll_backend__dupelim__LvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__LvalA_4, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 968 "dupelim.m"
        {
#line 969 "dupelim.m"
          {
#line 969 "dupelim.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.most_specific_lval\'/3", (MR_String) "lvar");
          }
#line 968 "dupelim.m"
          ll_backend__dupelim__succeeded = MR_TRUE;
#line 968 "dupelim.m"
        }
#line 955 "dupelim.m"
      else
#line 955 "dupelim.m"
        {
#line 956 "dupelim.m"
          {
#line 956 "dupelim.m"
            ll_backend__dupelim__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__dupelim__LvalA_4, ll_backend__dupelim__LvalB_5);
          }
#line 955 "dupelim.m"
          if (ll_backend__dupelim__succeeded)
#line 955 "dupelim.m"
            {
#line 957 "dupelim.m"
              *ll_backend__dupelim__Lval_6 = ll_backend__dupelim__LvalA_4;
#line 957 "dupelim.m"
              ll_backend__dupelim__succeeded = MR_TRUE;
#line 955 "dupelim.m"
            }
#line 955 "dupelim.m"
        }
#line 955 "dupelim.m"
    return ll_backend__dupelim__succeeded;
#line 955 "dupelim.m"
  }
#line 932 "dupelim.m"
}

#line 658 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__most_specific_instr_3_p_0(
#line 658 "dupelim.m"
  MR_Word ll_backend__dupelim__InstrA_4,
#line 658 "dupelim.m"
  MR_Word ll_backend__dupelim__InstrB_5,
#line 658 "dupelim.m"
  MR_Word * ll_backend__dupelim__MaybeInstr_6)
#line 658 "dupelim.m"
{
#line 662 "dupelim.m"
  {
#line 662 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;

#line 662 "dupelim.m"
    if (((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 1))))
#line 926 "dupelim.m"
      *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 662 "dupelim.m"
    else
#line 662 "dupelim.m"
      if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 662 "dupelim.m"
        {
#line 662 "dupelim.m"
          MR_Word ll_backend__dupelim__LvalA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 662 "dupelim.m"
          MR_Word ll_backend__dupelim__RvalA_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 669 "dupelim.m"
          MR_Word ll_backend__dupelim__Lval_11;
#line 669 "dupelim.m"
          MR_Word ll_backend__dupelim__Rval_12;
#line 664 "dupelim.m"
          MR_Word ll_backend__dupelim__LvalB_9;
#line 664 "dupelim.m"
          MR_Word ll_backend__dupelim__RvalB_10;

#line 664 "dupelim.m"
          ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 664 "dupelim.m"
          if (ll_backend__dupelim__succeeded)
#line 664 "dupelim.m"
            {
#line 664 "dupelim.m"
              ll_backend__dupelim__LvalB_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 664 "dupelim.m"
              ll_backend__dupelim__RvalB_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 665 "dupelim.m"
              {
#line 665 "dupelim.m"
                ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_7, ll_backend__dupelim__LvalB_9, &ll_backend__dupelim__Lval_11);
              }
#line 664 "dupelim.m"
              if (ll_backend__dupelim__succeeded)
#line 666 "dupelim.m"
                {
#line 666 "dupelim.m"
                  ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_8, ll_backend__dupelim__RvalB_10, &ll_backend__dupelim__Rval_12);
                }
#line 664 "dupelim.m"
            }
#line 669 "dupelim.m"
          if (ll_backend__dupelim__succeeded)
#line 668 "dupelim.m"
            {
#line 668 "dupelim.m"
              MR_Word ll_backend__dupelim__V_125_125;

#line 668 "dupelim.m"
              {
#line 668 "dupelim.m"
                ll_backend__dupelim__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 668 "dupelim.m"
                MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 668 "dupelim.m"
                MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_125_125, 1) = ((MR_Box) (ll_backend__dupelim__Lval_11));
#line 668 "dupelim.m"
                MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_125_125, 2) = ((MR_Box) (ll_backend__dupelim__Rval_12));
#line 668 "dupelim.m"
              }
#line 668 "dupelim.m"
              {
#line 668 "dupelim.m"
                MR_Word base;
#line 668 "dupelim.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 668 "dupelim.m"
                *ll_backend__dupelim__MaybeInstr_6 = base;
#line 668 "dupelim.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_125_125));
#line 668 "dupelim.m"
              }
#line 668 "dupelim.m"
            }
#line 669 "dupelim.m"
          else
#line 670 "dupelim.m"
            *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 662 "dupelim.m"
        }
#line 662 "dupelim.m"
      else
#line 662 "dupelim.m"
        if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 759 "dupelim.m"
          {
#line 759 "dupelim.m"
            MR_Word ll_backend__dupelim__RvalA_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 765 "dupelim.m"
            MR_Word ll_backend__dupelim__Rval_170;
#line 761 "dupelim.m"
            MR_Word ll_backend__dupelim__RvalB_168;

#line 761 "dupelim.m"
            ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 761 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 761 "dupelim.m"
              {
#line 761 "dupelim.m"
                ll_backend__dupelim__RvalB_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 762 "dupelim.m"
                {
#line 762 "dupelim.m"
                  ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_171, ll_backend__dupelim__RvalB_168, &ll_backend__dupelim__Rval_170);
                }
#line 761 "dupelim.m"
              }
#line 765 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 764 "dupelim.m"
              {
#line 764 "dupelim.m"
                MR_Word ll_backend__dupelim__V_119_119;

#line 764 "dupelim.m"
                {
#line 764 "dupelim.m"
                  ll_backend__dupelim__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "dupelim.m"
                  MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 764 "dupelim.m"
                  MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_119_119, 1) = ((MR_Box) (ll_backend__dupelim__Rval_170));
#line 764 "dupelim.m"
                }
#line 764 "dupelim.m"
                {
#line 764 "dupelim.m"
                  MR_Word base;
#line 764 "dupelim.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 764 "dupelim.m"
                  *ll_backend__dupelim__MaybeInstr_6 = base;
#line 764 "dupelim.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_119_119));
#line 764 "dupelim.m"
                }
#line 764 "dupelim.m"
              }
#line 765 "dupelim.m"
            else
#line 766 "dupelim.m"
              *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 759 "dupelim.m"
          }
#line 662 "dupelim.m"
        else
#line 662 "dupelim.m"
          if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 684 "dupelim.m"
            {
#line 684 "dupelim.m"
              MR_Word ll_backend__dupelim__CodeAddrA_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 684 "dupelim.m"
              MR_Word ll_backend__dupelim__RvalA_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 691 "dupelim.m"
              MR_Word ll_backend__dupelim__Rval_140;
#line 686 "dupelim.m"
              MR_Word ll_backend__dupelim__CodeAddrB_14;
#line 686 "dupelim.m"
              MR_Word ll_backend__dupelim__RvalB_138;

#line 686 "dupelim.m"
              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 686 "dupelim.m"
              if (ll_backend__dupelim__succeeded)
#line 686 "dupelim.m"
                {
#line 686 "dupelim.m"
                  ll_backend__dupelim__RvalB_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 686 "dupelim.m"
                  ll_backend__dupelim__CodeAddrB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 687 "dupelim.m"
                  {
#line 687 "dupelim.m"
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_141, ll_backend__dupelim__RvalB_138, &ll_backend__dupelim__Rval_140);
                  }
#line 686 "dupelim.m"
                  if (ll_backend__dupelim__succeeded)
#line 688 "dupelim.m"
                    {
#line 688 "dupelim.m"
                      ll_backend__dupelim__succeeded = ll_backend__llds____Unify____code_addr_0_0(ll_backend__dupelim__CodeAddrA_13, ll_backend__dupelim__CodeAddrB_14);
                    }
#line 686 "dupelim.m"
                }
#line 691 "dupelim.m"
              if (ll_backend__dupelim__succeeded)
#line 690 "dupelim.m"
                {
#line 690 "dupelim.m"
                  MR_Word ll_backend__dupelim__V_123_123;

#line 690 "dupelim.m"
                  {
#line 690 "dupelim.m"
                    ll_backend__dupelim__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 690 "dupelim.m"
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 690 "dupelim.m"
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_123_123, 1) = ((MR_Box) (ll_backend__dupelim__Rval_140));
#line 690 "dupelim.m"
                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_123_123, 2) = ((MR_Box) (ll_backend__dupelim__CodeAddrA_13));
#line 690 "dupelim.m"
                  }
#line 690 "dupelim.m"
                  {
#line 690 "dupelim.m"
                    MR_Word base;
#line 690 "dupelim.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "dupelim.m"
                    *ll_backend__dupelim__MaybeInstr_6 = base;
#line 690 "dupelim.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_123_123));
#line 690 "dupelim.m"
                  }
#line 690 "dupelim.m"
                }
#line 691 "dupelim.m"
              else
#line 692 "dupelim.m"
                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 684 "dupelim.m"
            }
#line 662 "dupelim.m"
          else
#line 662 "dupelim.m"
            if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 696 "dupelim.m"
              {
#line 696 "dupelim.m"
                MR_Word ll_backend__dupelim__MaybeTag_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 696 "dupelim.m"
                MR_Word ll_backend__dupelim__MaybeOffset_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 3)));
#line 696 "dupelim.m"
                MR_Word ll_backend__dupelim__Msg_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 5)));
#line 696 "dupelim.m"
                MR_Word ll_backend__dupelim__MayUseAtomic_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 6)));
#line 696 "dupelim.m"
                MR_Word ll_backend__dupelim__MaybeRegionRvalA_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 7)));
#line 696 "dupelim.m"
                MR_Word ll_backend__dupelim__MaybeReuseA_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 8)));
#line 696 "dupelim.m"
                MR_Word ll_backend__dupelim__LvalA_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 696 "dupelim.m"
                MR_Word ll_backend__dupelim__RvalA_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 4)));
#line 735 "dupelim.m"
                MR_Word ll_backend__dupelim__MaybeRegionRval_26;
#line 735 "dupelim.m"
                MR_Word ll_backend__dupelim__MaybeReuse_36;
#line 735 "dupelim.m"
                MR_Word ll_backend__dupelim__Lval_148;
#line 735 "dupelim.m"
                MR_Word ll_backend__dupelim__Rval_149;
#line 699 "dupelim.m"
                MR_Word ll_backend__dupelim__TypeInfo_250_250;
#line 699 "dupelim.m"
                MR_Word ll_backend__dupelim__TypeInfo_251_251;
#line 699 "dupelim.m"
                MR_Word ll_backend__dupelim__TypeInfo_252_252;
#line 699 "dupelim.m"
                MR_Word ll_backend__dupelim__MaybeRegionRvalB_21;
#line 699 "dupelim.m"
                MR_Word ll_backend__dupelim__MaybeReuseB_22;
#line 699 "dupelim.m"
                MR_Word ll_backend__dupelim__LvalB_144;
#line 699 "dupelim.m"
                MR_Word ll_backend__dupelim__RvalB_145;
#line 699 "dupelim.m"
                MR_Word ll_backend__dupelim__V_232_232;
#line 699 "dupelim.m"
                MR_Word ll_backend__dupelim__V_233_233;
#line 699 "dupelim.m"
                MR_Word ll_backend__dupelim__V_234_234;
#line 699 "dupelim.m"
                MR_Word ll_backend__dupelim__V_235_235;

#line 698 "dupelim.m"
                ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 698 "dupelim.m"
                if (ll_backend__dupelim__succeeded)
#line 698 "dupelim.m"
                  {
#line 698 "dupelim.m"
                    ll_backend__dupelim__LvalB_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 698 "dupelim.m"
                    ll_backend__dupelim__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 698 "dupelim.m"
                    ll_backend__dupelim__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 3)));
#line 698 "dupelim.m"
                    ll_backend__dupelim__RvalB_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 4)));
#line 698 "dupelim.m"
                    ll_backend__dupelim__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 5)));
#line 698 "dupelim.m"
                    ll_backend__dupelim__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 6)));
#line 698 "dupelim.m"
                    ll_backend__dupelim__MaybeRegionRvalB_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 7)));
#line 698 "dupelim.m"
                    ll_backend__dupelim__MaybeReuseB_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 8)));
#line 1827 "ll_backend.dupelim.c"
                    ll_backend__dupelim__TypeInfo_250_250 = (MR_Word) &ll_backend__dupelim_scalar_common_1[3];
#line 698 "dupelim.m"
                    {
#line 698 "dupelim.m"
                      ll_backend__dupelim__succeeded = mercury__builtin__unify_2_p_0(ll_backend__dupelim__TypeInfo_250_250, ((MR_Box) (ll_backend__dupelim__MaybeTag_15)), ((MR_Box) (ll_backend__dupelim__V_232_232)));
                    }
#line 699 "dupelim.m"
                    if (ll_backend__dupelim__succeeded)
#line 699 "dupelim.m"
                      {
#line 1838 "ll_backend.dupelim.c"
                        ll_backend__dupelim__TypeInfo_251_251 = (MR_Word) &ll_backend__dupelim_scalar_common_1[3];
#line 698 "dupelim.m"
                        {
#line 698 "dupelim.m"
                          ll_backend__dupelim__succeeded = mercury__builtin__unify_2_p_0(ll_backend__dupelim__TypeInfo_251_251, ((MR_Box) (ll_backend__dupelim__MaybeOffset_16)), ((MR_Box) (ll_backend__dupelim__V_233_233)));
                        }
#line 699 "dupelim.m"
                        if (ll_backend__dupelim__succeeded)
#line 699 "dupelim.m"
                          {
#line 1849 "ll_backend.dupelim.c"
                            ll_backend__dupelim__TypeInfo_252_252 = (MR_Word) &ll_backend__dupelim_scalar_common_1[4];
#line 698 "dupelim.m"
                            {
#line 698 "dupelim.m"
                              ll_backend__dupelim__succeeded = mercury__builtin__unify_2_p_0(ll_backend__dupelim__TypeInfo_252_252, ((MR_Box) (ll_backend__dupelim__Msg_17)), ((MR_Box) (ll_backend__dupelim__V_234_234)));
                            }
#line 699 "dupelim.m"
                            if (ll_backend__dupelim__succeeded)
#line 699 "dupelim.m"
                              {
#line 698 "dupelim.m"
                                ll_backend__dupelim__succeeded = (ll_backend__dupelim__MayUseAtomic_18 == ll_backend__dupelim__V_235_235);
#line 699 "dupelim.m"
                                if (ll_backend__dupelim__succeeded)
#line 699 "dupelim.m"
                                  {
#line 700 "dupelim.m"
                                    {
#line 700 "dupelim.m"
                                      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_150, ll_backend__dupelim__LvalB_144, &ll_backend__dupelim__Lval_148);
                                    }
#line 699 "dupelim.m"
                                    if (ll_backend__dupelim__succeeded)
#line 699 "dupelim.m"
                                      {
#line 701 "dupelim.m"
                                        {
#line 701 "dupelim.m"
                                          ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_151, ll_backend__dupelim__RvalB_145, &ll_backend__dupelim__Rval_149);
                                        }
#line 699 "dupelim.m"
                                        if (ll_backend__dupelim__succeeded)
#line 699 "dupelim.m"
                                          {
#line 707 "dupelim.m"
                                            if ((ll_backend__dupelim__MaybeRegionRvalA_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 708 "dupelim.m"
                                              {
#line 709 "dupelim.m"
                                                ll_backend__dupelim__succeeded = (ll_backend__dupelim__MaybeRegionRvalB_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "dupelim.m"
                                                if (ll_backend__dupelim__succeeded)
#line 708 "dupelim.m"
                                                  {
#line 710 "dupelim.m"
                                                    ll_backend__dupelim__MaybeRegionRval_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 710 "dupelim.m"
                                                    ll_backend__dupelim__succeeded = MR_TRUE;
#line 708 "dupelim.m"
                                                  }
#line 708 "dupelim.m"
                                              }
#line 707 "dupelim.m"
                                            else
#line 703 "dupelim.m"
                                              {
#line 703 "dupelim.m"
                                                MR_Word ll_backend__dupelim__RegionRvalA_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeRegionRvalA_19, (MR_Integer) 0)));
#line 703 "dupelim.m"
                                                MR_Word ll_backend__dupelim__RegionRvalB_24;
#line 703 "dupelim.m"
                                                MR_Word ll_backend__dupelim__RegionRval_25;

#line 704 "dupelim.m"
                                                ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__MaybeRegionRvalB_21)) == (MR_mktag((MR_Integer) 1)));
#line 704 "dupelim.m"
                                                if (ll_backend__dupelim__succeeded)
#line 704 "dupelim.m"
                                                  {
#line 704 "dupelim.m"
                                                    ll_backend__dupelim__RegionRvalB_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeRegionRvalB_21, (MR_Integer) 0)));
#line 705 "dupelim.m"
                                                    {
#line 705 "dupelim.m"
                                                      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RegionRvalA_23, ll_backend__dupelim__RegionRvalB_24, &ll_backend__dupelim__RegionRval_25);
                                                    }
#line 703 "dupelim.m"
                                                    if (ll_backend__dupelim__succeeded)
#line 703 "dupelim.m"
                                                      {
#line 706 "dupelim.m"
                                                        {
#line 706 "dupelim.m"
                                                          ll_backend__dupelim__MaybeRegionRval_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 706 "dupelim.m"
                                                          MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeRegionRval_26, 0) = ((MR_Box) (ll_backend__dupelim__RegionRval_25));
#line 706 "dupelim.m"
                                                        }
#line 706 "dupelim.m"
                                                        ll_backend__dupelim__succeeded = MR_TRUE;
#line 703 "dupelim.m"
                                                      }
#line 704 "dupelim.m"
                                                  }
#line 703 "dupelim.m"
                                              }
#line 699 "dupelim.m"
                                            if (ll_backend__dupelim__succeeded)
#line 727 "dupelim.m"
                                              {
#line 727 "dupelim.m"
                                                if ((ll_backend__dupelim__MaybeReuseA_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "dupelim.m"
                                                  {
#line 729 "dupelim.m"
                                                    ll_backend__dupelim__succeeded = (ll_backend__dupelim__MaybeReuseB_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 728 "dupelim.m"
                                                    if (ll_backend__dupelim__succeeded)
#line 728 "dupelim.m"
                                                      {
#line 730 "dupelim.m"
                                                        ll_backend__dupelim__MaybeReuse_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "dupelim.m"
                                                        ll_backend__dupelim__succeeded = MR_TRUE;
#line 728 "dupelim.m"
                                                      }
#line 728 "dupelim.m"
                                                  }
#line 727 "dupelim.m"
                                                else
#line 713 "dupelim.m"
                                                  {
#line 713 "dupelim.m"
                                                    MR_Word ll_backend__dupelim__ReuseRvalA_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuseA_20, (MR_Integer) 0)));
#line 713 "dupelim.m"
                                                    MR_Word ll_backend__dupelim__MaybeFlagLvalA_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuseA_20, (MR_Integer) 1)));
#line 713 "dupelim.m"
                                                    MR_Word ll_backend__dupelim__ReuseRvalB_29;
#line 713 "dupelim.m"
                                                    MR_Word ll_backend__dupelim__MaybeFlagLvalB_30;
#line 713 "dupelim.m"
                                                    MR_Word ll_backend__dupelim__ReuseRval_31;
#line 713 "dupelim.m"
                                                    MR_Word ll_backend__dupelim__MaybeFlagLval_35;

#line 714 "dupelim.m"
                                                    ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__MaybeReuseB_22)) == (MR_mktag((MR_Integer) 1)));
#line 714 "dupelim.m"
                                                    if (ll_backend__dupelim__succeeded)
#line 714 "dupelim.m"
                                                      {
#line 714 "dupelim.m"
                                                        ll_backend__dupelim__ReuseRvalB_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuseB_22, (MR_Integer) 0)));
#line 714 "dupelim.m"
                                                        ll_backend__dupelim__MaybeFlagLvalB_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuseB_22, (MR_Integer) 1)));
#line 715 "dupelim.m"
                                                        {
#line 715 "dupelim.m"
                                                          ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__ReuseRvalA_27, ll_backend__dupelim__ReuseRvalB_29, &ll_backend__dupelim__ReuseRval_31);
                                                        }
#line 713 "dupelim.m"
                                                        if (ll_backend__dupelim__succeeded)
#line 713 "dupelim.m"
                                                          {
#line 721 "dupelim.m"
                                                            if ((ll_backend__dupelim__MaybeFlagLvalA_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 722 "dupelim.m"
                                                              {
#line 723 "dupelim.m"
                                                                ll_backend__dupelim__succeeded = (ll_backend__dupelim__MaybeFlagLvalB_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 722 "dupelim.m"
                                                                if (ll_backend__dupelim__succeeded)
#line 722 "dupelim.m"
                                                                  {
#line 724 "dupelim.m"
                                                                    ll_backend__dupelim__MaybeFlagLval_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 724 "dupelim.m"
                                                                    ll_backend__dupelim__succeeded = MR_TRUE;
#line 722 "dupelim.m"
                                                                  }
#line 722 "dupelim.m"
                                                              }
#line 721 "dupelim.m"
                                                            else
#line 717 "dupelim.m"
                                                              {
#line 717 "dupelim.m"
                                                                MR_Word ll_backend__dupelim__FlagLvalA_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFlagLvalA_28, (MR_Integer) 0)));
#line 717 "dupelim.m"
                                                                MR_Word ll_backend__dupelim__FlagLvalB_33;
#line 717 "dupelim.m"
                                                                MR_Word ll_backend__dupelim__FlagLval_34;

#line 718 "dupelim.m"
                                                                ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__MaybeFlagLvalB_30)) == (MR_mktag((MR_Integer) 1)));
#line 718 "dupelim.m"
                                                                if (ll_backend__dupelim__succeeded)
#line 718 "dupelim.m"
                                                                  {
#line 718 "dupelim.m"
                                                                    ll_backend__dupelim__FlagLvalB_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFlagLvalB_30, (MR_Integer) 0)));
#line 719 "dupelim.m"
                                                                    {
#line 719 "dupelim.m"
                                                                      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__FlagLvalA_32, ll_backend__dupelim__FlagLvalB_33, &ll_backend__dupelim__FlagLval_34);
                                                                    }
#line 717 "dupelim.m"
                                                                    if (ll_backend__dupelim__succeeded)
#line 717 "dupelim.m"
                                                                      {
#line 720 "dupelim.m"
                                                                        {
#line 720 "dupelim.m"
                                                                          ll_backend__dupelim__MaybeFlagLval_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 720 "dupelim.m"
                                                                          MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFlagLval_35, 0) = ((MR_Box) (ll_backend__dupelim__FlagLval_34));
#line 720 "dupelim.m"
                                                                        }
#line 720 "dupelim.m"
                                                                        ll_backend__dupelim__succeeded = MR_TRUE;
#line 717 "dupelim.m"
                                                                      }
#line 718 "dupelim.m"
                                                                  }
#line 717 "dupelim.m"
                                                              }
#line 713 "dupelim.m"
                                                            if (ll_backend__dupelim__succeeded)
#line 713 "dupelim.m"
                                                              {
#line 726 "dupelim.m"
                                                                {
#line 726 "dupelim.m"
                                                                  ll_backend__dupelim__MaybeReuse_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "dupelim.m"
                                                                  MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuse_36, 0) = ((MR_Box) (ll_backend__dupelim__ReuseRval_31));
#line 726 "dupelim.m"
                                                                  MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuse_36, 1) = ((MR_Box) (ll_backend__dupelim__MaybeFlagLval_35));
#line 726 "dupelim.m"
                                                                }
#line 726 "dupelim.m"
                                                                ll_backend__dupelim__succeeded = MR_TRUE;
#line 713 "dupelim.m"
                                                              }
#line 713 "dupelim.m"
                                                          }
#line 714 "dupelim.m"
                                                      }
#line 713 "dupelim.m"
                                                  }
#line 727 "dupelim.m"
                                              }
#line 699 "dupelim.m"
                                          }
#line 699 "dupelim.m"
                                      }
#line 699 "dupelim.m"
                                  }
#line 699 "dupelim.m"
                              }
#line 699 "dupelim.m"
                          }
#line 699 "dupelim.m"
                      }
#line 698 "dupelim.m"
                  }
#line 735 "dupelim.m"
                if (ll_backend__dupelim__succeeded)
#line 733 "dupelim.m"
                  {
#line 733 "dupelim.m"
                    MR_Word ll_backend__dupelim__V_122_122;

#line 733 "dupelim.m"
                    {
#line 733 "dupelim.m"
                      ll_backend__dupelim__V_122_122 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
#line 733 "dupelim.m"
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 733 "dupelim.m"
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 1) = ((MR_Box) (ll_backend__dupelim__Lval_148));
#line 733 "dupelim.m"
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 2) = ((MR_Box) (ll_backend__dupelim__MaybeTag_15));
#line 733 "dupelim.m"
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 3) = ((MR_Box) (ll_backend__dupelim__MaybeOffset_16));
#line 733 "dupelim.m"
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 4) = ((MR_Box) (ll_backend__dupelim__Rval_149));
#line 733 "dupelim.m"
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 5) = ((MR_Box) (ll_backend__dupelim__Msg_17));
#line 733 "dupelim.m"
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 6) = ((MR_Box) (ll_backend__dupelim__MayUseAtomic_18));
#line 733 "dupelim.m"
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 7) = ((MR_Box) (ll_backend__dupelim__MaybeRegionRval_26));
#line 733 "dupelim.m"
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_122_122, 8) = ((MR_Box) (ll_backend__dupelim__MaybeReuse_36));
#line 733 "dupelim.m"
                    }
#line 733 "dupelim.m"
                    {
#line 733 "dupelim.m"
                      MR_Word base;
#line 733 "dupelim.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 733 "dupelim.m"
                      *ll_backend__dupelim__MaybeInstr_6 = base;
#line 733 "dupelim.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_122_122));
#line 733 "dupelim.m"
                    }
#line 733 "dupelim.m"
                  }
#line 735 "dupelim.m"
                else
#line 736 "dupelim.m"
                  *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "dupelim.m"
              }
#line 662 "dupelim.m"
            else
#line 662 "dupelim.m"
              if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 673 "dupelim.m"
                {
#line 673 "dupelim.m"
                  MR_Word ll_backend__dupelim__LvalA_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 673 "dupelim.m"
                  MR_Word ll_backend__dupelim__RvalA_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 680 "dupelim.m"
                  MR_Word ll_backend__dupelim__Lval_130;
#line 680 "dupelim.m"
                  MR_Word ll_backend__dupelim__Rval_131;
#line 675 "dupelim.m"
                  MR_Word ll_backend__dupelim__LvalB_126;
#line 675 "dupelim.m"
                  MR_Word ll_backend__dupelim__RvalB_127;

#line 675 "dupelim.m"
                  ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 675 "dupelim.m"
                  if (ll_backend__dupelim__succeeded)
#line 675 "dupelim.m"
                    {
#line 675 "dupelim.m"
                      ll_backend__dupelim__LvalB_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 675 "dupelim.m"
                      ll_backend__dupelim__RvalB_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 676 "dupelim.m"
                      {
#line 676 "dupelim.m"
                        ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_132, ll_backend__dupelim__LvalB_126, &ll_backend__dupelim__Lval_130);
                      }
#line 675 "dupelim.m"
                      if (ll_backend__dupelim__succeeded)
#line 677 "dupelim.m"
                        {
#line 677 "dupelim.m"
                          ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_133, ll_backend__dupelim__RvalB_127, &ll_backend__dupelim__Rval_131);
                        }
#line 675 "dupelim.m"
                    }
#line 680 "dupelim.m"
                  if (ll_backend__dupelim__succeeded)
#line 679 "dupelim.m"
                    {
#line 679 "dupelim.m"
                      MR_Word ll_backend__dupelim__V_124_124;

#line 679 "dupelim.m"
                      {
#line 679 "dupelim.m"
                        ll_backend__dupelim__V_124_124 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 679 "dupelim.m"
                        MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_124_124, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 679 "dupelim.m"
                        MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_124_124, 1) = ((MR_Box) (ll_backend__dupelim__Lval_130));
#line 679 "dupelim.m"
                        MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_124_124, 2) = ((MR_Box) (ll_backend__dupelim__Rval_131));
#line 679 "dupelim.m"
                      }
#line 679 "dupelim.m"
                      {
#line 679 "dupelim.m"
                        MR_Word base;
#line 679 "dupelim.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 679 "dupelim.m"
                        *ll_backend__dupelim__MaybeInstr_6 = base;
#line 679 "dupelim.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_124_124));
#line 679 "dupelim.m"
                      }
#line 679 "dupelim.m"
                    }
#line 680 "dupelim.m"
                  else
#line 681 "dupelim.m"
                    *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "dupelim.m"
                }
#line 662 "dupelim.m"
              else
#line 662 "dupelim.m"
                if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 856 "dupelim.m"
                  {
#line 856 "dupelim.m"
                    MR_Integer ll_backend__dupelim__NumSlots_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 856 "dupelim.m"
                    MR_Word ll_backend__dupelim__LvalA_204 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 862 "dupelim.m"
                    MR_Word ll_backend__dupelim__Lval_203;
#line 858 "dupelim.m"
                    MR_Word ll_backend__dupelim__LvalB_201;
#line 858 "dupelim.m"
                    MR_Integer ll_backend__dupelim__V_245_245;

#line 858 "dupelim.m"
                    ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 31)));
#line 858 "dupelim.m"
                    if (ll_backend__dupelim__succeeded)
#line 858 "dupelim.m"
                      {
#line 858 "dupelim.m"
                        ll_backend__dupelim__V_245_245 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 858 "dupelim.m"
                        ll_backend__dupelim__LvalB_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 858 "dupelim.m"
                        ll_backend__dupelim__succeeded = (ll_backend__dupelim__NumSlots_55 == ll_backend__dupelim__V_245_245);
#line 858 "dupelim.m"
                        if (ll_backend__dupelim__succeeded)
#line 859 "dupelim.m"
                          {
#line 859 "dupelim.m"
                            ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_204, ll_backend__dupelim__LvalB_201, &ll_backend__dupelim__Lval_203);
                          }
#line 858 "dupelim.m"
                      }
#line 862 "dupelim.m"
                    if (ll_backend__dupelim__succeeded)
#line 861 "dupelim.m"
                      {
#line 861 "dupelim.m"
                        MR_Word ll_backend__dupelim__V_110_110;

#line 861 "dupelim.m"
                        {
#line 861 "dupelim.m"
                          ll_backend__dupelim__V_110_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 861 "dupelim.m"
                          MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_110_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
#line 861 "dupelim.m"
                          MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_110_110, 1) = ((MR_Box) (ll_backend__dupelim__NumSlots_55));
#line 861 "dupelim.m"
                          MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_110_110, 2) = ((MR_Box) (ll_backend__dupelim__Lval_203));
#line 861 "dupelim.m"
                        }
#line 861 "dupelim.m"
                        {
#line 861 "dupelim.m"
                          MR_Word base;
#line 861 "dupelim.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 861 "dupelim.m"
                          *ll_backend__dupelim__MaybeInstr_6 = base;
#line 861 "dupelim.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_110_110));
#line 861 "dupelim.m"
                        }
#line 861 "dupelim.m"
                      }
#line 862 "dupelim.m"
                    else
#line 863 "dupelim.m"
                      *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 856 "dupelim.m"
                  }
#line 662 "dupelim.m"
                else
#line 662 "dupelim.m"
                  if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 888 "dupelim.m"
                    {
#line 888 "dupelim.m"
                      MR_Word ll_backend__dupelim__LCRvalA_226 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 888 "dupelim.m"
                      MR_Word ll_backend__dupelim__LCSRvalA_227 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 895 "dupelim.m"
                      MR_Word ll_backend__dupelim__LCRval_224;
#line 895 "dupelim.m"
                      MR_Word ll_backend__dupelim__LCSRval_225;
#line 890 "dupelim.m"
                      MR_Word ll_backend__dupelim__LCRvalB_220;
#line 890 "dupelim.m"
                      MR_Word ll_backend__dupelim__LCSRvalB_221;

#line 890 "dupelim.m"
                      ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 34)));
#line 890 "dupelim.m"
                      if (ll_backend__dupelim__succeeded)
#line 890 "dupelim.m"
                        {
#line 890 "dupelim.m"
                          ll_backend__dupelim__LCRvalB_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 890 "dupelim.m"
                          ll_backend__dupelim__LCSRvalB_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 891 "dupelim.m"
                          {
#line 891 "dupelim.m"
                            ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__LCRvalA_226, ll_backend__dupelim__LCRvalB_220, &ll_backend__dupelim__LCRval_224);
                          }
#line 890 "dupelim.m"
                          if (ll_backend__dupelim__succeeded)
#line 892 "dupelim.m"
                            {
#line 892 "dupelim.m"
                              ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__LCSRvalA_227, ll_backend__dupelim__LCSRvalB_221, &ll_backend__dupelim__LCSRval_225);
                            }
#line 890 "dupelim.m"
                        }
#line 895 "dupelim.m"
                      if (ll_backend__dupelim__succeeded)
#line 894 "dupelim.m"
                        {
#line 894 "dupelim.m"
                          MR_Word ll_backend__dupelim__V_107_107;

#line 894 "dupelim.m"
                          {
#line 894 "dupelim.m"
                            ll_backend__dupelim__V_107_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 894 "dupelim.m"
                            MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_107_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
#line 894 "dupelim.m"
                            MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_107_107, 1) = ((MR_Box) (ll_backend__dupelim__LCRval_224));
#line 894 "dupelim.m"
                            MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_107_107, 2) = ((MR_Box) (ll_backend__dupelim__LCSRval_225));
#line 894 "dupelim.m"
                          }
#line 894 "dupelim.m"
                          {
#line 894 "dupelim.m"
                            MR_Word base;
#line 894 "dupelim.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 894 "dupelim.m"
                            *ll_backend__dupelim__MaybeInstr_6 = base;
#line 894 "dupelim.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_107_107));
#line 894 "dupelim.m"
                          }
#line 894 "dupelim.m"
                        }
#line 895 "dupelim.m"
                      else
#line 896 "dupelim.m"
                        *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 888 "dupelim.m"
                    }
#line 662 "dupelim.m"
                  else
#line 662 "dupelim.m"
                    if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 877 "dupelim.m"
                      {
#line 877 "dupelim.m"
                        MR_Word ll_backend__dupelim__LCRvalA_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 877 "dupelim.m"
                        MR_Word ll_backend__dupelim__LCSRvalA_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 877 "dupelim.m"
                        MR_Word ll_backend__dupelim__Label_219 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 3)));
#line 884 "dupelim.m"
                        MR_Word ll_backend__dupelim__LCRval_61;
#line 884 "dupelim.m"
                        MR_Word ll_backend__dupelim__LCSRval_62;
#line 879 "dupelim.m"
                        MR_Word ll_backend__dupelim__LCRvalB_59;
#line 879 "dupelim.m"
                        MR_Word ll_backend__dupelim__LCSRvalB_60;
#line 879 "dupelim.m"
                        MR_Word ll_backend__dupelim__V_247_247;

#line 879 "dupelim.m"
                        ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 33)));
#line 879 "dupelim.m"
                        if (ll_backend__dupelim__succeeded)
#line 879 "dupelim.m"
                          {
#line 879 "dupelim.m"
                            ll_backend__dupelim__LCRvalB_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 879 "dupelim.m"
                            ll_backend__dupelim__LCSRvalB_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 879 "dupelim.m"
                            ll_backend__dupelim__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 3)));
#line 879 "dupelim.m"
                            {
#line 879 "dupelim.m"
                              ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__Label_219, ll_backend__dupelim__V_247_247);
                            }
#line 879 "dupelim.m"
                            if (ll_backend__dupelim__succeeded)
#line 879 "dupelim.m"
                              {
#line 880 "dupelim.m"
                                {
#line 880 "dupelim.m"
                                  ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__LCRvalA_57, ll_backend__dupelim__LCRvalB_59, &ll_backend__dupelim__LCRval_61);
                                }
#line 879 "dupelim.m"
                                if (ll_backend__dupelim__succeeded)
#line 881 "dupelim.m"
                                  {
#line 881 "dupelim.m"
                                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__LCSRvalA_58, ll_backend__dupelim__LCSRvalB_60, &ll_backend__dupelim__LCSRval_62);
                                  }
#line 879 "dupelim.m"
                              }
#line 879 "dupelim.m"
                          }
#line 884 "dupelim.m"
                        if (ll_backend__dupelim__succeeded)
#line 883 "dupelim.m"
                          {
#line 883 "dupelim.m"
                            MR_Word ll_backend__dupelim__V_108_108;

#line 883 "dupelim.m"
                            {
#line 883 "dupelim.m"
                              ll_backend__dupelim__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 883 "dupelim.m"
                              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 883 "dupelim.m"
                              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_108_108, 1) = ((MR_Box) (ll_backend__dupelim__LCRval_61));
#line 883 "dupelim.m"
                              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_108_108, 2) = ((MR_Box) (ll_backend__dupelim__LCSRval_62));
#line 883 "dupelim.m"
                              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_108_108, 3) = ((MR_Box) (ll_backend__dupelim__Label_219));
#line 883 "dupelim.m"
                            }
#line 883 "dupelim.m"
                            {
#line 883 "dupelim.m"
                              MR_Word base;
#line 883 "dupelim.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 883 "dupelim.m"
                              *ll_backend__dupelim__MaybeInstr_6 = base;
#line 883 "dupelim.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_108_108));
#line 883 "dupelim.m"
                            }
#line 883 "dupelim.m"
                          }
#line 884 "dupelim.m"
                        else
#line 885 "dupelim.m"
                          *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 877 "dupelim.m"
                      }
#line 662 "dupelim.m"
                    else
#line 662 "dupelim.m"
                      if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 866 "dupelim.m"
                        {
#line 866 "dupelim.m"
                          MR_Word ll_backend__dupelim__Label_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 3)));
#line 866 "dupelim.m"
                          MR_Word ll_backend__dupelim__LvalA_213 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 866 "dupelim.m"
                          MR_Word ll_backend__dupelim__RvalA_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 873 "dupelim.m"
                          MR_Word ll_backend__dupelim__Lval_211;
#line 873 "dupelim.m"
                          MR_Word ll_backend__dupelim__Rval_212;
#line 868 "dupelim.m"
                          MR_Word ll_backend__dupelim__LvalB_207;
#line 868 "dupelim.m"
                          MR_Word ll_backend__dupelim__RvalB_208;
#line 868 "dupelim.m"
                          MR_Word ll_backend__dupelim__V_246_246;

#line 868 "dupelim.m"
                          ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 32)));
#line 868 "dupelim.m"
                          if (ll_backend__dupelim__succeeded)
#line 868 "dupelim.m"
                            {
#line 868 "dupelim.m"
                              ll_backend__dupelim__RvalB_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 868 "dupelim.m"
                              ll_backend__dupelim__LvalB_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 868 "dupelim.m"
                              ll_backend__dupelim__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 3)));
#line 868 "dupelim.m"
                              {
#line 868 "dupelim.m"
                                ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__Label_56, ll_backend__dupelim__V_246_246);
                              }
#line 868 "dupelim.m"
                              if (ll_backend__dupelim__succeeded)
#line 868 "dupelim.m"
                                {
#line 869 "dupelim.m"
                                  {
#line 869 "dupelim.m"
                                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_214, ll_backend__dupelim__RvalB_208, &ll_backend__dupelim__Rval_212);
                                  }
#line 868 "dupelim.m"
                                  if (ll_backend__dupelim__succeeded)
#line 870 "dupelim.m"
                                    {
#line 870 "dupelim.m"
                                      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_213, ll_backend__dupelim__LvalB_207, &ll_backend__dupelim__Lval_211);
                                    }
#line 868 "dupelim.m"
                                }
#line 868 "dupelim.m"
                            }
#line 873 "dupelim.m"
                          if (ll_backend__dupelim__succeeded)
#line 872 "dupelim.m"
                            {
#line 872 "dupelim.m"
                              MR_Word ll_backend__dupelim__V_109_109;

#line 872 "dupelim.m"
                              {
#line 872 "dupelim.m"
                                ll_backend__dupelim__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 872 "dupelim.m"
                                MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
#line 872 "dupelim.m"
                                MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_109_109, 1) = ((MR_Box) (ll_backend__dupelim__Rval_212));
#line 872 "dupelim.m"
                                MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_109_109, 2) = ((MR_Box) (ll_backend__dupelim__Lval_211));
#line 872 "dupelim.m"
                                MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_109_109, 3) = ((MR_Box) (ll_backend__dupelim__Label_56));
#line 872 "dupelim.m"
                              }
#line 872 "dupelim.m"
                              {
#line 872 "dupelim.m"
                                MR_Word base;
#line 872 "dupelim.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 872 "dupelim.m"
                                *ll_backend__dupelim__MaybeInstr_6 = base;
#line 872 "dupelim.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_109_109));
#line 872 "dupelim.m"
                              }
#line 872 "dupelim.m"
                            }
#line 873 "dupelim.m"
                          else
#line 874 "dupelim.m"
                            *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "dupelim.m"
                        }
#line 662 "dupelim.m"
                      else
#line 662 "dupelim.m"
                        if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 739 "dupelim.m"
                          {
#line 739 "dupelim.m"
                            MR_Word ll_backend__dupelim__LvalA_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 745 "dupelim.m"
                            MR_Word ll_backend__dupelim__Lval_158;
#line 741 "dupelim.m"
                            MR_Word ll_backend__dupelim__LvalB_156;

#line 741 "dupelim.m"
                            ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 741 "dupelim.m"
                            if (ll_backend__dupelim__succeeded)
#line 741 "dupelim.m"
                              {
#line 741 "dupelim.m"
                                ll_backend__dupelim__LvalB_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 742 "dupelim.m"
                                {
#line 742 "dupelim.m"
                                  ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_159, ll_backend__dupelim__LvalB_156, &ll_backend__dupelim__Lval_158);
                                }
#line 741 "dupelim.m"
                              }
#line 745 "dupelim.m"
                            if (ll_backend__dupelim__succeeded)
#line 744 "dupelim.m"
                              {
#line 744 "dupelim.m"
                                MR_Word ll_backend__dupelim__V_121_121;

#line 744 "dupelim.m"
                                {
#line 744 "dupelim.m"
                                  ll_backend__dupelim__V_121_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "dupelim.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_121_121, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 744 "dupelim.m"
                                  MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_121_121, 1) = ((MR_Box) (ll_backend__dupelim__Lval_158));
#line 744 "dupelim.m"
                                }
#line 744 "dupelim.m"
                                {
#line 744 "dupelim.m"
                                  MR_Word base;
#line 744 "dupelim.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 744 "dupelim.m"
                                  *ll_backend__dupelim__MaybeInstr_6 = base;
#line 744 "dupelim.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_121_121));
#line 744 "dupelim.m"
                                }
#line 744 "dupelim.m"
                              }
#line 745 "dupelim.m"
                            else
#line 746 "dupelim.m"
                              *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 739 "dupelim.m"
                          }
#line 662 "dupelim.m"
                        else
#line 662 "dupelim.m"
                          if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 836 "dupelim.m"
                            {
#line 836 "dupelim.m"
                              MR_Word ll_backend__dupelim__LvalA_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 842 "dupelim.m"
                              MR_Word ll_backend__dupelim__Lval_191;
#line 838 "dupelim.m"
                              MR_Word ll_backend__dupelim__LvalB_189;

#line 838 "dupelim.m"
                              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 22)));
#line 838 "dupelim.m"
                              if (ll_backend__dupelim__succeeded)
#line 838 "dupelim.m"
                                {
#line 838 "dupelim.m"
                                  ll_backend__dupelim__LvalB_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 839 "dupelim.m"
                                  {
#line 839 "dupelim.m"
                                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_192, ll_backend__dupelim__LvalB_189, &ll_backend__dupelim__Lval_191);
                                  }
#line 838 "dupelim.m"
                                }
#line 842 "dupelim.m"
                              if (ll_backend__dupelim__succeeded)
#line 841 "dupelim.m"
                                {
#line 841 "dupelim.m"
                                  MR_Word ll_backend__dupelim__V_112_112;

#line 841 "dupelim.m"
                                  {
#line 841 "dupelim.m"
                                    ll_backend__dupelim__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "dupelim.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 841 "dupelim.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_112_112, 1) = ((MR_Box) (ll_backend__dupelim__Lval_191));
#line 841 "dupelim.m"
                                  }
#line 841 "dupelim.m"
                                  {
#line 841 "dupelim.m"
                                    MR_Word base;
#line 841 "dupelim.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 841 "dupelim.m"
                                    *ll_backend__dupelim__MaybeInstr_6 = base;
#line 841 "dupelim.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_112_112));
#line 841 "dupelim.m"
                                  }
#line 841 "dupelim.m"
                                }
#line 842 "dupelim.m"
                              else
#line 843 "dupelim.m"
                                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 836 "dupelim.m"
                            }
#line 662 "dupelim.m"
                          else
#line 662 "dupelim.m"
                            if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 846 "dupelim.m"
                              {
#line 846 "dupelim.m"
                                MR_Word ll_backend__dupelim__RvalA_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 852 "dupelim.m"
                                MR_Word ll_backend__dupelim__Rval_197;
#line 848 "dupelim.m"
                                MR_Word ll_backend__dupelim__RvalB_195;

#line 848 "dupelim.m"
                                ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 23)));
#line 848 "dupelim.m"
                                if (ll_backend__dupelim__succeeded)
#line 848 "dupelim.m"
                                  {
#line 848 "dupelim.m"
                                    ll_backend__dupelim__RvalB_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 849 "dupelim.m"
                                    {
#line 849 "dupelim.m"
                                      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_198, ll_backend__dupelim__RvalB_195, &ll_backend__dupelim__Rval_197);
                                    }
#line 848 "dupelim.m"
                                  }
#line 852 "dupelim.m"
                                if (ll_backend__dupelim__succeeded)
#line 851 "dupelim.m"
                                  {
#line 851 "dupelim.m"
                                    MR_Word ll_backend__dupelim__V_111_111;

#line 851 "dupelim.m"
                                    {
#line 851 "dupelim.m"
                                      ll_backend__dupelim__V_111_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "dupelim.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_111_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
#line 851 "dupelim.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_111_111, 1) = ((MR_Box) (ll_backend__dupelim__Rval_197));
#line 851 "dupelim.m"
                                    }
#line 851 "dupelim.m"
                                    {
#line 851 "dupelim.m"
                                      MR_Word base;
#line 851 "dupelim.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 851 "dupelim.m"
                                      *ll_backend__dupelim__MaybeInstr_6 = base;
#line 851 "dupelim.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_111_111));
#line 851 "dupelim.m"
                                    }
#line 851 "dupelim.m"
                                  }
#line 852 "dupelim.m"
                                else
#line 853 "dupelim.m"
                                  *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 846 "dupelim.m"
                              }
#line 662 "dupelim.m"
                            else
#line 662 "dupelim.m"
                              if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 769 "dupelim.m"
                                {
#line 769 "dupelim.m"
                                  MR_Word ll_backend__dupelim__StackId_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 769 "dupelim.m"
                                  MR_Word ll_backend__dupelim__EmbeddedStackFrame_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 771 "dupelim.m"
                                  MR_Word ll_backend__dupelim__V_236_236;
#line 771 "dupelim.m"
                                  MR_Word ll_backend__dupelim__V_237_237;

#line 771 "dupelim.m"
                                  ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 771 "dupelim.m"
                                  if (ll_backend__dupelim__succeeded)
#line 771 "dupelim.m"
                                    {
#line 771 "dupelim.m"
                                      ll_backend__dupelim__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 771 "dupelim.m"
                                      ll_backend__dupelim__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 771 "dupelim.m"
                                      ll_backend__dupelim__succeeded = (ll_backend__dupelim__StackId_37 == ll_backend__dupelim__V_236_236);
#line 771 "dupelim.m"
                                      if (ll_backend__dupelim__succeeded)
#line 771 "dupelim.m"
                                        {
#line 771 "dupelim.m"
                                          ll_backend__dupelim__succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(ll_backend__dupelim__EmbeddedStackFrame_38, ll_backend__dupelim__V_237_237);
                                        }
#line 771 "dupelim.m"
                                    }
#line 774 "dupelim.m"
                                  if (ll_backend__dupelim__succeeded)
#line 773 "dupelim.m"
                                    {
#line 773 "dupelim.m"
                                      MR_Word base;
#line 773 "dupelim.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 773 "dupelim.m"
                                      *ll_backend__dupelim__MaybeInstr_6 = base;
#line 773 "dupelim.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__InstrA_4));
#line 773 "dupelim.m"
                                    }
#line 774 "dupelim.m"
                                  else
#line 775 "dupelim.m"
                                    *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 769 "dupelim.m"
                                }
#line 662 "dupelim.m"
                              else
#line 662 "dupelim.m"
                                if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 779 "dupelim.m"
                                  {
#line 779 "dupelim.m"
                                    MR_Word ll_backend__dupelim__FillOp_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 779 "dupelim.m"
                                    MR_Word ll_backend__dupelim__IdRvalA_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 3)));
#line 779 "dupelim.m"
                                    MR_Word ll_backend__dupelim__NumLvalA_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 4)));
#line 779 "dupelim.m"
                                    MR_Word ll_backend__dupelim__AddrLvalA_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 5)));
#line 779 "dupelim.m"
                                    MR_Word ll_backend__dupelim__EmbeddedStackFrame_174 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 789 "dupelim.m"
                                    MR_Word ll_backend__dupelim__IdRval_46;
#line 789 "dupelim.m"
                                    MR_Word ll_backend__dupelim__NumLval_47;
#line 789 "dupelim.m"
                                    MR_Word ll_backend__dupelim__AddrLval_48;
#line 782 "dupelim.m"
                                    MR_Word ll_backend__dupelim__IdRvalB_43;
#line 782 "dupelim.m"
                                    MR_Word ll_backend__dupelim__NumLvalB_44;
#line 782 "dupelim.m"
                                    MR_Word ll_backend__dupelim__AddrLvalB_45;
#line 782 "dupelim.m"
                                    MR_Word ll_backend__dupelim__V_238_238;
#line 782 "dupelim.m"
                                    MR_Word ll_backend__dupelim__V_239_239;

#line 781 "dupelim.m"
                                    ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 17)));
#line 781 "dupelim.m"
                                    if (ll_backend__dupelim__succeeded)
#line 781 "dupelim.m"
                                      {
#line 781 "dupelim.m"
                                        ll_backend__dupelim__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 781 "dupelim.m"
                                        ll_backend__dupelim__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 781 "dupelim.m"
                                        ll_backend__dupelim__IdRvalB_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 3)));
#line 781 "dupelim.m"
                                        ll_backend__dupelim__NumLvalB_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 4)));
#line 781 "dupelim.m"
                                        ll_backend__dupelim__AddrLvalB_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 5)));
#line 781 "dupelim.m"
                                        {
#line 781 "dupelim.m"
                                          ll_backend__dupelim__succeeded = ll_backend__llds____Unify____region_fill_frame_op_0_0(ll_backend__dupelim__FillOp_39, ll_backend__dupelim__V_238_238);
                                        }
#line 782 "dupelim.m"
                                        if (ll_backend__dupelim__succeeded)
#line 782 "dupelim.m"
                                          {
#line 781 "dupelim.m"
                                            {
#line 781 "dupelim.m"
                                              ll_backend__dupelim__succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(ll_backend__dupelim__EmbeddedStackFrame_174, ll_backend__dupelim__V_239_239);
                                            }
#line 782 "dupelim.m"
                                            if (ll_backend__dupelim__succeeded)
#line 782 "dupelim.m"
                                              {
#line 783 "dupelim.m"
                                                {
#line 783 "dupelim.m"
                                                  ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__IdRvalA_40, ll_backend__dupelim__IdRvalB_43, &ll_backend__dupelim__IdRval_46);
                                                }
#line 782 "dupelim.m"
                                                if (ll_backend__dupelim__succeeded)
#line 782 "dupelim.m"
                                                  {
#line 784 "dupelim.m"
                                                    {
#line 784 "dupelim.m"
                                                      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__NumLvalA_41, ll_backend__dupelim__NumLvalB_44, &ll_backend__dupelim__NumLval_47);
                                                    }
#line 782 "dupelim.m"
                                                    if (ll_backend__dupelim__succeeded)
#line 785 "dupelim.m"
                                                      {
#line 785 "dupelim.m"
                                                        ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__AddrLvalA_42, ll_backend__dupelim__AddrLvalB_45, &ll_backend__dupelim__AddrLval_48);
                                                      }
#line 782 "dupelim.m"
                                                  }
#line 782 "dupelim.m"
                                              }
#line 782 "dupelim.m"
                                          }
#line 781 "dupelim.m"
                                      }
#line 789 "dupelim.m"
                                    if (ll_backend__dupelim__succeeded)
#line 787 "dupelim.m"
                                      {
#line 787 "dupelim.m"
                                        MR_Word ll_backend__dupelim__V_117_117;

#line 787 "dupelim.m"
                                        {
#line 787 "dupelim.m"
                                          ll_backend__dupelim__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 787 "dupelim.m"
                                          MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 787 "dupelim.m"
                                          MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_117_117, 1) = ((MR_Box) (ll_backend__dupelim__FillOp_39));
#line 787 "dupelim.m"
                                          MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_117_117, 2) = ((MR_Box) (ll_backend__dupelim__EmbeddedStackFrame_174));
#line 787 "dupelim.m"
                                          MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_117_117, 3) = ((MR_Box) (ll_backend__dupelim__IdRval_46));
#line 787 "dupelim.m"
                                          MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_117_117, 4) = ((MR_Box) (ll_backend__dupelim__NumLval_47));
#line 787 "dupelim.m"
                                          MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_117_117, 5) = ((MR_Box) (ll_backend__dupelim__AddrLval_48));
#line 787 "dupelim.m"
                                        }
#line 787 "dupelim.m"
                                        {
#line 787 "dupelim.m"
                                          MR_Word base;
#line 787 "dupelim.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 787 "dupelim.m"
                                          *ll_backend__dupelim__MaybeInstr_6 = base;
#line 787 "dupelim.m"
                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_117_117));
#line 787 "dupelim.m"
                                        }
#line 787 "dupelim.m"
                                      }
#line 789 "dupelim.m"
                                    else
#line 790 "dupelim.m"
                                      *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 779 "dupelim.m"
                                  }
#line 662 "dupelim.m"
                                else
#line 662 "dupelim.m"
                                  if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 794 "dupelim.m"
                                    {
#line 794 "dupelim.m"
                                      MR_Word ll_backend__dupelim__SetOp_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 794 "dupelim.m"
                                      MR_Word ll_backend__dupelim__ValueRvalA_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 3)));
#line 794 "dupelim.m"
                                      MR_Word ll_backend__dupelim__EmbeddedStackFrame_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 802 "dupelim.m"
                                      MR_Word ll_backend__dupelim__ValueRval_52;
#line 797 "dupelim.m"
                                      MR_Word ll_backend__dupelim__ValueRvalB_51;
#line 797 "dupelim.m"
                                      MR_Word ll_backend__dupelim__V_240_240;
#line 797 "dupelim.m"
                                      MR_Word ll_backend__dupelim__V_241_241;

#line 796 "dupelim.m"
                                      ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 18)));
#line 796 "dupelim.m"
                                      if (ll_backend__dupelim__succeeded)
#line 796 "dupelim.m"
                                        {
#line 796 "dupelim.m"
                                          ll_backend__dupelim__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 796 "dupelim.m"
                                          ll_backend__dupelim__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 796 "dupelim.m"
                                          ll_backend__dupelim__ValueRvalB_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 3)));
#line 796 "dupelim.m"
                                          ll_backend__dupelim__succeeded = (ll_backend__dupelim__SetOp_49 == ll_backend__dupelim__V_240_240);
#line 797 "dupelim.m"
                                          if (ll_backend__dupelim__succeeded)
#line 797 "dupelim.m"
                                            {
#line 796 "dupelim.m"
                                              {
#line 796 "dupelim.m"
                                                ll_backend__dupelim__succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(ll_backend__dupelim__EmbeddedStackFrame_175, ll_backend__dupelim__V_241_241);
                                              }
#line 797 "dupelim.m"
                                              if (ll_backend__dupelim__succeeded)
#line 798 "dupelim.m"
                                                {
#line 798 "dupelim.m"
                                                  ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__ValueRvalA_50, ll_backend__dupelim__ValueRvalB_51, &ll_backend__dupelim__ValueRval_52);
                                                }
#line 797 "dupelim.m"
                                            }
#line 796 "dupelim.m"
                                        }
#line 802 "dupelim.m"
                                      if (ll_backend__dupelim__succeeded)
#line 800 "dupelim.m"
                                        {
#line 800 "dupelim.m"
                                          MR_Word ll_backend__dupelim__V_116_116;

#line 800 "dupelim.m"
                                          {
#line 800 "dupelim.m"
                                            ll_backend__dupelim__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 800 "dupelim.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 800 "dupelim.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_116_116, 1) = ((MR_Box) (ll_backend__dupelim__SetOp_49));
#line 800 "dupelim.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_116_116, 2) = ((MR_Box) (ll_backend__dupelim__EmbeddedStackFrame_175));
#line 800 "dupelim.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_116_116, 3) = ((MR_Box) (ll_backend__dupelim__ValueRval_52));
#line 800 "dupelim.m"
                                          }
#line 800 "dupelim.m"
                                          {
#line 800 "dupelim.m"
                                            MR_Word base;
#line 800 "dupelim.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 800 "dupelim.m"
                                            *ll_backend__dupelim__MaybeInstr_6 = base;
#line 800 "dupelim.m"
                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_116_116));
#line 800 "dupelim.m"
                                          }
#line 800 "dupelim.m"
                                        }
#line 802 "dupelim.m"
                                      else
#line 803 "dupelim.m"
                                        *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "dupelim.m"
                                    }
#line 662 "dupelim.m"
                                  else
#line 662 "dupelim.m"
                                    if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 826 "dupelim.m"
                                      {
#line 826 "dupelim.m"
                                        MR_Word ll_backend__dupelim__Reason_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 826 "dupelim.m"
                                        MR_Word ll_backend__dupelim__RvalA_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 832 "dupelim.m"
                                        MR_Word ll_backend__dupelim__Rval_185;
#line 828 "dupelim.m"
                                        MR_Word ll_backend__dupelim__RvalB_183;
#line 828 "dupelim.m"
                                        MR_Word ll_backend__dupelim__V_244_244;

#line 828 "dupelim.m"
                                        ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 21)));
#line 828 "dupelim.m"
                                        if (ll_backend__dupelim__succeeded)
#line 828 "dupelim.m"
                                          {
#line 828 "dupelim.m"
                                            ll_backend__dupelim__RvalB_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 828 "dupelim.m"
                                            ll_backend__dupelim__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 828 "dupelim.m"
                                            ll_backend__dupelim__succeeded = (ll_backend__dupelim__Reason_54 == ll_backend__dupelim__V_244_244);
#line 828 "dupelim.m"
                                            if (ll_backend__dupelim__succeeded)
#line 829 "dupelim.m"
                                              {
#line 829 "dupelim.m"
                                                ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_186, ll_backend__dupelim__RvalB_183, &ll_backend__dupelim__Rval_185);
                                              }
#line 828 "dupelim.m"
                                          }
#line 832 "dupelim.m"
                                        if (ll_backend__dupelim__succeeded)
#line 831 "dupelim.m"
                                          {
#line 831 "dupelim.m"
                                            MR_Word ll_backend__dupelim__V_113_113;

#line 831 "dupelim.m"
                                            {
#line 831 "dupelim.m"
                                              ll_backend__dupelim__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 831 "dupelim.m"
                                              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 831 "dupelim.m"
                                              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_113_113, 1) = ((MR_Box) (ll_backend__dupelim__Rval_185));
#line 831 "dupelim.m"
                                              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_113_113, 2) = ((MR_Box) (ll_backend__dupelim__Reason_54));
#line 831 "dupelim.m"
                                            }
#line 831 "dupelim.m"
                                            {
#line 831 "dupelim.m"
                                              MR_Word base;
#line 831 "dupelim.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 831 "dupelim.m"
                                              *ll_backend__dupelim__MaybeInstr_6 = base;
#line 831 "dupelim.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_113_113));
#line 831 "dupelim.m"
                                            }
#line 831 "dupelim.m"
                                          }
#line 832 "dupelim.m"
                                        else
#line 833 "dupelim.m"
                                          *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 826 "dupelim.m"
                                      }
#line 662 "dupelim.m"
                                    else
#line 662 "dupelim.m"
                                      if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 749 "dupelim.m"
                                        {
#line 749 "dupelim.m"
                                          MR_Word ll_backend__dupelim__RvalA_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 755 "dupelim.m"
                                          MR_Word ll_backend__dupelim__Rval_164;
#line 751 "dupelim.m"
                                          MR_Word ll_backend__dupelim__RvalB_162;

#line 751 "dupelim.m"
                                          ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 751 "dupelim.m"
                                          if (ll_backend__dupelim__succeeded)
#line 751 "dupelim.m"
                                            {
#line 751 "dupelim.m"
                                              ll_backend__dupelim__RvalB_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 752 "dupelim.m"
                                              {
#line 752 "dupelim.m"
                                                ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_rval_3_p_0(ll_backend__dupelim__RvalA_165, ll_backend__dupelim__RvalB_162, &ll_backend__dupelim__Rval_164);
                                              }
#line 751 "dupelim.m"
                                            }
#line 755 "dupelim.m"
                                          if (ll_backend__dupelim__succeeded)
#line 754 "dupelim.m"
                                            {
#line 754 "dupelim.m"
                                              MR_Word ll_backend__dupelim__V_120_120;

#line 754 "dupelim.m"
                                              {
#line 754 "dupelim.m"
                                                ll_backend__dupelim__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "dupelim.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 754 "dupelim.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_120_120, 1) = ((MR_Box) (ll_backend__dupelim__Rval_164));
#line 754 "dupelim.m"
                                              }
#line 754 "dupelim.m"
                                              {
#line 754 "dupelim.m"
                                                MR_Word base;
#line 754 "dupelim.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 754 "dupelim.m"
                                                *ll_backend__dupelim__MaybeInstr_6 = base;
#line 754 "dupelim.m"
                                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_120_120));
#line 754 "dupelim.m"
                                              }
#line 754 "dupelim.m"
                                            }
#line 755 "dupelim.m"
                                          else
#line 756 "dupelim.m"
                                            *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 749 "dupelim.m"
                                        }
#line 662 "dupelim.m"
                                      else
#line 662 "dupelim.m"
                                        if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 816 "dupelim.m"
                                          {
#line 816 "dupelim.m"
                                            MR_Word ll_backend__dupelim__LvalA_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 822 "dupelim.m"
                                            MR_Word ll_backend__dupelim__Lval_179;
#line 818 "dupelim.m"
                                            MR_Word ll_backend__dupelim__LvalB_177;

#line 818 "dupelim.m"
                                            ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 20)));
#line 818 "dupelim.m"
                                            if (ll_backend__dupelim__succeeded)
#line 818 "dupelim.m"
                                              {
#line 818 "dupelim.m"
                                                ll_backend__dupelim__LvalB_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 819 "dupelim.m"
                                                {
#line 819 "dupelim.m"
                                                  ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_lval_3_p_0(ll_backend__dupelim__LvalA_180, ll_backend__dupelim__LvalB_177, &ll_backend__dupelim__Lval_179);
                                                }
#line 818 "dupelim.m"
                                              }
#line 822 "dupelim.m"
                                            if (ll_backend__dupelim__succeeded)
#line 821 "dupelim.m"
                                              {
#line 821 "dupelim.m"
                                                MR_Word ll_backend__dupelim__V_114_114;

#line 821 "dupelim.m"
                                                {
#line 821 "dupelim.m"
                                                  ll_backend__dupelim__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 821 "dupelim.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 821 "dupelim.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_114_114, 1) = ((MR_Box) (ll_backend__dupelim__Lval_179));
#line 821 "dupelim.m"
                                                }
#line 821 "dupelim.m"
                                                {
#line 821 "dupelim.m"
                                                  MR_Word base;
#line 821 "dupelim.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 821 "dupelim.m"
                                                  *ll_backend__dupelim__MaybeInstr_6 = base;
#line 821 "dupelim.m"
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__V_114_114));
#line 821 "dupelim.m"
                                                }
#line 821 "dupelim.m"
                                              }
#line 822 "dupelim.m"
                                            else
#line 823 "dupelim.m"
                                              *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 816 "dupelim.m"
                                          }
#line 662 "dupelim.m"
                                        else
#line 662 "dupelim.m"
                                          if (((((MR_tag((MR_Word) ll_backend__dupelim__InstrA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 806 "dupelim.m"
                                            {
#line 806 "dupelim.m"
                                              MR_Word ll_backend__dupelim__UseOp_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 1)));
#line 806 "dupelim.m"
                                              MR_Word ll_backend__dupelim__EmbeddedStackFrame_176 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrA_4, (MR_Integer) 2)));
#line 808 "dupelim.m"
                                              MR_Word ll_backend__dupelim__V_242_242;
#line 808 "dupelim.m"
                                              MR_Word ll_backend__dupelim__V_243_243;

#line 808 "dupelim.m"
                                              ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__InstrB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 0)))) == (MR_Integer) 19)));
#line 808 "dupelim.m"
                                              if (ll_backend__dupelim__succeeded)
#line 808 "dupelim.m"
                                                {
#line 808 "dupelim.m"
                                                  ll_backend__dupelim__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 1)));
#line 808 "dupelim.m"
                                                  ll_backend__dupelim__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__InstrB_5, (MR_Integer) 2)));
#line 808 "dupelim.m"
                                                  {
#line 808 "dupelim.m"
                                                    ll_backend__dupelim__succeeded = ll_backend__llds____Unify____region_use_frame_op_0_0(ll_backend__dupelim__UseOp_53, ll_backend__dupelim__V_242_242);
                                                  }
#line 808 "dupelim.m"
                                                  if (ll_backend__dupelim__succeeded)
#line 808 "dupelim.m"
                                                    {
#line 808 "dupelim.m"
                                                      ll_backend__dupelim__succeeded = ll_backend__llds____Unify____embedded_stack_frame_id_0_0(ll_backend__dupelim__EmbeddedStackFrame_176, ll_backend__dupelim__V_243_243);
                                                    }
#line 808 "dupelim.m"
                                                }
#line 812 "dupelim.m"
                                              if (ll_backend__dupelim__succeeded)
#line 810 "dupelim.m"
                                                {
#line 810 "dupelim.m"
                                                  MR_Word base;
#line 810 "dupelim.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 810 "dupelim.m"
                                                  *ll_backend__dupelim__MaybeInstr_6 = base;
#line 810 "dupelim.m"
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__InstrA_4));
#line 810 "dupelim.m"
                                                }
#line 812 "dupelim.m"
                                              else
#line 813 "dupelim.m"
                                                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 806 "dupelim.m"
                                            }
#line 662 "dupelim.m"
                                          else
#line 921 "dupelim.m"
                                            {
#line 919 "dupelim.m"
                                              {
#line 919 "dupelim.m"
                                                ll_backend__dupelim__succeeded = ll_backend__llds____Unify____instr_0_0(ll_backend__dupelim__InstrA_4, ll_backend__dupelim__InstrB_5);
                                              }
#line 921 "dupelim.m"
                                              if (ll_backend__dupelim__succeeded)
#line 920 "dupelim.m"
                                                {
#line 920 "dupelim.m"
                                                  MR_Word base;
#line 920 "dupelim.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 920 "dupelim.m"
                                                  *ll_backend__dupelim__MaybeInstr_6 = base;
#line 920 "dupelim.m"
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__InstrA_4));
#line 920 "dupelim.m"
                                                }
#line 921 "dupelim.m"
                                              else
#line 922 "dupelim.m"
                                                *ll_backend__dupelim__MaybeInstr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 921 "dupelim.m"
                                            }
#line 662 "dupelim.m"
  }
#line 658 "dupelim.m"
}

#line 604 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_instrs_3_p_0(
#line 604 "dupelim.m"
  MR_Word ll_backend__dupelim__InstrsA_4,
#line 604 "dupelim.m"
  MR_Word ll_backend__dupelim__InstrsB_5,
#line 604 "dupelim.m"
  MR_Word * ll_backend__dupelim__Instrs_6)
#line 604 "dupelim.m"
{
#line 636 "dupelim.m"
  while (MR_TRUE)
#line 636 "dupelim.m"
    {
#line 636 "dupelim.m"
      /* tailcall optimized into a loop */
#line 636 "dupelim.m"
      {
#line 636 "dupelim.m"
        MR_bool ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__InstrsA_4)) == (MR_mktag((MR_Integer) 1)));
#line 636 "dupelim.m"
        MR_Word ll_backend__dupelim__InstrA_7;
#line 636 "dupelim.m"
        MR_Word ll_backend__dupelim__TailA_8;
#line 636 "dupelim.m"
        MR_Word ll_backend__dupelim__InstrB_9;
#line 636 "dupelim.m"
        MR_Word ll_backend__dupelim__TailB_10;

#line 609 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 609 "dupelim.m"
          {
#line 609 "dupelim.m"
            ll_backend__dupelim__InstrA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsA_4, (MR_Integer) 0)));
#line 609 "dupelim.m"
            ll_backend__dupelim__TailA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsA_4, (MR_Integer) 1)));
#line 610 "dupelim.m"
            ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__InstrsB_5)) == (MR_mktag((MR_Integer) 1)));
#line 610 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 610 "dupelim.m"
              {
#line 610 "dupelim.m"
                ll_backend__dupelim__InstrB_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsB_5, (MR_Integer) 0)));
#line 610 "dupelim.m"
                ll_backend__dupelim__TailB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsB_5, (MR_Integer) 1)));
#line 610 "dupelim.m"
              }
#line 609 "dupelim.m"
          }
#line 636 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 612 "dupelim.m"
          {
#line 612 "dupelim.m"
            MR_Word ll_backend__dupelim__UinstrA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrA_7, (MR_Integer) 0)));
#line 612 "dupelim.m"
            MR_String ll_backend__dupelim__CommentA_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrA_7, (MR_Integer) 1)));
#line 612 "dupelim.m"
            MR_Word ll_backend__dupelim__UinstrB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrB_9, (MR_Integer) 0)));
#line 612 "dupelim.m"
            MR_String ll_backend__dupelim__CommentB_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrB_9, (MR_Integer) 1)));
#line 625 "dupelim.m"
            MR_Word ll_backend__dupelim__Uinstr_15;
#line 615 "dupelim.m"
            MR_Word ll_backend__dupelim__V_25_25;

#line 615 "dupelim.m"
            {
#line 615 "dupelim.m"
              ll_backend__dupelim__most_specific_instr_3_p_0(ll_backend__dupelim__UinstrA_11, ll_backend__dupelim__UinstrB_13, &ll_backend__dupelim__V_25_25);
            }
#line 615 "dupelim.m"
            ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 615 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 615 "dupelim.m"
              {
#line 615 "dupelim.m"
                ll_backend__dupelim__Uinstr_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_25_25, (MR_Integer) 0)));
#line 621 "dupelim.m"
                {
#line 621 "dupelim.m"
                  MR_String ll_backend__dupelim__Comment_16;
#line 621 "dupelim.m"
                  MR_Word ll_backend__dupelim__Instr_17;
#line 621 "dupelim.m"
                  MR_Word ll_backend__dupelim__Tail_18;

#line 617 "dupelim.m"
                  ll_backend__dupelim__succeeded = (strcmp(ll_backend__dupelim__CommentA_12, ll_backend__dupelim__CommentB_14) == 0);
#line 619 "dupelim.m"
                  if (ll_backend__dupelim__succeeded)
#line 618 "dupelim.m"
                    ll_backend__dupelim__Comment_16 = ll_backend__dupelim__CommentA_12;
#line 619 "dupelim.m"
                  else
#line 620 "dupelim.m"
                    ll_backend__dupelim__Comment_16 = (MR_String) "unified intruction";
#line 622 "dupelim.m"
                  {
#line 622 "dupelim.m"
                    ll_backend__dupelim__Instr_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 622 "dupelim.m"
                    MR_hl_field(MR_mktag(0), ll_backend__dupelim__Instr_17, 0) = ((MR_Box) (ll_backend__dupelim__Uinstr_15));
#line 622 "dupelim.m"
                    MR_hl_field(MR_mktag(0), ll_backend__dupelim__Instr_17, 1) = ((MR_Box) (ll_backend__dupelim__Comment_16));
#line 622 "dupelim.m"
                  }
#line 623 "dupelim.m"
                  {
#line 623 "dupelim.m"
                    ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_instrs_3_p_0(ll_backend__dupelim__TailA_8, ll_backend__dupelim__TailB_10, &ll_backend__dupelim__Tail_18);
                  }
#line 621 "dupelim.m"
                  if (ll_backend__dupelim__succeeded)
#line 621 "dupelim.m"
                    {
#line 624 "dupelim.m"
                      {
#line 624 "dupelim.m"
                        MR_Word base;
#line 624 "dupelim.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "dupelim.m"
                        *ll_backend__dupelim__Instrs_6 = base;
#line 624 "dupelim.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__Instr_17));
#line 624 "dupelim.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupelim__Tail_18));
#line 624 "dupelim.m"
                      }
#line 624 "dupelim.m"
                      ll_backend__dupelim__succeeded = MR_TRUE;
#line 621 "dupelim.m"
                    }
#line 621 "dupelim.m"
                }
#line 615 "dupelim.m"
              }
#line 615 "dupelim.m"
            else
#line 629 "dupelim.m"
              {
#line 626 "dupelim.m"
                MR_String ll_backend__dupelim__V_19_19;

#line 626 "dupelim.m"
                ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__UinstrA_11)) == (MR_mktag((MR_Integer) 1)));
#line 626 "dupelim.m"
                if (ll_backend__dupelim__succeeded)
#line 626 "dupelim.m"
                  {
#line 626 "dupelim.m"
                    ll_backend__dupelim__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__UinstrA_11, (MR_Integer) 0)));
#line 628 "dupelim.m"
                    /* direct tailcall eliminated */
#line 628 "dupelim.m"
                    {
#line 628 "dupelim.m"
                      MR_Word ll_backend__dupelim__InstrsA__tmp_copy_4 = ll_backend__dupelim__TailA_8;

#line 628 "dupelim.m"
                      ll_backend__dupelim__InstrsA_4 = ll_backend__dupelim__InstrsA__tmp_copy_4;
#line 628 "dupelim.m"
                    }
#line 628 "dupelim.m"
                    continue;
#line 626 "dupelim.m"
                  }
#line 626 "dupelim.m"
                else
#line 633 "dupelim.m"
                  {
#line 630 "dupelim.m"
                    MR_String ll_backend__dupelim__V_20_20;

#line 630 "dupelim.m"
                    ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__UinstrB_13)) == (MR_mktag((MR_Integer) 1)));
#line 630 "dupelim.m"
                    if (ll_backend__dupelim__succeeded)
#line 630 "dupelim.m"
                      {
#line 630 "dupelim.m"
                        ll_backend__dupelim__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__UinstrB_13, (MR_Integer) 0)));
#line 632 "dupelim.m"
                        /* direct tailcall eliminated */
#line 632 "dupelim.m"
                        {
#line 632 "dupelim.m"
                          MR_Word ll_backend__dupelim__InstrsB__tmp_copy_5 = ll_backend__dupelim__TailB_10;

#line 632 "dupelim.m"
                          ll_backend__dupelim__InstrsB_5 = ll_backend__dupelim__InstrsB__tmp_copy_5;
#line 632 "dupelim.m"
                        }
#line 632 "dupelim.m"
                        continue;
#line 630 "dupelim.m"
                      }
#line 633 "dupelim.m"
                  }
#line 629 "dupelim.m"
              }
#line 612 "dupelim.m"
          }
#line 636 "dupelim.m"
        else
#line 641 "dupelim.m"
          {
#line 637 "dupelim.m"
            ll_backend__dupelim__succeeded = (ll_backend__dupelim__InstrsA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 637 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 638 "dupelim.m"
              ll_backend__dupelim__succeeded = (ll_backend__dupelim__InstrsB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 640 "dupelim.m"
              {
#line 640 "dupelim.m"
                *ll_backend__dupelim__Instrs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "dupelim.m"
                ll_backend__dupelim__succeeded = MR_TRUE;
#line 640 "dupelim.m"
              }
#line 641 "dupelim.m"
            else
#line 646 "dupelim.m"
              {
#line 646 "dupelim.m"
                MR_Word ll_backend__dupelim__TailA_33;
#line 642 "dupelim.m"
                MR_Word ll_backend__dupelim__V_26_26;
#line 642 "dupelim.m"
                MR_Word ll_backend__dupelim__InstrA_28;
#line 643 "dupelim.m"
                MR_String ll_backend__dupelim__V_22_22;
#line 643 "dupelim.m"
                MR_String ll_backend__dupelim__V_21_21;

#line 642 "dupelim.m"
                ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__InstrsA_4)) == (MR_mktag((MR_Integer) 1)));
#line 642 "dupelim.m"
                if (ll_backend__dupelim__succeeded)
#line 642 "dupelim.m"
                  {
#line 642 "dupelim.m"
                    ll_backend__dupelim__InstrA_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsA_4, (MR_Integer) 0)));
#line 642 "dupelim.m"
                    ll_backend__dupelim__TailA_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsA_4, (MR_Integer) 1)));
#line 643 "dupelim.m"
                    ll_backend__dupelim__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrA_28, (MR_Integer) 0)));
#line 643 "dupelim.m"
                    ll_backend__dupelim__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrA_28, (MR_Integer) 1)));
#line 643 "dupelim.m"
                    ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 643 "dupelim.m"
                    if (ll_backend__dupelim__succeeded)
#line 643 "dupelim.m"
                      ll_backend__dupelim__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_26_26, (MR_Integer) 0)));
#line 642 "dupelim.m"
                  }
#line 646 "dupelim.m"
                if (ll_backend__dupelim__succeeded)
#line 645 "dupelim.m"
                  {
#line 645 "dupelim.m"
                    /* direct tailcall eliminated */
#line 645 "dupelim.m"
                    {
#line 645 "dupelim.m"
                      MR_Word ll_backend__dupelim__InstrsA__tmp_copy_4 = ll_backend__dupelim__TailA_33;

#line 645 "dupelim.m"
                      ll_backend__dupelim__InstrsA_4 = ll_backend__dupelim__InstrsA__tmp_copy_4;
#line 645 "dupelim.m"
                    }
#line 645 "dupelim.m"
                    continue;
#line 645 "dupelim.m"
                  }
#line 646 "dupelim.m"
                else
#line 651 "dupelim.m"
                  {
#line 651 "dupelim.m"
                    MR_Word ll_backend__dupelim__V_27_27;
#line 651 "dupelim.m"
                    MR_Word ll_backend__dupelim__InstrB_29;
#line 651 "dupelim.m"
                    MR_Word ll_backend__dupelim__TailB_31;
#line 648 "dupelim.m"
                    MR_String ll_backend__dupelim__V_24_24;
#line 648 "dupelim.m"
                    MR_String ll_backend__dupelim__V_23_23;

#line 647 "dupelim.m"
                    ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__InstrsB_5)) == (MR_mktag((MR_Integer) 1)));
#line 647 "dupelim.m"
                    if (ll_backend__dupelim__succeeded)
#line 647 "dupelim.m"
                      {
#line 647 "dupelim.m"
                        ll_backend__dupelim__InstrB_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsB_5, (MR_Integer) 0)));
#line 647 "dupelim.m"
                        ll_backend__dupelim__TailB_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__InstrsB_5, (MR_Integer) 1)));
#line 648 "dupelim.m"
                        ll_backend__dupelim__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrB_29, (MR_Integer) 0)));
#line 648 "dupelim.m"
                        ll_backend__dupelim__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__InstrB_29, (MR_Integer) 1)));
#line 648 "dupelim.m"
                        ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 648 "dupelim.m"
                        if (ll_backend__dupelim__succeeded)
#line 648 "dupelim.m"
                          {
#line 648 "dupelim.m"
                            ll_backend__dupelim__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_27_27, (MR_Integer) 0)));
#line 650 "dupelim.m"
                            /* direct tailcall eliminated */
#line 650 "dupelim.m"
                            {
#line 650 "dupelim.m"
                              MR_Word ll_backend__dupelim__InstrsB__tmp_copy_5 = ll_backend__dupelim__TailB_31;

#line 650 "dupelim.m"
                              ll_backend__dupelim__InstrsB_5 = ll_backend__dupelim__InstrsB__tmp_copy_5;
#line 650 "dupelim.m"
                            }
#line 650 "dupelim.m"
                            continue;
#line 648 "dupelim.m"
                          }
#line 647 "dupelim.m"
                      }
#line 651 "dupelim.m"
                  }
#line 646 "dupelim.m"
              }
#line 641 "dupelim.m"
          }
#line 636 "dupelim.m"
        return ll_backend__dupelim__succeeded;
#line 636 "dupelim.m"
      }
#line 636 "dupelim.m"
      break;
#line 636 "dupelim.m"
    }
#line 604 "dupelim.m"
}

#line 583 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__most_specific_block_6_p_0(
#line 583 "dupelim.m"
  MR_Word ll_backend__dupelim__Instrs1_7,
#line 583 "dupelim.m"
  MR_Word ll_backend__dupelim__MaybeFallThrough1_8,
#line 583 "dupelim.m"
  MR_Word ll_backend__dupelim__Instrs2_9,
#line 583 "dupelim.m"
  MR_Word ll_backend__dupelim__MaybeFallThrough2_10,
#line 583 "dupelim.m"
  MR_Word * ll_backend__dupelim__Instrs_11,
#line 583 "dupelim.m"
  MR_Word * ll_backend__dupelim__MaybeFallThrough_12)
#line 583 "dupelim.m"
{
#line 588 "dupelim.m"
  {
#line 588 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;
#line 588 "dupelim.m"
    MR_Word ll_backend__dupelim__TypeCtorInfo_20_20;
#line 588 "dupelim.m"
    MR_Word ll_backend__dupelim__StdInstrs1_13;
#line 588 "dupelim.m"
    MR_Word ll_backend__dupelim__StdInstrs2_14;
#line 588 "dupelim.m"
    MR_Word ll_backend__dupelim__LastInstr_15;
#line 597 "dupelim.m"
    MR_Box ll_backend__dupelim__conv2_LastInstr_15;
#line 600 "dupelim.m"
    MR_Word ll_backend__dupelim__Label_16;
#line 598 "dupelim.m"
    MR_Word ll_backend__dupelim__V_18_18;
#line 598 "dupelim.m"
    MR_Word ll_backend__dupelim__V_19_19;
#line 598 "dupelim.m"
    MR_String ll_backend__dupelim__V_17_17;

#line 568 "dupelim.m"
    if ((ll_backend__dupelim__MaybeFallThrough1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "dupelim.m"
      ll_backend__dupelim__StdInstrs1_13 = ll_backend__dupelim__Instrs1_7;
#line 568 "dupelim.m"
    else
#line 568 "dupelim.m"
      {
#line 568 "dupelim.m"
        MR_Word ll_backend__dupelim__Label_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFallThrough1_8, (MR_Integer) 0)));
#line 570 "dupelim.m"
        MR_Word ll_backend__dupelim__LastInstr_25;
#line 570 "dupelim.m"
        MR_Word ll_backend__dupelim__V_28_28;
#line 570 "dupelim.m"
        MR_Word ll_backend__dupelim__V_29_29;
#line 570 "dupelim.m"
        MR_Word ll_backend__dupelim__V_37_37;
#line 570 "dupelim.m"
        MR_Box ll_backend__dupelim__conv0_LastInstr_25;
#line 571 "dupelim.m"
        MR_String ll_backend__dupelim__V_26_26;

#line 570 "dupelim.m"
        {
#line 570 "dupelim.m"
          ll_backend__dupelim__succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__dupelim__Instrs1_7, &ll_backend__dupelim__conv0_LastInstr_25);
        }
#line 570 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 570 "dupelim.m"
          {
#line 570 "dupelim.m"
            ll_backend__dupelim__LastInstr_25 = ((MR_Word) ll_backend__dupelim__conv0_LastInstr_25);
#line 570 "dupelim.m"
            ll_backend__dupelim__succeeded = MR_TRUE;
#line 570 "dupelim.m"
          }
#line 570 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 570 "dupelim.m"
          {
#line 571 "dupelim.m"
            ll_backend__dupelim__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__LastInstr_25, (MR_Integer) 0)));
#line 571 "dupelim.m"
            ll_backend__dupelim__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__LastInstr_25, (MR_Integer) 1)));
#line 571 "dupelim.m"
            ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__V_28_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_28_28, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 571 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 571 "dupelim.m"
              {
#line 571 "dupelim.m"
                ll_backend__dupelim__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_28_28, (MR_Integer) 1)));
#line 571 "dupelim.m"
                ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 571 "dupelim.m"
                if (ll_backend__dupelim__succeeded)
#line 571 "dupelim.m"
                  {
#line 571 "dupelim.m"
                    ll_backend__dupelim__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_29_29, (MR_Integer) 0)));
#line 571 "dupelim.m"
                    {
#line 571 "dupelim.m"
                      ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__Label_24, ll_backend__dupelim__V_37_37);
                    }
#line 571 "dupelim.m"
                  }
#line 571 "dupelim.m"
              }
#line 570 "dupelim.m"
          }
#line 574 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 573 "dupelim.m"
          ll_backend__dupelim__StdInstrs1_13 = ll_backend__dupelim__Instrs1_7;
#line 574 "dupelim.m"
        else
#line 575 "dupelim.m"
          {
#line 575 "dupelim.m"
            MR_Word ll_backend__dupelim__Goto_27;
#line 575 "dupelim.m"
            MR_Word ll_backend__dupelim__V_30_30;
#line 575 "dupelim.m"
            MR_Word ll_backend__dupelim__V_31_31;
#line 575 "dupelim.m"
            MR_Word ll_backend__dupelim__V_33_33;

#line 575 "dupelim.m"
            {
#line 575 "dupelim.m"
              ll_backend__dupelim__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 575 "dupelim.m"
              MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_31_31, 0) = ((MR_Box) (ll_backend__dupelim__Label_24));
#line 575 "dupelim.m"
            }
#line 575 "dupelim.m"
            {
#line 575 "dupelim.m"
              ll_backend__dupelim__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "dupelim.m"
              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 575 "dupelim.m"
              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_30_30, 1) = ((MR_Box) (ll_backend__dupelim__V_31_31));
#line 575 "dupelim.m"
            }
#line 575 "dupelim.m"
            {
#line 575 "dupelim.m"
              ll_backend__dupelim__Goto_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 575 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__Goto_27, 0) = ((MR_Box) (ll_backend__dupelim__V_30_30));
#line 575 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__Goto_27, 1) = ((MR_Box) ((MR_String) ""));
#line 575 "dupelim.m"
            }
#line 576 "dupelim.m"
            {
#line 576 "dupelim.m"
              ll_backend__dupelim__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "dupelim.m"
              MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_33_33, 0) = ((MR_Box) (ll_backend__dupelim__Goto_27));
#line 576 "dupelim.m"
              MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "dupelim.m"
            }
#line 576 "dupelim.m"
            {
#line 576 "dupelim.m"
              ll_backend__dupelim__StdInstrs1_13 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__dupelim__Instrs1_7, ll_backend__dupelim__V_33_33);
            }
#line 575 "dupelim.m"
          }
#line 568 "dupelim.m"
      }
#line 568 "dupelim.m"
    if ((ll_backend__dupelim__MaybeFallThrough2_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "dupelim.m"
      ll_backend__dupelim__StdInstrs2_14 = ll_backend__dupelim__Instrs2_9;
#line 568 "dupelim.m"
    else
#line 568 "dupelim.m"
      {
#line 568 "dupelim.m"
        MR_Word ll_backend__dupelim__Label_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFallThrough2_10, (MR_Integer) 0)));
#line 570 "dupelim.m"
        MR_Word ll_backend__dupelim__LastInstr_43;
#line 570 "dupelim.m"
        MR_Word ll_backend__dupelim__V_46_46;
#line 570 "dupelim.m"
        MR_Word ll_backend__dupelim__V_47_47;
#line 570 "dupelim.m"
        MR_Word ll_backend__dupelim__V_55_55;
#line 570 "dupelim.m"
        MR_Box ll_backend__dupelim__conv1_LastInstr_43;
#line 571 "dupelim.m"
        MR_String ll_backend__dupelim__V_44_44;

#line 570 "dupelim.m"
        {
#line 570 "dupelim.m"
          ll_backend__dupelim__succeeded = mercury__list__last_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__dupelim__Instrs2_9, &ll_backend__dupelim__conv1_LastInstr_43);
        }
#line 570 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 570 "dupelim.m"
          {
#line 570 "dupelim.m"
            ll_backend__dupelim__LastInstr_43 = ((MR_Word) ll_backend__dupelim__conv1_LastInstr_43);
#line 570 "dupelim.m"
            ll_backend__dupelim__succeeded = MR_TRUE;
#line 570 "dupelim.m"
          }
#line 570 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 570 "dupelim.m"
          {
#line 571 "dupelim.m"
            ll_backend__dupelim__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__LastInstr_43, (MR_Integer) 0)));
#line 571 "dupelim.m"
            ll_backend__dupelim__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__LastInstr_43, (MR_Integer) 1)));
#line 571 "dupelim.m"
            ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__V_46_46)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_46_46, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 571 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 571 "dupelim.m"
              {
#line 571 "dupelim.m"
                ll_backend__dupelim__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_46_46, (MR_Integer) 1)));
#line 571 "dupelim.m"
                ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 571 "dupelim.m"
                if (ll_backend__dupelim__succeeded)
#line 571 "dupelim.m"
                  {
#line 571 "dupelim.m"
                    ll_backend__dupelim__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_47_47, (MR_Integer) 0)));
#line 571 "dupelim.m"
                    {
#line 571 "dupelim.m"
                      ll_backend__dupelim__succeeded = ll_backend__llds____Unify____label_0_0(ll_backend__dupelim__Label_42, ll_backend__dupelim__V_55_55);
                    }
#line 571 "dupelim.m"
                  }
#line 571 "dupelim.m"
              }
#line 570 "dupelim.m"
          }
#line 574 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 573 "dupelim.m"
          ll_backend__dupelim__StdInstrs2_14 = ll_backend__dupelim__Instrs2_9;
#line 574 "dupelim.m"
        else
#line 575 "dupelim.m"
          {
#line 575 "dupelim.m"
            MR_Word ll_backend__dupelim__Goto_45;
#line 575 "dupelim.m"
            MR_Word ll_backend__dupelim__V_48_48;
#line 575 "dupelim.m"
            MR_Word ll_backend__dupelim__V_49_49;
#line 575 "dupelim.m"
            MR_Word ll_backend__dupelim__V_51_51;

#line 575 "dupelim.m"
            {
#line 575 "dupelim.m"
              ll_backend__dupelim__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 575 "dupelim.m"
              MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_49_49, 0) = ((MR_Box) (ll_backend__dupelim__Label_42));
#line 575 "dupelim.m"
            }
#line 575 "dupelim.m"
            {
#line 575 "dupelim.m"
              ll_backend__dupelim__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "dupelim.m"
              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 575 "dupelim.m"
              MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_48_48, 1) = ((MR_Box) (ll_backend__dupelim__V_49_49));
#line 575 "dupelim.m"
            }
#line 575 "dupelim.m"
            {
#line 575 "dupelim.m"
              ll_backend__dupelim__Goto_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 575 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__Goto_45, 0) = ((MR_Box) (ll_backend__dupelim__V_48_48));
#line 575 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__Goto_45, 1) = ((MR_Box) ((MR_String) ""));
#line 575 "dupelim.m"
            }
#line 576 "dupelim.m"
            {
#line 576 "dupelim.m"
              ll_backend__dupelim__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "dupelim.m"
              MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_51_51, 0) = ((MR_Box) (ll_backend__dupelim__Goto_45));
#line 576 "dupelim.m"
              MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "dupelim.m"
            }
#line 576 "dupelim.m"
            {
#line 576 "dupelim.m"
              ll_backend__dupelim__StdInstrs2_14 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__dupelim__Instrs2_9, ll_backend__dupelim__V_51_51);
            }
#line 575 "dupelim.m"
          }
#line 568 "dupelim.m"
      }
#line 591 "dupelim.m"
    {
#line 591 "dupelim.m"
      ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_instrs_3_p_0(ll_backend__dupelim__StdInstrs1_13, ll_backend__dupelim__StdInstrs2_14, ll_backend__dupelim__Instrs_11);
    }
#line 588 "dupelim.m"
    if (ll_backend__dupelim__succeeded)
#line 588 "dupelim.m"
      {
#line 4066 "ll_backend.dupelim.c"
        ll_backend__dupelim__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 597 "dupelim.m"
        {
#line 597 "dupelim.m"
          mercury__list__det_last_2_p_0(ll_backend__dupelim__TypeCtorInfo_20_20, *ll_backend__dupelim__Instrs_11, &ll_backend__dupelim__conv2_LastInstr_15);
        }
#line 597 "dupelim.m"
        ll_backend__dupelim__LastInstr_15 = ((MR_Word) ll_backend__dupelim__conv2_LastInstr_15);
#line 598 "dupelim.m"
        ll_backend__dupelim__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__LastInstr_15, (MR_Integer) 0)));
#line 598 "dupelim.m"
        ll_backend__dupelim__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__LastInstr_15, (MR_Integer) 1)));
#line 598 "dupelim.m"
        ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__V_18_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_18_18, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 598 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 598 "dupelim.m"
          {
#line 598 "dupelim.m"
            ll_backend__dupelim__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__V_18_18, (MR_Integer) 1)));
#line 598 "dupelim.m"
            ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 598 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 598 "dupelim.m"
              ll_backend__dupelim__Label_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_19_19, (MR_Integer) 0)));
#line 598 "dupelim.m"
          }
#line 600 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 599 "dupelim.m"
          {
#line 599 "dupelim.m"
            MR_Word base;
#line 599 "dupelim.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 599 "dupelim.m"
            *ll_backend__dupelim__MaybeFallThrough_12 = base;
#line 599 "dupelim.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__Label_16));
#line 599 "dupelim.m"
          }
#line 600 "dupelim.m"
        else
#line 601 "dupelim.m"
          *ll_backend__dupelim__MaybeFallThrough_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "dupelim.m"
        ll_backend__dupelim__succeeded = MR_TRUE;
#line 588 "dupelim.m"
      }
#line 588 "dupelim.m"
    return ll_backend__dupelim__succeeded;
#line 588 "dupelim.m"
  }
#line 583 "dupelim.m"
}

#line 524 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__standardize_rval_2_p_0(
#line 524 "dupelim.m"
  MR_Word ll_backend__dupelim__Rval0_3,
#line 524 "dupelim.m"
  MR_Word * ll_backend__dupelim__Rval_4)
#line 524 "dupelim.m"
{
#line 528 "dupelim.m"
  {
#line 528 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;

#line 528 "dupelim.m"
    if (((MR_tag((MR_Word) ll_backend__dupelim__Rval0_3)) == (MR_mktag((MR_Integer) 0))))
#line 528 "dupelim.m"
      {
#line 528 "dupelim.m"
        MR_Word ll_backend__dupelim__Lval0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__Rval0_3, (MR_Integer) 0)));
#line 528 "dupelim.m"
        MR_Word ll_backend__dupelim__Lval_6;

#line 529 "dupelim.m"
        {
#line 529 "dupelim.m"
          ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_5, &ll_backend__dupelim__Lval_6);
        }
#line 530 "dupelim.m"
        {
#line 530 "dupelim.m"
          MR_Word base;
#line 530 "dupelim.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 530 "dupelim.m"
          *ll_backend__dupelim__Rval_4 = base;
#line 530 "dupelim.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__dupelim__Lval_6));
#line 530 "dupelim.m"
        }
#line 528 "dupelim.m"
      }
#line 528 "dupelim.m"
    else
#line 528 "dupelim.m"
      if (((MR_tag((MR_Word) ll_backend__dupelim__Rval0_3)) == (MR_mktag((MR_Integer) 1))))
#line 548 "dupelim.m"
        {
#line 549 "dupelim.m"
          {
#line 549 "dupelim.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.standardize_rval\'/2", (MR_String) "var");
#line 549 "dupelim.m"
            return;
          }
#line 548 "dupelim.m"
        }
#line 528 "dupelim.m"
      else
#line 528 "dupelim.m"
        if (((((MR_tag((MR_Word) ll_backend__dupelim__Rval0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 543 "dupelim.m"
          {
#line 543 "dupelim.m"
            MR_Word ll_backend__dupelim__Binop_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 1)));
#line 543 "dupelim.m"
            MR_Word ll_backend__dupelim__Rval0R_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 3)));
#line 543 "dupelim.m"
            MR_Word ll_backend__dupelim__RvalR_17;
#line 543 "dupelim.m"
            MR_Word ll_backend__dupelim__Rval0L_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 2)));
#line 543 "dupelim.m"
            MR_Word ll_backend__dupelim__RvalL_23;

#line 544 "dupelim.m"
            {
#line 544 "dupelim.m"
              ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0L_22, &ll_backend__dupelim__RvalL_23);
            }
#line 545 "dupelim.m"
            {
#line 545 "dupelim.m"
              ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0R_16, &ll_backend__dupelim__RvalR_17);
            }
#line 546 "dupelim.m"
            {
#line 546 "dupelim.m"
              MR_Word base;
#line 546 "dupelim.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 546 "dupelim.m"
              *ll_backend__dupelim__Rval_4 = base;
#line 546 "dupelim.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 546 "dupelim.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Binop_15));
#line 546 "dupelim.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__RvalL_23));
#line 546 "dupelim.m"
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__RvalR_17));
#line 546 "dupelim.m"
            }
#line 543 "dupelim.m"
          }
#line 528 "dupelim.m"
        else
#line 528 "dupelim.m"
          if (((((MR_tag((MR_Word) ll_backend__dupelim__Rval0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 539 "dupelim.m"
            {
#line 539 "dupelim.m"
              MR_Word ll_backend__dupelim__Unop_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 1)));
#line 539 "dupelim.m"
              MR_Word ll_backend__dupelim__Rval0L_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Rval0_3, (MR_Integer) 2)));
#line 539 "dupelim.m"
              MR_Word ll_backend__dupelim__RvalL_14;

#line 540 "dupelim.m"
              {
#line 540 "dupelim.m"
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0L_13, &ll_backend__dupelim__RvalL_14);
              }
#line 541 "dupelim.m"
              {
#line 541 "dupelim.m"
                MR_Word base;
#line 541 "dupelim.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 541 "dupelim.m"
                *ll_backend__dupelim__Rval_4 = base;
#line 541 "dupelim.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 541 "dupelim.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Unop_12));
#line 541 "dupelim.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__RvalL_14));
#line 541 "dupelim.m"
              }
#line 539 "dupelim.m"
            }
#line 528 "dupelim.m"
          else
#line 537 "dupelim.m"
            *ll_backend__dupelim__Rval_4 = ll_backend__dupelim__Rval0_3;
#line 528 "dupelim.m"
  }
#line 524 "dupelim.m"
}

#line 489 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__standardize_lval_2_p_0(
#line 489 "dupelim.m"
  MR_Word ll_backend__dupelim__Lval0_3,
#line 489 "dupelim.m"
  MR_Word * ll_backend__dupelim__Lval_4)
#line 489 "dupelim.m"
{
#line 512 "dupelim.m"
  {
#line 512 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;

#line 512 "dupelim.m"
    if (((((MR_tag((MR_Word) ll_backend__dupelim__Lval0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Lval0_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 515 "dupelim.m"
      {
#line 515 "dupelim.m"
        MR_Word ll_backend__dupelim__Addr_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Lval0_3, (MR_Integer) 2)));
#line 515 "dupelim.m"
        MR_Word ll_backend__dupelim__FieldNum_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Lval0_3, (MR_Integer) 3)));
#line 515 "dupelim.m"
        MR_Word ll_backend__dupelim__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Lval0_3, (MR_Integer) 1)));

#line 516 "dupelim.m"
        {
#line 516 "dupelim.m"
          MR_Word base;
#line 516 "dupelim.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 516 "dupelim.m"
          *ll_backend__dupelim__Lval_4 = base;
#line 516 "dupelim.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 516 "dupelim.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 516 "dupelim.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Addr_22));
#line 516 "dupelim.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__FieldNum_23));
#line 516 "dupelim.m"
        }
#line 515 "dupelim.m"
      }
#line 512 "dupelim.m"
    else
#line 512 "dupelim.m"
      if (((((MR_tag((MR_Word) ll_backend__dupelim__Lval0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Lval0_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 518 "dupelim.m"
        {
#line 519 "dupelim.m"
          {
#line 519 "dupelim.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.standardize_lval\'/2", (MR_String) "lvar");
#line 519 "dupelim.m"
            return;
          }
#line 518 "dupelim.m"
        }
#line 512 "dupelim.m"
      else
#line 513 "dupelim.m"
        *ll_backend__dupelim__Lval_4 = ll_backend__dupelim__Lval0_3;
#line 512 "dupelim.m"
  }
#line 489 "dupelim.m"
}

#line 341 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__standardize_instr_2_p_0(
#line 341 "dupelim.m"
  MR_Word ll_backend__dupelim__Instr0_3,
#line 341 "dupelim.m"
  MR_Word * ll_backend__dupelim__Instr_4)
#line 341 "dupelim.m"
{
#line 345 "dupelim.m"
  {
#line 345 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;

#line 345 "dupelim.m"
    if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 345 "dupelim.m"
      {
#line 345 "dupelim.m"
        MR_Word ll_backend__dupelim__Lval0_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 345 "dupelim.m"
        MR_Word ll_backend__dupelim__Rval0_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
#line 345 "dupelim.m"
        MR_Word ll_backend__dupelim__Lval_7;
#line 345 "dupelim.m"
        MR_Word ll_backend__dupelim__Rval_8;

#line 346 "dupelim.m"
        {
#line 346 "dupelim.m"
          ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_5, &ll_backend__dupelim__Lval_7);
        }
#line 347 "dupelim.m"
        {
#line 347 "dupelim.m"
          ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_6, &ll_backend__dupelim__Rval_8);
        }
#line 348 "dupelim.m"
        {
#line 348 "dupelim.m"
          MR_Word base;
#line 348 "dupelim.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 348 "dupelim.m"
          *ll_backend__dupelim__Instr_4 = base;
#line 348 "dupelim.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "dupelim.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_7));
#line 348 "dupelim.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Rval_8));
#line 348 "dupelim.m"
        }
#line 345 "dupelim.m"
      }
#line 345 "dupelim.m"
    else
#line 345 "dupelim.m"
      if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 418 "dupelim.m"
        {
#line 418 "dupelim.m"
          MR_Word ll_backend__dupelim__Rval0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 418 "dupelim.m"
          MR_Word ll_backend__dupelim__Rval_107;

#line 419 "dupelim.m"
          {
#line 419 "dupelim.m"
            ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_106, &ll_backend__dupelim__Rval_107);
          }
#line 420 "dupelim.m"
          {
#line 420 "dupelim.m"
            MR_Word base;
#line 420 "dupelim.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "dupelim.m"
            *ll_backend__dupelim__Instr_4 = base;
#line 420 "dupelim.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 420 "dupelim.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Rval_107));
#line 420 "dupelim.m"
          }
#line 418 "dupelim.m"
        }
#line 345 "dupelim.m"
      else
#line 345 "dupelim.m"
        if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 355 "dupelim.m"
          {
#line 355 "dupelim.m"
            MR_Word ll_backend__dupelim__CodeAddr_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
#line 355 "dupelim.m"
            MR_Word ll_backend__dupelim__Rval0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 355 "dupelim.m"
            MR_Word ll_backend__dupelim__Rval_92;

#line 356 "dupelim.m"
            {
#line 356 "dupelim.m"
              ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_91, &ll_backend__dupelim__Rval_92);
            }
#line 357 "dupelim.m"
            {
#line 357 "dupelim.m"
              MR_Word base;
#line 357 "dupelim.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 357 "dupelim.m"
              *ll_backend__dupelim__Instr_4 = base;
#line 357 "dupelim.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 357 "dupelim.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Rval_92));
#line 357 "dupelim.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__CodeAddr_9));
#line 357 "dupelim.m"
            }
#line 355 "dupelim.m"
          }
#line 345 "dupelim.m"
        else
#line 345 "dupelim.m"
          if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 368 "dupelim.m"
            {
#line 368 "dupelim.m"
              MR_Word ll_backend__dupelim__MaybeTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
#line 368 "dupelim.m"
              MR_Word ll_backend__dupelim__MaybeOffset_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 3)));
#line 368 "dupelim.m"
              MR_Word ll_backend__dupelim__Msg_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 5)));
#line 368 "dupelim.m"
              MR_Word ll_backend__dupelim__MayUseAtomic_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 6)));
#line 368 "dupelim.m"
              MR_Word ll_backend__dupelim__MaybeRegionRval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 7)));
#line 368 "dupelim.m"
              MR_Word ll_backend__dupelim__MaybeReuse0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 8)));
#line 368 "dupelim.m"
              MR_Word ll_backend__dupelim__MaybeRegionRval_18;
#line 368 "dupelim.m"
              MR_Word ll_backend__dupelim__MaybeReuse_25;
#line 368 "dupelim.m"
              MR_Word ll_backend__dupelim__Lval0_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 368 "dupelim.m"
              MR_Word ll_backend__dupelim__Rval0_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 4)));
#line 368 "dupelim.m"
              MR_Word ll_backend__dupelim__Lval_99;
#line 368 "dupelim.m"
              MR_Word ll_backend__dupelim__Rval_100;

#line 369 "dupelim.m"
              {
#line 369 "dupelim.m"
                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_97, &ll_backend__dupelim__Lval_99);
              }
#line 370 "dupelim.m"
              {
#line 370 "dupelim.m"
                ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_98, &ll_backend__dupelim__Rval_100);
              }
#line 375 "dupelim.m"
              if ((ll_backend__dupelim__MaybeRegionRval0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "dupelim.m"
                ll_backend__dupelim__MaybeRegionRval_18 = ll_backend__dupelim__MaybeRegionRval0_14;
#line 375 "dupelim.m"
              else
#line 372 "dupelim.m"
                {
#line 372 "dupelim.m"
                  MR_Word ll_backend__dupelim__RegionRval0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeRegionRval0_14, (MR_Integer) 0)));
#line 372 "dupelim.m"
                  MR_Word ll_backend__dupelim__RegionRval_17;

#line 373 "dupelim.m"
                  {
#line 373 "dupelim.m"
                    ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__RegionRval0_16, &ll_backend__dupelim__RegionRval_17);
                  }
#line 374 "dupelim.m"
                  {
#line 374 "dupelim.m"
                    ll_backend__dupelim__MaybeRegionRval_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 374 "dupelim.m"
                    MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeRegionRval_18, 0) = ((MR_Box) (ll_backend__dupelim__RegionRval_17));
#line 374 "dupelim.m"
                  }
#line 372 "dupelim.m"
                }
#line 391 "dupelim.m"
              if ((ll_backend__dupelim__MaybeReuse0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "dupelim.m"
                ll_backend__dupelim__MaybeReuse_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 391 "dupelim.m"
              else
#line 380 "dupelim.m"
                {
#line 380 "dupelim.m"
                  MR_Word ll_backend__dupelim__ReuseRval0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuse0_15, (MR_Integer) 0)));
#line 380 "dupelim.m"
                  MR_Word ll_backend__dupelim__MaybeFlagLval0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuse0_15, (MR_Integer) 1)));
#line 380 "dupelim.m"
                  MR_Word ll_backend__dupelim__ReuseRval_21;
#line 380 "dupelim.m"
                  MR_Word ll_backend__dupelim__MaybeFlagLval_24;

#line 381 "dupelim.m"
                  {
#line 381 "dupelim.m"
                    ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__ReuseRval0_19, &ll_backend__dupelim__ReuseRval_21);
                  }
#line 386 "dupelim.m"
                  if ((ll_backend__dupelim__MaybeFlagLval0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "dupelim.m"
                    ll_backend__dupelim__MaybeFlagLval_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "dupelim.m"
                  else
#line 383 "dupelim.m"
                    {
#line 383 "dupelim.m"
                      MR_Word ll_backend__dupelim__FlagLval0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFlagLval0_20, (MR_Integer) 0)));
#line 383 "dupelim.m"
                      MR_Word ll_backend__dupelim__FlagLval_23;

#line 384 "dupelim.m"
                      {
#line 384 "dupelim.m"
                        ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__FlagLval0_22, &ll_backend__dupelim__FlagLval_23);
                      }
#line 385 "dupelim.m"
                      {
#line 385 "dupelim.m"
                        ll_backend__dupelim__MaybeFlagLval_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 385 "dupelim.m"
                        MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFlagLval_24, 0) = ((MR_Box) (ll_backend__dupelim__FlagLval_23));
#line 385 "dupelim.m"
                      }
#line 383 "dupelim.m"
                    }
#line 390 "dupelim.m"
                  {
#line 390 "dupelim.m"
                    ll_backend__dupelim__MaybeReuse_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "dupelim.m"
                    MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuse_25, 0) = ((MR_Box) (ll_backend__dupelim__ReuseRval_21));
#line 390 "dupelim.m"
                    MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeReuse_25, 1) = ((MR_Box) (ll_backend__dupelim__MaybeFlagLval_24));
#line 390 "dupelim.m"
                  }
#line 380 "dupelim.m"
                }
#line 395 "dupelim.m"
              {
#line 395 "dupelim.m"
                MR_Word base;
#line 395 "dupelim.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
#line 395 "dupelim.m"
                *ll_backend__dupelim__Instr_4 = base;
#line 395 "dupelim.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 395 "dupelim.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_99));
#line 395 "dupelim.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__MaybeTag_10));
#line 395 "dupelim.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__MaybeOffset_11));
#line 395 "dupelim.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__dupelim__Rval_100));
#line 395 "dupelim.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__dupelim__Msg_12));
#line 395 "dupelim.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__dupelim__MayUseAtomic_13));
#line 395 "dupelim.m"
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__dupelim__MaybeRegionRval_18));
#line 395 "dupelim.m"
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__dupelim__MaybeReuse_25));
#line 395 "dupelim.m"
              }
#line 368 "dupelim.m"
            }
#line 345 "dupelim.m"
          else
#line 345 "dupelim.m"
            if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 438 "dupelim.m"
              {
#line 438 "dupelim.m"
                MR_Integer ll_backend__dupelim__N_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
#line 438 "dupelim.m"
                MR_Integer ll_backend__dupelim__ConjId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 3)));
#line 438 "dupelim.m"
                MR_Word ll_backend__dupelim__Lval0_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 438 "dupelim.m"
                MR_Word ll_backend__dupelim__Lval_117;

#line 439 "dupelim.m"
                {
#line 439 "dupelim.m"
                  ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_116, &ll_backend__dupelim__Lval_117);
                }
#line 440 "dupelim.m"
                {
#line 440 "dupelim.m"
                  MR_Word base;
#line 440 "dupelim.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 440 "dupelim.m"
                  *ll_backend__dupelim__Instr_4 = base;
#line 440 "dupelim.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 440 "dupelim.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_117));
#line 440 "dupelim.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__N_38));
#line 440 "dupelim.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__ConjId_39));
#line 440 "dupelim.m"
                }
#line 438 "dupelim.m"
              }
#line 345 "dupelim.m"
            else
#line 345 "dupelim.m"
              if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 442 "dupelim.m"
                {
#line 442 "dupelim.m"
                  MR_Word ll_backend__dupelim__Label_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
#line 442 "dupelim.m"
                  MR_Word ll_backend__dupelim__Lval0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 442 "dupelim.m"
                  MR_Word ll_backend__dupelim__Lval_119;

#line 443 "dupelim.m"
                  {
#line 443 "dupelim.m"
                    ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_118, &ll_backend__dupelim__Lval_119);
                  }
#line 444 "dupelim.m"
                  {
#line 444 "dupelim.m"
                    MR_Word base;
#line 444 "dupelim.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 444 "dupelim.m"
                    *ll_backend__dupelim__Instr_4 = base;
#line 444 "dupelim.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 444 "dupelim.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_119));
#line 444 "dupelim.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Label_40));
#line 444 "dupelim.m"
                  }
#line 442 "dupelim.m"
                }
#line 345 "dupelim.m"
              else
#line 345 "dupelim.m"
                if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 350 "dupelim.m"
                  {
#line 350 "dupelim.m"
                    MR_Word ll_backend__dupelim__Lval0_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 350 "dupelim.m"
                    MR_Word ll_backend__dupelim__Rval0_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
#line 350 "dupelim.m"
                    MR_Word ll_backend__dupelim__Lval_89;
#line 350 "dupelim.m"
                    MR_Word ll_backend__dupelim__Rval_90;

#line 351 "dupelim.m"
                    {
#line 351 "dupelim.m"
                      ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_87, &ll_backend__dupelim__Lval_89);
                    }
#line 352 "dupelim.m"
                    {
#line 352 "dupelim.m"
                      ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_88, &ll_backend__dupelim__Rval_90);
                    }
#line 353 "dupelim.m"
                    {
#line 353 "dupelim.m"
                      MR_Word base;
#line 353 "dupelim.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 353 "dupelim.m"
                      *ll_backend__dupelim__Instr_4 = base;
#line 353 "dupelim.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 353 "dupelim.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_89));
#line 353 "dupelim.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Rval_90));
#line 353 "dupelim.m"
                    }
#line 350 "dupelim.m"
                  }
#line 345 "dupelim.m"
                else
#line 345 "dupelim.m"
                  if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 446 "dupelim.m"
                    {
#line 446 "dupelim.m"
                      MR_Integer ll_backend__dupelim__NumSlots_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 446 "dupelim.m"
                      MR_Word ll_backend__dupelim__Lval0_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
#line 446 "dupelim.m"
                      MR_Word ll_backend__dupelim__Lval_121;

#line 447 "dupelim.m"
                      {
#line 447 "dupelim.m"
                        ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_120, &ll_backend__dupelim__Lval_121);
                      }
#line 448 "dupelim.m"
                      {
#line 448 "dupelim.m"
                        MR_Word base;
#line 448 "dupelim.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 448 "dupelim.m"
                        *ll_backend__dupelim__Instr_4 = base;
#line 448 "dupelim.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
#line 448 "dupelim.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__NumSlots_41));
#line 448 "dupelim.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Lval_121));
#line 448 "dupelim.m"
                      }
#line 446 "dupelim.m"
                    }
#line 345 "dupelim.m"
                  else
#line 345 "dupelim.m"
                    if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 460 "dupelim.m"
                      {
#line 460 "dupelim.m"
                        MR_Word ll_backend__dupelim__LCRval0_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 460 "dupelim.m"
                        MR_Word ll_backend__dupelim__LCSRval0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
#line 460 "dupelim.m"
                        MR_Word ll_backend__dupelim__LCRval_130;
#line 460 "dupelim.m"
                        MR_Word ll_backend__dupelim__LCSRval_131;

#line 461 "dupelim.m"
                        {
#line 461 "dupelim.m"
                          ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__LCRval0_128, &ll_backend__dupelim__LCRval_130);
                        }
#line 462 "dupelim.m"
                        {
#line 462 "dupelim.m"
                          ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__LCSRval0_129, &ll_backend__dupelim__LCSRval_131);
                        }
#line 463 "dupelim.m"
                        {
#line 463 "dupelim.m"
                          MR_Word base;
#line 463 "dupelim.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 463 "dupelim.m"
                          *ll_backend__dupelim__Instr_4 = base;
#line 463 "dupelim.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
#line 463 "dupelim.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__LCRval_130));
#line 463 "dupelim.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__LCSRval_131));
#line 463 "dupelim.m"
                        }
#line 460 "dupelim.m"
                      }
#line 345 "dupelim.m"
                    else
#line 345 "dupelim.m"
                      if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 455 "dupelim.m"
                        {
#line 455 "dupelim.m"
                          MR_Word ll_backend__dupelim__LCRval0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 455 "dupelim.m"
                          MR_Word ll_backend__dupelim__LCSRval0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
#line 455 "dupelim.m"
                          MR_Word ll_backend__dupelim__LCRval_44;
#line 455 "dupelim.m"
                          MR_Word ll_backend__dupelim__LCSRval_45;
#line 455 "dupelim.m"
                          MR_Word ll_backend__dupelim__Label_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 3)));

#line 456 "dupelim.m"
                          {
#line 456 "dupelim.m"
                            ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__LCRval0_42, &ll_backend__dupelim__LCRval_44);
                          }
#line 457 "dupelim.m"
                          {
#line 457 "dupelim.m"
                            ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__LCSRval0_43, &ll_backend__dupelim__LCSRval_45);
                          }
#line 458 "dupelim.m"
                          {
#line 458 "dupelim.m"
                            MR_Word base;
#line 458 "dupelim.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 458 "dupelim.m"
                            *ll_backend__dupelim__Instr_4 = base;
#line 458 "dupelim.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 458 "dupelim.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__LCRval_44));
#line 458 "dupelim.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__LCSRval_45));
#line 458 "dupelim.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__Label_127));
#line 458 "dupelim.m"
                          }
#line 455 "dupelim.m"
                        }
#line 345 "dupelim.m"
                      else
#line 345 "dupelim.m"
                        if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 450 "dupelim.m"
                          {
#line 450 "dupelim.m"
                            MR_Word ll_backend__dupelim__Lval0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
#line 450 "dupelim.m"
                            MR_Word ll_backend__dupelim__Rval0_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 450 "dupelim.m"
                            MR_Word ll_backend__dupelim__Lval_124;
#line 450 "dupelim.m"
                            MR_Word ll_backend__dupelim__Rval_125;
#line 450 "dupelim.m"
                            MR_Word ll_backend__dupelim__Label_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 3)));

#line 451 "dupelim.m"
                            {
#line 451 "dupelim.m"
                              ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_123, &ll_backend__dupelim__Rval_125);
                            }
#line 452 "dupelim.m"
                            {
#line 452 "dupelim.m"
                              ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_122, &ll_backend__dupelim__Lval_124);
                            }
#line 453 "dupelim.m"
                            {
#line 453 "dupelim.m"
                              MR_Word base;
#line 453 "dupelim.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 453 "dupelim.m"
                              *ll_backend__dupelim__Instr_4 = base;
#line 453 "dupelim.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
#line 453 "dupelim.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Rval_125));
#line 453 "dupelim.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Lval_124));
#line 453 "dupelim.m"
                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__Label_126));
#line 453 "dupelim.m"
                            }
#line 450 "dupelim.m"
                          }
#line 345 "dupelim.m"
                        else
#line 345 "dupelim.m"
                          if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 398 "dupelim.m"
                            {
#line 398 "dupelim.m"
                              MR_Word ll_backend__dupelim__Lval0_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 398 "dupelim.m"
                              MR_Word ll_backend__dupelim__Lval_102;

#line 399 "dupelim.m"
                              {
#line 399 "dupelim.m"
                                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_101, &ll_backend__dupelim__Lval_102);
                              }
#line 400 "dupelim.m"
                              {
#line 400 "dupelim.m"
                                MR_Word base;
#line 400 "dupelim.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "dupelim.m"
                                *ll_backend__dupelim__Instr_4 = base;
#line 400 "dupelim.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 400 "dupelim.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_102));
#line 400 "dupelim.m"
                              }
#line 398 "dupelim.m"
                            }
#line 345 "dupelim.m"
                          else
#line 345 "dupelim.m"
                            if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 430 "dupelim.m"
                              {
#line 430 "dupelim.m"
                                MR_Word ll_backend__dupelim__Lval0_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 430 "dupelim.m"
                                MR_Word ll_backend__dupelim__Lval_113;

#line 431 "dupelim.m"
                                {
#line 431 "dupelim.m"
                                  ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_112, &ll_backend__dupelim__Lval_113);
                                }
#line 432 "dupelim.m"
                                {
#line 432 "dupelim.m"
                                  MR_Word base;
#line 432 "dupelim.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "dupelim.m"
                                  *ll_backend__dupelim__Instr_4 = base;
#line 432 "dupelim.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 432 "dupelim.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_113));
#line 432 "dupelim.m"
                                }
#line 430 "dupelim.m"
                              }
#line 345 "dupelim.m"
                            else
#line 345 "dupelim.m"
                              if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 434 "dupelim.m"
                                {
#line 434 "dupelim.m"
                                  MR_Word ll_backend__dupelim__Rval0_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 434 "dupelim.m"
                                  MR_Word ll_backend__dupelim__Rval_115;

#line 435 "dupelim.m"
                                  {
#line 435 "dupelim.m"
                                    ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_114, &ll_backend__dupelim__Rval_115);
                                  }
#line 436 "dupelim.m"
                                  {
#line 436 "dupelim.m"
                                    MR_Word base;
#line 436 "dupelim.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "dupelim.m"
                                    *ll_backend__dupelim__Instr_4 = base;
#line 436 "dupelim.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
#line 436 "dupelim.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Rval_115));
#line 436 "dupelim.m"
                                  }
#line 434 "dupelim.m"
                                }
#line 345 "dupelim.m"
                              else
#line 345 "dupelim.m"
                                if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 407 "dupelim.m"
                                  {
#line 407 "dupelim.m"
                                    MR_Word ll_backend__dupelim__FillOp_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 407 "dupelim.m"
                                    MR_Word ll_backend__dupelim__EmbeddedStackFrame_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
#line 407 "dupelim.m"
                                    MR_Word ll_backend__dupelim__IdRval0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 3)));
#line 407 "dupelim.m"
                                    MR_Word ll_backend__dupelim__NumLval0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 4)));
#line 407 "dupelim.m"
                                    MR_Word ll_backend__dupelim__AddrLval0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 5)));
#line 407 "dupelim.m"
                                    MR_Word ll_backend__dupelim__IdRval_31;
#line 407 "dupelim.m"
                                    MR_Word ll_backend__dupelim__NumLval_32;
#line 407 "dupelim.m"
                                    MR_Word ll_backend__dupelim__AddrLval_33;

#line 408 "dupelim.m"
                                    {
#line 408 "dupelim.m"
                                      ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__IdRval0_28, &ll_backend__dupelim__IdRval_31);
                                    }
#line 409 "dupelim.m"
                                    {
#line 409 "dupelim.m"
                                      ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__NumLval0_29, &ll_backend__dupelim__NumLval_32);
                                    }
#line 410 "dupelim.m"
                                    {
#line 410 "dupelim.m"
                                      ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__AddrLval0_30, &ll_backend__dupelim__AddrLval_33);
                                    }
#line 411 "dupelim.m"
                                    {
#line 411 "dupelim.m"
                                      MR_Word base;
#line 411 "dupelim.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 411 "dupelim.m"
                                      *ll_backend__dupelim__Instr_4 = base;
#line 411 "dupelim.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 411 "dupelim.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__FillOp_26));
#line 411 "dupelim.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__EmbeddedStackFrame_27));
#line 411 "dupelim.m"
                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__IdRval_31));
#line 411 "dupelim.m"
                                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__dupelim__NumLval_32));
#line 411 "dupelim.m"
                                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__dupelim__AddrLval_33));
#line 411 "dupelim.m"
                                    }
#line 407 "dupelim.m"
                                  }
#line 345 "dupelim.m"
                                else
#line 345 "dupelim.m"
                                  if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 414 "dupelim.m"
                                    {
#line 414 "dupelim.m"
                                      MR_Word ll_backend__dupelim__SetOp_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 414 "dupelim.m"
                                      MR_Word ll_backend__dupelim__ValueRval0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 3)));
#line 414 "dupelim.m"
                                      MR_Word ll_backend__dupelim__ValueRval_36;
#line 414 "dupelim.m"
                                      MR_Word ll_backend__dupelim__EmbeddedStackFrame_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));

#line 415 "dupelim.m"
                                      {
#line 415 "dupelim.m"
                                        ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__ValueRval0_35, &ll_backend__dupelim__ValueRval_36);
                                      }
#line 416 "dupelim.m"
                                      {
#line 416 "dupelim.m"
                                        MR_Word base;
#line 416 "dupelim.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 416 "dupelim.m"
                                        *ll_backend__dupelim__Instr_4 = base;
#line 416 "dupelim.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 416 "dupelim.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__SetOp_34));
#line 416 "dupelim.m"
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__EmbeddedStackFrame_105));
#line 416 "dupelim.m"
                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupelim__ValueRval_36));
#line 416 "dupelim.m"
                                      }
#line 414 "dupelim.m"
                                    }
#line 345 "dupelim.m"
                                  else
#line 345 "dupelim.m"
                                    if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 426 "dupelim.m"
                                      {
#line 426 "dupelim.m"
                                        MR_Word ll_backend__dupelim__Reason_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 2)));
#line 426 "dupelim.m"
                                        MR_Word ll_backend__dupelim__Rval0_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 426 "dupelim.m"
                                        MR_Word ll_backend__dupelim__Rval_111;

#line 427 "dupelim.m"
                                        {
#line 427 "dupelim.m"
                                          ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_110, &ll_backend__dupelim__Rval_111);
                                        }
#line 428 "dupelim.m"
                                        {
#line 428 "dupelim.m"
                                          MR_Word base;
#line 428 "dupelim.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 428 "dupelim.m"
                                          *ll_backend__dupelim__Instr_4 = base;
#line 428 "dupelim.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 428 "dupelim.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Rval_111));
#line 428 "dupelim.m"
                                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupelim__Reason_37));
#line 428 "dupelim.m"
                                        }
#line 426 "dupelim.m"
                                      }
#line 345 "dupelim.m"
                                    else
#line 345 "dupelim.m"
                                      if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 402 "dupelim.m"
                                        {
#line 402 "dupelim.m"
                                          MR_Word ll_backend__dupelim__Rval0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 402 "dupelim.m"
                                          MR_Word ll_backend__dupelim__Rval_104;

#line 403 "dupelim.m"
                                          {
#line 403 "dupelim.m"
                                            ll_backend__dupelim__standardize_rval_2_p_0(ll_backend__dupelim__Rval0_103, &ll_backend__dupelim__Rval_104);
                                          }
#line 404 "dupelim.m"
                                          {
#line 404 "dupelim.m"
                                            MR_Word base;
#line 404 "dupelim.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "dupelim.m"
                                            *ll_backend__dupelim__Instr_4 = base;
#line 404 "dupelim.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 404 "dupelim.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Rval_104));
#line 404 "dupelim.m"
                                          }
#line 402 "dupelim.m"
                                        }
#line 345 "dupelim.m"
                                      else
#line 345 "dupelim.m"
                                        if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 363 "dupelim.m"
                                          {
#line 363 "dupelim.m"
                                            MR_Word ll_backend__dupelim__Lval0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 363 "dupelim.m"
                                            MR_Word ll_backend__dupelim__Lval_96;

#line 364 "dupelim.m"
                                            {
#line 364 "dupelim.m"
                                              ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_95, &ll_backend__dupelim__Lval_96);
                                            }
#line 365 "dupelim.m"
                                            {
#line 365 "dupelim.m"
                                              MR_Word base;
#line 365 "dupelim.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "dupelim.m"
                                              *ll_backend__dupelim__Instr_4 = base;
#line 365 "dupelim.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 365 "dupelim.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_96));
#line 365 "dupelim.m"
                                            }
#line 363 "dupelim.m"
                                          }
#line 345 "dupelim.m"
                                        else
#line 345 "dupelim.m"
                                          if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 359 "dupelim.m"
                                            {
#line 359 "dupelim.m"
                                              MR_Word ll_backend__dupelim__Lval0_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 359 "dupelim.m"
                                              MR_Word ll_backend__dupelim__Lval_94;

#line 360 "dupelim.m"
                                              {
#line 360 "dupelim.m"
                                                ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_93, &ll_backend__dupelim__Lval_94);
                                              }
#line 361 "dupelim.m"
                                              {
#line 361 "dupelim.m"
                                                MR_Word base;
#line 361 "dupelim.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "dupelim.m"
                                                *ll_backend__dupelim__Instr_4 = base;
#line 361 "dupelim.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 361 "dupelim.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_94));
#line 361 "dupelim.m"
                                              }
#line 359 "dupelim.m"
                                            }
#line 345 "dupelim.m"
                                          else
#line 345 "dupelim.m"
                                            if (((((MR_tag((MR_Word) ll_backend__dupelim__Instr0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 422 "dupelim.m"
                                              {
#line 422 "dupelim.m"
                                                MR_Word ll_backend__dupelim__Lval0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Instr0_3, (MR_Integer) 1)));
#line 422 "dupelim.m"
                                                MR_Word ll_backend__dupelim__Lval_109;

#line 423 "dupelim.m"
                                                {
#line 423 "dupelim.m"
                                                  ll_backend__dupelim__standardize_lval_2_p_0(ll_backend__dupelim__Lval0_108, &ll_backend__dupelim__Lval_109);
                                                }
#line 424 "dupelim.m"
                                                {
#line 424 "dupelim.m"
                                                  MR_Word base;
#line 424 "dupelim.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "dupelim.m"
                                                  *ll_backend__dupelim__Instr_4 = base;
#line 424 "dupelim.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 424 "dupelim.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupelim__Lval_109));
#line 424 "dupelim.m"
                                                }
#line 422 "dupelim.m"
                                              }
#line 345 "dupelim.m"
                                            else
#line 484 "dupelim.m"
                                              *ll_backend__dupelim__Instr_4 = ll_backend__dupelim__Instr0_3;
#line 345 "dupelim.m"
  }
#line 341 "dupelim.m"
}

#line 327 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__standardize_instrs_2_p_0(
#line 327 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 327 "dupelim.m"
  MR_Word * ll_backend__dupelim__HeadVar__2_2)
#line 327 "dupelim.m"
{
#line 329 "dupelim.m"
  {
#line 329 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;

#line 329 "dupelim.m"
    if ((ll_backend__dupelim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "dupelim.m"
      *ll_backend__dupelim__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 329 "dupelim.m"
    else
#line 330 "dupelim.m"
      {
#line 330 "dupelim.m"
        MR_Word ll_backend__dupelim__Instr_3;
#line 330 "dupelim.m"
        MR_Word ll_backend__dupelim__Instrs_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 1)));
#line 330 "dupelim.m"
        MR_Word ll_backend__dupelim__StdInstrs1_7;
#line 330 "dupelim.m"
        MR_Word ll_backend__dupelim__StdInstr_8;
#line 330 "dupelim.m"
        MR_Word ll_backend__dupelim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 0)));
#line 330 "dupelim.m"
        MR_String ll_backend__dupelim__V_4_4;
#line 333 "dupelim.m"
        MR_String ll_backend__dupelim__V_9_9;

#line 330 "dupelim.m"
        ll_backend__dupelim__Instr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_10_10, (MR_Integer) 0)));
#line 330 "dupelim.m"
        ll_backend__dupelim__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_10_10, (MR_Integer) 1)));
#line 331 "dupelim.m"
        {
#line 331 "dupelim.m"
          ll_backend__dupelim__standardize_instrs_2_p_0(ll_backend__dupelim__Instrs_5, &ll_backend__dupelim__StdInstrs1_7);
        }
#line 332 "dupelim.m"
        {
#line 332 "dupelim.m"
          ll_backend__dupelim__standardize_instr_2_p_0(ll_backend__dupelim__Instr_3, &ll_backend__dupelim__StdInstr_8);
        }
#line 333 "dupelim.m"
        ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__StdInstr_8)) == (MR_mktag((MR_Integer) 1)));
#line 333 "dupelim.m"
        if (ll_backend__dupelim__succeeded)
#line 333 "dupelim.m"
          {
#line 333 "dupelim.m"
            ll_backend__dupelim__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__StdInstr_8, (MR_Integer) 0)));
#line 334 "dupelim.m"
            *ll_backend__dupelim__HeadVar__2_2 = ll_backend__dupelim__StdInstrs1_7;
#line 333 "dupelim.m"
          }
#line 333 "dupelim.m"
        else
#line 336 "dupelim.m"
          {
#line 336 "dupelim.m"
            MR_Word base;
#line 336 "dupelim.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "dupelim.m"
            *ll_backend__dupelim__HeadVar__2_2 = base;
#line 336 "dupelim.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupelim__StdInstr_8));
#line 336 "dupelim.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupelim__StdInstrs1_7));
#line 336 "dupelim.m"
          }
#line 330 "dupelim.m"
      }
#line 329 "dupelim.m"
  }
#line 327 "dupelim.m"
}

#line 285 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__process_elim_labels_11_p_0_1(
#line 285 "dupelim.m"
  MR_Box ll_backend__dupelim__closure_arg)
#line 285 "dupelim.m"
{
#line 285 "dupelim.m"
  {
#line 285 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;
#line 285 "dupelim.m"
    MR_Box ll_backend__dupelim__closure = ll_backend__dupelim__closure_arg;

#line 285 "dupelim.m"
    {
#line 285 "dupelim.m"
      return ll_backend__dupelim__succeeded = ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__285__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__closure, (MR_Integer) 4))));
    }
#line 285 "dupelim.m"
    return ll_backend__dupelim__succeeded;
#line 285 "dupelim.m"
  }
#line 285 "dupelim.m"
}

#line 273 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__process_elim_labels_11_p_0(
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__2_2,
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_3,
#line 273 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_LabelSeq_4,
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__BlockMap_5,
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__Exemplar_6,
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_7,
#line 273 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_ReplMap_8,
#line 273 "dupelim.m"
  MR_Word * ll_backend__dupelim__Instrs_9,
#line 273 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0_10,
#line 273 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_11)
#line 273 "dupelim.m"
{
#line 278 "dupelim.m"
  while (MR_TRUE)
#line 278 "dupelim.m"
    {
#line 278 "dupelim.m"
      /* tailcall optimized into a loop */
#line 278 "dupelim.m"
      {
#line 278 "dupelim.m"
        MR_bool ll_backend__dupelim__succeeded;

#line 278 "dupelim.m"
        if ((ll_backend__dupelim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "dupelim.m"
          {
#line 278 "dupelim.m"
            *ll_backend__dupelim__Instrs_9 = ll_backend__dupelim__HeadVar__2_2;
#line 279 "dupelim.m"
            *ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_11 = ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0_10;
#line 278 "dupelim.m"
            *ll_backend__dupelim__STATE_VARIABLE_ReplMap_8 = ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_7;
#line 278 "dupelim.m"
            *ll_backend__dupelim__STATE_VARIABLE_LabelSeq_4 = ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_3;
#line 278 "dupelim.m"
          }
#line 278 "dupelim.m"
        else
#line 281 "dupelim.m"
          {
#line 281 "dupelim.m"
            MR_Word ll_backend__dupelim__TypeCtorInfo_61_61 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 281 "dupelim.m"
            MR_Word ll_backend__dupelim__ElimLabel_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 0)));
#line 281 "dupelim.m"
            MR_Word ll_backend__dupelim__ElimLabels_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 1)));
#line 281 "dupelim.m"
            MR_Word ll_backend__dupelim__ElimLabelInfo_33;
#line 281 "dupelim.m"
            MR_Word ll_backend__dupelim__ElimLabel2_34;
#line 281 "dupelim.m"
            MR_Word ll_backend__dupelim__ElimInstrs_36;
#line 281 "dupelim.m"
            MR_Word ll_backend__dupelim__ElimMaybeFallThrough_40;
#line 281 "dupelim.m"
            MR_Word ll_backend__dupelim__V_48_48;
#line 282 "dupelim.m"
            MR_Box ll_backend__dupelim__conv0_ElimLabelInfo_33;
#line 283 "dupelim.m"
            MR_Word ll_backend__dupelim__V_35_35;
#line 283 "dupelim.m"
            MR_Integer ll_backend__dupelim___NumElimInstrs_37;
#line 283 "dupelim.m"
            MR_Word ll_backend__dupelim__V_38_38;
#line 283 "dupelim.m"
            MR_Word ll_backend__dupelim__V_39_39;
#line 295 "dupelim.m"
            MR_Word ll_backend__dupelim__Instrs1_41;
#line 295 "dupelim.m"
            MR_Word ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_52_52;

#line 282 "dupelim.m"
            {
#line 282 "dupelim.m"
              mercury__map__lookup_3_p_0(ll_backend__dupelim__TypeCtorInfo_61_61, (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0, ll_backend__dupelim__BlockMap_5, ((MR_Box) (ll_backend__dupelim__ElimLabel_24)), &ll_backend__dupelim__conv0_ElimLabelInfo_33);
            }
#line 282 "dupelim.m"
            ll_backend__dupelim__ElimLabelInfo_33 = ((MR_Word) ll_backend__dupelim__conv0_ElimLabelInfo_33);
#line 283 "dupelim.m"
            ll_backend__dupelim__ElimLabel2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 0)));
#line 283 "dupelim.m"
            ll_backend__dupelim__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 1)));
#line 283 "dupelim.m"
            ll_backend__dupelim__ElimInstrs_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 2)));
#line 283 "dupelim.m"
            ll_backend__dupelim___NumElimInstrs_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 3)));
#line 283 "dupelim.m"
            ll_backend__dupelim__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 4)));
#line 283 "dupelim.m"
            ll_backend__dupelim__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 5)));
#line 283 "dupelim.m"
            ll_backend__dupelim__ElimMaybeFallThrough_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ElimLabelInfo_33, (MR_Integer) 6)));
#line 285 "dupelim.m"
            {
#line 285 "dupelim.m"
              ll_backend__dupelim__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 285 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_48_48, 0) = ((MR_Box) (&ll_backend__dupelim_scalar_common_4[1]));
#line 285 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_48_48, 1) = ((MR_Box) (ll_backend__dupelim__process_elim_labels_11_p_0_1));
#line 285 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 285 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_48_48, 3) = ((MR_Box) (ll_backend__dupelim__ElimLabel_24));
#line 285 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_48_48, 4) = ((MR_Box) (ll_backend__dupelim__ElimLabel2_34));
#line 285 "dupelim.m"
            }
#line 285 "dupelim.m"
            {
#line 285 "dupelim.m"
              mercury__require__expect_4_p_0(ll_backend__dupelim__V_48_48, (MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.process_elim_labels\'/11", (MR_String) "elim label mismatch");
            }
#line 288 "dupelim.m"
            {
#line 288 "dupelim.m"
              ll_backend__dupelim__succeeded = ll_backend__dupelim__most_specific_block_6_p_0(ll_backend__dupelim__HeadVar__2_2, ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0_10, ll_backend__dupelim__ElimInstrs_36, ll_backend__dupelim__ElimMaybeFallThrough_40, &ll_backend__dupelim__Instrs1_41, &ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_52_52);
            }
#line 295 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 291 "dupelim.m"
              {
#line 291 "dupelim.m"
                MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_53_53;
#line 291 "dupelim.m"
                MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_54_54;

#line 291 "dupelim.m"
                {
#line 291 "dupelim.m"
                  mercury__list__delete_all_3_p_1(ll_backend__dupelim__TypeCtorInfo_61_61, ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_3, ((MR_Box) (ll_backend__dupelim__ElimLabel_24)), &ll_backend__dupelim__STATE_VARIABLE_LabelSeq_53_53);
                }
#line 292 "dupelim.m"
                {
#line 292 "dupelim.m"
                  mercury__map__det_insert_4_p_0(ll_backend__dupelim__TypeCtorInfo_61_61, ll_backend__dupelim__TypeCtorInfo_61_61, ((MR_Box) (ll_backend__dupelim__ElimLabel_24)), ((MR_Box) (ll_backend__dupelim__Exemplar_6)), ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_7, &ll_backend__dupelim__STATE_VARIABLE_ReplMap_54_54);
                }
#line 293 "dupelim.m"
                /* direct tailcall eliminated */
#line 293 "dupelim.m"
                {
#line 293 "dupelim.m"
                  MR_Word ll_backend__dupelim__HeadVar__1__tmp_copy_1 = ll_backend__dupelim__ElimLabels_25;
#line 293 "dupelim.m"
                  MR_Word ll_backend__dupelim__HeadVar__2__tmp_copy_2 = ll_backend__dupelim__Instrs1_41;
#line 293 "dupelim.m"
                  MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0__tmp_copy_3 = ll_backend__dupelim__STATE_VARIABLE_LabelSeq_53_53;
#line 293 "dupelim.m"
                  MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_0__tmp_copy_7 = ll_backend__dupelim__STATE_VARIABLE_ReplMap_54_54;
#line 293 "dupelim.m"
                  MR_Word ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0__tmp_copy_10 = ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_52_52;

#line 293 "dupelim.m"
                  ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0_10 = ll_backend__dupelim__STATE_VARIABLE_MaybeFallThrough_0__tmp_copy_10;
#line 293 "dupelim.m"
                  ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_7 = ll_backend__dupelim__STATE_VARIABLE_ReplMap_0__tmp_copy_7;
#line 293 "dupelim.m"
                  ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_3 = ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0__tmp_copy_3;
#line 293 "dupelim.m"
                  ll_backend__dupelim__HeadVar__2_2 = ll_backend__dupelim__HeadVar__2__tmp_copy_2;
#line 293 "dupelim.m"
                  ll_backend__dupelim__HeadVar__1_1 = ll_backend__dupelim__HeadVar__1__tmp_copy_1;
#line 293 "dupelim.m"
                }
#line 293 "dupelim.m"
                continue;
#line 291 "dupelim.m"
              }
#line 295 "dupelim.m"
            else
#line 296 "dupelim.m"
              {
#line 296 "dupelim.m"
                {
#line 296 "dupelim.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.process_elim_labels\'/11", (MR_String) "blocks with same standard form don\'t antiunify");
#line 296 "dupelim.m"
                  return;
                }
#line 296 "dupelim.m"
              }
#line 281 "dupelim.m"
          }
#line 278 "dupelim.m"
      }
#line 278 "dupelim.m"
      break;
#line 278 "dupelim.m"
    }
#line 273 "dupelim.m"
}

#line 253 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__process_clusters_7_p_0_1(
#line 253 "dupelim.m"
  MR_Box ll_backend__dupelim__closure_arg)
#line 253 "dupelim.m"
{
#line 253 "dupelim.m"
  {
#line 253 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;
#line 253 "dupelim.m"
    MR_Box ll_backend__dupelim__closure = ll_backend__dupelim__closure_arg;

#line 253 "dupelim.m"
    {
#line 253 "dupelim.m"
      return ll_backend__dupelim__succeeded = ll_backend__dupelim__IntroducedFrom__pred__process_clusters__253__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__closure, (MR_Integer) 4))));
    }
#line 253 "dupelim.m"
    return ll_backend__dupelim__succeeded;
#line 253 "dupelim.m"
  }
#line 253 "dupelim.m"
}

#line 243 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__process_clusters_7_p_0(
#line 243 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 243 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_2,
#line 243 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_LabelSeq_3,
#line 243 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4,
#line 243 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_BlockMap_5,
#line 243 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_6,
#line 243 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_ReplMap_7)
#line 243 "dupelim.m"
{
#line 247 "dupelim.m"
  while (MR_TRUE)
#line 247 "dupelim.m"
    {
#line 247 "dupelim.m"
      /* tailcall optimized into a loop */
#line 247 "dupelim.m"
      {
#line 247 "dupelim.m"
        MR_bool ll_backend__dupelim__succeeded;

#line 247 "dupelim.m"
        if ((ll_backend__dupelim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "dupelim.m"
          {
#line 247 "dupelim.m"
            *ll_backend__dupelim__STATE_VARIABLE_ReplMap_7 = ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_6;
#line 247 "dupelim.m"
            *ll_backend__dupelim__STATE_VARIABLE_BlockMap_5 = ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4;
#line 247 "dupelim.m"
            *ll_backend__dupelim__STATE_VARIABLE_LabelSeq_3 = ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_2;
#line 247 "dupelim.m"
          }
#line 247 "dupelim.m"
        else
#line 248 "dupelim.m"
          {
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__TypeCtorInfo_51_51 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__TypeCtorInfo_52_52 = (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__Cluster_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 0)));
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__Clusters_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 1)));
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__Exemplar_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__Cluster_17, (MR_Integer) 0)));
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__ElimLabels_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__Cluster_17, (MR_Integer) 1)));
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__ExemplarInfo0_24;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__ExLabel_25;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__ExLabelInstr_26;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__ExInstrs0_27;
#line 248 "dupelim.m"
            MR_Integer ll_backend__dupelim__ExNumInstrs_28;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__ExFallInto_29;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__ExSideLabels_30;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__ExMaybeFallThrough_31;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__UnifiedInstrs_32;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__UnifiedMaybeFallThrough_33;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__ExemplarInfo_34;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__V_41_41;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_45_45;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_46_46;
#line 248 "dupelim.m"
            MR_Word ll_backend__dupelim__STATE_VARIABLE_BlockMap_47_47;
#line 250 "dupelim.m"
            MR_Box ll_backend__dupelim__conv0_ExemplarInfo0_24;

#line 250 "dupelim.m"
            {
#line 250 "dupelim.m"
              mercury__map__lookup_3_p_0(ll_backend__dupelim__TypeCtorInfo_51_51, ll_backend__dupelim__TypeCtorInfo_52_52, ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4, ((MR_Box) (ll_backend__dupelim__Exemplar_22)), &ll_backend__dupelim__conv0_ExemplarInfo0_24);
            }
#line 250 "dupelim.m"
            ll_backend__dupelim__ExemplarInfo0_24 = ((MR_Word) ll_backend__dupelim__conv0_ExemplarInfo0_24);
#line 251 "dupelim.m"
            ll_backend__dupelim__ExLabel_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 0)));
#line 251 "dupelim.m"
            ll_backend__dupelim__ExLabelInstr_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 1)));
#line 251 "dupelim.m"
            ll_backend__dupelim__ExInstrs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 2)));
#line 251 "dupelim.m"
            ll_backend__dupelim__ExNumInstrs_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 3)));
#line 251 "dupelim.m"
            ll_backend__dupelim__ExFallInto_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 4)));
#line 251 "dupelim.m"
            ll_backend__dupelim__ExSideLabels_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 5)));
#line 251 "dupelim.m"
            ll_backend__dupelim__ExMaybeFallThrough_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo0_24, (MR_Integer) 6)));
#line 253 "dupelim.m"
            {
#line 253 "dupelim.m"
              ll_backend__dupelim__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 253 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_41_41, 0) = ((MR_Box) (&ll_backend__dupelim_scalar_common_4[1]));
#line 253 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_41_41, 1) = ((MR_Box) (ll_backend__dupelim__process_clusters_7_p_0_1));
#line 253 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 253 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_41_41, 3) = ((MR_Box) (ll_backend__dupelim__Exemplar_22));
#line 253 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__V_41_41, 4) = ((MR_Box) (ll_backend__dupelim__ExLabel_25));
#line 253 "dupelim.m"
            }
#line 253 "dupelim.m"
            {
#line 253 "dupelim.m"
              mercury__require__expect_4_p_0(ll_backend__dupelim__V_41_41, (MR_String) "ll_backend.dupelim", (MR_String) "predicate \140ll_backend.dupelim.process_clusters\'/7", (MR_String) "exemplar label mismatch");
            }
#line 255 "dupelim.m"
            {
#line 255 "dupelim.m"
              ll_backend__dupelim__process_elim_labels_11_p_0(ll_backend__dupelim__ElimLabels_23, ll_backend__dupelim__ExInstrs0_27, ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_2, &ll_backend__dupelim__STATE_VARIABLE_LabelSeq_45_45, ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4, ll_backend__dupelim__Exemplar_22, ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_6, &ll_backend__dupelim__STATE_VARIABLE_ReplMap_46_46, &ll_backend__dupelim__UnifiedInstrs_32, ll_backend__dupelim__ExMaybeFallThrough_31, &ll_backend__dupelim__UnifiedMaybeFallThrough_33);
            }
#line 258 "dupelim.m"
            {
#line 258 "dupelim.m"
              ll_backend__dupelim__ExemplarInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 258 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 0) = ((MR_Box) (ll_backend__dupelim__ExLabel_25));
#line 258 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 1) = ((MR_Box) (ll_backend__dupelim__ExLabelInstr_26));
#line 258 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 2) = ((MR_Box) (ll_backend__dupelim__UnifiedInstrs_32));
#line 258 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 3) = ((MR_Box) (ll_backend__dupelim__ExNumInstrs_28));
#line 258 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 4) = ((MR_Box) (ll_backend__dupelim__ExFallInto_29));
#line 258 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 5) = ((MR_Box) (ll_backend__dupelim__ExSideLabels_30));
#line 258 "dupelim.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupelim__ExemplarInfo_34, 6) = ((MR_Box) (ll_backend__dupelim__UnifiedMaybeFallThrough_33));
#line 258 "dupelim.m"
            }
#line 260 "dupelim.m"
            {
#line 260 "dupelim.m"
              mercury__map__det_update_4_p_0(ll_backend__dupelim__TypeCtorInfo_51_51, ll_backend__dupelim__TypeCtorInfo_52_52, ((MR_Box) (ll_backend__dupelim__Exemplar_22)), ((MR_Box) (ll_backend__dupelim__ExemplarInfo_34)), ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4, &ll_backend__dupelim__STATE_VARIABLE_BlockMap_47_47);
            }
#line 261 "dupelim.m"
            /* direct tailcall eliminated */
#line 261 "dupelim.m"
            {
#line 261 "dupelim.m"
              MR_Word ll_backend__dupelim__HeadVar__1__tmp_copy_1 = ll_backend__dupelim__Clusters_18;
#line 261 "dupelim.m"
              MR_Word ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0__tmp_copy_2 = ll_backend__dupelim__STATE_VARIABLE_LabelSeq_45_45;
#line 261 "dupelim.m"
              MR_Word ll_backend__dupelim__STATE_VARIABLE_BlockMap_0__tmp_copy_4 = ll_backend__dupelim__STATE_VARIABLE_BlockMap_47_47;
#line 261 "dupelim.m"
              MR_Word ll_backend__dupelim__STATE_VARIABLE_ReplMap_0__tmp_copy_6 = ll_backend__dupelim__STATE_VARIABLE_ReplMap_46_46;

#line 261 "dupelim.m"
              ll_backend__dupelim__STATE_VARIABLE_ReplMap_0_6 = ll_backend__dupelim__STATE_VARIABLE_ReplMap_0__tmp_copy_6;
#line 261 "dupelim.m"
              ll_backend__dupelim__STATE_VARIABLE_BlockMap_0_4 = ll_backend__dupelim__STATE_VARIABLE_BlockMap_0__tmp_copy_4;
#line 261 "dupelim.m"
              ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0_2 = ll_backend__dupelim__STATE_VARIABLE_LabelSeq_0__tmp_copy_2;
#line 261 "dupelim.m"
              ll_backend__dupelim__HeadVar__1_1 = ll_backend__dupelim__HeadVar__1__tmp_copy_1;
#line 261 "dupelim.m"
            }
#line 261 "dupelim.m"
            continue;
#line 248 "dupelim.m"
          }
#line 247 "dupelim.m"
      }
#line 247 "dupelim.m"
      break;
#line 247 "dupelim.m"
    }
#line 243 "dupelim.m"
}

#line 216 "dupelim.m"
static MR_bool MR_CALL 
ll_backend__dupelim__find_clusters_4_p_0_1(
#line 216 "dupelim.m"
  MR_Box ll_backend__dupelim__closure_arg,
#line 216 "dupelim.m"
  MR_Box ll_backend__dupelim__wrapper_arg_1)
#line 216 "dupelim.m"
{
#line 216 "dupelim.m"
  {
#line 216 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;
#line 216 "dupelim.m"
    MR_Box ll_backend__dupelim__closure = ll_backend__dupelim__closure_arg;

#line 216 "dupelim.m"
    {
#line 216 "dupelim.m"
      return ll_backend__dupelim__succeeded = ll_backend__dupelim__IntroducedFrom__pred__find_clusters__216__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__dupelim__wrapper_arg_1));
    }
#line 216 "dupelim.m"
    return ll_backend__dupelim__succeeded;
#line 216 "dupelim.m"
  }
#line 216 "dupelim.m"
}

#line 206 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__find_clusters_4_p_0(
#line 206 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 206 "dupelim.m"
  MR_Word ll_backend__dupelim__Fixed_2,
#line 206 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_Clusters_0_3,
#line 206 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_Clusters_4)
#line 206 "dupelim.m"
{
#line 209 "dupelim.m"
  while (MR_TRUE)
#line 209 "dupelim.m"
    {
#line 209 "dupelim.m"
      /* tailcall optimized into a loop */
#line 209 "dupelim.m"
      {
#line 209 "dupelim.m"
        MR_bool ll_backend__dupelim__succeeded;

#line 209 "dupelim.m"
        if ((ll_backend__dupelim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "dupelim.m"
          *ll_backend__dupelim__STATE_VARIABLE_Clusters_4 = ll_backend__dupelim__STATE_VARIABLE_Clusters_0_3;
#line 209 "dupelim.m"
        else
#line 210 "dupelim.m"
          {
#line 210 "dupelim.m"
            MR_Word ll_backend__dupelim__Labels_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "dupelim.m"
            MR_Word ll_backend__dupelim__LabelsList_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 1)));
#line 210 "dupelim.m"
            MR_Word ll_backend__dupelim__STATE_VARIABLE_Clusters_29_29;
#line 230 "dupelim.m"
            MR_Word ll_backend__dupelim__FixedLabels_18;
#line 230 "dupelim.m"
            MR_Word ll_backend__dupelim__NonFixedLabels_19;
#line 230 "dupelim.m"
            MR_Word ll_backend__dupelim__FirstNonFixed_20;
#line 230 "dupelim.m"
            MR_Word ll_backend__dupelim__OtherNonFixed_21;
#line 212 "dupelim.m"
            MR_Word ll_backend__dupelim__TypeCtorInfo_33_33;
#line 212 "dupelim.m"
            MR_Word ll_backend__dupelim__IsFallenInto_16;
#line 212 "dupelim.m"
            MR_Word ll_backend__dupelim__V_27_27;
#line 212 "dupelim.m"
            MR_Word ll_backend__dupelim__V_13_13;
#line 212 "dupelim.m"
            MR_Word ll_backend__dupelim__V_14_14;
#line 212 "dupelim.m"
            MR_Word ll_backend__dupelim__V_15_15;

#line 212 "dupelim.m"
            ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__Labels_9)) == (MR_mktag((MR_Integer) 1)));
#line 212 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 212 "dupelim.m"
              {
#line 212 "dupelim.m"
                ll_backend__dupelim__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__Labels_9, (MR_Integer) 0)));
#line 212 "dupelim.m"
                ll_backend__dupelim__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__Labels_9, (MR_Integer) 1)));
#line 212 "dupelim.m"
                ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 212 "dupelim.m"
                if (ll_backend__dupelim__succeeded)
#line 212 "dupelim.m"
                  {
#line 212 "dupelim.m"
                    ll_backend__dupelim__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_27_27, (MR_Integer) 0)));
#line 212 "dupelim.m"
                    ll_backend__dupelim__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_27_27, (MR_Integer) 1)));
#line 5941 "ll_backend.dupelim.c"
                    ll_backend__dupelim__TypeCtorInfo_33_33 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 216 "dupelim.m"
                    {
#line 216 "dupelim.m"
                      ll_backend__dupelim__IsFallenInto_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 216 "dupelim.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupelim__IsFallenInto_16, 0) = ((MR_Box) (&ll_backend__dupelim_scalar_common_4[0]));
#line 216 "dupelim.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupelim__IsFallenInto_16, 1) = ((MR_Box) (ll_backend__dupelim__find_clusters_4_p_0_1));
#line 216 "dupelim.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupelim__IsFallenInto_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 216 "dupelim.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupelim__IsFallenInto_16, 3) = ((MR_Box) (ll_backend__dupelim__Fixed_2));
#line 216 "dupelim.m"
                    }
#line 219 "dupelim.m"
                    {
#line 219 "dupelim.m"
                      mercury__list__filter_4_p_0(ll_backend__dupelim__TypeCtorInfo_33_33, ll_backend__dupelim__IsFallenInto_16, ll_backend__dupelim__Labels_9, &ll_backend__dupelim__FixedLabels_18, &ll_backend__dupelim__NonFixedLabels_19);
                    }
#line 220 "dupelim.m"
                    ll_backend__dupelim__succeeded = ((MR_tag((MR_Word) ll_backend__dupelim__NonFixedLabels_19)) == (MR_mktag((MR_Integer) 1)));
#line 220 "dupelim.m"
                    if (ll_backend__dupelim__succeeded)
#line 220 "dupelim.m"
                      {
#line 220 "dupelim.m"
                        ll_backend__dupelim__FirstNonFixed_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__NonFixedLabels_19, (MR_Integer) 0)));
#line 220 "dupelim.m"
                        ll_backend__dupelim__OtherNonFixed_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__NonFixedLabels_19, (MR_Integer) 1)));
#line 220 "dupelim.m"
                      }
#line 212 "dupelim.m"
                  }
#line 212 "dupelim.m"
              }
#line 230 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 228 "dupelim.m"
              {
#line 228 "dupelim.m"
                MR_Word ll_backend__dupelim__Cluster_24;

#line 225 "dupelim.m"
                if ((ll_backend__dupelim__FixedLabels_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "dupelim.m"
                  {
#line 227 "dupelim.m"
                    ll_backend__dupelim__Cluster_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "dupelim.m"
                    MR_hl_field(MR_mktag(0), ll_backend__dupelim__Cluster_24, 0) = ((MR_Box) (ll_backend__dupelim__FirstNonFixed_20));
#line 227 "dupelim.m"
                    MR_hl_field(MR_mktag(0), ll_backend__dupelim__Cluster_24, 1) = ((MR_Box) (ll_backend__dupelim__OtherNonFixed_21));
#line 227 "dupelim.m"
                  }
#line 225 "dupelim.m"
                else
#line 223 "dupelim.m"
                  {
#line 223 "dupelim.m"
                    MR_Word ll_backend__dupelim__ChosenLabel_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__FixedLabels_18, (MR_Integer) 0)));
#line 223 "dupelim.m"
                    MR_Word ll_backend__dupelim__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__FixedLabels_18, (MR_Integer) 1)));

#line 224 "dupelim.m"
                    {
#line 224 "dupelim.m"
                      ll_backend__dupelim__Cluster_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 224 "dupelim.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupelim__Cluster_24, 0) = ((MR_Box) (ll_backend__dupelim__ChosenLabel_22));
#line 224 "dupelim.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupelim__Cluster_24, 1) = ((MR_Box) (ll_backend__dupelim__NonFixedLabels_19));
#line 224 "dupelim.m"
                    }
#line 223 "dupelim.m"
                  }
#line 229 "dupelim.m"
                {
#line 229 "dupelim.m"
                  ll_backend__dupelim__STATE_VARIABLE_Clusters_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "dupelim.m"
                  MR_hl_field(MR_mktag(1), ll_backend__dupelim__STATE_VARIABLE_Clusters_29_29, 0) = ((MR_Box) (ll_backend__dupelim__Cluster_24));
#line 229 "dupelim.m"
                  MR_hl_field(MR_mktag(1), ll_backend__dupelim__STATE_VARIABLE_Clusters_29_29, 1) = ((MR_Box) (ll_backend__dupelim__STATE_VARIABLE_Clusters_0_3));
#line 229 "dupelim.m"
                }
#line 228 "dupelim.m"
              }
#line 230 "dupelim.m"
            else
#line 229 "dupelim.m"
              ll_backend__dupelim__STATE_VARIABLE_Clusters_29_29 = ll_backend__dupelim__STATE_VARIABLE_Clusters_0_3;
#line 233 "dupelim.m"
            /* direct tailcall eliminated */
#line 233 "dupelim.m"
            {
#line 233 "dupelim.m"
              MR_Word ll_backend__dupelim__HeadVar__1__tmp_copy_1 = ll_backend__dupelim__LabelsList_10;
#line 233 "dupelim.m"
              MR_Word ll_backend__dupelim__STATE_VARIABLE_Clusters_0__tmp_copy_3 = ll_backend__dupelim__STATE_VARIABLE_Clusters_29_29;

#line 233 "dupelim.m"
              ll_backend__dupelim__STATE_VARIABLE_Clusters_0_3 = ll_backend__dupelim__STATE_VARIABLE_Clusters_0__tmp_copy_3;
#line 233 "dupelim.m"
              ll_backend__dupelim__HeadVar__1_1 = ll_backend__dupelim__HeadVar__1__tmp_copy_1;
#line 233 "dupelim.m"
            }
#line 233 "dupelim.m"
            continue;
#line 210 "dupelim.m"
          }
#line 209 "dupelim.m"
      }
#line 209 "dupelim.m"
      break;
#line 209 "dupelim.m"
    }
#line 206 "dupelim.m"
}

#line 156 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__add_pragma_pref_labels_3_p_0(
#line 156 "dupelim.m"
  MR_Word ll_backend__dupelim__Instr_4,
#line 156 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_FoldFixed_0_22,
#line 156 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_FoldFixed_23)
#line 156 "dupelim.m"
{
#line 159 "dupelim.m"
  {
#line 159 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;
#line 159 "dupelim.m"
    MR_Word ll_backend__dupelim__Uinstr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__Instr_4, (MR_Integer) 0)));
#line 160 "dupelim.m"
    MR_String ll_backend__dupelim__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__Instr_4, (MR_Integer) 1)));
#line 189 "dupelim.m"
    MR_Word ll_backend__dupelim__MaybeFixedLabel_11;
#line 189 "dupelim.m"
    MR_Word ll_backend__dupelim__MaybeLayoutLabel_12;
#line 189 "dupelim.m"
    MR_Word ll_backend__dupelim__MaybeOnlyLayoutLabel_13;
#line 189 "dupelim.m"
    MR_Word ll_backend__dupelim__MaybeDefLabel_15;
#line 162 "dupelim.m"
    MR_Word ll_backend__dupelim__V_8_8;
#line 162 "dupelim.m"
    MR_Word ll_backend__dupelim__V_9_9;
#line 162 "dupelim.m"
    MR_Word ll_backend__dupelim__V_10_10;
#line 162 "dupelim.m"
    MR_Word ll_backend__dupelim__V_14_14;
#line 162 "dupelim.m"
    MR_Word ll_backend__dupelim__V_16_16;
#line 162 "dupelim.m"
    MR_Word ll_backend__dupelim__V_17_17;

#line 162 "dupelim.m"
    ll_backend__dupelim__succeeded = ((((MR_tag((MR_Word) ll_backend__dupelim__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 162 "dupelim.m"
    if (ll_backend__dupelim__succeeded)
#line 162 "dupelim.m"
      {
#line 162 "dupelim.m"
        ll_backend__dupelim__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 1)));
#line 162 "dupelim.m"
        ll_backend__dupelim__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 2)));
#line 162 "dupelim.m"
        ll_backend__dupelim__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 3)));
#line 162 "dupelim.m"
        ll_backend__dupelim__MaybeFixedLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 4)));
#line 162 "dupelim.m"
        ll_backend__dupelim__MaybeLayoutLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 5)));
#line 162 "dupelim.m"
        ll_backend__dupelim__MaybeOnlyLayoutLabel_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 6)));
#line 162 "dupelim.m"
        ll_backend__dupelim__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 7)));
#line 162 "dupelim.m"
        ll_backend__dupelim__MaybeDefLabel_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 8)));
#line 162 "dupelim.m"
        ll_backend__dupelim__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 9)));
#line 162 "dupelim.m"
        ll_backend__dupelim__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupelim__Uinstr_6, (MR_Integer) 10)));
#line 170 "dupelim.m"
        {
#line 170 "dupelim.m"
          MR_Word ll_backend__dupelim__STATE_VARIABLE_FoldFixed_24_24;
#line 170 "dupelim.m"
          MR_Word ll_backend__dupelim__STATE_VARIABLE_FoldFixed_25_25;
#line 170 "dupelim.m"
          MR_Word ll_backend__dupelim__STATE_VARIABLE_FoldFixed_26_26;

#line 168 "dupelim.m"
          if ((ll_backend__dupelim__MaybeFixedLabel_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "dupelim.m"
            ll_backend__dupelim__STATE_VARIABLE_FoldFixed_24_24 = ll_backend__dupelim__STATE_VARIABLE_FoldFixed_0_22;
#line 168 "dupelim.m"
          else
#line 166 "dupelim.m"
            {
#line 166 "dupelim.m"
              MR_Word ll_backend__dupelim__FixedLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFixedLabel_11, (MR_Integer) 0)));

#line 167 "dupelim.m"
              {
#line 167 "dupelim.m"
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__dupelim__FixedLabel_18)), ll_backend__dupelim__STATE_VARIABLE_FoldFixed_0_22, &ll_backend__dupelim__STATE_VARIABLE_FoldFixed_24_24);
              }
#line 166 "dupelim.m"
            }
#line 174 "dupelim.m"
          if ((ll_backend__dupelim__MaybeLayoutLabel_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "dupelim.m"
            ll_backend__dupelim__STATE_VARIABLE_FoldFixed_25_25 = ll_backend__dupelim__STATE_VARIABLE_FoldFixed_24_24;
#line 174 "dupelim.m"
          else
#line 172 "dupelim.m"
            {
#line 172 "dupelim.m"
              MR_Word ll_backend__dupelim__LayoutLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeLayoutLabel_12, (MR_Integer) 0)));

#line 173 "dupelim.m"
              {
#line 173 "dupelim.m"
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__dupelim__LayoutLabel_19)), ll_backend__dupelim__STATE_VARIABLE_FoldFixed_24_24, &ll_backend__dupelim__STATE_VARIABLE_FoldFixed_25_25);
              }
#line 172 "dupelim.m"
            }
#line 180 "dupelim.m"
          if ((ll_backend__dupelim__MaybeOnlyLayoutLabel_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "dupelim.m"
            ll_backend__dupelim__STATE_VARIABLE_FoldFixed_26_26 = ll_backend__dupelim__STATE_VARIABLE_FoldFixed_25_25;
#line 180 "dupelim.m"
          else
#line 178 "dupelim.m"
            {
#line 178 "dupelim.m"
              MR_Word ll_backend__dupelim__OnlyLayoutLabel_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeOnlyLayoutLabel_13, (MR_Integer) 0)));

#line 179 "dupelim.m"
              {
#line 179 "dupelim.m"
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__dupelim__OnlyLayoutLabel_20)), ll_backend__dupelim__STATE_VARIABLE_FoldFixed_25_25, &ll_backend__dupelim__STATE_VARIABLE_FoldFixed_26_26);
              }
#line 178 "dupelim.m"
            }
#line 186 "dupelim.m"
          if ((ll_backend__dupelim__MaybeDefLabel_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 187 "dupelim.m"
            *ll_backend__dupelim__STATE_VARIABLE_FoldFixed_23 = ll_backend__dupelim__STATE_VARIABLE_FoldFixed_26_26;
#line 186 "dupelim.m"
          else
#line 184 "dupelim.m"
            {
#line 184 "dupelim.m"
              MR_Word ll_backend__dupelim__DefLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeDefLabel_15, (MR_Integer) 0)));

#line 185 "dupelim.m"
              {
#line 185 "dupelim.m"
                mercury__set__insert_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, ((MR_Box) (ll_backend__dupelim__DefLabel_21)), ll_backend__dupelim__STATE_VARIABLE_FoldFixed_26_26, ll_backend__dupelim__STATE_VARIABLE_FoldFixed_23);
#line 185 "dupelim.m"
                return;
              }
#line 184 "dupelim.m"
            }
#line 170 "dupelim.m"
        }
#line 162 "dupelim.m"
      }
#line 162 "dupelim.m"
    else
#line 187 "dupelim.m"
      *ll_backend__dupelim__STATE_VARIABLE_FoldFixed_23 = ll_backend__dupelim__STATE_VARIABLE_FoldFixed_0_22;
#line 159 "dupelim.m"
  }
#line 156 "dupelim.m"
}

#line 145 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__dupelim_build_maps_6_p_0_1(
#line 145 "dupelim.m"
  MR_Box ll_backend__dupelim__closure_arg,
#line 145 "dupelim.m"
  MR_Box ll_backend__dupelim__wrapper_arg_1,
#line 145 "dupelim.m"
  MR_Box ll_backend__dupelim__wrapper_arg_2,
#line 145 "dupelim.m"
  MR_Box * ll_backend__dupelim__wrapper_arg_3)
#line 145 "dupelim.m"
{
#line 145 "dupelim.m"
  {
#line 145 "dupelim.m"
    MR_Box ll_backend__dupelim__closure = ll_backend__dupelim__closure_arg;
#line 145 "dupelim.m"
    MR_Word ll_backend__dupelim__conv1_STATE_VARIABLE_FoldFixed_23;

#line 145 "dupelim.m"
    {
#line 145 "dupelim.m"
      ll_backend__dupelim__add_pragma_pref_labels_3_p_0(((MR_Word) ll_backend__dupelim__wrapper_arg_1), ((MR_Word) ll_backend__dupelim__wrapper_arg_2), &ll_backend__dupelim__conv1_STATE_VARIABLE_FoldFixed_23);
    }
#line 145 "dupelim.m"
    *ll_backend__dupelim__wrapper_arg_3 = ((MR_Box) (ll_backend__dupelim__conv1_STATE_VARIABLE_FoldFixed_23));
#line 145 "dupelim.m"
  }
#line 145 "dupelim.m"
}

#line 120 "dupelim.m"
static void MR_CALL 
ll_backend__dupelim__dupelim_build_maps_6_p_0(
#line 120 "dupelim.m"
  MR_Word ll_backend__dupelim__HeadVar__1_1,
#line 120 "dupelim.m"
  MR_Word ll_backend__dupelim__BlockMap_2,
#line 120 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_StdMap_0_3,
#line 120 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_StdMap_4,
#line 120 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_Fixed_0_5,
#line 120 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_Fixed_6)
#line 120 "dupelim.m"
{
#line 123 "dupelim.m"
  while (MR_TRUE)
#line 123 "dupelim.m"
    {
#line 123 "dupelim.m"
      /* tailcall optimized into a loop */
#line 123 "dupelim.m"
      {
#line 123 "dupelim.m"
        MR_bool ll_backend__dupelim__succeeded;

#line 123 "dupelim.m"
        if ((ll_backend__dupelim__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 123 "dupelim.m"
          {
#line 123 "dupelim.m"
            *ll_backend__dupelim__STATE_VARIABLE_Fixed_6 = ll_backend__dupelim__STATE_VARIABLE_Fixed_0_5;
#line 123 "dupelim.m"
            *ll_backend__dupelim__STATE_VARIABLE_StdMap_4 = ll_backend__dupelim__STATE_VARIABLE_StdMap_0_3;
#line 123 "dupelim.m"
          }
#line 123 "dupelim.m"
        else
#line 124 "dupelim.m"
          {
#line 124 "dupelim.m"
            MR_Word ll_backend__dupelim__TypeCtorInfo_46_46 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 124 "dupelim.m"
            MR_Word ll_backend__dupelim__Label_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 0)));
#line 124 "dupelim.m"
            MR_Word ll_backend__dupelim__Labels_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__HeadVar__1_1, (MR_Integer) 1)));
#line 124 "dupelim.m"
            MR_Word ll_backend__dupelim__BlockInfo_19;
#line 124 "dupelim.m"
            MR_Word ll_backend__dupelim__Instrs_22;
#line 124 "dupelim.m"
            MR_Integer ll_backend__dupelim__NumInstrs_23;
#line 124 "dupelim.m"
            MR_Word ll_backend__dupelim__MaybeFallThrough_26;
#line 124 "dupelim.m"
            MR_Word ll_backend__dupelim__STATE_VARIABLE_StdMap_40_40;
#line 124 "dupelim.m"
            MR_Word ll_backend__dupelim__STATE_VARIABLE_Fixed_41_41;
#line 124 "dupelim.m"
            MR_Word ll_backend__dupelim__STATE_VARIABLE_Fixed_43_43;
#line 125 "dupelim.m"
            MR_Box ll_backend__dupelim__conv0_BlockInfo_19;
#line 126 "dupelim.m"
            MR_Word ll_backend__dupelim__V_20_20;
#line 126 "dupelim.m"
            MR_Word ll_backend__dupelim__V_21_21;
#line 126 "dupelim.m"
            MR_Word ll_backend__dupelim__V_24_24;
#line 126 "dupelim.m"
            MR_Word ll_backend__dupelim__V_25_25;
#line 145 "dupelim.m"
            MR_Box ll_backend__dupelim__conv2_STATE_VARIABLE_Fixed_43_43;

#line 125 "dupelim.m"
            {
#line 125 "dupelim.m"
              mercury__map__lookup_3_p_0(ll_backend__dupelim__TypeCtorInfo_46_46, (MR_Word) &ll_backend__basic_block__ll_backend__basic_block__type_ctor_info_block_info_0, ll_backend__dupelim__BlockMap_2, ((MR_Box) (ll_backend__dupelim__Label_14)), &ll_backend__dupelim__conv0_BlockInfo_19);
            }
#line 125 "dupelim.m"
            ll_backend__dupelim__BlockInfo_19 = ((MR_Word) ll_backend__dupelim__conv0_BlockInfo_19);
#line 126 "dupelim.m"
            ll_backend__dupelim__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 0)));
#line 126 "dupelim.m"
            ll_backend__dupelim__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 1)));
#line 126 "dupelim.m"
            ll_backend__dupelim__Instrs_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 2)));
#line 126 "dupelim.m"
            ll_backend__dupelim__NumInstrs_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 3)));
#line 126 "dupelim.m"
            ll_backend__dupelim__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 4)));
#line 126 "dupelim.m"
            ll_backend__dupelim__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 5)));
#line 126 "dupelim.m"
            ll_backend__dupelim__MaybeFallThrough_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupelim__BlockInfo_19, (MR_Integer) 6)));
#line 127 "dupelim.m"
            ll_backend__dupelim__succeeded = (ll_backend__dupelim__NumInstrs_23 < (MR_Integer) 10);
#line 136 "dupelim.m"
            if (ll_backend__dupelim__succeeded)
#line 128 "dupelim.m"
              {
#line 128 "dupelim.m"
                MR_Word ll_backend__dupelim__TypeInfo_48_48;
#line 128 "dupelim.m"
                MR_Word ll_backend__dupelim__TypeInfo_49_49;
#line 128 "dupelim.m"
                MR_Word ll_backend__dupelim__StdInstrs_27;
#line 128 "dupelim.m"
                MR_Word ll_backend__dupelim__MaybeOldCluster_28;
#line 128 "dupelim.m"
                MR_Word ll_backend__dupelim__V_36_36;
#line 128 "dupelim.m"
                MR_Word ll_backend__dupelim__STATE_VARIABLE_StdMap_37_37;
#line 128 "dupelim.m"
                MR_Word ll_backend__dupelim__Uinstrs1_58;

#line 315 "dupelim.m"
                {
#line 315 "dupelim.m"
                  ll_backend__dupelim__standardize_instrs_2_p_0(ll_backend__dupelim__Instrs_22, &ll_backend__dupelim__Uinstrs1_58);
                }
#line 320 "dupelim.m"
                if ((ll_backend__dupelim__MaybeFallThrough_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 322 "dupelim.m"
                  ll_backend__dupelim__StdInstrs_27 = ll_backend__dupelim__Uinstrs1_58;
#line 320 "dupelim.m"
                else
#line 317 "dupelim.m"
                  {
#line 317 "dupelim.m"
                    MR_Word ll_backend__dupelim__Label_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFallThrough_26, (MR_Integer) 0)));
#line 317 "dupelim.m"
                    MR_Word ll_backend__dupelim__Goto_60;
#line 317 "dupelim.m"
                    MR_Word ll_backend__dupelim__V_61_61;
#line 317 "dupelim.m"
                    MR_Word ll_backend__dupelim__V_62_62;

#line 318 "dupelim.m"
                    {
#line 318 "dupelim.m"
                      ll_backend__dupelim__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 318 "dupelim.m"
                      MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_61_61, 0) = ((MR_Box) (ll_backend__dupelim__Label_59));
#line 318 "dupelim.m"
                    }
#line 318 "dupelim.m"
                    {
#line 318 "dupelim.m"
                      ll_backend__dupelim__Goto_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "dupelim.m"
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__Goto_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 318 "dupelim.m"
                      MR_hl_field(MR_mktag(3), ll_backend__dupelim__Goto_60, 1) = ((MR_Box) (ll_backend__dupelim__V_61_61));
#line 318 "dupelim.m"
                    }
#line 319 "dupelim.m"
                    {
#line 319 "dupelim.m"
                      ll_backend__dupelim__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "dupelim.m"
                      MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_62_62, 0) = ((MR_Box) (ll_backend__dupelim__Goto_60));
#line 319 "dupelim.m"
                      MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "dupelim.m"
                    }
#line 319 "dupelim.m"
                    {
#line 319 "dupelim.m"
                      ll_backend__dupelim__StdInstrs_27 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instr_0, ll_backend__dupelim__Uinstrs1_58, ll_backend__dupelim__V_62_62);
                    }
#line 317 "dupelim.m"
                  }
#line 129 "dupelim.m"
                {
#line 129 "dupelim.m"
                  ll_backend__dupelim__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "dupelim.m"
                  MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_36_36, 0) = ((MR_Box) (ll_backend__dupelim__Label_14));
#line 129 "dupelim.m"
                  MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 129 "dupelim.m"
                }
#line 6440 "ll_backend.dupelim.c"
                ll_backend__dupelim__TypeInfo_48_48 = (MR_Word) &ll_backend__dupelim_scalar_common_1[0];
#line 6442 "ll_backend.dupelim.c"
                ll_backend__dupelim__TypeInfo_49_49 = (MR_Word) &ll_backend__dupelim_scalar_common_1[1];
#line 129 "dupelim.m"
                {
#line 129 "dupelim.m"
                  mercury__map__search_insert_5_p_0(ll_backend__dupelim__TypeInfo_48_48, ll_backend__dupelim__TypeInfo_49_49, ((MR_Box) (ll_backend__dupelim__StdInstrs_27)), ((MR_Box) (ll_backend__dupelim__V_36_36)), &ll_backend__dupelim__MaybeOldCluster_28, ll_backend__dupelim__STATE_VARIABLE_StdMap_0_3, &ll_backend__dupelim__STATE_VARIABLE_StdMap_37_37);
                }
#line 132 "dupelim.m"
                if ((ll_backend__dupelim__MaybeOldCluster_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 131 "dupelim.m"
                  ll_backend__dupelim__STATE_VARIABLE_StdMap_40_40 = ll_backend__dupelim__STATE_VARIABLE_StdMap_37_37;
#line 132 "dupelim.m"
                else
#line 133 "dupelim.m"
                  {
#line 133 "dupelim.m"
                    MR_Word ll_backend__dupelim__OldCluster_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeOldCluster_28, (MR_Integer) 0)));
#line 133 "dupelim.m"
                    MR_Word ll_backend__dupelim__V_39_39;

#line 134 "dupelim.m"
                    {
#line 134 "dupelim.m"
                      ll_backend__dupelim__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 134 "dupelim.m"
                      MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_39_39, 0) = ((MR_Box) (ll_backend__dupelim__Label_14));
#line 134 "dupelim.m"
                      MR_hl_field(MR_mktag(1), ll_backend__dupelim__V_39_39, 1) = ((MR_Box) (ll_backend__dupelim__OldCluster_29));
#line 134 "dupelim.m"
                    }
#line 134 "dupelim.m"
                    {
#line 134 "dupelim.m"
                      mercury__map__det_update_4_p_0(ll_backend__dupelim__TypeInfo_48_48, ll_backend__dupelim__TypeInfo_49_49, ((MR_Box) (ll_backend__dupelim__StdInstrs_27)), ((MR_Box) (ll_backend__dupelim__V_39_39)), ll_backend__dupelim__STATE_VARIABLE_StdMap_37_37, &ll_backend__dupelim__STATE_VARIABLE_StdMap_40_40);
                    }
#line 133 "dupelim.m"
                  }
#line 128 "dupelim.m"
              }
#line 136 "dupelim.m"
            else
#line 134 "dupelim.m"
              ll_backend__dupelim__STATE_VARIABLE_StdMap_40_40 = ll_backend__dupelim__STATE_VARIABLE_StdMap_0_3;
#line 142 "dupelim.m"
            if ((ll_backend__dupelim__MaybeFallThrough_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 143 "dupelim.m"
              ll_backend__dupelim__STATE_VARIABLE_Fixed_41_41 = ll_backend__dupelim__STATE_VARIABLE_Fixed_0_5;
#line 142 "dupelim.m"
            else
#line 140 "dupelim.m"
              {
#line 140 "dupelim.m"
                MR_Word ll_backend__dupelim__FallIntoLabel_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupelim__MaybeFallThrough_26, (MR_Integer) 0)));

#line 141 "dupelim.m"
                {
#line 141 "dupelim.m"
                  mercury__set__insert_3_p_0(ll_backend__dupelim__TypeCtorInfo_46_46, ((MR_Box) (ll_backend__dupelim__FallIntoLabel_30)), ll_backend__dupelim__STATE_VARIABLE_Fixed_0_5, &ll_backend__dupelim__STATE_VARIABLE_Fixed_41_41);
                }
#line 140 "dupelim.m"
              }
#line 145 "dupelim.m"
            {
#line 145 "dupelim.m"
              mercury__list__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, (MR_Word) &ll_backend__dupelim_scalar_common_1[2], (MR_Word) &ll_backend__dupelim_scalar_common_2[1], ll_backend__dupelim__Instrs_22, ((MR_Box) (ll_backend__dupelim__STATE_VARIABLE_Fixed_41_41)), &ll_backend__dupelim__conv2_STATE_VARIABLE_Fixed_43_43);
            }
#line 145 "dupelim.m"
            ll_backend__dupelim__STATE_VARIABLE_Fixed_43_43 = ((MR_Word) ll_backend__dupelim__conv2_STATE_VARIABLE_Fixed_43_43);
#line 146 "dupelim.m"
            /* direct tailcall eliminated */
#line 146 "dupelim.m"
            {
#line 146 "dupelim.m"
              MR_Word ll_backend__dupelim__HeadVar__1__tmp_copy_1 = ll_backend__dupelim__Labels_15;
#line 146 "dupelim.m"
              MR_Word ll_backend__dupelim__STATE_VARIABLE_StdMap_0__tmp_copy_3 = ll_backend__dupelim__STATE_VARIABLE_StdMap_40_40;
#line 146 "dupelim.m"
              MR_Word ll_backend__dupelim__STATE_VARIABLE_Fixed_0__tmp_copy_5 = ll_backend__dupelim__STATE_VARIABLE_Fixed_43_43;

#line 146 "dupelim.m"
              ll_backend__dupelim__STATE_VARIABLE_Fixed_0_5 = ll_backend__dupelim__STATE_VARIABLE_Fixed_0__tmp_copy_5;
#line 146 "dupelim.m"
              ll_backend__dupelim__STATE_VARIABLE_StdMap_0_3 = ll_backend__dupelim__STATE_VARIABLE_StdMap_0__tmp_copy_3;
#line 146 "dupelim.m"
              ll_backend__dupelim__HeadVar__1_1 = ll_backend__dupelim__HeadVar__1__tmp_copy_1;
#line 146 "dupelim.m"
            }
#line 146 "dupelim.m"
            continue;
#line 124 "dupelim.m"
          }
#line 123 "dupelim.m"
      }
#line 123 "dupelim.m"
      break;
#line 123 "dupelim.m"
    }
#line 120 "dupelim.m"
}

#line 56 "dupelim.m"
void MR_CALL 
ll_backend__dupelim__dupelim_main_5_p_0(
#line 56 "dupelim.m"
  MR_Word ll_backend__dupelim__ProcLabel_6,
#line 56 "dupelim.m"
  MR_Word ll_backend__dupelim__STATE_VARIABLE_C_0_29,
#line 56 "dupelim.m"
  MR_Word * ll_backend__dupelim__STATE_VARIABLE_C_30,
#line 56 "dupelim.m"
  MR_Word ll_backend__dupelim__Instrs0_8,
#line 56 "dupelim.m"
  MR_Word * ll_backend__dupelim__Instrs_9)
#line 56 "dupelim.m"
{
#line 90 "dupelim.m"
  {
#line 90 "dupelim.m"
    MR_bool ll_backend__dupelim__succeeded;
#line 90 "dupelim.m"
    MR_Word ll_backend__dupelim__TypeInfo_35_35;
#line 90 "dupelim.m"
    MR_Word ll_backend__dupelim__TypeInfo_36_36;
#line 90 "dupelim.m"
    MR_Word ll_backend__dupelim__TypeCtorInfo_37_37;
#line 90 "dupelim.m"
    MR_Word ll_backend__dupelim__Comments_10;
#line 90 "dupelim.m"
    MR_Word ll_backend__dupelim__LabelSeq0_12;
#line 90 "dupelim.m"
    MR_Word ll_backend__dupelim__BlockMap0_13;
#line 90 "dupelim.m"
    MR_Word ll_backend__dupelim__StdMap0_14;
#line 90 "dupelim.m"
    MR_Word ll_backend__dupelim__Fixed0_15;
#line 90 "dupelim.m"
    MR_Word ll_backend__dupelim__StdMap_16;
#line 90 "dupelim.m"
    MR_Word ll_backend__dupelim__Fixed_17;
#line 90 "dupelim.m"
    MR_Word ll_backend__dupelim__StdList_18;
#line 90 "dupelim.m"
    MR_Word ll_backend__dupelim__Clusters_19;
#line 91 "dupelim.m"
    MR_Word ll_backend__dupelim___NewLabels_11;

#line 91 "dupelim.m"
    {
#line 91 "dupelim.m"
      ll_backend__basic_block__create_basic_blocks_8_p_0(ll_backend__dupelim__Instrs0_8, &ll_backend__dupelim__Comments_10, ll_backend__dupelim__ProcLabel_6, ll_backend__dupelim__STATE_VARIABLE_C_0_29, ll_backend__dupelim__STATE_VARIABLE_C_30, &ll_backend__dupelim___NewLabels_11, &ll_backend__dupelim__LabelSeq0_12, &ll_backend__dupelim__BlockMap0_13);
    }
#line 6593 "ll_backend.dupelim.c"
    ll_backend__dupelim__TypeInfo_35_35 = (MR_Word) &ll_backend__dupelim_scalar_common_1[0];
#line 6595 "ll_backend.dupelim.c"
    ll_backend__dupelim__TypeInfo_36_36 = (MR_Word) &ll_backend__dupelim_scalar_common_1[1];
#line 93 "dupelim.m"
    {
#line 93 "dupelim.m"
      mercury__map__init_1_p_0(ll_backend__dupelim__TypeInfo_35_35, ll_backend__dupelim__TypeInfo_36_36, &ll_backend__dupelim__StdMap0_14);
    }
#line 6602 "ll_backend.dupelim.c"
    ll_backend__dupelim__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0;
#line 94 "dupelim.m"
    {
#line 94 "dupelim.m"
      mercury__set__init_1_p_0(ll_backend__dupelim__TypeCtorInfo_37_37, &ll_backend__dupelim__Fixed0_15);
    }
#line 95 "dupelim.m"
    {
#line 95 "dupelim.m"
      ll_backend__dupelim__dupelim_build_maps_6_p_0(ll_backend__dupelim__LabelSeq0_12, ll_backend__dupelim__BlockMap0_13, ll_backend__dupelim__StdMap0_14, &ll_backend__dupelim__StdMap_16, ll_backend__dupelim__Fixed0_15, &ll_backend__dupelim__Fixed_17);
    }
#line 96 "dupelim.m"
    {
#line 96 "dupelim.m"
      mercury__map__values_2_p_0(ll_backend__dupelim__TypeInfo_35_35, ll_backend__dupelim__TypeInfo_36_36, ll_backend__dupelim__StdMap_16, &ll_backend__dupelim__StdList_18);
    }
#line 97 "dupelim.m"
    {
#line 97 "dupelim.m"
      ll_backend__dupelim__find_clusters_4_p_0(ll_backend__dupelim__StdList_18, ll_backend__dupelim__Fixed_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__dupelim__Clusters_19);
    }
#line 103 "dupelim.m"
    if ((ll_backend__dupelim__Clusters_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 102 "dupelim.m"
      *ll_backend__dupelim__Instrs_9 = ll_backend__dupelim__Instrs0_8;
#line 103 "dupelim.m"
    else
#line 104 "dupelim.m"
      {
#line 104 "dupelim.m"
        MR_Word ll_backend__dupelim__ReplMap0_22;
#line 104 "dupelim.m"
        MR_Word ll_backend__dupelim__LabelSeq_23;
#line 104 "dupelim.m"
        MR_Word ll_backend__dupelim__BlockMap_24;
#line 104 "dupelim.m"
        MR_Word ll_backend__dupelim__ReplMap_25;
#line 104 "dupelim.m"
        MR_Word ll_backend__dupelim__Instrs1_26;
#line 104 "dupelim.m"
        MR_Word ll_backend__dupelim__Instrs2_28;
#line 108 "dupelim.m"
        MR_Integer ll_backend__dupelim__V_27_27;

#line 105 "dupelim.m"
        {
#line 105 "dupelim.m"
          mercury__map__init_1_p_0(ll_backend__dupelim__TypeCtorInfo_37_37, ll_backend__dupelim__TypeCtorInfo_37_37, &ll_backend__dupelim__ReplMap0_22);
        }
#line 106 "dupelim.m"
        {
#line 106 "dupelim.m"
          ll_backend__dupelim__process_clusters_7_p_0(ll_backend__dupelim__Clusters_19, ll_backend__dupelim__LabelSeq0_12, &ll_backend__dupelim__LabelSeq_23, ll_backend__dupelim__BlockMap0_13, &ll_backend__dupelim__BlockMap_24, ll_backend__dupelim__ReplMap0_22, &ll_backend__dupelim__ReplMap_25);
        }
#line 108 "dupelim.m"
        {
#line 108 "dupelim.m"
          ll_backend__basic_block__flatten_basic_blocks_4_p_0(ll_backend__dupelim__LabelSeq_23, ll_backend__dupelim__BlockMap_24, &ll_backend__dupelim__Instrs1_26, &ll_backend__dupelim__V_27_27);
        }
#line 109 "dupelim.m"
        {
#line 109 "dupelim.m"
          ll_backend__opt_util__replace_labels_instruction_list_5_p_0(ll_backend__dupelim__Instrs1_26, &ll_backend__dupelim__Instrs2_28, ll_backend__dupelim__ReplMap_25, (MR_Integer) 1, (MR_Integer) 0);
        }
#line 111 "dupelim.m"
        {
#line 111 "dupelim.m"
          *ll_backend__dupelim__Instrs_9 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, ll_backend__dupelim__Comments_10, ll_backend__dupelim__Instrs2_28);
        }
#line 104 "dupelim.m"
      }
#line 90 "dupelim.m"
  }
#line 56 "dupelim.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.dupelim. */
