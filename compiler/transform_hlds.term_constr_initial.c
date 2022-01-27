/*
** Automatically generated from `term_constr_initial.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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


/* :- module transform_hlds.term_constr_initial. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_initial__init
ENDINIT
*/

#include "transform_hlds.term_constr_initial.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 134 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 137 "transform_hlds.term_constr_initial.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 140 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 143 "transform_hlds.term_constr_initial.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0;

#line 146 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 149 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 152 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

#line 155 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 158 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 161 "transform_hlds.term_constr_initial.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 500 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_p_0(
#line 500 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 500 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__PredInfo_3,
#line 500 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_4,
#line 500 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5,
#line 500 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_6);

#line 442 "term_constr_initial.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__442__1_2_p_0(
#line 442 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_36,
#line 442 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__2_73);

#line 216 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__216__1_5_p_0(
#line 216 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__IdToProgVar_6,
#line 216 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__SizeVarMap_7,
#line 216 "term_constr_initial.m"
  MR_Integer transform_hlds__term_constr_initial__HeadVar__3_17,
#line 216 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__4_18,
#line 216 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__HeadVar__5_19);

#line 568 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(
#line 568 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 568 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2,
#line 568 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_3);

#line 483 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__make_info_7_p_0(
#line 483 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadProgVars_8,
#line 483 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_9,
#line 483 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__VarTypes_10,
#line 483 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__ArgSize_11,
#line 483 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__Termination_12,
#line 483 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__SizeVarMap_13,
#line 483 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__HeadSizeVars_14);

#line 442 "term_constr_initial.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_2(
#line 442 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 442 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1);

#line 442 "term_constr_initial.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_1(
#line 442 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 442 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1);

#line 429 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0(
#line 429 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 429 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadProgVars_2,
#line 429 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_3,
#line 429 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__VarTypes_4,
#line 429 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__HeadVar__5_5,
#line 429 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__Termination_6,
#line 429 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__SizeVarMap_7,
#line 429 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__HeadSizeVars_8);

#line 390 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(
#line 390 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 390 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__SpecialPredId_2,
#line 390 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_3,
#line 390 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4,
#line 390 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_5);

#line 278 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_builtin_procs_5_p_0(
#line 278 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__MakeOptInt_6,
#line 278 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__PredId_7,
#line 278 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_8,
#line 278 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19,
#line 278 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_20);

#line 254 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_builtin_preds_5_p_0(
#line 254 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 254 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2,
#line 254 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_3);

#line 242 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__create_lp_term_3_p_0(
#line 242 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__SubstMap_4,
#line 242 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ArgSizeTerm_5,
#line 242 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__HeadVar__3_3);

#line 236 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_2(
#line 236 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 236 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 236 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2);

#line 239 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_1(
#line 239 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 239 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 239 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2);

#line 232 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(
#line 232 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__SubstMap_1,
#line 232 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__2_2,
#line 232 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__Constraint_3);

#line 228 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_3(
#line 228 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 228 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 228 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2);

#line 228 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_2(
#line 228 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 228 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 228 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2);

#line 216 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_1(
#line 216 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 216 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 216 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_2,
#line 216 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_3);

#line 169 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0(
#line 169 "term_constr_initial.m"
  MR_Integer transform_hlds__term_constr_initial__ProcId_4,
#line 169 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_10,
#line 169 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_11);

#line 165 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0_1(
#line 165 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 165 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 165 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_2,
#line 165 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_3);

#line 141 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0(
#line 141 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__PredId_4,
#line 141 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14,
#line 141 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_15);

#line 139 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__preprocess_module_4_p_0_1(
#line 139 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 139 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 139 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_2,
#line 139 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_2[2][2];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_3[4][6];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_5[5][1];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_6[2][5];




static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_2[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_2[1])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__term_constr_initial__preprocess_module_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__term_constr_initial__process_imported_pred_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_2[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_3[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_term_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_5[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_5[3]))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_6[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_initial__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_initial____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 594 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 603 "transform_hlds.term_constr_initial.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 611 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 620 "transform_hlds.term_constr_initial.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 628 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 637 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 646 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 655 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 663 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 671 "transform_hlds.term_constr_initial.c"
static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 500 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_p_0(
#line 500 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 500 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__PredInfo_3,
#line 500 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_4,
#line 500 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5,
#line 500 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_6)
#line 500 "term_constr_initial.m"
{
#line 503 "term_constr_initial.m"
  while (MR_TRUE)
#line 503 "term_constr_initial.m"
    {
#line 503 "term_constr_initial.m"
      /* tailcall optimized into a loop */
#line 503 "term_constr_initial.m"
      {
#line 503 "term_constr_initial.m"
        MR_bool transform_hlds__term_constr_initial__succeeded;

#line 503 "term_constr_initial.m"
        if ((transform_hlds__term_constr_initial__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "term_constr_initial.m"
          *transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_6 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5;
#line 503 "term_constr_initial.m"
        else
#line 505 "term_constr_initial.m"
          {
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_50_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_51_51 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 505 "term_constr_initial.m"
            MR_Integer transform_hlds__term_constr_initial__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 0)));
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 1)));
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcInfo0_19;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__HeadVars_20;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__PredModule_21;
#line 505 "term_constr_initial.m"
            MR_String transform_hlds__term_constr_initial__PredName_22;
#line 505 "term_constr_initial.m"
            MR_Integer transform_hlds__term_constr_initial__PredArity_23;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__SizeVarMap_25;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__Constrs_26;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__Polyhedron_27;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ArgSizeInfo_28;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__HeadSizeVars_29;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcInfo_31;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_37_37;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_38_38;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_39_39;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_43_43;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_46_46;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_47_47;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_48_48;
#line 506 "term_constr_initial.m"
            MR_Box transform_hlds__term_constr_initial__conv0_ProcInfo0_19;
#line 511 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial___SizeVarset_24;

#line 506 "term_constr_initial.m"
            {
#line 506 "term_constr_initial.m"
              transform_hlds__term_constr_initial__conv0_ProcInfo0_19 = mercury__map__det_elem_2_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_50_50, transform_hlds__term_constr_initial__TypeCtorInfo_51_51, ((MR_Box) (transform_hlds__term_constr_initial__ProcId_13)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5);
            }
#line 506 "term_constr_initial.m"
            transform_hlds__term_constr_initial__ProcInfo0_19 = ((MR_Word) transform_hlds__term_constr_initial__conv0_ProcInfo0_19);
#line 507 "term_constr_initial.m"
            {
#line 507 "term_constr_initial.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_19, &transform_hlds__term_constr_initial__HeadVars_20);
            }
#line 508 "term_constr_initial.m"
            {
#line 508 "term_constr_initial.m"
              transform_hlds__term_constr_initial__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__term_constr_initial__PredInfo_3);
            }
#line 509 "term_constr_initial.m"
            {
#line 509 "term_constr_initial.m"
              transform_hlds__term_constr_initial__PredName_22 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__term_constr_initial__PredInfo_3);
            }
#line 510 "term_constr_initial.m"
            {
#line 510 "term_constr_initial.m"
              transform_hlds__term_constr_initial__PredArity_23 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__term_constr_initial__PredInfo_3);
            }
#line 511 "term_constr_initial.m"
            {
#line 511 "term_constr_initial.m"
              transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadVars_20, &transform_hlds__term_constr_initial___SizeVarset_24, &transform_hlds__term_constr_initial__SizeVarMap_25);
            }
#line 512 "term_constr_initial.m"
            {
#line 512 "term_constr_initial.m"
              transform_hlds__term_constr_initial__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(transform_hlds__term_constr_initial__PredModule_21, transform_hlds__term_constr_initial__PredName_22, transform_hlds__term_constr_initial__PredArity_23);
            }
#line 515 "term_constr_initial.m"
            if (transform_hlds__term_constr_initial__succeeded)
#line 562 "term_constr_initial.m"
              {
#line 562 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__ConstraintsPrime_60;
#line 540 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__HVar1_56;
#line 540 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__HVar2_57;
#line 540 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_61_61;
#line 540 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_62_62;

#line 540 "term_constr_initial.m"
                transform_hlds__term_constr_initial__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_initial__HeadVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 540 "term_constr_initial.m"
                if (transform_hlds__term_constr_initial__succeeded)
#line 540 "term_constr_initial.m"
                  {
#line 540 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__HVar1_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVars_20, (MR_Integer) 0)));
#line 540 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVars_20, (MR_Integer) 1)));
#line 540 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_initial__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 540 "term_constr_initial.m"
                    if (transform_hlds__term_constr_initial__succeeded)
#line 540 "term_constr_initial.m"
                      {
#line 540 "term_constr_initial.m"
                        transform_hlds__term_constr_initial__HVar2_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_61_61, (MR_Integer) 0)));
#line 540 "term_constr_initial.m"
                        transform_hlds__term_constr_initial__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_61_61, (MR_Integer) 1)));
#line 540 "term_constr_initial.m"
                        transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 540 "term_constr_initial.m"
                        if (transform_hlds__term_constr_initial__succeeded)
#line 540 "term_constr_initial.m"
                          {
#line 543 "term_constr_initial.m"
                            if ((strcmp(transform_hlds__term_constr_initial__PredName_22, (MR_String) "unsafe_type_cast") == 0))
#line 542 "term_constr_initial.m"
                              transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 543 "term_constr_initial.m"
                            else
#line 543 "term_constr_initial.m"
                              if ((strcmp(transform_hlds__term_constr_initial__PredName_22, (MR_String) "unsafe_promise_unique") == 0))
#line 543 "term_constr_initial.m"
                                transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 543 "term_constr_initial.m"
                              else
#line 543 "term_constr_initial.m"
                                transform_hlds__term_constr_initial__succeeded = MR_FALSE;
#line 549 "term_constr_initial.m"
                            if (transform_hlds__term_constr_initial__succeeded)
#line 546 "term_constr_initial.m"
                              {
#line 546 "term_constr_initial.m"
                                MR_Word transform_hlds__term_constr_initial__SizeVar1_58;
#line 546 "term_constr_initial.m"
                                MR_Word transform_hlds__term_constr_initial__SizeVar2_59;
#line 546 "term_constr_initial.m"
                                MR_Word transform_hlds__term_constr_initial__V_63_63;

#line 546 "term_constr_initial.m"
                                {
#line 546 "term_constr_initial.m"
                                  transform_hlds__term_constr_initial__SizeVar1_58 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_initial__SizeVarMap_25, transform_hlds__term_constr_initial__HVar1_56);
                                }
#line 547 "term_constr_initial.m"
                                {
#line 547 "term_constr_initial.m"
                                  transform_hlds__term_constr_initial__SizeVar2_59 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_initial__SizeVarMap_25, transform_hlds__term_constr_initial__HVar2_57);
                                }
#line 548 "term_constr_initial.m"
                                {
#line 548 "term_constr_initial.m"
                                  transform_hlds__term_constr_initial__V_63_63 = libs__lp_rational__make_vars_eq_constraint_2_f_0(transform_hlds__term_constr_initial__SizeVar1_58, transform_hlds__term_constr_initial__SizeVar2_59);
                                }
#line 548 "term_constr_initial.m"
                                {
#line 548 "term_constr_initial.m"
                                  transform_hlds__term_constr_initial__ConstraintsPrime_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "term_constr_initial.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__ConstraintsPrime_60, 0) = ((MR_Box) (transform_hlds__term_constr_initial__V_63_63));
#line 548 "term_constr_initial.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__ConstraintsPrime_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "term_constr_initial.m"
                                }
#line 546 "term_constr_initial.m"
                                transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 546 "term_constr_initial.m"
                              }
#line 549 "term_constr_initial.m"
                            else
#line 557 "term_constr_initial.m"
                              {
#line 551 "term_constr_initial.m"
                                if ((strcmp(transform_hlds__term_constr_initial__PredName_22, (MR_String) "store_at_ref") == 0))
#line 550 "term_constr_initial.m"
                                  transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 551 "term_constr_initial.m"
                                else
#line 551 "term_constr_initial.m"
                                  if ((strcmp(transform_hlds__term_constr_initial__PredName_22, (MR_String) "builtin_compound_eq") == 0))
#line 552 "term_constr_initial.m"
                                    transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 551 "term_constr_initial.m"
                                  else
#line 551 "term_constr_initial.m"
                                    if ((strcmp(transform_hlds__term_constr_initial__PredName_22, (MR_String) "builtin_compound_lt") == 0))
#line 553 "term_constr_initial.m"
                                      transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 551 "term_constr_initial.m"
                                    else
#line 551 "term_constr_initial.m"
                                      if ((strcmp(transform_hlds__term_constr_initial__PredName_22, (MR_String) "store_at_ref_impure") == 0))
#line 551 "term_constr_initial.m"
                                        transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 551 "term_constr_initial.m"
                                      else
#line 551 "term_constr_initial.m"
                                        transform_hlds__term_constr_initial__succeeded = MR_FALSE;
#line 557 "term_constr_initial.m"
                                if (transform_hlds__term_constr_initial__succeeded)
#line 557 "term_constr_initial.m"
                                  {
#line 556 "term_constr_initial.m"
                                    transform_hlds__term_constr_initial__ConstraintsPrime_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 556 "term_constr_initial.m"
                                    transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 557 "term_constr_initial.m"
                                  }
#line 557 "term_constr_initial.m"
                              }
#line 540 "term_constr_initial.m"
                          }
#line 540 "term_constr_initial.m"
                      }
#line 540 "term_constr_initial.m"
                  }
#line 562 "term_constr_initial.m"
                if (transform_hlds__term_constr_initial__succeeded)
#line 561 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__Constrs_26 = transform_hlds__term_constr_initial__ConstraintsPrime_60;
#line 562 "term_constr_initial.m"
                else
#line 563 "term_constr_initial.m"
                  {
#line 563 "term_constr_initial.m"
                    {
#line 563 "term_constr_initial.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_initial", (MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", (MR_String) "unrecognised predicate");
#line 563 "term_constr_initial.m"
                      return;
                    }
#line 563 "term_constr_initial.m"
                  }
#line 562 "term_constr_initial.m"
              }
#line 515 "term_constr_initial.m"
            else
#line 517 "term_constr_initial.m"
              {
#line 515 "term_constr_initial.m"
                {
#line 515 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(transform_hlds__term_constr_initial__ModuleInfo_4, transform_hlds__term_constr_initial__PredInfo_3, transform_hlds__term_constr_initial__ProcInfo0_19);
                }
#line 517 "term_constr_initial.m"
                if (transform_hlds__term_constr_initial__succeeded)
#line 516 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__Constrs_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "term_constr_initial.m"
                else
#line 518 "term_constr_initial.m"
                  {
#line 518 "term_constr_initial.m"
                    {
#line 518 "term_constr_initial.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_initial", (MR_String) "predicate \140transform_hlds.term_constr_initial.set_builtin_terminates\'/6", (MR_String) "builtin with non-zero size args");
#line 518 "term_constr_initial.m"
                      return;
                    }
#line 518 "term_constr_initial.m"
                  }
#line 517 "term_constr_initial.m"
              }
#line 520 "term_constr_initial.m"
            {
#line 520 "term_constr_initial.m"
              transform_hlds__term_constr_initial__Polyhedron_27 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_initial__Constrs_26);
            }
#line 521 "term_constr_initial.m"
            {
#line 521 "term_constr_initial.m"
              transform_hlds__term_constr_initial__ArgSizeInfo_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 521 "term_constr_initial.m"
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__ArgSizeInfo_28, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Polyhedron_27));
#line 521 "term_constr_initial.m"
            }
#line 522 "term_constr_initial.m"
            {
#line 522 "term_constr_initial.m"
              transform_hlds__term_constr_initial__HeadSizeVars_29 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_initial__SizeVarMap_25, transform_hlds__term_constr_initial__HeadVars_20);
            }
#line 524 "term_constr_initial.m"
            {
#line 524 "term_constr_initial.m"
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_19, &transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_37_37);
            }
#line 525 "term_constr_initial.m"
            {
#line 525 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_38_38 = transform_hlds__term_constr_main__f_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_37_37, transform_hlds__term_constr_initial__ArgSizeInfo_28);
            }
#line 526 "term_constr_initial.m"
            {
#line 526 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_39_39 = transform_hlds__term_constr_main__f_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_38_38, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_5[4]));
            }
#line 527 "term_constr_initial.m"
            {
#line 527 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_43_43 = transform_hlds__term_constr_main__f_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_39_39, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_5[2]));
            }
#line 528 "term_constr_initial.m"
            {
#line 528 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_46_46 = transform_hlds__term_constr_main__f_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_43_43, transform_hlds__term_constr_initial__SizeVarMap_25);
            }
#line 529 "term_constr_initial.m"
            {
#line 529 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_47_47 = transform_hlds__term_constr_main__f_104_101_97_100_95_118_97_114_115_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_46_46, transform_hlds__term_constr_initial__HeadSizeVars_29);
            }
#line 530 "term_constr_initial.m"
            {
#line 530 "term_constr_initial.m"
              hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_47_47, transform_hlds__term_constr_initial__ProcInfo0_19, &transform_hlds__term_constr_initial__ProcInfo_31);
            }
#line 532 "term_constr_initial.m"
            {
#line 532 "term_constr_initial.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_50_50, transform_hlds__term_constr_initial__TypeCtorInfo_51_51, ((MR_Box) (transform_hlds__term_constr_initial__ProcId_13)), ((MR_Box) (transform_hlds__term_constr_initial__ProcInfo_31)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_48_48);
            }
#line 533 "term_constr_initial.m"
            /* direct tailcall eliminated */
#line 533 "term_constr_initial.m"
            {
#line 533 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_initial__ProcIds_14;
#line 533 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_5 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_48_48;

#line 533 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_5;
#line 533 "term_constr_initial.m"
              transform_hlds__term_constr_initial__HeadVar__1_1 = transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1;
#line 533 "term_constr_initial.m"
            }
#line 533 "term_constr_initial.m"
            continue;
#line 505 "term_constr_initial.m"
          }
#line 503 "term_constr_initial.m"
      }
#line 503 "term_constr_initial.m"
      break;
#line 503 "term_constr_initial.m"
    }
#line 500 "term_constr_initial.m"
}

#line 442 "term_constr_initial.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__442__1_2_p_0(
#line 442 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_36,
#line 442 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__2_73)
#line 442 "term_constr_initial.m"
{
#line 442 "term_constr_initial.m"
  {
#line 442 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;

#line 442 "term_constr_initial.m"
    {
#line 442 "term_constr_initial.m"
      return transform_hlds__term_constr_initial__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[1], transform_hlds__term_constr_initial__HeadVar__1_36, ((MR_Box) (transform_hlds__term_constr_initial__HeadVar__2_73)));
    }
#line 442 "term_constr_initial.m"
    return transform_hlds__term_constr_initial__succeeded;
#line 442 "term_constr_initial.m"
  }
#line 442 "term_constr_initial.m"
}

#line 216 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__216__1_5_p_0(
#line 216 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__IdToProgVar_6,
#line 216 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__SizeVarMap_7,
#line 216 "term_constr_initial.m"
  MR_Integer transform_hlds__term_constr_initial__HeadVar__3_17,
#line 216 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__4_18,
#line 216 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__HeadVar__5_19)
#line 216 "term_constr_initial.m"
{
#line 216 "term_constr_initial.m"
  {
#line 216 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;
#line 216 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[0];
#line 216 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__TypeInfo_26_26;
#line 216 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__ProgVar_11;
#line 216 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__SizeVar_12;
#line 217 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__conv0_ProgVar_11;
#line 218 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__conv1_SizeVar_12;

#line 217 "term_constr_initial.m"
    {
#line 217 "term_constr_initial.m"
      transform_hlds__term_constr_initial__conv0_ProgVar_11 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(transform_hlds__term_constr_initial__TypeInfo_25_25, transform_hlds__term_constr_initial__HeadVar__3_17, transform_hlds__term_constr_initial__IdToProgVar_6);
    }
#line 217 "term_constr_initial.m"
    transform_hlds__term_constr_initial__ProgVar_11 = ((MR_Word) transform_hlds__term_constr_initial__conv0_ProgVar_11);
#line 1141 "transform_hlds.term_constr_initial.c"
    transform_hlds__term_constr_initial__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[1];
#line 218 "term_constr_initial.m"
    {
#line 218 "term_constr_initial.m"
      transform_hlds__term_constr_initial__conv1_SizeVar_12 = mercury__map__lookup_2_f_0(transform_hlds__term_constr_initial__TypeInfo_25_25, transform_hlds__term_constr_initial__TypeInfo_26_26, transform_hlds__term_constr_initial__SizeVarMap_7, ((MR_Box) (transform_hlds__term_constr_initial__ProgVar_11)));
    }
#line 218 "term_constr_initial.m"
    transform_hlds__term_constr_initial__SizeVar_12 = ((MR_Word) transform_hlds__term_constr_initial__conv1_SizeVar_12);
#line 219 "term_constr_initial.m"
    {
#line 219 "term_constr_initial.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_initial__TypeInfo_26_26, transform_hlds__term_constr_initial__HeadVar__3_17, ((MR_Box) (transform_hlds__term_constr_initial__SizeVar_12)), transform_hlds__term_constr_initial__HeadVar__4_18, transform_hlds__term_constr_initial__HeadVar__5_19);
#line 219 "term_constr_initial.m"
      return;
    }
#line 216 "term_constr_initial.m"
  }
#line 216 "term_constr_initial.m"
}

#line 568 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(
#line 568 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 568 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2,
#line 568 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_3)
#line 568 "term_constr_initial.m"
{
#line 571 "term_constr_initial.m"
  while (MR_TRUE)
#line 571 "term_constr_initial.m"
    {
#line 571 "term_constr_initial.m"
      /* tailcall optimized into a loop */
#line 571 "term_constr_initial.m"
      {
#line 571 "term_constr_initial.m"
        MR_bool transform_hlds__term_constr_initial__succeeded;

#line 571 "term_constr_initial.m"
        if ((transform_hlds__term_constr_initial__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 571 "term_constr_initial.m"
          *transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_3 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2;
#line 571 "term_constr_initial.m"
        else
#line 572 "term_constr_initial.m"
          {
#line 572 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 572 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 572 "term_constr_initial.m"
            MR_Integer transform_hlds__term_constr_initial__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 0)));
#line 572 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 1)));
#line 572 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcInfo0_10;
#line 572 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__TermInfo0_11;
#line 572 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__HeadVars_12;
#line 572 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__SizeVarMap_14;
#line 572 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__TermInfo_15;
#line 572 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcInfo_16;
#line 572 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_19_19;
#line 573 "term_constr_initial.m"
            MR_Box transform_hlds__term_constr_initial__conv0_ProcInfo0_10;
#line 576 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial___SizeVarset_13;

#line 573 "term_constr_initial.m"
            {
#line 573 "term_constr_initial.m"
              transform_hlds__term_constr_initial__conv0_ProcInfo0_10 = mercury__map__det_elem_2_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_21_21, transform_hlds__term_constr_initial__TypeCtorInfo_22_22, ((MR_Box) (transform_hlds__term_constr_initial__ProcId_7)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2);
            }
#line 573 "term_constr_initial.m"
            transform_hlds__term_constr_initial__ProcInfo0_10 = ((MR_Word) transform_hlds__term_constr_initial__conv0_ProcInfo0_10);
#line 574 "term_constr_initial.m"
            {
#line 574 "term_constr_initial.m"
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_10, &transform_hlds__term_constr_initial__TermInfo0_11);
            }
#line 575 "term_constr_initial.m"
            {
#line 575 "term_constr_initial.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_10, &transform_hlds__term_constr_initial__HeadVars_12);
            }
#line 576 "term_constr_initial.m"
            {
#line 576 "term_constr_initial.m"
              transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadVars_12, &transform_hlds__term_constr_initial___SizeVarset_13, &transform_hlds__term_constr_initial__SizeVarMap_14);
            }
#line 577 "term_constr_initial.m"
            {
#line 577 "term_constr_initial.m"
              transform_hlds__term_constr_initial__TermInfo_15 = transform_hlds__term_constr_main__f_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_f_0(transform_hlds__term_constr_initial__TermInfo0_11, transform_hlds__term_constr_initial__SizeVarMap_14);
            }
#line 578 "term_constr_initial.m"
            {
#line 578 "term_constr_initial.m"
              hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_initial__TermInfo_15, transform_hlds__term_constr_initial__ProcInfo0_10, &transform_hlds__term_constr_initial__ProcInfo_16);
            }
#line 579 "term_constr_initial.m"
            {
#line 579 "term_constr_initial.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_21_21, transform_hlds__term_constr_initial__TypeCtorInfo_22_22, ((MR_Box) (transform_hlds__term_constr_initial__ProcId_7)), ((MR_Box) (transform_hlds__term_constr_initial__ProcInfo_16)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_19_19);
            }
#line 580 "term_constr_initial.m"
            /* direct tailcall eliminated */
#line 580 "term_constr_initial.m"
            {
#line 580 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_initial__ProcIds_8;
#line 580 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_2 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_19_19;

#line 580 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_2;
#line 580 "term_constr_initial.m"
              transform_hlds__term_constr_initial__HeadVar__1_1 = transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1;
#line 580 "term_constr_initial.m"
            }
#line 580 "term_constr_initial.m"
            continue;
#line 572 "term_constr_initial.m"
          }
#line 571 "term_constr_initial.m"
      }
#line 571 "term_constr_initial.m"
      break;
#line 571 "term_constr_initial.m"
    }
#line 568 "term_constr_initial.m"
}

#line 483 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__make_info_7_p_0(
#line 483 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadProgVars_8,
#line 483 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_9,
#line 483 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__VarTypes_10,
#line 483 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__ArgSize_11,
#line 483 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__Termination_12,
#line 483 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__SizeVarMap_13,
#line 483 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__HeadSizeVars_14)
#line 483 "term_constr_initial.m"
{
#line 488 "term_constr_initial.m"
  {
#line 488 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;
#line 488 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__Zeros_16;
#line 488 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__Constraints_17;
#line 489 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial___SizeVarset_15;

#line 489 "term_constr_initial.m"
    {
#line 489 "term_constr_initial.m"
      transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadProgVars_8, &transform_hlds__term_constr_initial___SizeVarset_15, transform_hlds__term_constr_initial__SizeVarMap_13);
    }
#line 490 "term_constr_initial.m"
    {
#line 490 "term_constr_initial.m"
      transform_hlds__term_constr_initial__Zeros_16 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(transform_hlds__term_constr_initial__ModuleInfo_9, *transform_hlds__term_constr_initial__SizeVarMap_13, transform_hlds__term_constr_initial__VarTypes_10);
    }
#line 491 "term_constr_initial.m"
    {
#line 491 "term_constr_initial.m"
      transform_hlds__term_constr_initial__Constraints_17 = transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0(*transform_hlds__term_constr_initial__SizeVarMap_13, transform_hlds__term_constr_initial__Zeros_16);
    }
#line 492 "term_constr_initial.m"
    {
#line 492 "term_constr_initial.m"
      *transform_hlds__term_constr_initial__ArgSize_11 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_initial__Constraints_17);
    }
#line 494 "term_constr_initial.m"
    *transform_hlds__term_constr_initial__Termination_12 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[3];
#line 495 "term_constr_initial.m"
    {
#line 495 "term_constr_initial.m"
      *transform_hlds__term_constr_initial__HeadSizeVars_14 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(*transform_hlds__term_constr_initial__SizeVarMap_13, transform_hlds__term_constr_initial__HeadProgVars_8);
    }
#line 488 "term_constr_initial.m"
  }
#line 483 "term_constr_initial.m"
}

#line 442 "term_constr_initial.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_2(
#line 442 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 442 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1)
#line 442 "term_constr_initial.m"
{
#line 442 "term_constr_initial.m"
  {
#line 442 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;
#line 442 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;

#line 442 "term_constr_initial.m"
    {
#line 442 "term_constr_initial.m"
      return transform_hlds__term_constr_initial__succeeded = transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__442__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1));
    }
#line 442 "term_constr_initial.m"
    return transform_hlds__term_constr_initial__succeeded;
#line 442 "term_constr_initial.m"
  }
#line 442 "term_constr_initial.m"
}

#line 442 "term_constr_initial.m"
static MR_bool MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_1(
#line 442 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 442 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1)
#line 442 "term_constr_initial.m"
{
#line 442 "term_constr_initial.m"
  {
#line 442 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;
#line 442 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;

#line 442 "term_constr_initial.m"
    {
#line 442 "term_constr_initial.m"
      return transform_hlds__term_constr_initial__succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1));
    }
#line 442 "term_constr_initial.m"
    return transform_hlds__term_constr_initial__succeeded;
#line 442 "term_constr_initial.m"
  }
#line 442 "term_constr_initial.m"
}

#line 429 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0(
#line 429 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 429 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadProgVars_2,
#line 429 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_3,
#line 429 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__VarTypes_4,
#line 429 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__HeadVar__5_5,
#line 429 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__Termination_6,
#line 429 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__SizeVarMap_7,
#line 429 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__HeadSizeVars_8)
#line 429 "term_constr_initial.m"
{
#line 434 "term_constr_initial.m"
  {
#line 434 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;

#line 434 "term_constr_initial.m"
    if ((transform_hlds__term_constr_initial__HeadVar__1_1 == (MR_Integer) 2))
#line 435 "term_constr_initial.m"
      {
#line 435 "term_constr_initial.m"
        transform_hlds__term_constr_initial__make_info_7_p_0(transform_hlds__term_constr_initial__HeadProgVars_2, transform_hlds__term_constr_initial__ModuleInfo_3, transform_hlds__term_constr_initial__VarTypes_4, transform_hlds__term_constr_initial__HeadVar__5_5, transform_hlds__term_constr_initial__Termination_6, transform_hlds__term_constr_initial__SizeVarMap_7, transform_hlds__term_constr_initial__HeadSizeVars_8);
#line 435 "term_constr_initial.m"
        return;
      }
#line 434 "term_constr_initial.m"
    else
#line 434 "term_constr_initial.m"
      if ((transform_hlds__term_constr_initial__HeadVar__1_1 == (MR_Integer) 1))
#line 467 "term_constr_initial.m"
        {
#line 467 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__TypeInfo_76_76 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[0];
#line 467 "term_constr_initial.m"
          MR_Integer transform_hlds__term_constr_initial__NumToDrop_55;
#line 467 "term_constr_initial.m"
          MR_Integer transform_hlds__term_constr_initial__V_57_57;
#line 469 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial___ZeroSizeHeadVars_56;

#line 468 "term_constr_initial.m"
          {
#line 468 "term_constr_initial.m"
            transform_hlds__term_constr_initial__V_57_57 = mercury__list__length_1_f_0(transform_hlds__term_constr_initial__TypeInfo_76_76, transform_hlds__term_constr_initial__HeadProgVars_2);
          }
#line 468 "term_constr_initial.m"
          transform_hlds__term_constr_initial__NumToDrop_55 = (transform_hlds__term_constr_initial__V_57_57 - (MR_Integer) 2);
#line 469 "term_constr_initial.m"
          {
#line 469 "term_constr_initial.m"
            transform_hlds__term_constr_initial__succeeded = mercury__list__drop_3_p_0(transform_hlds__term_constr_initial__TypeInfo_76_76, transform_hlds__term_constr_initial__NumToDrop_55, transform_hlds__term_constr_initial__HeadProgVars_2, &transform_hlds__term_constr_initial___ZeroSizeHeadVars_56);
          }
#line 472 "term_constr_initial.m"
          if (transform_hlds__term_constr_initial__succeeded)
#line 470 "term_constr_initial.m"
            {
#line 470 "term_constr_initial.m"
              transform_hlds__term_constr_initial__make_info_7_p_0(transform_hlds__term_constr_initial__HeadProgVars_2, transform_hlds__term_constr_initial__ModuleInfo_3, transform_hlds__term_constr_initial__VarTypes_4, transform_hlds__term_constr_initial__HeadVar__5_5, transform_hlds__term_constr_initial__Termination_6, transform_hlds__term_constr_initial__SizeVarMap_7, transform_hlds__term_constr_initial__HeadSizeVars_8);
#line 470 "term_constr_initial.m"
              return;
            }
#line 472 "term_constr_initial.m"
          else
#line 473 "term_constr_initial.m"
            {
#line 473 "term_constr_initial.m"
              {
#line 473 "term_constr_initial.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_initial", (MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "less than two arguments to builtin index");
#line 473 "term_constr_initial.m"
                return;
              }
#line 473 "term_constr_initial.m"
            }
#line 467 "term_constr_initial.m"
        }
#line 434 "term_constr_initial.m"
      else
#line 434 "term_constr_initial.m"
        if ((transform_hlds__term_constr_initial__HeadVar__1_1 == (MR_Integer) 3))
#line 476 "term_constr_initial.m"
          {
#line 477 "term_constr_initial.m"
            {
#line 477 "term_constr_initial.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_initial", (MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "initialise predicate");
#line 477 "term_constr_initial.m"
              return;
            }
#line 476 "term_constr_initial.m"
          }
#line 434 "term_constr_initial.m"
        else
#line 438 "term_constr_initial.m"
          {
#line 438 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__Zeros_24;
#line 438 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__NonZeroHeadSizeVars_25;
#line 438 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__Constrs_26;
#line 438 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__V_35_35;
#line 438 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__V_36_36;
#line 439 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial___SizeVarset_23;

#line 439 "term_constr_initial.m"
            {
#line 439 "term_constr_initial.m"
              transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadProgVars_2, &transform_hlds__term_constr_initial___SizeVarset_23, transform_hlds__term_constr_initial__SizeVarMap_7);
            }
#line 440 "term_constr_initial.m"
            {
#line 440 "term_constr_initial.m"
              *transform_hlds__term_constr_initial__HeadSizeVars_8 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(*transform_hlds__term_constr_initial__SizeVarMap_7, transform_hlds__term_constr_initial__HeadProgVars_2);
            }
#line 441 "term_constr_initial.m"
            {
#line 441 "term_constr_initial.m"
              transform_hlds__term_constr_initial__Zeros_24 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(transform_hlds__term_constr_initial__ModuleInfo_3, *transform_hlds__term_constr_initial__SizeVarMap_7, transform_hlds__term_constr_initial__VarTypes_4);
            }
#line 442 "term_constr_initial.m"
            {
#line 442 "term_constr_initial.m"
              transform_hlds__term_constr_initial__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 442 "term_constr_initial.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_36_36, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[0]));
#line 442 "term_constr_initial.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_36_36, 1) = ((MR_Box) (transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_1));
#line 442 "term_constr_initial.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 442 "term_constr_initial.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_36_36, 3) = ((MR_Box) (transform_hlds__term_constr_initial__Zeros_24));
#line 442 "term_constr_initial.m"
            }
#line 442 "term_constr_initial.m"
            {
#line 442 "term_constr_initial.m"
              transform_hlds__term_constr_initial__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 442 "term_constr_initial.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_35_35, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[1]));
#line 442 "term_constr_initial.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_35_35, 1) = ((MR_Box) (transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_2));
#line 442 "term_constr_initial.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 442 "term_constr_initial.m"
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_35_35, 3) = ((MR_Box) (transform_hlds__term_constr_initial__V_36_36));
#line 442 "term_constr_initial.m"
            }
#line 442 "term_constr_initial.m"
            {
#line 442 "term_constr_initial.m"
              transform_hlds__term_constr_initial__NonZeroHeadSizeVars_25 = mercury__list__filter_2_f_0((MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[1], transform_hlds__term_constr_initial__V_35_35, *transform_hlds__term_constr_initial__HeadSizeVars_8);
            }
#line 454 "term_constr_initial.m"
            if ((transform_hlds__term_constr_initial__NonZeroHeadSizeVars_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "term_constr_initial.m"
              transform_hlds__term_constr_initial__Constrs_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 454 "term_constr_initial.m"
            else
#line 454 "term_constr_initial.m"
              {
#line 454 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__NonZeroHeadSizeVars_25, (MR_Integer) 1)));
#line 454 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__NonZeroHeadSizeVars_25, (MR_Integer) 0)));

#line 454 "term_constr_initial.m"
                if ((transform_hlds__term_constr_initial__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 460 "term_constr_initial.m"
                  {
#line 461 "term_constr_initial.m"
                    {
#line 461 "term_constr_initial.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_initial", (MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "wrong number of args for unify");
#line 461 "term_constr_initial.m"
                      return;
                    }
#line 460 "term_constr_initial.m"
                  }
#line 454 "term_constr_initial.m"
                else
#line 454 "term_constr_initial.m"
                  {
#line 454 "term_constr_initial.m"
                    MR_Word transform_hlds__term_constr_initial__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_80_80, (MR_Integer) 1)));
#line 454 "term_constr_initial.m"
                    MR_Word transform_hlds__term_constr_initial__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_80_80, (MR_Integer) 0)));

#line 454 "term_constr_initial.m"
                    if ((transform_hlds__term_constr_initial__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "term_constr_initial.m"
                      {
#line 455 "term_constr_initial.m"
                        MR_Word transform_hlds__term_constr_initial__V_45_45;

#line 456 "term_constr_initial.m"
                        {
#line 456 "term_constr_initial.m"
                          transform_hlds__term_constr_initial__V_45_45 = libs__lp_rational__make_vars_eq_constraint_2_f_0(transform_hlds__term_constr_initial__V_81_81, transform_hlds__term_constr_initial__V_83_83);
                        }
#line 456 "term_constr_initial.m"
                        {
#line 456 "term_constr_initial.m"
                          transform_hlds__term_constr_initial__Constrs_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "term_constr_initial.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__Constrs_26, 0) = ((MR_Box) (transform_hlds__term_constr_initial__V_45_45));
#line 456 "term_constr_initial.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__Constrs_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "term_constr_initial.m"
                        }
#line 455 "term_constr_initial.m"
                      }
#line 454 "term_constr_initial.m"
                    else
#line 460 "term_constr_initial.m"
                      {
#line 461 "term_constr_initial.m"
                        {
#line 461 "term_constr_initial.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_initial", (MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "wrong number of args for unify");
#line 461 "term_constr_initial.m"
                          return;
                        }
#line 460 "term_constr_initial.m"
                      }
#line 454 "term_constr_initial.m"
                  }
#line 454 "term_constr_initial.m"
              }
#line 463 "term_constr_initial.m"
            {
#line 463 "term_constr_initial.m"
              *transform_hlds__term_constr_initial__HeadVar__5_5 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_initial__Constrs_26);
            }
#line 465 "term_constr_initial.m"
            *transform_hlds__term_constr_initial__Termination_6 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[3];
#line 438 "term_constr_initial.m"
          }
#line 434 "term_constr_initial.m"
  }
#line 429 "term_constr_initial.m"
}

#line 390 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(
#line 390 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 390 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__SpecialPredId_2,
#line 390 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_3,
#line 390 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4,
#line 390 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_5)
#line 390 "term_constr_initial.m"
{
#line 393 "term_constr_initial.m"
  while (MR_TRUE)
#line 393 "term_constr_initial.m"
    {
#line 393 "term_constr_initial.m"
      /* tailcall optimized into a loop */
#line 393 "term_constr_initial.m"
      {
#line 393 "term_constr_initial.m"
        MR_bool transform_hlds__term_constr_initial__succeeded;

#line 393 "term_constr_initial.m"
        if ((transform_hlds__term_constr_initial__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "term_constr_initial.m"
          *transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_5 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4;
#line 393 "term_constr_initial.m"
        else
#line 395 "term_constr_initial.m"
          {
#line 395 "term_constr_initial.m"
            MR_Integer transform_hlds__term_constr_initial__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 0)));
#line 395 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 1)));
#line 395 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_37_37;

#line 417 "term_constr_initial.m"
            if ((transform_hlds__term_constr_initial__SpecialPredId_2 == (MR_Integer) 3))
#line 418 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_37_37 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4;
#line 417 "term_constr_initial.m"
            else
#line 400 "term_constr_initial.m"
              {
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__ProcInfo0_16;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__HeadVars_17;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__VarTypes_18;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__ArgSize_19;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__Termination_20;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__VarMap_21;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__HeadSizeVars_22;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__ProcInfo_25;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_28_28;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_29_29;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_30_30;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_31_31;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_32_32;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_34_34;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_35_35;
#line 400 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_36_36;
#line 401 "term_constr_initial.m"
                MR_Box transform_hlds__term_constr_initial__conv0_ProcInfo0_16;

#line 401 "term_constr_initial.m"
                {
#line 401 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__conv0_ProcInfo0_16 = mercury__map__det_elem_2_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_39_39, transform_hlds__term_constr_initial__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__term_constr_initial__ProcId_11)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4);
                }
#line 401 "term_constr_initial.m"
                transform_hlds__term_constr_initial__ProcInfo0_16 = ((MR_Word) transform_hlds__term_constr_initial__conv0_ProcInfo0_16);
#line 402 "term_constr_initial.m"
                {
#line 402 "term_constr_initial.m"
                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_16, &transform_hlds__term_constr_initial__HeadVars_17);
                }
#line 403 "term_constr_initial.m"
                {
#line 403 "term_constr_initial.m"
                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_16, &transform_hlds__term_constr_initial__VarTypes_18);
                }
#line 404 "term_constr_initial.m"
                {
#line 404 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0(transform_hlds__term_constr_initial__SpecialPredId_2, transform_hlds__term_constr_initial__HeadVars_17, transform_hlds__term_constr_initial__ModuleInfo_3, transform_hlds__term_constr_initial__VarTypes_18, &transform_hlds__term_constr_initial__ArgSize_19, &transform_hlds__term_constr_initial__Termination_20, &transform_hlds__term_constr_initial__VarMap_21, &transform_hlds__term_constr_initial__HeadSizeVars_22);
                }
#line 407 "term_constr_initial.m"
                {
#line 407 "term_constr_initial.m"
                  hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_16, &transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_28_28);
                }
#line 408 "term_constr_initial.m"
                {
#line 408 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 408 "term_constr_initial.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_30_30, 0) = ((MR_Box) (transform_hlds__term_constr_initial__ArgSize_19));
#line 408 "term_constr_initial.m"
                }
#line 408 "term_constr_initial.m"
                {
#line 408 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_29_29 = transform_hlds__term_constr_main__f_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_28_28, transform_hlds__term_constr_initial__V_30_30);
                }
#line 409 "term_constr_initial.m"
                {
#line 409 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 409 "term_constr_initial.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_32_32, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Termination_20));
#line 409 "term_constr_initial.m"
                }
#line 409 "term_constr_initial.m"
                {
#line 409 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_31_31 = transform_hlds__term_constr_main__f_116_101_114_109_95_115_116_97_116_117_115_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_29_29, transform_hlds__term_constr_initial__V_32_32);
                }
#line 411 "term_constr_initial.m"
                {
#line 411 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_34_34 = transform_hlds__term_constr_main__f_105_110_116_101_114_109_111_100_95_115_116_97_116_117_115_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_31_31, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_5[2]));
                }
#line 412 "term_constr_initial.m"
                {
#line 412 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_35_35 = transform_hlds__term_constr_main__f_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_34_34, transform_hlds__term_constr_initial__VarMap_21);
                }
#line 413 "term_constr_initial.m"
                {
#line 413 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_36_36 = transform_hlds__term_constr_main__f_104_101_97_100_95_118_97_114_115_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_35_35, transform_hlds__term_constr_initial__HeadSizeVars_22);
                }
#line 414 "term_constr_initial.m"
                {
#line 414 "term_constr_initial.m"
                  hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_36_36, transform_hlds__term_constr_initial__ProcInfo0_16, &transform_hlds__term_constr_initial__ProcInfo_25);
                }
#line 416 "term_constr_initial.m"
                {
#line 416 "term_constr_initial.m"
                  mercury__map__det_update_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_39_39, transform_hlds__term_constr_initial__TypeCtorInfo_40_40, ((MR_Box) (transform_hlds__term_constr_initial__ProcId_11)), ((MR_Box) (transform_hlds__term_constr_initial__ProcInfo_25)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_37_37);
                }
#line 400 "term_constr_initial.m"
              }
#line 423 "term_constr_initial.m"
            /* direct tailcall eliminated */
#line 423 "term_constr_initial.m"
            {
#line 423 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_initial__ProcIds_12;
#line 423 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_37_37;

#line 423 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
#line 423 "term_constr_initial.m"
              transform_hlds__term_constr_initial__HeadVar__1_1 = transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1;
#line 423 "term_constr_initial.m"
            }
#line 423 "term_constr_initial.m"
            continue;
#line 395 "term_constr_initial.m"
          }
#line 393 "term_constr_initial.m"
      }
#line 393 "term_constr_initial.m"
      break;
#line 393 "term_constr_initial.m"
    }
#line 390 "term_constr_initial.m"
}

#line 278 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_builtin_procs_5_p_0(
#line 278 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__MakeOptInt_6,
#line 278 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__PredId_7,
#line 278 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_8,
#line 278 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19,
#line 278 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_20)
#line 278 "term_constr_initial.m"
{
#line 281 "term_constr_initial.m"
  {
#line 281 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;
#line 281 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__ImportStatus_10;
#line 281 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__Markers_11;
#line 281 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__Context_12;
#line 281 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__ProcIds_14;
#line 281 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_21;
#line 281 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_30;
#line 281 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_52_52;
#line 293 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_22_22;

#line 282 "term_constr_initial.m"
    {
#line 282 "term_constr_initial.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19, &transform_hlds__term_constr_initial__ImportStatus_10);
    }
#line 283 "term_constr_initial.m"
    {
#line 283 "term_constr_initial.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19, &transform_hlds__term_constr_initial__Markers_11);
    }
#line 284 "term_constr_initial.m"
    {
#line 284 "term_constr_initial.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19, &transform_hlds__term_constr_initial__Context_12);
    }
#line 286 "term_constr_initial.m"
    {
#line 286 "term_constr_initial.m"
      hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_21);
    }
#line 287 "term_constr_initial.m"
    {
#line 287 "term_constr_initial.m"
      transform_hlds__term_constr_initial__ProcIds_14 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19);
    }
#line 367 "term_constr_initial.m"
    {
#line 367 "term_constr_initial.m"
      transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19);
    }
#line 370 "term_constr_initial.m"
    if (transform_hlds__term_constr_initial__succeeded)
#line 368 "term_constr_initial.m"
      {
#line 368 "term_constr_initial.m"
        {
#line 368 "term_constr_initial.m"
          transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_p_0(transform_hlds__term_constr_initial__ProcIds_14, transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19, transform_hlds__term_constr_initial__ModuleInfo_8, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_21, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_22_22);
        }
#line 368 "term_constr_initial.m"
        transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 368 "term_constr_initial.m"
      }
#line 370 "term_constr_initial.m"
    else
#line 386 "term_constr_initial.m"
      {
#line 386 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__SpecialPredId_67;
#line 379 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__SpecPredId0_64;
#line 372 "term_constr_initial.m"
        MR_String transform_hlds__term_constr_initial__Name_62;
#line 372 "term_constr_initial.m"
        MR_Integer transform_hlds__term_constr_initial__Arity_63;
#line 372 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__ModuleName_66;
#line 372 "term_constr_initial.m"
        MR_Integer transform_hlds__term_constr_initial__V_73_73;
#line 374 "term_constr_initial.m"
        MR_String transform_hlds__term_constr_initial__V_65_65;

#line 372 "term_constr_initial.m"
        {
#line 372 "term_constr_initial.m"
          transform_hlds__term_constr_initial__Name_62 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19);
        }
#line 373 "term_constr_initial.m"
        {
#line 373 "term_constr_initial.m"
          transform_hlds__term_constr_initial__Arity_63 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19);
        }
#line 374 "term_constr_initial.m"
        {
#line 374 "term_constr_initial.m"
          transform_hlds__term_constr_initial__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&transform_hlds__term_constr_initial__SpecPredId0_64, transform_hlds__term_constr_initial__Name_62, &transform_hlds__term_constr_initial__V_65_65, &transform_hlds__term_constr_initial__V_73_73);
        }
#line 372 "term_constr_initial.m"
        if (transform_hlds__term_constr_initial__succeeded)
#line 372 "term_constr_initial.m"
          {
#line 374 "term_constr_initial.m"
            transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__Arity_63 == transform_hlds__term_constr_initial__V_73_73);
#line 372 "term_constr_initial.m"
            if (transform_hlds__term_constr_initial__succeeded)
#line 372 "term_constr_initial.m"
              {
#line 375 "term_constr_initial.m"
                {
#line 375 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__ModuleName_66 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19);
                }
#line 376 "term_constr_initial.m"
                {
#line 376 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__succeeded = mdbcomp__prim_data__any_mercury_builtin_module_1_p_0(transform_hlds__term_constr_initial__ModuleName_66);
                }
#line 372 "term_constr_initial.m"
              }
#line 372 "term_constr_initial.m"
          }
#line 379 "term_constr_initial.m"
        if (transform_hlds__term_constr_initial__succeeded)
#line 378 "term_constr_initial.m"
          {
#line 378 "term_constr_initial.m"
            transform_hlds__term_constr_initial__SpecialPredId_67 = transform_hlds__term_constr_initial__SpecPredId0_64;
#line 378 "term_constr_initial.m"
            transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 378 "term_constr_initial.m"
          }
#line 379 "term_constr_initial.m"
        else
#line 380 "term_constr_initial.m"
          {
#line 380 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__PredOrigin_68;
#line 380 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__V_71_71;
#line 381 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__V_69_69;

#line 380 "term_constr_initial.m"
            {
#line 380 "term_constr_initial.m"
              hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19, &transform_hlds__term_constr_initial__PredOrigin_68);
            }
#line 381 "term_constr_initial.m"
            transform_hlds__term_constr_initial__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_initial__PredOrigin_68)) == (MR_mktag((MR_Integer) 0)));
#line 381 "term_constr_initial.m"
            if (transform_hlds__term_constr_initial__succeeded)
#line 381 "term_constr_initial.m"
              {
#line 381 "term_constr_initial.m"
                transform_hlds__term_constr_initial__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__PredOrigin_68, (MR_Integer) 0)));
#line 381 "term_constr_initial.m"
                transform_hlds__term_constr_initial__SpecialPredId_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_71_71, (MR_Integer) 0)));
#line 381 "term_constr_initial.m"
                transform_hlds__term_constr_initial__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_71_71, (MR_Integer) 1)));
#line 381 "term_constr_initial.m"
                transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 381 "term_constr_initial.m"
              }
#line 380 "term_constr_initial.m"
          }
#line 386 "term_constr_initial.m"
        if (transform_hlds__term_constr_initial__succeeded)
#line 386 "term_constr_initial.m"
          {
#line 384 "term_constr_initial.m"
            {
#line 384 "term_constr_initial.m"
              transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(transform_hlds__term_constr_initial__ProcIds_14, transform_hlds__term_constr_initial__SpecialPredId_67, transform_hlds__term_constr_initial__ModuleInfo_8, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_21, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_22_22);
            }
#line 384 "term_constr_initial.m"
            transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 386 "term_constr_initial.m"
          }
#line 386 "term_constr_initial.m"
      }
#line 293 "term_constr_initial.m"
    if (transform_hlds__term_constr_initial__succeeded)
#line 289 "term_constr_initial.m"
      transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_30 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_22_22;
#line 293 "term_constr_initial.m"
    else
#line 318 "term_constr_initial.m"
      {
#line 296 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__V_23_23;

#line 296 "term_constr_initial.m"
        {
#line 296 "term_constr_initial.m"
          transform_hlds__term_constr_initial__V_23_23 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(transform_hlds__term_constr_initial__ImportStatus_10);
        }
#line 296 "term_constr_initial.m"
        transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__V_23_23 == (MR_Integer) 1);
#line 318 "term_constr_initial.m"
        if (transform_hlds__term_constr_initial__succeeded)
#line 315 "term_constr_initial.m"
          {
#line 307 "term_constr_initial.m"
            {
#line 307 "term_constr_initial.m"
              transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_initial__Markers_11, (MR_Integer) 17);
            }
#line 315 "term_constr_initial.m"
            if (transform_hlds__term_constr_initial__succeeded)
#line 308 "term_constr_initial.m"
              {
#line 308 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__ArgSizeInfo_16;
#line 308 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_27_27;
#line 308 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_29_29;

#line 309 "term_constr_initial.m"
                {
#line 309 "term_constr_initial.m"
                  transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_14, (MR_Integer) 1, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[0], transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_21, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_27_27);
                }
#line 311 "term_constr_initial.m"
                {
#line 311 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__ArgSizeInfo_16 = libs__polyhedron__universe_0_f_0();
                }
#line 312 "term_constr_initial.m"
                {
#line 312 "term_constr_initial.m"
                  transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_14, (MR_Integer) 1, transform_hlds__term_constr_initial__ArgSizeInfo_16, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_27_27, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_29_29);
                }
#line 314 "term_constr_initial.m"
                {
#line 314 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(transform_hlds__term_constr_initial__ProcIds_14, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_29_29, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_30);
                }
#line 308 "term_constr_initial.m"
              }
#line 315 "term_constr_initial.m"
            else
#line 314 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_30 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_21;
#line 315 "term_constr_initial.m"
          }
#line 318 "term_constr_initial.m"
        else
#line 342 "term_constr_initial.m"
          {
#line 342 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_35_35;
#line 342 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ArgSizeInfo_54;

#line 331 "term_constr_initial.m"
            {
#line 331 "term_constr_initial.m"
              transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_initial__Markers_11, (MR_Integer) 17);
            }
#line 332 "term_constr_initial.m"
            if (!(transform_hlds__term_constr_initial__succeeded))
#line 333 "term_constr_initial.m"
              {
#line 333 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_31_31;

#line 333 "term_constr_initial.m"
                transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__MakeOptInt_6 == (MR_Integer) 0);
#line 333 "term_constr_initial.m"
                if (transform_hlds__term_constr_initial__succeeded)
#line 333 "term_constr_initial.m"
                  {
#line 334 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__V_31_31 = (MR_Integer) 19;
#line 334 "term_constr_initial.m"
                    {
#line 334 "term_constr_initial.m"
                      transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_initial__Markers_11, transform_hlds__term_constr_initial__V_31_31);
                    }
#line 333 "term_constr_initial.m"
                  }
#line 333 "term_constr_initial.m"
              }
#line 339 "term_constr_initial.m"
            if (transform_hlds__term_constr_initial__succeeded)
#line 337 "term_constr_initial.m"
              {
#line 337 "term_constr_initial.m"
                {
#line 337 "term_constr_initial.m"
                  transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_14, (MR_Integer) 1, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[0], transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_21, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_35_35);
                }
#line 337 "term_constr_initial.m"
              }
#line 339 "term_constr_initial.m"
            else
#line 340 "term_constr_initial.m"
              {
#line 340 "term_constr_initial.m"
                {
#line 340 "term_constr_initial.m"
                  transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_14, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_5[1]), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_21, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_35_35);
                }
#line 340 "term_constr_initial.m"
              }
#line 343 "term_constr_initial.m"
            {
#line 343 "term_constr_initial.m"
              transform_hlds__term_constr_initial__ArgSizeInfo_54 = libs__polyhedron__universe_0_f_0();
            }
#line 344 "term_constr_initial.m"
            {
#line 344 "term_constr_initial.m"
              transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_14, (MR_Integer) 1, transform_hlds__term_constr_initial__ArgSizeInfo_54, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_35_35, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_30);
            }
#line 342 "term_constr_initial.m"
          }
#line 318 "term_constr_initial.m"
      }
#line 347 "term_constr_initial.m"
    {
#line 347 "term_constr_initial.m"
      transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_initial__Markers_11, (MR_Integer) 18);
    }
#line 356 "term_constr_initial.m"
    if (transform_hlds__term_constr_initial__succeeded)
#line 349 "term_constr_initial.m"
      {
#line 349 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__TerminationInfo_17;
#line 349 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__NonTermArgSizeInfo_18;
#line 349 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__V_44_44;
#line 349 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__V_45_45;
#line 349 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__V_46_46;
#line 349 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_49_49;
#line 349 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_51_51;

#line 349 "term_constr_initial.m"
        {
#line 349 "term_constr_initial.m"
          transform_hlds__term_constr_initial__V_46_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 349 "term_constr_initial.m"
          MR_hl_field(MR_mktag(2), transform_hlds__term_constr_initial__V_46_46, 0) = ((MR_Box) (transform_hlds__term_constr_initial__PredId_7));
#line 349 "term_constr_initial.m"
        }
#line 349 "term_constr_initial.m"
        {
#line 349 "term_constr_initial.m"
          transform_hlds__term_constr_initial__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "term_constr_initial.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_45_45, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Context_12));
#line 349 "term_constr_initial.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_45_45, 1) = ((MR_Box) (transform_hlds__term_constr_initial__V_46_46));
#line 349 "term_constr_initial.m"
        }
#line 349 "term_constr_initial.m"
        {
#line 349 "term_constr_initial.m"
          transform_hlds__term_constr_initial__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "term_constr_initial.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_44_44, 0) = ((MR_Box) (transform_hlds__term_constr_initial__V_45_45));
#line 349 "term_constr_initial.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "term_constr_initial.m"
        }
#line 348 "term_constr_initial.m"
        {
#line 348 "term_constr_initial.m"
          transform_hlds__term_constr_initial__TerminationInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 348 "term_constr_initial.m"
          MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__TerminationInfo_17, 0) = ((MR_Box) (transform_hlds__term_constr_initial__V_44_44));
#line 348 "term_constr_initial.m"
        }
#line 350 "term_constr_initial.m"
        {
#line 350 "term_constr_initial.m"
          transform_hlds__term_constr_initial__NonTermArgSizeInfo_18 = libs__polyhedron__universe_0_f_0();
        }
#line 351 "term_constr_initial.m"
        {
#line 351 "term_constr_initial.m"
          transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_14, (MR_Integer) 1, transform_hlds__term_constr_initial__TerminationInfo_17, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_30, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_49_49);
        }
#line 353 "term_constr_initial.m"
        {
#line 353 "term_constr_initial.m"
          transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_14, (MR_Integer) 1, transform_hlds__term_constr_initial__NonTermArgSizeInfo_18, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_49_49, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_51_51);
        }
#line 355 "term_constr_initial.m"
        {
#line 355 "term_constr_initial.m"
          transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(transform_hlds__term_constr_initial__ProcIds_14, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_51_51, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_52_52);
        }
#line 349 "term_constr_initial.m"
      }
#line 356 "term_constr_initial.m"
    else
#line 355 "term_constr_initial.m"
      transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_52_52 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_30;
#line 359 "term_constr_initial.m"
    {
#line 359 "term_constr_initial.m"
      hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_52_52, transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_0_19, transform_hlds__term_constr_initial__STATE_VARIABLE_PredInfo_20);
#line 359 "term_constr_initial.m"
      return;
    }
#line 281 "term_constr_initial.m"
  }
#line 278 "term_constr_initial.m"
}

#line 254 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_builtin_preds_5_p_0(
#line 254 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 254 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2,
#line 254 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_3)
#line 254 "term_constr_initial.m"
{
#line 257 "term_constr_initial.m"
  while (MR_TRUE)
#line 257 "term_constr_initial.m"
    {
#line 257 "term_constr_initial.m"
      /* tailcall optimized into a loop */
#line 257 "term_constr_initial.m"
      {
#line 257 "term_constr_initial.m"
        MR_bool transform_hlds__term_constr_initial__succeeded;

#line 257 "term_constr_initial.m"
        if ((transform_hlds__term_constr_initial__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 257 "term_constr_initial.m"
          *transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2;
#line 257 "term_constr_initial.m"
        else
#line 258 "term_constr_initial.m"
          {
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_33_33;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_34_34;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 0)));
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__PredIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 1)));
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__Globals_16;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__MakeOptInt_17;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__PredInfo0_19;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__PredInfo_20;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_28_28;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_29_29;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_30_30;
#line 266 "term_constr_initial.m"
            MR_Box transform_hlds__term_constr_initial__conv0_PredInfo0_19;

#line 259 "term_constr_initial.m"
            {
#line 259 "term_constr_initial.m"
              hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Termination checking ", transform_hlds__term_constr_initial__PredId_12, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2);
            }
#line 261 "term_constr_initial.m"
            {
#line 261 "term_constr_initial.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__term_constr_initial__Globals_16);
            }
#line 262 "term_constr_initial.m"
            {
#line 262 "term_constr_initial.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_initial__Globals_16, (MR_Integer) 85, &transform_hlds__term_constr_initial__MakeOptInt_17);
            }
#line 265 "term_constr_initial.m"
            {
#line 265 "term_constr_initial.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_28_28);
            }
#line 2363 "transform_hlds.term_constr_initial.c"
            transform_hlds__term_constr_initial__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2365 "transform_hlds.term_constr_initial.c"
            transform_hlds__term_constr_initial__TypeCtorInfo_34_34 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 266 "term_constr_initial.m"
            {
#line 266 "term_constr_initial.m"
              transform_hlds__term_constr_initial__conv0_PredInfo0_19 = mercury__map__det_elem_2_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_33_33, transform_hlds__term_constr_initial__TypeCtorInfo_34_34, ((MR_Box) (transform_hlds__term_constr_initial__PredId_12)), transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_28_28);
            }
#line 266 "term_constr_initial.m"
            transform_hlds__term_constr_initial__PredInfo0_19 = ((MR_Word) transform_hlds__term_constr_initial__conv0_PredInfo0_19);
#line 267 "term_constr_initial.m"
            {
#line 267 "term_constr_initial.m"
              transform_hlds__term_constr_initial__process_builtin_procs_5_p_0(transform_hlds__term_constr_initial__MakeOptInt_17, transform_hlds__term_constr_initial__PredId_12, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__term_constr_initial__PredInfo0_19, &transform_hlds__term_constr_initial__PredInfo_20);
            }
#line 269 "term_constr_initial.m"
            {
#line 269 "term_constr_initial.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_33_33, transform_hlds__term_constr_initial__TypeCtorInfo_34_34, ((MR_Box) (transform_hlds__term_constr_initial__PredId_12)), ((MR_Box) (transform_hlds__term_constr_initial__PredInfo_20)), transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_28_28, &transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_29_29);
            }
#line 270 "term_constr_initial.m"
            {
#line 270 "term_constr_initial.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_29_29, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_30_30);
            }
#line 272 "term_constr_initial.m"
            /* direct tailcall eliminated */
#line 272 "term_constr_initial.m"
            {
#line 272 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_initial__PredIds_13;
#line 272 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_30_30;

#line 272 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2 = transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 272 "term_constr_initial.m"
              transform_hlds__term_constr_initial__HeadVar__1_1 = transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1;
#line 272 "term_constr_initial.m"
            }
#line 272 "term_constr_initial.m"
            continue;
#line 258 "term_constr_initial.m"
          }
#line 257 "term_constr_initial.m"
      }
#line 257 "term_constr_initial.m"
      break;
#line 257 "term_constr_initial.m"
    }
#line 254 "term_constr_initial.m"
}

#line 242 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__create_lp_term_3_p_0(
#line 242 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__SubstMap_4,
#line 242 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ArgSizeTerm_5,
#line 242 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__HeadVar__3_3)
#line 242 "term_constr_initial.m"
{
#line 245 "term_constr_initial.m"
  {
#line 245 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;
#line 245 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__Var_6;
#line 245 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__Coefficient_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__ArgSizeTerm_5, (MR_Integer) 1)));
#line 245 "term_constr_initial.m"
    MR_Integer transform_hlds__term_constr_initial__VarId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__ArgSizeTerm_5, (MR_Integer) 0)));
#line 247 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__conv0_Var_6;

#line 247 "term_constr_initial.m"
    {
#line 247 "term_constr_initial.m"
      transform_hlds__term_constr_initial__conv0_Var_6 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0((MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[1], transform_hlds__term_constr_initial__VarId_8, transform_hlds__term_constr_initial__SubstMap_4);
    }
#line 247 "term_constr_initial.m"
    transform_hlds__term_constr_initial__Var_6 = ((MR_Word) transform_hlds__term_constr_initial__conv0_Var_6);
#line 245 "term_constr_initial.m"
    {
#line 245 "term_constr_initial.m"
      MR_Word base;
#line 245 "term_constr_initial.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "term_constr_initial.m"
      *transform_hlds__term_constr_initial__HeadVar__3_3 = base;
#line 245 "term_constr_initial.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Var_6));
#line 245 "term_constr_initial.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_initial__Coefficient_7));
#line 245 "term_constr_initial.m"
    }
#line 245 "term_constr_initial.m"
  }
#line 242 "term_constr_initial.m"
}

#line 236 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_2(
#line 236 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 236 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 236 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2)
#line 236 "term_constr_initial.m"
{
#line 236 "term_constr_initial.m"
  {
#line 236 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
#line 236 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__conv1_HeadVar__3_3;

#line 236 "term_constr_initial.m"
    {
#line 236 "term_constr_initial.m"
      transform_hlds__term_constr_initial__create_lp_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1), &transform_hlds__term_constr_initial__conv1_HeadVar__3_3);
    }
#line 236 "term_constr_initial.m"
    *transform_hlds__term_constr_initial__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_initial__conv1_HeadVar__3_3));
#line 236 "term_constr_initial.m"
  }
#line 236 "term_constr_initial.m"
}

#line 239 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_1(
#line 239 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 239 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 239 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2)
#line 239 "term_constr_initial.m"
{
#line 239 "term_constr_initial.m"
  {
#line 239 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
#line 239 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__conv0_HeadVar__3_3;

#line 239 "term_constr_initial.m"
    {
#line 239 "term_constr_initial.m"
      transform_hlds__term_constr_initial__create_lp_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1), &transform_hlds__term_constr_initial__conv0_HeadVar__3_3);
    }
#line 239 "term_constr_initial.m"
    *transform_hlds__term_constr_initial__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_initial__conv0_HeadVar__3_3));
#line 239 "term_constr_initial.m"
  }
#line 239 "term_constr_initial.m"
}

#line 232 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(
#line 232 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__SubstMap_1,
#line 232 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__2_2,
#line 232 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__Constraint_3)
#line 232 "term_constr_initial.m"
{
#line 235 "term_constr_initial.m"
  {
#line 235 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;

#line 235 "term_constr_initial.m"
    if (((MR_tag((MR_Word) transform_hlds__term_constr_initial__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 238 "term_constr_initial.m"
      {
#line 238 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__Terms0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__Constant_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__Terms_15;
#line 238 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__V_16_16;

#line 239 "term_constr_initial.m"
        {
#line 239 "term_constr_initial.m"
          transform_hlds__term_constr_initial__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 239 "term_constr_initial.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_16_16, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_3[3]));
#line 239 "term_constr_initial.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_16_16, 1) = ((MR_Box) (transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_1));
#line 239 "term_constr_initial.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 239 "term_constr_initial.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_16_16, 3) = ((MR_Box) (transform_hlds__term_constr_initial__SubstMap_1));
#line 239 "term_constr_initial.m"
        }
#line 239 "term_constr_initial.m"
        {
#line 239 "term_constr_initial.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_term_0, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[2], transform_hlds__term_constr_initial__V_16_16, transform_hlds__term_constr_initial__Terms0_12, &transform_hlds__term_constr_initial__Terms_15);
        }
#line 240 "term_constr_initial.m"
        {
#line 240 "term_constr_initial.m"
          *transform_hlds__term_constr_initial__Constraint_3 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_initial__Terms_15, (MR_Integer) 1, transform_hlds__term_constr_initial__Constant_13);
        }
#line 238 "term_constr_initial.m"
      }
#line 235 "term_constr_initial.m"
    else
#line 235 "term_constr_initial.m"
      {
#line 235 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__Terms0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__Constant_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__Terms_8;
#line 235 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__V_9_9;

#line 236 "term_constr_initial.m"
        {
#line 236 "term_constr_initial.m"
          transform_hlds__term_constr_initial__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 236 "term_constr_initial.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_9_9, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_3[3]));
#line 236 "term_constr_initial.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_9_9, 1) = ((MR_Box) (transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_2));
#line 236 "term_constr_initial.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 236 "term_constr_initial.m"
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_9_9, 3) = ((MR_Box) (transform_hlds__term_constr_initial__SubstMap_1));
#line 236 "term_constr_initial.m"
        }
#line 236 "term_constr_initial.m"
        {
#line 236 "term_constr_initial.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_term_0, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[2], transform_hlds__term_constr_initial__V_9_9, transform_hlds__term_constr_initial__Terms0_5, &transform_hlds__term_constr_initial__Terms_8);
        }
#line 237 "term_constr_initial.m"
        {
#line 237 "term_constr_initial.m"
          *transform_hlds__term_constr_initial__Constraint_3 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_initial__Terms_8, (MR_Integer) 0, transform_hlds__term_constr_initial__Constant_6);
        }
#line 235 "term_constr_initial.m"
      }
#line 235 "term_constr_initial.m"
  }
#line 232 "term_constr_initial.m"
}

#line 228 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_3(
#line 228 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 228 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 228 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2)
#line 228 "term_constr_initial.m"
{
#line 228 "term_constr_initial.m"
  {
#line 228 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
#line 228 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__conv4_Constraint_3;

#line 228 "term_constr_initial.m"
    {
#line 228 "term_constr_initial.m"
      transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1), &transform_hlds__term_constr_initial__conv4_Constraint_3);
    }
#line 228 "term_constr_initial.m"
    *transform_hlds__term_constr_initial__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_initial__conv4_Constraint_3));
#line 228 "term_constr_initial.m"
  }
#line 228 "term_constr_initial.m"
}

#line 228 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_2(
#line 228 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 228 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 228 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2)
#line 228 "term_constr_initial.m"
{
#line 228 "term_constr_initial.m"
  {
#line 228 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
#line 228 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__conv3_Constraint_3;

#line 228 "term_constr_initial.m"
    {
#line 228 "term_constr_initial.m"
      transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1), &transform_hlds__term_constr_initial__conv3_Constraint_3);
    }
#line 228 "term_constr_initial.m"
    *transform_hlds__term_constr_initial__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_initial__conv3_Constraint_3));
#line 228 "term_constr_initial.m"
  }
#line 228 "term_constr_initial.m"
}

#line 216 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_1(
#line 216 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 216 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 216 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_2,
#line 216 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_3)
#line 216 "term_constr_initial.m"
{
#line 216 "term_constr_initial.m"
  {
#line 216 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
#line 216 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__conv1_HeadVar__5_19;

#line 216 "term_constr_initial.m"
    {
#line 216 "term_constr_initial.m"
      transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__216__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__term_constr_initial__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_2), &transform_hlds__term_constr_initial__conv1_HeadVar__5_19);
    }
#line 216 "term_constr_initial.m"
    *transform_hlds__term_constr_initial__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_initial__conv1_HeadVar__5_19));
#line 216 "term_constr_initial.m"
  }
#line 216 "term_constr_initial.m"
}

#line 169 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0(
#line 169 "term_constr_initial.m"
  MR_Integer transform_hlds__term_constr_initial__ProcId_4,
#line 169 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_10,
#line 169 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_11)
#line 169 "term_constr_initial.m"
{
#line 174 "term_constr_initial.m"
  {
#line 174 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;
#line 174 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 174 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 174 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__TermInfo0_7;
#line 174 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_12_12;
#line 174 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ProcInfo_12_12;
#line 178 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__V_13_13;
#line 178 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__V_8_8;

#line 174 "term_constr_initial.m"
    {
#line 174 "term_constr_initial.m"
      mercury__map__lookup_3_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_18_18, transform_hlds__term_constr_initial__TypeCtorInfo_19_19, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_10, ((MR_Box) (transform_hlds__term_constr_initial__ProcId_4)), &transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ProcInfo_12_12);
    }
#line 174 "term_constr_initial.m"
    transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_12_12 = ((MR_Word) transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ProcInfo_12_12);
#line 175 "term_constr_initial.m"
    {
#line 175 "term_constr_initial.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_12_12, &transform_hlds__term_constr_initial__TermInfo0_7);
    }
#line 178 "term_constr_initial.m"
    {
#line 178 "term_constr_initial.m"
      transform_hlds__term_constr_initial__V_13_13 = transform_hlds__term_constr_main__import_success_1_f_0(transform_hlds__term_constr_initial__TermInfo0_7);
    }
#line 178 "term_constr_initial.m"
    transform_hlds__term_constr_initial__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_initial__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 178 "term_constr_initial.m"
    if (transform_hlds__term_constr_initial__succeeded)
#line 178 "term_constr_initial.m"
      {
#line 178 "term_constr_initial.m"
        transform_hlds__term_constr_initial__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_13_13, (MR_Integer) 0)));
#line 180 "term_constr_initial.m"
        {
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__TypeInfo_31_47;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_27_71;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__TermInfo_9;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_14_14;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__HeadVars_24;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__SizeVarMap_26;
#line 180 "term_constr_initial.m"
          MR_Integer transform_hlds__term_constr_initial__NumHeadVars_27;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__HeadVarIds_28;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__IdsToProgVars_29;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__SubstMap_30;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__MaybeSuccessPoly_31;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__MaybeFailurePoly_32;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__SizeVars_33;
#line 180 "term_constr_initial.m"
          MR_Integer transform_hlds__term_constr_initial__V_35_35;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__V_37_37;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__V_38_38;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_23_39;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_24_40;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_25_41;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_26_42;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_27_43;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__V_57_57;
#line 180 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial__V_58_58;
#line 193 "term_constr_initial.m"
          MR_Word transform_hlds__term_constr_initial___SizeVarset_25;
#line 216 "term_constr_initial.m"
          MR_Box transform_hlds__term_constr_initial__conv2_SubstMap_30;

#line 192 "term_constr_initial.m"
          {
#line 192 "term_constr_initial.m"
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_12_12, &transform_hlds__term_constr_initial__HeadVars_24);
          }
#line 193 "term_constr_initial.m"
          {
#line 193 "term_constr_initial.m"
            transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadVars_24, &transform_hlds__term_constr_initial___SizeVarset_25, &transform_hlds__term_constr_initial__SizeVarMap_26);
          }
#line 2836 "transform_hlds.term_constr_initial.c"
          transform_hlds__term_constr_initial__TypeInfo_31_47 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[0];
#line 194 "term_constr_initial.m"
          {
#line 194 "term_constr_initial.m"
            mercury__list__length_2_p_0(transform_hlds__term_constr_initial__TypeInfo_31_47, transform_hlds__term_constr_initial__HeadVars_24, &transform_hlds__term_constr_initial__NumHeadVars_27);
          }
#line 195 "term_constr_initial.m"
          transform_hlds__term_constr_initial__V_35_35 = (transform_hlds__term_constr_initial__NumHeadVars_27 - (MR_Integer) 1);
#line 195 "term_constr_initial.m"
          {
#line 195 "term_constr_initial.m"
            transform_hlds__term_constr_initial__HeadVarIds_28 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, transform_hlds__term_constr_initial__V_35_35);
          }
#line 196 "term_constr_initial.m"
          {
#line 196 "term_constr_initial.m"
            mercury__map__from_corresponding_lists_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__term_constr_initial__TypeInfo_31_47, transform_hlds__term_constr_initial__HeadVarIds_28, transform_hlds__term_constr_initial__HeadVars_24, &transform_hlds__term_constr_initial__IdsToProgVars_29);
          }
#line 216 "term_constr_initial.m"
          {
#line 216 "term_constr_initial.m"
            transform_hlds__term_constr_initial__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 216 "term_constr_initial.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_57_57, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_4[0]));
#line 216 "term_constr_initial.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_57_57, 1) = ((MR_Box) (transform_hlds__term_constr_initial__process_imported_proc_3_p_0_1));
#line 216 "term_constr_initial.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 216 "term_constr_initial.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_57_57, 3) = ((MR_Box) (transform_hlds__term_constr_initial__IdsToProgVars_29));
#line 216 "term_constr_initial.m"
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_57_57, 4) = ((MR_Box) (transform_hlds__term_constr_initial__SizeVarMap_26));
#line 216 "term_constr_initial.m"
          }
#line 2871 "transform_hlds.term_constr_initial.c"
          transform_hlds__term_constr_initial__TypeCtorInfo_27_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 216 "term_constr_initial.m"
          {
#line 216 "term_constr_initial.m"
            transform_hlds__term_constr_initial__V_58_58 = mercury__map__init_0_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_27_71, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[1]);
          }
#line 216 "term_constr_initial.m"
          {
#line 216 "term_constr_initial.m"
            mercury__list__foldl_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_27_71, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[1], transform_hlds__term_constr_initial__V_57_57, transform_hlds__term_constr_initial__HeadVarIds_28, ((MR_Box) (transform_hlds__term_constr_initial__V_58_58)), &transform_hlds__term_constr_initial__conv2_SubstMap_30);
          }
#line 216 "term_constr_initial.m"
          transform_hlds__term_constr_initial__SubstMap_30 = ((MR_Word) transform_hlds__term_constr_initial__conv2_SubstMap_30);
#line 198 "term_constr_initial.m"
          {
#line 198 "term_constr_initial.m"
            transform_hlds__term_constr_initial__V_37_37 = transform_hlds__term_constr_main__import_success_1_f_0(transform_hlds__term_constr_initial__TermInfo0_7);
          }
#line 225 "term_constr_initial.m"
          if ((transform_hlds__term_constr_initial__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "term_constr_initial.m"
            transform_hlds__term_constr_initial__MaybeSuccessPoly_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 225 "term_constr_initial.m"
          else
#line 227 "term_constr_initial.m"
            {
#line 227 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__PragmaArgSizeInfo_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_37_37, (MR_Integer) 0)));
#line 227 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__Polyhedron_77;
#line 227 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__Constraints_78;
#line 227 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__V_79_79;

#line 228 "term_constr_initial.m"
              {
#line 228 "term_constr_initial.m"
                transform_hlds__term_constr_initial__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 228 "term_constr_initial.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_79_79, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_3[2]));
#line 228 "term_constr_initial.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_79_79, 1) = ((MR_Box) (transform_hlds__term_constr_initial__process_imported_proc_3_p_0_2));
#line 228 "term_constr_initial.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 228 "term_constr_initial.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_79_79, 3) = ((MR_Box) (transform_hlds__term_constr_initial__SubstMap_30));
#line 228 "term_constr_initial.m"
              }
#line 228 "term_constr_initial.m"
              {
#line 228 "term_constr_initial.m"
                mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0, (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, transform_hlds__term_constr_initial__V_79_79, transform_hlds__term_constr_initial__PragmaArgSizeInfo_76, &transform_hlds__term_constr_initial__Constraints_78);
              }
#line 230 "term_constr_initial.m"
              {
#line 230 "term_constr_initial.m"
                transform_hlds__term_constr_initial__Polyhedron_77 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_initial__Constraints_78);
              }
#line 227 "term_constr_initial.m"
              {
#line 227 "term_constr_initial.m"
                transform_hlds__term_constr_initial__MaybeSuccessPoly_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 227 "term_constr_initial.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__MaybeSuccessPoly_31, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Polyhedron_77));
#line 227 "term_constr_initial.m"
              }
#line 227 "term_constr_initial.m"
            }
#line 200 "term_constr_initial.m"
          {
#line 200 "term_constr_initial.m"
            transform_hlds__term_constr_initial__V_38_38 = transform_hlds__term_constr_main__import_failure_1_f_0(transform_hlds__term_constr_initial__TermInfo0_7);
          }
#line 225 "term_constr_initial.m"
          if ((transform_hlds__term_constr_initial__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "term_constr_initial.m"
            transform_hlds__term_constr_initial__MaybeFailurePoly_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 225 "term_constr_initial.m"
          else
#line 227 "term_constr_initial.m"
            {
#line 227 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__PragmaArgSizeInfo_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_38_38, (MR_Integer) 0)));
#line 227 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__Polyhedron_87;
#line 227 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__Constraints_88;
#line 227 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__V_89_89;

#line 228 "term_constr_initial.m"
              {
#line 228 "term_constr_initial.m"
                transform_hlds__term_constr_initial__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 228 "term_constr_initial.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_89_89, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_3[2]));
#line 228 "term_constr_initial.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_89_89, 1) = ((MR_Box) (transform_hlds__term_constr_initial__process_imported_proc_3_p_0_3));
#line 228 "term_constr_initial.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 228 "term_constr_initial.m"
                MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_89_89, 3) = ((MR_Box) (transform_hlds__term_constr_initial__SubstMap_30));
#line 228 "term_constr_initial.m"
              }
#line 228 "term_constr_initial.m"
              {
#line 228 "term_constr_initial.m"
                mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0, (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, transform_hlds__term_constr_initial__V_89_89, transform_hlds__term_constr_initial__PragmaArgSizeInfo_86, &transform_hlds__term_constr_initial__Constraints_88);
              }
#line 230 "term_constr_initial.m"
              {
#line 230 "term_constr_initial.m"
                transform_hlds__term_constr_initial__Polyhedron_87 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_initial__Constraints_88);
              }
#line 227 "term_constr_initial.m"
              {
#line 227 "term_constr_initial.m"
                transform_hlds__term_constr_initial__MaybeFailurePoly_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 227 "term_constr_initial.m"
                MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__MaybeFailurePoly_32, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Polyhedron_87));
#line 227 "term_constr_initial.m"
              }
#line 227 "term_constr_initial.m"
            }
#line 202 "term_constr_initial.m"
          {
#line 202 "term_constr_initial.m"
            transform_hlds__term_constr_initial__SizeVars_33 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_initial__SizeVarMap_26, transform_hlds__term_constr_initial__HeadVars_24);
          }
#line 203 "term_constr_initial.m"
          {
#line 203 "term_constr_initial.m"
            transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_23_39 = transform_hlds__term_constr_main__f_115_105_122_101_95_118_97_114_95_109_97_112_32_58_61_2_f_0(transform_hlds__term_constr_initial__TermInfo0_7, transform_hlds__term_constr_initial__SizeVarMap_26);
          }
#line 204 "term_constr_initial.m"
          {
#line 204 "term_constr_initial.m"
            transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_24_40 = transform_hlds__term_constr_main__f_104_101_97_100_95_118_97_114_115_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_23_39, transform_hlds__term_constr_initial__SizeVars_33);
          }
#line 205 "term_constr_initial.m"
          {
#line 205 "term_constr_initial.m"
            transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_25_41 = transform_hlds__term_constr_main__f_115_117_99_99_101_115_115_95_99_111_110_115_116_114_115_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_24_40, transform_hlds__term_constr_initial__MaybeSuccessPoly_31);
          }
#line 206 "term_constr_initial.m"
          {
#line 206 "term_constr_initial.m"
            transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_26_42 = transform_hlds__term_constr_main__f_102_97_105_108_117_114_101_95_99_111_110_115_116_114_115_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_25_41, transform_hlds__term_constr_initial__MaybeFailurePoly_32);
          }
#line 209 "term_constr_initial.m"
          {
#line 209 "term_constr_initial.m"
            transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_27_43 = transform_hlds__term_constr_main__f_105_109_112_111_114_116_95_115_117_99_99_101_115_115_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_26_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 210 "term_constr_initial.m"
          {
#line 210 "term_constr_initial.m"
            transform_hlds__term_constr_initial__TermInfo_9 = transform_hlds__term_constr_main__f_105_109_112_111_114_116_95_102_97_105_108_117_114_101_32_58_61_2_f_0(transform_hlds__term_constr_initial__STATE_VARIABLE_TermInfo_27_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 181 "term_constr_initial.m"
          {
#line 181 "term_constr_initial.m"
            hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_initial__TermInfo_9, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_12_12, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_14_14);
          }
#line 182 "term_constr_initial.m"
          {
#line 182 "term_constr_initial.m"
            mercury__map__det_update_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_18_18, transform_hlds__term_constr_initial__TypeCtorInfo_19_19, ((MR_Box) (transform_hlds__term_constr_initial__ProcId_4)), ((MR_Box) (transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_14_14)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_10, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_11);
#line 182 "term_constr_initial.m"
            return;
          }
#line 180 "term_constr_initial.m"
        }
#line 178 "term_constr_initial.m"
      }
#line 178 "term_constr_initial.m"
    else
#line 184 "term_constr_initial.m"
      *transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_11 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_10;
#line 174 "term_constr_initial.m"
  }
#line 169 "term_constr_initial.m"
}

#line 165 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0_1(
#line 165 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 165 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 165 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_2,
#line 165 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_3)
#line 165 "term_constr_initial.m"
{
#line 165 "term_constr_initial.m"
  {
#line 165 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
#line 165 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ProcTable_11;

#line 165 "term_constr_initial.m"
    {
#line 165 "term_constr_initial.m"
      transform_hlds__term_constr_initial__process_imported_proc_3_p_0(((MR_Integer) transform_hlds__term_constr_initial__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_2), &transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ProcTable_11);
    }
#line 165 "term_constr_initial.m"
    *transform_hlds__term_constr_initial__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ProcTable_11));
#line 165 "term_constr_initial.m"
  }
#line 165 "term_constr_initial.m"
}

#line 141 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0(
#line 141 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__PredId_4,
#line 141 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14,
#line 141 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_15)
#line 141 "term_constr_initial.m"
{
#line 146 "term_constr_initial.m"
  {
#line 146 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;
#line 146 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__TypeSpecInfo_7;
#line 146 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__TypeSpecPredIds_9;
#line 146 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_16_16;
#line 148 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__V_8_8;
#line 148 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__V_10_10;
#line 148 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__V_11_11;

#line 146 "term_constr_initial.m"
    {
#line 146 "term_constr_initial.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14, &transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_16_16);
    }
#line 147 "term_constr_initial.m"
    {
#line 147 "term_constr_initial.m"
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14, &transform_hlds__term_constr_initial__TypeSpecInfo_7);
    }
#line 148 "term_constr_initial.m"
    transform_hlds__term_constr_initial__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__TypeSpecInfo_7, (MR_Integer) 0)));
#line 148 "term_constr_initial.m"
    transform_hlds__term_constr_initial__TypeSpecPredIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__TypeSpecInfo_7, (MR_Integer) 1)));
#line 148 "term_constr_initial.m"
    transform_hlds__term_constr_initial__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__TypeSpecInfo_7, (MR_Integer) 2)));
#line 148 "term_constr_initial.m"
    transform_hlds__term_constr_initial__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__TypeSpecInfo_7, (MR_Integer) 3)));
#line 149 "term_constr_initial.m"
    {
#line 149 "term_constr_initial.m"
      transform_hlds__term_constr_initial__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__term_constr_initial__PredId_4)), transform_hlds__term_constr_initial__TypeSpecPredIds_9);
    }
#line 149 "term_constr_initial.m"
    transform_hlds__term_constr_initial__succeeded = !(transform_hlds__term_constr_initial__succeeded);
#line 154 "term_constr_initial.m"
    if (transform_hlds__term_constr_initial__succeeded)
#line 150 "term_constr_initial.m"
      {
#line 150 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 150 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 150 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__PredInfo0_12;
#line 150 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__PredInfo_13;
#line 150 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_17_17;
#line 150 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__ProcIds_28;
#line 150 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_8_29;
#line 150 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_10_31;
#line 150 "term_constr_initial.m"
        MR_Box transform_hlds__term_constr_initial__conv0_PredInfo0_12;
#line 165 "term_constr_initial.m"
        MR_Box transform_hlds__term_constr_initial__conv2_STATE_VARIABLE_ProcTable_10_31;

#line 150 "term_constr_initial.m"
        {
#line 150 "term_constr_initial.m"
          mercury__map__lookup_3_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_22_22, transform_hlds__term_constr_initial__TypeCtorInfo_23_23, transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_16_16, ((MR_Box) (transform_hlds__term_constr_initial__PredId_4)), &transform_hlds__term_constr_initial__conv0_PredInfo0_12);
        }
#line 150 "term_constr_initial.m"
        transform_hlds__term_constr_initial__PredInfo0_12 = ((MR_Word) transform_hlds__term_constr_initial__conv0_PredInfo0_12);
#line 163 "term_constr_initial.m"
        {
#line 163 "term_constr_initial.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__term_constr_initial__PredInfo0_12, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_8_29);
        }
#line 164 "term_constr_initial.m"
        {
#line 164 "term_constr_initial.m"
          transform_hlds__term_constr_initial__ProcIds_28 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__term_constr_initial__PredInfo0_12);
        }
#line 165 "term_constr_initial.m"
        {
#line 165 "term_constr_initial.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[4], transform_hlds__term_constr_initial__ProcIds_28, ((MR_Box) (transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_8_29)), &transform_hlds__term_constr_initial__conv2_STATE_VARIABLE_ProcTable_10_31);
        }
#line 165 "term_constr_initial.m"
        transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_10_31 = ((MR_Word) transform_hlds__term_constr_initial__conv2_STATE_VARIABLE_ProcTable_10_31);
#line 166 "term_constr_initial.m"
        {
#line 166 "term_constr_initial.m"
          hlds__hlds_pred__pred_info_set_procedures_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_10_31, transform_hlds__term_constr_initial__PredInfo0_12, &transform_hlds__term_constr_initial__PredInfo_13);
        }
#line 152 "term_constr_initial.m"
        {
#line 152 "term_constr_initial.m"
          mercury__map__det_update_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_22_22, transform_hlds__term_constr_initial__TypeCtorInfo_23_23, ((MR_Box) (transform_hlds__term_constr_initial__PredId_4)), ((MR_Box) (transform_hlds__term_constr_initial__PredInfo_13)), transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_16_16, &transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_17_17);
        }
#line 153 "term_constr_initial.m"
        {
#line 153 "term_constr_initial.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_17_17, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_15);
#line 153 "term_constr_initial.m"
          return;
        }
#line 150 "term_constr_initial.m"
      }
#line 154 "term_constr_initial.m"
    else
#line 155 "term_constr_initial.m"
      *transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_15 = transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14;
#line 146 "term_constr_initial.m"
  }
#line 141 "term_constr_initial.m"
}

#line 139 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__preprocess_module_4_p_0_1(
#line 139 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__closure_arg,
#line 139 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
#line 139 "term_constr_initial.m"
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_2,
#line 139 "term_constr_initial.m"
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_3)
#line 139 "term_constr_initial.m"
{
#line 139 "term_constr_initial.m"
  {
#line 139 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
#line 139 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ModuleInfo_15;

#line 139 "term_constr_initial.m"
    {
#line 139 "term_constr_initial.m"
      transform_hlds__term_constr_initial__process_imported_pred_3_p_0(((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_2), &transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ModuleInfo_15);
    }
#line 139 "term_constr_initial.m"
    *transform_hlds__term_constr_initial__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ModuleInfo_15));
#line 139 "term_constr_initial.m"
  }
#line 139 "term_constr_initial.m"
}

#line 50 "term_constr_initial.m"
void MR_CALL 
transform_hlds__term_constr_initial__preprocess_module_4_p_0(
#line 50 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_8,
#line 50 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_9)
#line 50 "term_constr_initial.m"
{
#line 108 "term_constr_initial.m"
  {
#line 108 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;
#line 108 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__PredIds_7;
#line 108 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_12_12;
#line 108 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_13_13;
#line 139 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 109 "term_constr_initial.m"
    {
#line 109 "term_constr_initial.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__term_constr_initial__PredIds_7, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_12_12);
    }
#line 110 "term_constr_initial.m"
    {
#line 110 "term_constr_initial.m"
      transform_hlds__term_constr_initial__process_builtin_preds_5_p_0(transform_hlds__term_constr_initial__PredIds_7, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_12_12, &transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_13_13);
    }
#line 139 "term_constr_initial.m"
    {
#line 139 "term_constr_initial.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[3], transform_hlds__term_constr_initial__PredIds_7, ((MR_Box) (transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_13_13)), &transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 139 "term_constr_initial.m"
    *transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 108 "term_constr_initial.m"
  }
#line 50 "term_constr_initial.m"
}

void mercury__transform_hlds__term_constr_initial__init(void)
{
}

void mercury__transform_hlds__term_constr_initial__init_type_tables(void)
{
}

void mercury__transform_hlds__term_constr_initial__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.term_constr_initial. */
