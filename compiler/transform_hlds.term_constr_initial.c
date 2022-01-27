/*
** Automatically generated from `term_constr_initial.m'
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


/* :- module transform_hlds.term_constr_initial. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__term_constr_initial__init
ENDINIT
*/

#include "transform_hlds.term_constr_initial.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "std_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 143 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 146 "transform_hlds.term_constr_initial.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 149 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "transform_hlds.term_constr_initial.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0;

#line 155 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 158 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 161 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

#line 164 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

#line 167 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 170 "transform_hlds.term_constr_initial.c"
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

#line 570 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(
#line 570 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 570 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2,
#line 570 "term_constr_initial.m"
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

#line 389 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(
#line 389 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 389 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__SpecialPredId_2,
#line 389 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_3,
#line 389 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4,
#line 389 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_5);

#line 254 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_builtin_preds_3_p_0(
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
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_11,
#line 169 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_12);

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
transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0_1(
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


#line 553 "term_constr_initial.m"
/* sealed */ struct transform_hlds__term_constr_initial__vector_common_type_7_0_s {
#line 553 "term_constr_initial.m"
  const MR_String transform_hlds__term_constr_initial__vector_common_type_7_0__vct_7_f_0;
#line 553 "term_constr_initial.m"
};

static /* final */ const struct transform_hlds__term_constr_initial__vector_common_type_7_0_s transform_hlds__term_constr_initial_vector_common_7[4];



static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
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
    ((MR_Box) (transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0_1)),
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


static /* final */ const struct transform_hlds__term_constr_initial__vector_common_type_7_0_s transform_hlds__term_constr_initial_vector_common_7[4] = {
  /* row 0 */   {     (MR_String) "builtin_compound_eq" },
  /* row 1 */   {     (MR_String) "builtin_compound_lt" },
  /* row 2 */   {     (MR_String) "store_at_ref" },
  /* row 3 */   {     (MR_String) "store_at_ref_impure" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 596 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 605 "transform_hlds.term_constr_initial.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 613 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 622 "transform_hlds.term_constr_initial.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 630 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 639 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 648 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

#line 657 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 665 "transform_hlds.term_constr_initial.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 673 "transform_hlds.term_constr_initial.c"
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
            MR_Word transform_hlds__term_constr_initial__TermStatus_31;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__IntermodStatus_32;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcInfo_33;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_39_39;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_40_40;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__V_41_41;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__V_42_42;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_43_43;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__V_44_44;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_45_45;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_46_46;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_47_47;
#line 505 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_48_48;
#line 506 "term_constr_initial.m"
            MR_Box transform_hlds__term_constr_initial__conv0_ProcInfo0_19;
#line 511 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial___SizeVarset_24;

#line 506 "term_constr_initial.m"
            {
#line 506 "term_constr_initial.m"
              transform_hlds__term_constr_initial__conv0_ProcInfo0_19 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_51_51, transform_hlds__term_constr_initial__ProcId_13, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5);
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
#line 564 "term_constr_initial.m"
              {
#line 564 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__ConstraintsPrime_60;
#line 542 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__HVar1_56;
#line 542 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__HVar2_57;
#line 542 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_61_61;
#line 542 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_62_62;

#line 542 "term_constr_initial.m"
                transform_hlds__term_constr_initial__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_initial__HeadVars_20)) == (MR_mktag((MR_Integer) 1)));
#line 542 "term_constr_initial.m"
                if (transform_hlds__term_constr_initial__succeeded)
#line 542 "term_constr_initial.m"
                  {
#line 542 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__HVar1_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVars_20, (MR_Integer) 0)));
#line 542 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVars_20, (MR_Integer) 1)));
#line 542 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_initial__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 542 "term_constr_initial.m"
                    if (transform_hlds__term_constr_initial__succeeded)
#line 542 "term_constr_initial.m"
                      {
#line 542 "term_constr_initial.m"
                        transform_hlds__term_constr_initial__HVar2_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_61_61, (MR_Integer) 0)));
#line 542 "term_constr_initial.m"
                        transform_hlds__term_constr_initial__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_61_61, (MR_Integer) 1)));
#line 542 "term_constr_initial.m"
                        transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "term_constr_initial.m"
                        if (transform_hlds__term_constr_initial__succeeded)
#line 542 "term_constr_initial.m"
                          {
#line 545 "term_constr_initial.m"
                            if ((strcmp(transform_hlds__term_constr_initial__PredName_22, (MR_String) "unsafe_type_cast") == 0))
#line 544 "term_constr_initial.m"
                              transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 545 "term_constr_initial.m"
                            else
#line 545 "term_constr_initial.m"
                            if ((strcmp(transform_hlds__term_constr_initial__PredName_22, (MR_String) "unsafe_promise_unique") == 0))
#line 545 "term_constr_initial.m"
                              transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 545 "term_constr_initial.m"
                            else
#line 545 "term_constr_initial.m"
                              transform_hlds__term_constr_initial__succeeded = MR_FALSE;
#line 551 "term_constr_initial.m"
                            if (transform_hlds__term_constr_initial__succeeded)
#line 548 "term_constr_initial.m"
                              {
#line 548 "term_constr_initial.m"
                                MR_Word transform_hlds__term_constr_initial__SizeVar1_58;
#line 548 "term_constr_initial.m"
                                MR_Word transform_hlds__term_constr_initial__SizeVar2_59;
#line 548 "term_constr_initial.m"
                                MR_Word transform_hlds__term_constr_initial__V_63_63;

#line 548 "term_constr_initial.m"
                                {
#line 548 "term_constr_initial.m"
                                  transform_hlds__term_constr_initial__SizeVar1_58 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_initial__SizeVarMap_25, transform_hlds__term_constr_initial__HVar1_56);
                                }
#line 549 "term_constr_initial.m"
                                {
#line 549 "term_constr_initial.m"
                                  transform_hlds__term_constr_initial__SizeVar2_59 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_initial__SizeVarMap_25, transform_hlds__term_constr_initial__HVar2_57);
                                }
#line 550 "term_constr_initial.m"
                                {
#line 550 "term_constr_initial.m"
                                  transform_hlds__term_constr_initial__V_63_63 = libs__lp_rational__make_vars_eq_constraint_2_f_0(transform_hlds__term_constr_initial__SizeVar1_58, transform_hlds__term_constr_initial__SizeVar2_59);
                                }
#line 550 "term_constr_initial.m"
                                {
#line 550 "term_constr_initial.m"
                                  transform_hlds__term_constr_initial__ConstraintsPrime_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "term_constr_initial.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__ConstraintsPrime_60, 0) = ((MR_Box) (transform_hlds__term_constr_initial__V_63_63));
#line 550 "term_constr_initial.m"
                                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__ConstraintsPrime_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "term_constr_initial.m"
                                }
#line 548 "term_constr_initial.m"
                                transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 548 "term_constr_initial.m"
                              }
#line 551 "term_constr_initial.m"
                            else
#line 559 "term_constr_initial.m"
                              {
#line 553 "term_constr_initial.m"
                                MR_Integer transform_hlds__term_constr_initial__lo_0;
#line 553 "term_constr_initial.m"
                                MR_Integer transform_hlds__term_constr_initial__hi_1;
#line 553 "term_constr_initial.m"
                                MR_Integer transform_hlds__term_constr_initial__mid_2;
#line 553 "term_constr_initial.m"
                                MR_Integer transform_hlds__term_constr_initial__result_3;

#line 553 "term_constr_initial.m"
                                /* binary string simple lookup switch */
#line 553 "term_constr_initial.m"
                                transform_hlds__term_constr_initial__lo_0 = (MR_Integer) 0;
#line 553 "term_constr_initial.m"
                                transform_hlds__term_constr_initial__hi_1 = (MR_Integer) 3;
#line 553 "term_constr_initial.m"
                                do
#line 553 "term_constr_initial.m"
                                  {
#line 553 "term_constr_initial.m"
                                    transform_hlds__term_constr_initial__mid_2 = (((transform_hlds__term_constr_initial__lo_0 + transform_hlds__term_constr_initial__hi_1)) / (MR_Integer) 2);
#line 553 "term_constr_initial.m"
                                    transform_hlds__term_constr_initial__result_3 = MR_strcmp(transform_hlds__term_constr_initial__PredName_22, ((&transform_hlds__term_constr_initial_vector_common_7[0 + transform_hlds__term_constr_initial__mid_2]))->transform_hlds__term_constr_initial__vector_common_type_7_0__vct_7_f_0);
#line 553 "term_constr_initial.m"
                                    if ((transform_hlds__term_constr_initial__result_3 == (MR_Integer) 0))
#line 553 "term_constr_initial.m"
                                      {
#line 553 "term_constr_initial.m"
                                        transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 553 "term_constr_initial.m"
                                        /* jump out of search loop */
#line 553 "term_constr_initial.m"
                                        goto label_0;
#line 553 "term_constr_initial.m"
                                      }
#line 553 "term_constr_initial.m"
                                    else
#line 553 "term_constr_initial.m"
                                    if ((transform_hlds__term_constr_initial__result_3 < (MR_Integer) 0))
#line 553 "term_constr_initial.m"
                                      transform_hlds__term_constr_initial__hi_1 = (transform_hlds__term_constr_initial__mid_2 - (MR_Integer) 1);
#line 553 "term_constr_initial.m"
                                    else
#line 553 "term_constr_initial.m"
                                      transform_hlds__term_constr_initial__lo_0 = (transform_hlds__term_constr_initial__mid_2 + (MR_Integer) 1);
#line 553 "term_constr_initial.m"
                                  }
#line 553 "term_constr_initial.m"
                                while ((transform_hlds__term_constr_initial__lo_0 <= transform_hlds__term_constr_initial__hi_1));
#line 553 "term_constr_initial.m"
                                transform_hlds__term_constr_initial__succeeded = MR_FALSE;
#line 553 "term_constr_initial.m"
                              label_0:;
#line 559 "term_constr_initial.m"
                                if (transform_hlds__term_constr_initial__succeeded)
#line 559 "term_constr_initial.m"
                                  {
#line 558 "term_constr_initial.m"
                                    transform_hlds__term_constr_initial__ConstraintsPrime_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 558 "term_constr_initial.m"
                                    transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 559 "term_constr_initial.m"
                                  }
#line 559 "term_constr_initial.m"
                              }
#line 542 "term_constr_initial.m"
                          }
#line 542 "term_constr_initial.m"
                      }
#line 542 "term_constr_initial.m"
                  }
#line 564 "term_constr_initial.m"
                if (transform_hlds__term_constr_initial__succeeded)
#line 563 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__Constrs_26 = transform_hlds__term_constr_initial__ConstraintsPrime_60;
#line 564 "term_constr_initial.m"
                else
#line 565 "term_constr_initial.m"
                  {
#line 565 "term_constr_initial.m"
                    {
#line 565 "term_constr_initial.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_initial", (MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", (MR_String) "unrecognised predicate");
#line 565 "term_constr_initial.m"
                      return;
                    }
#line 565 "term_constr_initial.m"
                  }
#line 564 "term_constr_initial.m"
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
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_19, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_39_39);
            }
#line 525 "term_constr_initial.m"
            {
#line 525 "term_constr_initial.m"
              transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(transform_hlds__term_constr_initial__ArgSizeInfo_28, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_39_39, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_40_40);
            }
#line 526 "term_constr_initial.m"
            transform_hlds__term_constr_initial__V_42_42 = (MR_Integer) 0;
#line 526 "term_constr_initial.m"
            transform_hlds__term_constr_initial__V_41_41 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[3];
#line 526 "term_constr_initial.m"
            transform_hlds__term_constr_initial__TermStatus_31 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_5[4]);
#line 527 "term_constr_initial.m"
            {
#line 527 "term_constr_initial.m"
              transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(transform_hlds__term_constr_initial__TermStatus_31, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_40_40, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_43_43);
            }
#line 528 "term_constr_initial.m"
            transform_hlds__term_constr_initial__V_44_44 = (MR_Integer) 0;
#line 528 "term_constr_initial.m"
            transform_hlds__term_constr_initial__IntermodStatus_32 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_5[2]);
#line 529 "term_constr_initial.m"
            {
#line 529 "term_constr_initial.m"
              transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0(transform_hlds__term_constr_initial__IntermodStatus_32, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_43_43, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_45_45);
            }
#line 530 "term_constr_initial.m"
            {
#line 530 "term_constr_initial.m"
              transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(transform_hlds__term_constr_initial__SizeVarMap_25, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_45_45, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_46_46);
            }
#line 531 "term_constr_initial.m"
            {
#line 531 "term_constr_initial.m"
              transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(transform_hlds__term_constr_initial__HeadSizeVars_29, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_46_46, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_47_47);
            }
#line 532 "term_constr_initial.m"
            {
#line 532 "term_constr_initial.m"
              hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_47_47, transform_hlds__term_constr_initial__ProcInfo0_19, &transform_hlds__term_constr_initial__ProcInfo_33);
            }
#line 534 "term_constr_initial.m"
            {
#line 534 "term_constr_initial.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_51_51, transform_hlds__term_constr_initial__ProcId_13, ((MR_Box) (transform_hlds__term_constr_initial__ProcInfo_33)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_48_48);
            }
#line 535 "term_constr_initial.m"
            /* direct tailcall eliminated */
#line 535 "term_constr_initial.m"
            {
#line 535 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_initial__ProcIds_14;
#line 535 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_5 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_48_48;

#line 535 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_5;
#line 535 "term_constr_initial.m"
              transform_hlds__term_constr_initial__HeadVar__1_1 = transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1;
#line 535 "term_constr_initial.m"
            }
#line 535 "term_constr_initial.m"
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
#line 1188 "transform_hlds.term_constr_initial.c"
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

#line 570 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(
#line 570 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 570 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2,
#line 570 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_3)
#line 570 "term_constr_initial.m"
{
#line 573 "term_constr_initial.m"
  while (MR_TRUE)
#line 573 "term_constr_initial.m"
    {
#line 573 "term_constr_initial.m"
      /* tailcall optimized into a loop */
#line 573 "term_constr_initial.m"
      {
#line 573 "term_constr_initial.m"
        MR_bool transform_hlds__term_constr_initial__succeeded;

#line 573 "term_constr_initial.m"
        if ((transform_hlds__term_constr_initial__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 573 "term_constr_initial.m"
          *transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_3 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2;
#line 573 "term_constr_initial.m"
        else
#line 574 "term_constr_initial.m"
          {
#line 574 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 574 "term_constr_initial.m"
            MR_Integer transform_hlds__term_constr_initial__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 0)));
#line 574 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 1)));
#line 574 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcInfo0_10;
#line 574 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__Term2Info0_11;
#line 574 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__HeadVars_12;
#line 574 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__SizeVarMap_14;
#line 574 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__Term2Info_15;
#line 574 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcInfo_16;
#line 574 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_19_19;
#line 575 "term_constr_initial.m"
            MR_Box transform_hlds__term_constr_initial__conv0_ProcInfo0_10;
#line 578 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial___SizeVarset_13;

#line 575 "term_constr_initial.m"
            {
#line 575 "term_constr_initial.m"
              transform_hlds__term_constr_initial__conv0_ProcInfo0_10 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_22_22, transform_hlds__term_constr_initial__ProcId_7, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2);
            }
#line 575 "term_constr_initial.m"
            transform_hlds__term_constr_initial__ProcInfo0_10 = ((MR_Word) transform_hlds__term_constr_initial__conv0_ProcInfo0_10);
#line 576 "term_constr_initial.m"
            {
#line 576 "term_constr_initial.m"
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_10, &transform_hlds__term_constr_initial__Term2Info0_11);
            }
#line 577 "term_constr_initial.m"
            {
#line 577 "term_constr_initial.m"
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_10, &transform_hlds__term_constr_initial__HeadVars_12);
            }
#line 578 "term_constr_initial.m"
            {
#line 578 "term_constr_initial.m"
              transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadVars_12, &transform_hlds__term_constr_initial___SizeVarset_13, &transform_hlds__term_constr_initial__SizeVarMap_14);
            }
#line 579 "term_constr_initial.m"
            {
#line 579 "term_constr_initial.m"
              transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(transform_hlds__term_constr_initial__SizeVarMap_14, transform_hlds__term_constr_initial__Term2Info0_11, &transform_hlds__term_constr_initial__Term2Info_15);
            }
#line 580 "term_constr_initial.m"
            {
#line 580 "term_constr_initial.m"
              hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_initial__Term2Info_15, transform_hlds__term_constr_initial__ProcInfo0_10, &transform_hlds__term_constr_initial__ProcInfo_16);
            }
#line 581 "term_constr_initial.m"
            {
#line 581 "term_constr_initial.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_22_22, transform_hlds__term_constr_initial__ProcId_7, ((MR_Box) (transform_hlds__term_constr_initial__ProcInfo_16)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_19_19);
            }
#line 582 "term_constr_initial.m"
            /* direct tailcall eliminated */
#line 582 "term_constr_initial.m"
            {
#line 582 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_initial__ProcIds_8;
#line 582 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_2 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_19_19;

#line 582 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_2;
#line 582 "term_constr_initial.m"
              transform_hlds__term_constr_initial__HeadVar__1_1 = transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1;
#line 582 "term_constr_initial.m"
            }
#line 582 "term_constr_initial.m"
            continue;
#line 574 "term_constr_initial.m"
          }
#line 573 "term_constr_initial.m"
      }
#line 573 "term_constr_initial.m"
      break;
#line 573 "term_constr_initial.m"
    }
#line 570 "term_constr_initial.m"
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
#line 434 "term_constr_initial.m"
    switch (transform_hlds__term_constr_initial__HeadVar__1_1) {
#line 434 "term_constr_initial.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 434 "term_constr_initial.m"
      case (MR_Integer) 2:
#line 435 "term_constr_initial.m"
        {
#line 435 "term_constr_initial.m"
          transform_hlds__term_constr_initial__make_info_7_p_0(transform_hlds__term_constr_initial__HeadProgVars_2, transform_hlds__term_constr_initial__ModuleInfo_3, transform_hlds__term_constr_initial__VarTypes_4, transform_hlds__term_constr_initial__HeadVar__5_5, transform_hlds__term_constr_initial__Termination_6, transform_hlds__term_constr_initial__SizeVarMap_7, transform_hlds__term_constr_initial__HeadSizeVars_8);
#line 435 "term_constr_initial.m"
          return;
        }
#line 434 "term_constr_initial.m"
        break;
#line 434 "term_constr_initial.m"
      case (MR_Integer) 1:
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
        break;
#line 434 "term_constr_initial.m"
      case (MR_Integer) 3:
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
        break;
#line 434 "term_constr_initial.m"
      case (MR_Integer) 0:
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
        break;
#line 434 "term_constr_initial.m"
    }
#line 434 "term_constr_initial.m"
  }
#line 429 "term_constr_initial.m"
}

#line 389 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(
#line 389 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
#line 389 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__SpecialPredId_2,
#line 389 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_3,
#line 389 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4,
#line 389 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_5)
#line 389 "term_constr_initial.m"
{
#line 392 "term_constr_initial.m"
  while (MR_TRUE)
#line 392 "term_constr_initial.m"
    {
#line 392 "term_constr_initial.m"
      /* tailcall optimized into a loop */
#line 392 "term_constr_initial.m"
      {
#line 392 "term_constr_initial.m"
        MR_bool transform_hlds__term_constr_initial__succeeded;

#line 392 "term_constr_initial.m"
        if ((transform_hlds__term_constr_initial__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "term_constr_initial.m"
          *transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_5 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4;
#line 392 "term_constr_initial.m"
        else
#line 394 "term_constr_initial.m"
          {
#line 394 "term_constr_initial.m"
            MR_Integer transform_hlds__term_constr_initial__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 0)));
#line 394 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 1)));
#line 394 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_37_37;

#line 417 "term_constr_initial.m"
#line 417 "term_constr_initial.m"
            switch (transform_hlds__term_constr_initial__SpecialPredId_2) {
#line 417 "term_constr_initial.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 417 "term_constr_initial.m"
              case (MR_Integer) 2:
#line 417 "term_constr_initial.m"
              case (MR_Integer) 1:
#line 417 "term_constr_initial.m"
              case (MR_Integer) 0:
#line 399 "term_constr_initial.m"
                {
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__ProcInfo0_16;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__HeadVars_17;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__VarTypes_18;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__ArgSize_19;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__Termination_20;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__VarMap_21;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__HeadSizeVars_22;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__TermStatus_24;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__ProcInfo_26;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_29_29;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__V_30_30;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_31_31;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_32_32;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_34_34;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_35_35;
#line 399 "term_constr_initial.m"
                  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_36_36;
#line 400 "term_constr_initial.m"
                  MR_Box transform_hlds__term_constr_initial__conv0_ProcInfo0_16;

#line 400 "term_constr_initial.m"
                  {
#line 400 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__conv0_ProcInfo0_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_40_40, transform_hlds__term_constr_initial__ProcId_11, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4);
                  }
#line 400 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__ProcInfo0_16 = ((MR_Word) transform_hlds__term_constr_initial__conv0_ProcInfo0_16);
#line 401 "term_constr_initial.m"
                  {
#line 401 "term_constr_initial.m"
                    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_16, &transform_hlds__term_constr_initial__HeadVars_17);
                  }
#line 402 "term_constr_initial.m"
                  {
#line 402 "term_constr_initial.m"
                    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_16, &transform_hlds__term_constr_initial__VarTypes_18);
                  }
#line 403 "term_constr_initial.m"
                  {
#line 403 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0(transform_hlds__term_constr_initial__SpecialPredId_2, transform_hlds__term_constr_initial__HeadVars_17, transform_hlds__term_constr_initial__ModuleInfo_3, transform_hlds__term_constr_initial__VarTypes_18, &transform_hlds__term_constr_initial__ArgSize_19, &transform_hlds__term_constr_initial__Termination_20, &transform_hlds__term_constr_initial__VarMap_21, &transform_hlds__term_constr_initial__HeadSizeVars_22);
                  }
#line 406 "term_constr_initial.m"
                  {
#line 406 "term_constr_initial.m"
                    hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_16, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_29_29);
                  }
#line 407 "term_constr_initial.m"
                  {
#line 407 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 407 "term_constr_initial.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_30_30, 0) = ((MR_Box) (transform_hlds__term_constr_initial__ArgSize_19));
#line 407 "term_constr_initial.m"
                  }
#line 407 "term_constr_initial.m"
                  {
#line 407 "term_constr_initial.m"
                    transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(transform_hlds__term_constr_initial__V_30_30, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_29_29, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_31_31);
                  }
#line 408 "term_constr_initial.m"
                  {
#line 408 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__TermStatus_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 408 "term_constr_initial.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__TermStatus_24, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Termination_20));
#line 408 "term_constr_initial.m"
                  }
#line 409 "term_constr_initial.m"
                  {
#line 409 "term_constr_initial.m"
                    transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(transform_hlds__term_constr_initial__TermStatus_24, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_31_31, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_32_32);
                  }
#line 411 "term_constr_initial.m"
                  {
#line 411 "term_constr_initial.m"
                    transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_5[2]), transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_32_32, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_34_34);
                  }
#line 412 "term_constr_initial.m"
                  {
#line 412 "term_constr_initial.m"
                    transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(transform_hlds__term_constr_initial__VarMap_21, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_34_34, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_35_35);
                  }
#line 413 "term_constr_initial.m"
                  {
#line 413 "term_constr_initial.m"
                    transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(transform_hlds__term_constr_initial__HeadSizeVars_22, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_35_35, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_36_36);
                  }
#line 414 "term_constr_initial.m"
                  {
#line 414 "term_constr_initial.m"
                    hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_36_36, transform_hlds__term_constr_initial__ProcInfo0_16, &transform_hlds__term_constr_initial__ProcInfo_26);
                  }
#line 416 "term_constr_initial.m"
                  {
#line 416 "term_constr_initial.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_40_40, transform_hlds__term_constr_initial__ProcId_11, ((MR_Box) (transform_hlds__term_constr_initial__ProcInfo_26)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_37_37);
                  }
#line 399 "term_constr_initial.m"
                }
#line 417 "term_constr_initial.m"
                break;
#line 417 "term_constr_initial.m"
              case (MR_Integer) 3:
#line 418 "term_constr_initial.m"
                transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_37_37 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4;
#line 417 "term_constr_initial.m"
                break;
#line 417 "term_constr_initial.m"
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
#line 394 "term_constr_initial.m"
          }
#line 392 "term_constr_initial.m"
      }
#line 392 "term_constr_initial.m"
      break;
#line 392 "term_constr_initial.m"
    }
#line 389 "term_constr_initial.m"
}

#line 254 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__process_builtin_preds_3_p_0(
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
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_22_22;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_23_23;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 0)));
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 1)));
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__Globals_10;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__MakeOptInt_11;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__PredInfo0_13;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__PredInfo_14;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_18_18;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_19_19;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_20_20;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__PredStatus_30;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__Markers_31;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__Context_32;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__ProcIds_34;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_39;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_48;
#line 258 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_52_70;
#line 264 "term_constr_initial.m"
            MR_Box transform_hlds__term_constr_initial__conv0_PredInfo0_13;
#line 291 "term_constr_initial.m"
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_22_40;

#line 259 "term_constr_initial.m"
            {
#line 259 "term_constr_initial.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__term_constr_initial__Globals_10);
            }
#line 260 "term_constr_initial.m"
            {
#line 260 "term_constr_initial.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__term_constr_initial__Globals_10, (MR_Integer) 86, &transform_hlds__term_constr_initial__MakeOptInt_11);
            }
#line 263 "term_constr_initial.m"
            {
#line 263 "term_constr_initial.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_18_18);
            }
#line 2009 "transform_hlds.term_constr_initial.c"
            transform_hlds__term_constr_initial__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2011 "transform_hlds.term_constr_initial.c"
            transform_hlds__term_constr_initial__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 264 "term_constr_initial.m"
            {
#line 264 "term_constr_initial.m"
              transform_hlds__term_constr_initial__conv0_PredInfo0_13 = mercury__map__det_elem_2_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_22_22, transform_hlds__term_constr_initial__TypeCtorInfo_23_23, ((MR_Box) (transform_hlds__term_constr_initial__PredId_7)), transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_18_18);
            }
#line 264 "term_constr_initial.m"
            transform_hlds__term_constr_initial__PredInfo0_13 = ((MR_Word) transform_hlds__term_constr_initial__conv0_PredInfo0_13);
#line 280 "term_constr_initial.m"
            {
#line 280 "term_constr_initial.m"
              hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__term_constr_initial__PredInfo0_13, &transform_hlds__term_constr_initial__PredStatus_30);
            }
#line 281 "term_constr_initial.m"
            {
#line 281 "term_constr_initial.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__term_constr_initial__PredInfo0_13, &transform_hlds__term_constr_initial__Markers_31);
            }
#line 282 "term_constr_initial.m"
            {
#line 282 "term_constr_initial.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_constr_initial__PredInfo0_13, &transform_hlds__term_constr_initial__Context_32);
            }
#line 284 "term_constr_initial.m"
            {
#line 284 "term_constr_initial.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_constr_initial__PredInfo0_13, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_39);
            }
#line 285 "term_constr_initial.m"
            {
#line 285 "term_constr_initial.m"
              transform_hlds__term_constr_initial__ProcIds_34 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__term_constr_initial__PredInfo0_13);
            }
#line 365 "term_constr_initial.m"
            {
#line 365 "term_constr_initial.m"
              transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__term_constr_initial__PredInfo0_13);
            }
#line 369 "term_constr_initial.m"
            if (transform_hlds__term_constr_initial__succeeded)
#line 367 "term_constr_initial.m"
              {
#line 367 "term_constr_initial.m"
                {
#line 367 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_p_0(transform_hlds__term_constr_initial__ProcIds_34, transform_hlds__term_constr_initial__PredInfo0_13, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_39, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_22_40);
                }
#line 367 "term_constr_initial.m"
                transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 367 "term_constr_initial.m"
              }
#line 369 "term_constr_initial.m"
            else
#line 385 "term_constr_initial.m"
              {
#line 385 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__SpecialPredId_85;
#line 378 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__SpecPredId0_82;
#line 371 "term_constr_initial.m"
                MR_String transform_hlds__term_constr_initial__Name_80;
#line 371 "term_constr_initial.m"
                MR_Integer transform_hlds__term_constr_initial__Arity_81;
#line 371 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__ModuleName_84;
#line 371 "term_constr_initial.m"
                MR_Integer transform_hlds__term_constr_initial__V_90_90;
#line 373 "term_constr_initial.m"
                MR_String transform_hlds__term_constr_initial__V_83_83;

#line 371 "term_constr_initial.m"
                {
#line 371 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__Name_80 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__term_constr_initial__PredInfo0_13);
                }
#line 372 "term_constr_initial.m"
                {
#line 372 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__Arity_81 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__term_constr_initial__PredInfo0_13);
                }
#line 373 "term_constr_initial.m"
                {
#line 373 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&transform_hlds__term_constr_initial__SpecPredId0_82, transform_hlds__term_constr_initial__Name_80, &transform_hlds__term_constr_initial__V_83_83, &transform_hlds__term_constr_initial__V_90_90);
                }
#line 371 "term_constr_initial.m"
                if (transform_hlds__term_constr_initial__succeeded)
#line 371 "term_constr_initial.m"
                  {
#line 373 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__Arity_81 == transform_hlds__term_constr_initial__V_90_90);
#line 371 "term_constr_initial.m"
                    if (transform_hlds__term_constr_initial__succeeded)
#line 371 "term_constr_initial.m"
                      {
#line 374 "term_constr_initial.m"
                        {
#line 374 "term_constr_initial.m"
                          transform_hlds__term_constr_initial__ModuleName_84 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__term_constr_initial__PredInfo0_13);
                        }
#line 375 "term_constr_initial.m"
                        {
#line 375 "term_constr_initial.m"
                          transform_hlds__term_constr_initial__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__term_constr_initial__ModuleName_84);
                        }
#line 371 "term_constr_initial.m"
                      }
#line 371 "term_constr_initial.m"
                  }
#line 378 "term_constr_initial.m"
                if (transform_hlds__term_constr_initial__succeeded)
#line 377 "term_constr_initial.m"
                  {
#line 377 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__SpecialPredId_85 = transform_hlds__term_constr_initial__SpecPredId0_82;
#line 377 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 377 "term_constr_initial.m"
                  }
#line 378 "term_constr_initial.m"
                else
#line 379 "term_constr_initial.m"
                  {
#line 379 "term_constr_initial.m"
                    MR_Word transform_hlds__term_constr_initial__PredOrigin_86;
#line 380 "term_constr_initial.m"
                    MR_Word transform_hlds__term_constr_initial__V_87_87;

#line 379 "term_constr_initial.m"
                    {
#line 379 "term_constr_initial.m"
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__term_constr_initial__PredInfo0_13, &transform_hlds__term_constr_initial__PredOrigin_86);
                    }
#line 380 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_initial__PredOrigin_86)) == (MR_mktag((MR_Integer) 0)));
#line 380 "term_constr_initial.m"
                    if (transform_hlds__term_constr_initial__succeeded)
#line 380 "term_constr_initial.m"
                      {
#line 380 "term_constr_initial.m"
                        transform_hlds__term_constr_initial__SpecialPredId_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__PredOrigin_86, (MR_Integer) 0)));
#line 380 "term_constr_initial.m"
                        transform_hlds__term_constr_initial__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__PredOrigin_86, (MR_Integer) 1)));
#line 380 "term_constr_initial.m"
                      }
#line 379 "term_constr_initial.m"
                  }
#line 385 "term_constr_initial.m"
                if (transform_hlds__term_constr_initial__succeeded)
#line 385 "term_constr_initial.m"
                  {
#line 383 "term_constr_initial.m"
                    {
#line 383 "term_constr_initial.m"
                      transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(transform_hlds__term_constr_initial__ProcIds_34, transform_hlds__term_constr_initial__SpecialPredId_85, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_39, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_22_40);
                    }
#line 383 "term_constr_initial.m"
                    transform_hlds__term_constr_initial__succeeded = MR_TRUE;
#line 385 "term_constr_initial.m"
                  }
#line 385 "term_constr_initial.m"
              }
#line 291 "term_constr_initial.m"
            if (transform_hlds__term_constr_initial__succeeded)
#line 291 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_48 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_22_40;
#line 291 "term_constr_initial.m"
            else
#line 314 "term_constr_initial.m"
              {
#line 294 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_41_41;

#line 294 "term_constr_initial.m"
                {
#line 294 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__V_41_41 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__term_constr_initial__PredStatus_30);
                }
#line 294 "term_constr_initial.m"
                transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__V_41_41 == (MR_Integer) 1);
#line 314 "term_constr_initial.m"
                if (transform_hlds__term_constr_initial__succeeded)
#line 311 "term_constr_initial.m"
                  {
#line 303 "term_constr_initial.m"
                    {
#line 303 "term_constr_initial.m"
                      transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_initial__Markers_31, (MR_Integer) 17);
                    }
#line 311 "term_constr_initial.m"
                    if (transform_hlds__term_constr_initial__succeeded)
#line 304 "term_constr_initial.m"
                      {
#line 304 "term_constr_initial.m"
                        MR_Word transform_hlds__term_constr_initial__ArgSizeInfo_36;
#line 304 "term_constr_initial.m"
                        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_27_45;
#line 304 "term_constr_initial.m"
                        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_29_47;

#line 305 "term_constr_initial.m"
                        {
#line 305 "term_constr_initial.m"
                          transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_34, (MR_Integer) 1, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[0], transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_39, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_27_45);
                        }
#line 307 "term_constr_initial.m"
                        {
#line 307 "term_constr_initial.m"
                          transform_hlds__term_constr_initial__ArgSizeInfo_36 = libs__polyhedron__universe_0_f_0();
                        }
#line 308 "term_constr_initial.m"
                        {
#line 308 "term_constr_initial.m"
                          transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_34, (MR_Integer) 1, transform_hlds__term_constr_initial__ArgSizeInfo_36, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_27_45, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_29_47);
                        }
#line 310 "term_constr_initial.m"
                        {
#line 310 "term_constr_initial.m"
                          transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(transform_hlds__term_constr_initial__ProcIds_34, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_29_47, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_48);
                        }
#line 304 "term_constr_initial.m"
                      }
#line 311 "term_constr_initial.m"
                    else
#line 311 "term_constr_initial.m"
                      transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_48 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_39;
#line 311 "term_constr_initial.m"
                  }
#line 314 "term_constr_initial.m"
                else
#line 338 "term_constr_initial.m"
                  {
#line 338 "term_constr_initial.m"
                    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_35_53;
#line 338 "term_constr_initial.m"
                    MR_Word transform_hlds__term_constr_initial__ArgSizeInfo_72;

#line 327 "term_constr_initial.m"
                    {
#line 327 "term_constr_initial.m"
                      transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_initial__Markers_31, (MR_Integer) 17);
                    }
#line 328 "term_constr_initial.m"
                    if (!(transform_hlds__term_constr_initial__succeeded))
#line 329 "term_constr_initial.m"
                      {
#line 329 "term_constr_initial.m"
                        MR_Word transform_hlds__term_constr_initial__V_49_49;

#line 329 "term_constr_initial.m"
                        transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__MakeOptInt_11 == (MR_Integer) 0);
#line 329 "term_constr_initial.m"
                        if (transform_hlds__term_constr_initial__succeeded)
#line 329 "term_constr_initial.m"
                          {
#line 330 "term_constr_initial.m"
                            transform_hlds__term_constr_initial__V_49_49 = (MR_Integer) 19;
#line 330 "term_constr_initial.m"
                            {
#line 330 "term_constr_initial.m"
                              transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_initial__Markers_31, transform_hlds__term_constr_initial__V_49_49);
                            }
#line 329 "term_constr_initial.m"
                          }
#line 329 "term_constr_initial.m"
                      }
#line 335 "term_constr_initial.m"
                    if (transform_hlds__term_constr_initial__succeeded)
#line 333 "term_constr_initial.m"
                      {
#line 333 "term_constr_initial.m"
                        {
#line 333 "term_constr_initial.m"
                          transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_34, (MR_Integer) 1, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[0], transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_39, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_35_53);
                        }
#line 333 "term_constr_initial.m"
                      }
#line 335 "term_constr_initial.m"
                    else
#line 336 "term_constr_initial.m"
                      {
#line 336 "term_constr_initial.m"
                        {
#line 336 "term_constr_initial.m"
                          transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_34, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_5[1]), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_39, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_35_53);
                        }
#line 336 "term_constr_initial.m"
                      }
#line 339 "term_constr_initial.m"
                    {
#line 339 "term_constr_initial.m"
                      transform_hlds__term_constr_initial__ArgSizeInfo_72 = libs__polyhedron__universe_0_f_0();
                    }
#line 340 "term_constr_initial.m"
                    {
#line 340 "term_constr_initial.m"
                      transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_34, (MR_Integer) 1, transform_hlds__term_constr_initial__ArgSizeInfo_72, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_35_53, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_48);
                    }
#line 338 "term_constr_initial.m"
                  }
#line 314 "term_constr_initial.m"
              }
#line 343 "term_constr_initial.m"
            {
#line 343 "term_constr_initial.m"
              transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_initial__Markers_31, (MR_Integer) 18);
            }
#line 352 "term_constr_initial.m"
            if (transform_hlds__term_constr_initial__succeeded)
#line 345 "term_constr_initial.m"
              {
#line 345 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__TerminationInfo_37;
#line 345 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__NonTermArgSizeInfo_38;
#line 345 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_62_62;
#line 345 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_63_63;
#line 345 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__V_64_64;
#line 345 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_49_67;
#line 345 "term_constr_initial.m"
                MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_51_69;

#line 345 "term_constr_initial.m"
                {
#line 345 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__V_64_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 345 "term_constr_initial.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__term_constr_initial__V_64_64, 0) = ((MR_Box) (transform_hlds__term_constr_initial__PredId_7));
#line 345 "term_constr_initial.m"
                }
#line 345 "term_constr_initial.m"
                {
#line 345 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 345 "term_constr_initial.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_63_63, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Context_32));
#line 345 "term_constr_initial.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_63_63, 1) = ((MR_Box) (transform_hlds__term_constr_initial__V_64_64));
#line 345 "term_constr_initial.m"
                }
#line 345 "term_constr_initial.m"
                {
#line 345 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "term_constr_initial.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_62_62, 0) = ((MR_Box) (transform_hlds__term_constr_initial__V_63_63));
#line 345 "term_constr_initial.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "term_constr_initial.m"
                }
#line 345 "term_constr_initial.m"
                {
#line 345 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__TerminationInfo_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 345 "term_constr_initial.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__TerminationInfo_37, 0) = ((MR_Box) (transform_hlds__term_constr_initial__V_62_62));
#line 345 "term_constr_initial.m"
                }
#line 346 "term_constr_initial.m"
                {
#line 346 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__NonTermArgSizeInfo_38 = libs__polyhedron__universe_0_f_0();
                }
#line 347 "term_constr_initial.m"
                {
#line 347 "term_constr_initial.m"
                  transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_34, (MR_Integer) 1, transform_hlds__term_constr_initial__TerminationInfo_37, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_48, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_49_67);
                }
#line 349 "term_constr_initial.m"
                {
#line 349 "term_constr_initial.m"
                  transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_34, (MR_Integer) 1, transform_hlds__term_constr_initial__NonTermArgSizeInfo_38, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_49_67, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_51_69);
                }
#line 351 "term_constr_initial.m"
                {
#line 351 "term_constr_initial.m"
                  transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(transform_hlds__term_constr_initial__ProcIds_34, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_51_69, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_52_70);
                }
#line 345 "term_constr_initial.m"
              }
#line 352 "term_constr_initial.m"
            else
#line 352 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_52_70 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_48;
#line 355 "term_constr_initial.m"
            {
#line 355 "term_constr_initial.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_52_70, transform_hlds__term_constr_initial__PredInfo0_13, &transform_hlds__term_constr_initial__PredInfo_14);
            }
#line 267 "term_constr_initial.m"
            {
#line 267 "term_constr_initial.m"
              mercury__map__det_update_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_22_22, transform_hlds__term_constr_initial__TypeCtorInfo_23_23, ((MR_Box) (transform_hlds__term_constr_initial__PredId_7)), ((MR_Box) (transform_hlds__term_constr_initial__PredInfo_14)), transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_18_18, &transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_19_19);
            }
#line 268 "term_constr_initial.m"
            {
#line 268 "term_constr_initial.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_19_19, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_20_20);
            }
#line 270 "term_constr_initial.m"
            /* direct tailcall eliminated */
#line 270 "term_constr_initial.m"
            {
#line 270 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_initial__PredIds_8;
#line 270 "term_constr_initial.m"
              MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_20_20;

#line 270 "term_constr_initial.m"
              transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2 = transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
#line 270 "term_constr_initial.m"
              transform_hlds__term_constr_initial__HeadVar__1_1 = transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1;
#line 270 "term_constr_initial.m"
            }
#line 270 "term_constr_initial.m"
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
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_11,
#line 169 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_12)
#line 169 "term_constr_initial.m"
{
#line 174 "term_constr_initial.m"
  {
#line 174 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;
#line 174 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 174 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__Term2Info0_7;
#line 174 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__MaybeImportSuccess_8;
#line 174 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_13_13;
#line 174 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ProcInfo_13_13;

#line 174 "term_constr_initial.m"
    {
#line 174 "term_constr_initial.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_19_19, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_11, transform_hlds__term_constr_initial__ProcId_4, &transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ProcInfo_13_13);
    }
#line 174 "term_constr_initial.m"
    transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_13_13 = ((MR_Word) transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ProcInfo_13_13);
#line 175 "term_constr_initial.m"
    {
#line 175 "term_constr_initial.m"
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__term_constr_initial__Term2Info0_7);
    }
#line 176 "term_constr_initial.m"
    {
#line 176 "term_constr_initial.m"
      transform_hlds__term_constr_initial__MaybeImportSuccess_8 = transform_hlds__term_constr_main_types__term2_info_get_import_success_1_f_0(transform_hlds__term_constr_initial__Term2Info0_7);
    }
#line 183 "term_constr_initial.m"
    if ((transform_hlds__term_constr_initial__MaybeImportSuccess_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "term_constr_initial.m"
      *transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_12 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_11;
#line 183 "term_constr_initial.m"
    else
#line 179 "term_constr_initial.m"
      {
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__TypeInfo_31_47;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_27_71;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__Term2Info_10;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_14_14;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__HeadVars_24;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__SizeVarMap_26;
#line 179 "term_constr_initial.m"
        MR_Integer transform_hlds__term_constr_initial__NumHeadVars_27;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__HeadVarIds_28;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__IdsToProgVars_29;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__SubstMap_30;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__MaybeSuccessPoly_31;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__MaybeFailurePoly_32;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__SizeVars_33;
#line 179 "term_constr_initial.m"
        MR_Integer transform_hlds__term_constr_initial__V_35_35;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__V_37_37;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__V_38_38;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_23_39;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_24_40;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_25_41;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_26_42;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_28_44;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__V_57_57;
#line 179 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__V_58_58;
#line 193 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial___SizeVarset_25;
#line 216 "term_constr_initial.m"
        MR_Box transform_hlds__term_constr_initial__conv2_SubstMap_30;

#line 192 "term_constr_initial.m"
        {
#line 192 "term_constr_initial.m"
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__term_constr_initial__HeadVars_24);
        }
#line 193 "term_constr_initial.m"
        {
#line 193 "term_constr_initial.m"
          transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadVars_24, &transform_hlds__term_constr_initial___SizeVarset_25, &transform_hlds__term_constr_initial__SizeVarMap_26);
        }
#line 2856 "transform_hlds.term_constr_initial.c"
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
#line 2891 "transform_hlds.term_constr_initial.c"
        transform_hlds__term_constr_initial__TypeCtorInfo_27_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 220 "term_constr_initial.m"
        {
#line 220 "term_constr_initial.m"
          transform_hlds__term_constr_initial__V_58_58 = mercury__map__init_0_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_27_71, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[1]);
        }
#line 216 "term_constr_initial.m"
        {
#line 216 "term_constr_initial.m"
          mercury__list__foldl_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_27_71, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[1], transform_hlds__term_constr_initial__V_57_57, transform_hlds__term_constr_initial__HeadVarIds_28, ((MR_Box) (transform_hlds__term_constr_initial__V_58_58)), &transform_hlds__term_constr_initial__conv2_SubstMap_30);
        }
#line 216 "term_constr_initial.m"
        transform_hlds__term_constr_initial__SubstMap_30 = ((MR_Word) transform_hlds__term_constr_initial__conv2_SubstMap_30);
#line 199 "term_constr_initial.m"
        {
#line 199 "term_constr_initial.m"
          transform_hlds__term_constr_initial__V_37_37 = transform_hlds__term_constr_main_types__term2_info_get_import_success_1_f_0(transform_hlds__term_constr_initial__Term2Info0_7);
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
#line 201 "term_constr_initial.m"
        {
#line 201 "term_constr_initial.m"
          transform_hlds__term_constr_initial__V_38_38 = transform_hlds__term_constr_main_types__term2_info_get_import_failure_1_f_0(transform_hlds__term_constr_initial__Term2Info0_7);
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
          transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(transform_hlds__term_constr_initial__SizeVarMap_26, transform_hlds__term_constr_initial__Term2Info0_7, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_23_39);
        }
#line 204 "term_constr_initial.m"
        {
#line 204 "term_constr_initial.m"
          transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(transform_hlds__term_constr_initial__SizeVars_33, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_23_39, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_24_40);
        }
#line 205 "term_constr_initial.m"
        {
#line 205 "term_constr_initial.m"
          transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(transform_hlds__term_constr_initial__MaybeSuccessPoly_31, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_24_40, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_25_41);
        }
#line 206 "term_constr_initial.m"
        {
#line 206 "term_constr_initial.m"
          transform_hlds__term_constr_main_types__term2_info_set_failure_constrs_3_p_0(transform_hlds__term_constr_initial__MaybeFailurePoly_32, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_25_41, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_26_42);
        }
#line 209 "term_constr_initial.m"
        {
#line 209 "term_constr_initial.m"
          transform_hlds__term_constr_main_types__term2_info_set_import_success_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_26_42, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_28_44);
        }
#line 210 "term_constr_initial.m"
        {
#line 210 "term_constr_initial.m"
          transform_hlds__term_constr_main_types__term2_info_set_import_failure_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_28_44, &transform_hlds__term_constr_initial__Term2Info_10);
        }
#line 181 "term_constr_initial.m"
        {
#line 181 "term_constr_initial.m"
          hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_initial__Term2Info_10, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_14_14);
        }
#line 182 "term_constr_initial.m"
        {
#line 182 "term_constr_initial.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_19_19, transform_hlds__term_constr_initial__ProcId_4, ((MR_Box) (transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_14_14)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_11, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_12);
#line 182 "term_constr_initial.m"
          return;
        }
#line 179 "term_constr_initial.m"
      }
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
    MR_Word transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ProcTable_12;

#line 165 "term_constr_initial.m"
    {
#line 165 "term_constr_initial.m"
      transform_hlds__term_constr_initial__process_imported_proc_3_p_0(((MR_Integer) transform_hlds__term_constr_initial__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_2), &transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ProcTable_12);
    }
#line 165 "term_constr_initial.m"
    *transform_hlds__term_constr_initial__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ProcTable_12));
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
#line 151 "term_constr_initial.m"
    if (transform_hlds__term_constr_initial__succeeded)
#line 150 "term_constr_initial.m"
      *transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_15 = transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14;
#line 151 "term_constr_initial.m"
    else
#line 152 "term_constr_initial.m"
      {
#line 152 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 152 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 152 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__PredInfo0_12;
#line 152 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__PredInfo_13;
#line 152 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_17_19;
#line 152 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__ProcIds_27;
#line 152 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_8_28;
#line 152 "term_constr_initial.m"
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_10_30;
#line 152 "term_constr_initial.m"
        MR_Box transform_hlds__term_constr_initial__conv0_PredInfo0_12;
#line 165 "term_constr_initial.m"
        MR_Box transform_hlds__term_constr_initial__conv2_STATE_VARIABLE_ProcTable_10_30;

#line 152 "term_constr_initial.m"
        {
#line 152 "term_constr_initial.m"
          mercury__map__lookup_3_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_21_21, transform_hlds__term_constr_initial__TypeCtorInfo_22_22, transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_16_16, ((MR_Box) (transform_hlds__term_constr_initial__PredId_4)), &transform_hlds__term_constr_initial__conv0_PredInfo0_12);
        }
#line 152 "term_constr_initial.m"
        transform_hlds__term_constr_initial__PredInfo0_12 = ((MR_Word) transform_hlds__term_constr_initial__conv0_PredInfo0_12);
#line 163 "term_constr_initial.m"
        {
#line 163 "term_constr_initial.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_constr_initial__PredInfo0_12, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_8_28);
        }
#line 164 "term_constr_initial.m"
        {
#line 164 "term_constr_initial.m"
          transform_hlds__term_constr_initial__ProcIds_27 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__term_constr_initial__PredInfo0_12);
        }
#line 165 "term_constr_initial.m"
        {
#line 165 "term_constr_initial.m"
          mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[4], transform_hlds__term_constr_initial__ProcIds_27, ((MR_Box) (transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_8_28)), &transform_hlds__term_constr_initial__conv2_STATE_VARIABLE_ProcTable_10_30);
        }
#line 165 "term_constr_initial.m"
        transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_10_30 = ((MR_Word) transform_hlds__term_constr_initial__conv2_STATE_VARIABLE_ProcTable_10_30);
#line 166 "term_constr_initial.m"
        {
#line 166 "term_constr_initial.m"
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_10_30, transform_hlds__term_constr_initial__PredInfo0_12, &transform_hlds__term_constr_initial__PredInfo_13);
        }
#line 154 "term_constr_initial.m"
        {
#line 154 "term_constr_initial.m"
          mercury__map__det_update_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_21_21, transform_hlds__term_constr_initial__TypeCtorInfo_22_22, ((MR_Box) (transform_hlds__term_constr_initial__PredId_4)), ((MR_Box) (transform_hlds__term_constr_initial__PredInfo_13)), transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_16_16, &transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_17_19);
        }
#line 155 "term_constr_initial.m"
        {
#line 155 "term_constr_initial.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_17_19, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_15);
#line 155 "term_constr_initial.m"
          return;
        }
#line 152 "term_constr_initial.m"
      }
#line 146 "term_constr_initial.m"
  }
#line 141 "term_constr_initial.m"
}

#line 139 "term_constr_initial.m"
static void MR_CALL 
transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0_1(
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

#line 48 "term_constr_initial.m"
void MR_CALL 
transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0(
#line 48 "term_constr_initial.m"
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_5,
#line 48 "term_constr_initial.m"
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_6)
#line 48 "term_constr_initial.m"
{
#line 108 "term_constr_initial.m"
  {
#line 108 "term_constr_initial.m"
    MR_bool transform_hlds__term_constr_initial__succeeded;
#line 108 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__PredIds_4;
#line 108 "term_constr_initial.m"
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_7_7;
#line 139 "term_constr_initial.m"
    MR_Box transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ModuleInfo_6;

#line 109 "term_constr_initial.m"
    {
#line 109 "term_constr_initial.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__term_constr_initial__PredIds_4);
    }
#line 110 "term_constr_initial.m"
    {
#line 110 "term_constr_initial.m"
      transform_hlds__term_constr_initial__process_builtin_preds_3_p_0(transform_hlds__term_constr_initial__PredIds_4, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_7_7);
    }
#line 139 "term_constr_initial.m"
    {
#line 139 "term_constr_initial.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[3], transform_hlds__term_constr_initial__PredIds_4, ((MR_Box) (transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_7_7)), &transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ModuleInfo_6);
    }
#line 139 "term_constr_initial.m"
    *transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_6 = ((MR_Word) transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ModuleInfo_6);
#line 108 "term_constr_initial.m"
  }
#line 48 "term_constr_initial.m"
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
