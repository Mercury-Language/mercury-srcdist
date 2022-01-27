/*
** Automatically generated from `term_constr_initial.m'
** by the Mercury compiler,
** version rotd-2016-02-26
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
#include "parse_tree.maybe_error.mih"
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




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static void MR_CALL 
transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_initial__PredInfo_3,
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_4,
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_6);

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__437__1_2_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_36,
  MR_Word transform_hlds__term_constr_initial__HeadVar__2_63);

static void MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_p_0(
  MR_Word transform_hlds__term_constr_initial__IdToProgVar_6,
  MR_Word transform_hlds__term_constr_initial__SizeVarMap_7,
  MR_Integer transform_hlds__term_constr_initial__LambdaHeadVar__1_17,
  MR_Word transform_hlds__term_constr_initial__LambdaHeadVar__2_18,
  MR_Word * transform_hlds__term_constr_initial__LambdaHeadVar__3_19);

static void MR_CALL 
transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_3);

static void MR_CALL 
transform_hlds__term_constr_initial__make_info_7_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadProgVars_8,
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_9,
  MR_Word transform_hlds__term_constr_initial__VarTypes_10,
  MR_Word * transform_hlds__term_constr_initial__ArgSize_11,
  MR_Word * transform_hlds__term_constr_initial__Termination_12,
  MR_Word * transform_hlds__term_constr_initial__SizeVarMap_13,
  MR_Word * transform_hlds__term_constr_initial__HeadSizeVars_14);

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_2(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_1(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_initial__HeadProgVars_2,
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_3,
  MR_Word transform_hlds__term_constr_initial__VarTypes_4,
  MR_Word * transform_hlds__term_constr_initial__HeadVar__5_5,
  MR_Word * transform_hlds__term_constr_initial__Termination_6,
  MR_Word * transform_hlds__term_constr_initial__SizeVarMap_7,
  MR_Word * transform_hlds__term_constr_initial__HeadSizeVars_8);

static void MR_CALL 
transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_initial__SpecialPredId_2,
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_3,
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_5);

static void MR_CALL 
transform_hlds__term_constr_initial__process_builtin_preds_3_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_3);

static void MR_CALL 
transform_hlds__term_constr_initial__create_lp_term_3_p_0(
  MR_Word transform_hlds__term_constr_initial__SubstMap_4,
  MR_Word transform_hlds__term_constr_initial__ArgSizeTerm_5,
  MR_Word * transform_hlds__term_constr_initial__HeadVar__3_3);

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_2(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_1(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(
  MR_Word transform_hlds__term_constr_initial__SubstMap_1,
  MR_Word transform_hlds__term_constr_initial__HeadVar__2_2,
  MR_Word * transform_hlds__term_constr_initial__Constraint_3);

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_3(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_2(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_1(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0(
  MR_Integer transform_hlds__term_constr_initial__ProcId_4,
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_11,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_12);

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0_1(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0(
  MR_Word transform_hlds__term_constr_initial__PredId_4,
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0_1(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_2[2][2];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_3[4][6];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_5[5][1];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_6[2][5];


/* sealed */ struct transform_hlds__term_constr_initial__vector_common_type_7_0_s {
  const MR_String transform_hlds__term_constr_initial__vector_common_type_7_0__vct_7_f_0;
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



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_PseudoTypeInfo) &libs__rat__libs__rat__type_ctor_info_rat_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0
  }
};

static void MR_CALL 
transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_initial__PredInfo_3,
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_4,
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_initial__succeeded;

        if ((transform_hlds__term_constr_initial__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_6 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5;
        else
          {
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_51_51 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            MR_Integer transform_hlds__term_constr_initial__ProcId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_initial__ProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_initial__ProcInfo0_19;
            MR_Word transform_hlds__term_constr_initial__HeadVars_20;
            MR_Word transform_hlds__term_constr_initial__PredModule_21;
            MR_String transform_hlds__term_constr_initial__PredName_22;
            MR_Integer transform_hlds__term_constr_initial__PredArity_23;
            MR_Word transform_hlds__term_constr_initial__SizeVarMap_25;
            MR_Word transform_hlds__term_constr_initial__Constrs_26;
            MR_Word transform_hlds__term_constr_initial__Polyhedron_27;
            MR_Word transform_hlds__term_constr_initial__ArgSizeInfo_28;
            MR_Word transform_hlds__term_constr_initial__HeadSizeVars_29;
            MR_Word transform_hlds__term_constr_initial__TermStatus_31;
            MR_Word transform_hlds__term_constr_initial__IntermodStatus_32;
            MR_Word transform_hlds__term_constr_initial__ProcInfo_33;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_39_39;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_40_40;
            MR_Word transform_hlds__term_constr_initial__V_41_41;
            MR_Word transform_hlds__term_constr_initial__V_42_42;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_43_43;
            MR_Word transform_hlds__term_constr_initial__V_44_44;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_45_45;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_46_46;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_47_47;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_48_48;
            MR_Box transform_hlds__term_constr_initial__conv0_ProcInfo0_19;
            MR_Word transform_hlds__term_constr_initial___SizeVarset_24;

            {
              transform_hlds__term_constr_initial__conv0_ProcInfo0_19 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_51_51, transform_hlds__term_constr_initial__ProcId_13, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5);
            }
            transform_hlds__term_constr_initial__ProcInfo0_19 = ((MR_Word) transform_hlds__term_constr_initial__conv0_ProcInfo0_19);
            {
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_19, &transform_hlds__term_constr_initial__HeadVars_20);
            }
            {
              transform_hlds__term_constr_initial__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__term_constr_initial__PredInfo_3);
            }
            {
              transform_hlds__term_constr_initial__PredName_22 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__term_constr_initial__PredInfo_3);
            }
            {
              transform_hlds__term_constr_initial__PredArity_23 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__term_constr_initial__PredInfo_3);
            }
            {
              transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadVars_20, &transform_hlds__term_constr_initial___SizeVarset_24, &transform_hlds__term_constr_initial__SizeVarMap_25);
            }
            {
              transform_hlds__term_constr_initial__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(transform_hlds__term_constr_initial__PredModule_21, transform_hlds__term_constr_initial__PredName_22, transform_hlds__term_constr_initial__PredArity_23);
            }
            if (transform_hlds__term_constr_initial__succeeded)
              {
                MR_Word transform_hlds__term_constr_initial__ConstraintsPrime_60;
                MR_Word transform_hlds__term_constr_initial__HVar1_56;
                MR_Word transform_hlds__term_constr_initial__HVar2_57;
                MR_Word transform_hlds__term_constr_initial__V_61_61;
                MR_Word transform_hlds__term_constr_initial__V_62_62;

                transform_hlds__term_constr_initial__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_initial__HeadVars_20)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__term_constr_initial__succeeded)
                  {
                    transform_hlds__term_constr_initial__HVar1_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVars_20, (MR_Integer) 0)));
                    transform_hlds__term_constr_initial__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVars_20, (MR_Integer) 1)));
                    transform_hlds__term_constr_initial__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_initial__V_61_61)) == (MR_mktag((MR_Integer) 1)));
                    if (transform_hlds__term_constr_initial__succeeded)
                      {
                        transform_hlds__term_constr_initial__HVar2_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_61_61, (MR_Integer) 0)));
                        transform_hlds__term_constr_initial__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_61_61, (MR_Integer) 1)));
                        transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (transform_hlds__term_constr_initial__succeeded)
                          {
                            if ((strcmp(transform_hlds__term_constr_initial__PredName_22, (MR_String) "unsafe_type_cast") == 0))
                              transform_hlds__term_constr_initial__succeeded = MR_TRUE;
                            else
                            if ((strcmp(transform_hlds__term_constr_initial__PredName_22, (MR_String) "unsafe_promise_unique") == 0))
                              transform_hlds__term_constr_initial__succeeded = MR_TRUE;
                            else
                              transform_hlds__term_constr_initial__succeeded = MR_FALSE;
                            if (transform_hlds__term_constr_initial__succeeded)
                              {
                                MR_Word transform_hlds__term_constr_initial__SizeVar1_58;
                                MR_Word transform_hlds__term_constr_initial__SizeVar2_59;
                                MR_Word transform_hlds__term_constr_initial__V_63_63;

                                {
                                  transform_hlds__term_constr_initial__SizeVar1_58 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_initial__SizeVarMap_25, transform_hlds__term_constr_initial__HVar1_56);
                                }
                                {
                                  transform_hlds__term_constr_initial__SizeVar2_59 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(transform_hlds__term_constr_initial__SizeVarMap_25, transform_hlds__term_constr_initial__HVar2_57);
                                }
                                {
                                  transform_hlds__term_constr_initial__V_63_63 = libs__lp_rational__make_vars_eq_constraint_2_f_0(transform_hlds__term_constr_initial__SizeVar1_58, transform_hlds__term_constr_initial__SizeVar2_59);
                                }
                                {
                                  transform_hlds__term_constr_initial__ConstraintsPrime_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__ConstraintsPrime_60, 0) = ((MR_Box) (transform_hlds__term_constr_initial__V_63_63));
                                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__ConstraintsPrime_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                }
                                transform_hlds__term_constr_initial__succeeded = MR_TRUE;
                              }
                            else
                              {
                                MR_Integer transform_hlds__term_constr_initial__lo_0;
                                MR_Integer transform_hlds__term_constr_initial__hi_1;
                                MR_Integer transform_hlds__term_constr_initial__mid_2;
                                MR_Integer transform_hlds__term_constr_initial__result_3;

                                /* binary string simple lookup switch */
                                transform_hlds__term_constr_initial__lo_0 = (MR_Integer) 0;
                                transform_hlds__term_constr_initial__hi_1 = (MR_Integer) 3;
                                do
                                  {
                                    transform_hlds__term_constr_initial__mid_2 = (((transform_hlds__term_constr_initial__lo_0 + transform_hlds__term_constr_initial__hi_1)) / (MR_Integer) 2);
                                    transform_hlds__term_constr_initial__result_3 = MR_strcmp(transform_hlds__term_constr_initial__PredName_22, ((&transform_hlds__term_constr_initial_vector_common_7[0 + transform_hlds__term_constr_initial__mid_2]))->transform_hlds__term_constr_initial__vector_common_type_7_0__vct_7_f_0);
                                    if ((transform_hlds__term_constr_initial__result_3 == (MR_Integer) 0))
                                      {
                                        transform_hlds__term_constr_initial__succeeded = MR_TRUE;
                                        /* jump out of search loop */
                                        goto label_0;
                                      }
                                    else
                                    if ((transform_hlds__term_constr_initial__result_3 < (MR_Integer) 0))
                                      transform_hlds__term_constr_initial__hi_1 = (transform_hlds__term_constr_initial__mid_2 - (MR_Integer) 1);
                                    else
                                      transform_hlds__term_constr_initial__lo_0 = (transform_hlds__term_constr_initial__mid_2 + (MR_Integer) 1);
                                  }
                                while ((transform_hlds__term_constr_initial__lo_0 <= transform_hlds__term_constr_initial__hi_1));
                                transform_hlds__term_constr_initial__succeeded = MR_FALSE;
                              label_0:;
                                if (transform_hlds__term_constr_initial__succeeded)
                                  {
                                    transform_hlds__term_constr_initial__ConstraintsPrime_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                    transform_hlds__term_constr_initial__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                  }
                if (transform_hlds__term_constr_initial__succeeded)
                  transform_hlds__term_constr_initial__Constrs_26 = transform_hlds__term_constr_initial__ConstraintsPrime_60;
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_initial", (MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", (MR_String) "unrecognised predicate");
                      return;
                    }
                  }
              }
            else
              {
                {
                  transform_hlds__term_constr_initial__succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(transform_hlds__term_constr_initial__ModuleInfo_4, transform_hlds__term_constr_initial__PredInfo_3, transform_hlds__term_constr_initial__ProcInfo0_19);
                }
                if (transform_hlds__term_constr_initial__succeeded)
                  transform_hlds__term_constr_initial__Constrs_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_initial", (MR_String) "predicate \140transform_hlds.term_constr_initial.set_builtin_terminates\'/6", (MR_String) "builtin with non-zero size args");
                      return;
                    }
                  }
              }
            {
              transform_hlds__term_constr_initial__Polyhedron_27 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_initial__Constrs_26);
            }
            {
              transform_hlds__term_constr_initial__ArgSizeInfo_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__ArgSizeInfo_28, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Polyhedron_27));
            }
            {
              transform_hlds__term_constr_initial__HeadSizeVars_29 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_initial__SizeVarMap_25, transform_hlds__term_constr_initial__HeadVars_20);
            }
            {
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_19, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_39_39);
            }
            {
              transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(transform_hlds__term_constr_initial__ArgSizeInfo_28, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_39_39, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_40_40);
            }
            transform_hlds__term_constr_initial__V_42_42 = (MR_Integer) 0;
            transform_hlds__term_constr_initial__V_41_41 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[3];
            transform_hlds__term_constr_initial__TermStatus_31 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_5[4]);
            {
              transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(transform_hlds__term_constr_initial__TermStatus_31, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_40_40, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_43_43);
            }
            transform_hlds__term_constr_initial__V_44_44 = (MR_Integer) 0;
            transform_hlds__term_constr_initial__IntermodStatus_32 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_5[2]);
            {
              transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0(transform_hlds__term_constr_initial__IntermodStatus_32, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_43_43, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_45_45);
            }
            {
              transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(transform_hlds__term_constr_initial__SizeVarMap_25, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_45_45, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_46_46);
            }
            {
              transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(transform_hlds__term_constr_initial__HeadSizeVars_29, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_46_46, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_47_47);
            }
            {
              hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_47_47, transform_hlds__term_constr_initial__ProcInfo0_19, &transform_hlds__term_constr_initial__ProcInfo_33);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_51_51, transform_hlds__term_constr_initial__ProcId_13, ((MR_Box) (transform_hlds__term_constr_initial__ProcInfo_33)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_48_48);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_initial__ProcIds_14;
              MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_5 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_48_48;

              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_5 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_5;
              transform_hlds__term_constr_initial__HeadVar__1_1 = transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__437__1_2_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_36,
  MR_Word transform_hlds__term_constr_initial__HeadVar__2_63)
{
  {
    MR_bool transform_hlds__term_constr_initial__succeeded;

    {
      transform_hlds__term_constr_initial__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[1], transform_hlds__term_constr_initial__HeadVar__1_36, ((MR_Box) (transform_hlds__term_constr_initial__HeadVar__2_63)));
    }
    return transform_hlds__term_constr_initial__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_p_0(
  MR_Word transform_hlds__term_constr_initial__IdToProgVar_6,
  MR_Word transform_hlds__term_constr_initial__SizeVarMap_7,
  MR_Integer transform_hlds__term_constr_initial__LambdaHeadVar__1_17,
  MR_Word transform_hlds__term_constr_initial__LambdaHeadVar__2_18,
  MR_Word * transform_hlds__term_constr_initial__LambdaHeadVar__3_19)
{
  {
    MR_bool transform_hlds__term_constr_initial__succeeded;
    MR_Word transform_hlds__term_constr_initial__TypeInfo_25_25 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[0];
    MR_Word transform_hlds__term_constr_initial__TypeInfo_26_26;
    MR_Word transform_hlds__term_constr_initial__ProgVar_11;
    MR_Word transform_hlds__term_constr_initial__SizeVar_12;
    MR_Box transform_hlds__term_constr_initial__conv0_ProgVar_11;
    MR_Box transform_hlds__term_constr_initial__conv1_SizeVar_12;

    {
      transform_hlds__term_constr_initial__conv0_ProgVar_11 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(transform_hlds__term_constr_initial__TypeInfo_25_25, transform_hlds__term_constr_initial__LambdaHeadVar__1_17, transform_hlds__term_constr_initial__IdToProgVar_6);
    }
    transform_hlds__term_constr_initial__ProgVar_11 = ((MR_Word) transform_hlds__term_constr_initial__conv0_ProgVar_11);
    transform_hlds__term_constr_initial__TypeInfo_26_26 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[1];
    {
      transform_hlds__term_constr_initial__conv1_SizeVar_12 = mercury__map__lookup_2_f_0(transform_hlds__term_constr_initial__TypeInfo_25_25, transform_hlds__term_constr_initial__TypeInfo_26_26, transform_hlds__term_constr_initial__SizeVarMap_7, ((MR_Box) (transform_hlds__term_constr_initial__ProgVar_11)));
    }
    transform_hlds__term_constr_initial__SizeVar_12 = ((MR_Word) transform_hlds__term_constr_initial__conv1_SizeVar_12);
    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_initial__TypeInfo_26_26, transform_hlds__term_constr_initial__LambdaHeadVar__1_17, ((MR_Box) (transform_hlds__term_constr_initial__SizeVar_12)), transform_hlds__term_constr_initial__LambdaHeadVar__2_18, transform_hlds__term_constr_initial__LambdaHeadVar__3_19);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_initial__succeeded;

        if ((transform_hlds__term_constr_initial__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_3 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2;
        else
          {
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            MR_Integer transform_hlds__term_constr_initial__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_initial__ProcIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_initial__ProcInfo0_10;
            MR_Word transform_hlds__term_constr_initial__Term2Info0_11;
            MR_Word transform_hlds__term_constr_initial__HeadVars_12;
            MR_Word transform_hlds__term_constr_initial__SizeVarMap_14;
            MR_Word transform_hlds__term_constr_initial__Term2Info_15;
            MR_Word transform_hlds__term_constr_initial__ProcInfo_16;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_19_19;
            MR_Box transform_hlds__term_constr_initial__conv0_ProcInfo0_10;
            MR_Word transform_hlds__term_constr_initial___SizeVarset_13;

            {
              transform_hlds__term_constr_initial__conv0_ProcInfo0_10 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_22_22, transform_hlds__term_constr_initial__ProcId_7, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2);
            }
            transform_hlds__term_constr_initial__ProcInfo0_10 = ((MR_Word) transform_hlds__term_constr_initial__conv0_ProcInfo0_10);
            {
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_10, &transform_hlds__term_constr_initial__Term2Info0_11);
            }
            {
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_10, &transform_hlds__term_constr_initial__HeadVars_12);
            }
            {
              transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadVars_12, &transform_hlds__term_constr_initial___SizeVarset_13, &transform_hlds__term_constr_initial__SizeVarMap_14);
            }
            {
              transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(transform_hlds__term_constr_initial__SizeVarMap_14, transform_hlds__term_constr_initial__Term2Info0_11, &transform_hlds__term_constr_initial__Term2Info_15);
            }
            {
              hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_initial__Term2Info_15, transform_hlds__term_constr_initial__ProcInfo0_10, &transform_hlds__term_constr_initial__ProcInfo_16);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_22_22, transform_hlds__term_constr_initial__ProcId_7, ((MR_Box) (transform_hlds__term_constr_initial__ProcInfo_16)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_19_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_initial__ProcIds_8;
              MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_2 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_19_19;

              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_2 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_2;
              transform_hlds__term_constr_initial__HeadVar__1_1 = transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_constr_initial__make_info_7_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadProgVars_8,
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_9,
  MR_Word transform_hlds__term_constr_initial__VarTypes_10,
  MR_Word * transform_hlds__term_constr_initial__ArgSize_11,
  MR_Word * transform_hlds__term_constr_initial__Termination_12,
  MR_Word * transform_hlds__term_constr_initial__SizeVarMap_13,
  MR_Word * transform_hlds__term_constr_initial__HeadSizeVars_14)
{
  {
    MR_bool transform_hlds__term_constr_initial__succeeded;
    MR_Word transform_hlds__term_constr_initial__Zeros_16;
    MR_Word transform_hlds__term_constr_initial__Constraints_17;
    MR_Word transform_hlds__term_constr_initial___SizeVarset_15;

    {
      transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadProgVars_8, &transform_hlds__term_constr_initial___SizeVarset_15, transform_hlds__term_constr_initial__SizeVarMap_13);
    }
    {
      transform_hlds__term_constr_initial__Zeros_16 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(transform_hlds__term_constr_initial__ModuleInfo_9, *transform_hlds__term_constr_initial__SizeVarMap_13, transform_hlds__term_constr_initial__VarTypes_10);
    }
    {
      transform_hlds__term_constr_initial__Constraints_17 = transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0(*transform_hlds__term_constr_initial__SizeVarMap_13, transform_hlds__term_constr_initial__Zeros_16);
    }
    {
      *transform_hlds__term_constr_initial__ArgSize_11 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_initial__Constraints_17);
    }
    *transform_hlds__term_constr_initial__Termination_12 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[3];
    {
      *transform_hlds__term_constr_initial__HeadSizeVars_14 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(*transform_hlds__term_constr_initial__SizeVarMap_13, transform_hlds__term_constr_initial__HeadProgVars_8);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_2(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_initial__succeeded;
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;

    {
      transform_hlds__term_constr_initial__succeeded = transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__437__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1));
    }
    return transform_hlds__term_constr_initial__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_1(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__term_constr_initial__succeeded;
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;

    {
      transform_hlds__term_constr_initial__succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1));
    }
    return transform_hlds__term_constr_initial__succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_initial__HeadProgVars_2,
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_3,
  MR_Word transform_hlds__term_constr_initial__VarTypes_4,
  MR_Word * transform_hlds__term_constr_initial__HeadVar__5_5,
  MR_Word * transform_hlds__term_constr_initial__Termination_6,
  MR_Word * transform_hlds__term_constr_initial__SizeVarMap_7,
  MR_Word * transform_hlds__term_constr_initial__HeadSizeVars_8)
{
  {
    MR_bool transform_hlds__term_constr_initial__succeeded;

    switch (transform_hlds__term_constr_initial__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word transform_hlds__term_constr_initial__Zeros_82;
          MR_Word transform_hlds__term_constr_initial__Constraints_83;
          MR_Word transform_hlds__term_constr_initial___SizeVarset_81;

          {
            transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadProgVars_2, &transform_hlds__term_constr_initial___SizeVarset_81, transform_hlds__term_constr_initial__SizeVarMap_7);
          }
          {
            transform_hlds__term_constr_initial__Zeros_82 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(transform_hlds__term_constr_initial__ModuleInfo_3, *transform_hlds__term_constr_initial__SizeVarMap_7, transform_hlds__term_constr_initial__VarTypes_4);
          }
          {
            transform_hlds__term_constr_initial__Constraints_83 = transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0(*transform_hlds__term_constr_initial__SizeVarMap_7, transform_hlds__term_constr_initial__Zeros_82);
          }
          {
            *transform_hlds__term_constr_initial__HeadVar__5_5 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_initial__Constraints_83);
          }
          *transform_hlds__term_constr_initial__Termination_6 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[3];
          {
            *transform_hlds__term_constr_initial__HeadSizeVars_8 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(*transform_hlds__term_constr_initial__SizeVarMap_7, transform_hlds__term_constr_initial__HeadProgVars_2);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__term_constr_initial__TypeInfo_66_66 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[0];
          MR_Integer transform_hlds__term_constr_initial__NumToDrop_55;
          MR_Integer transform_hlds__term_constr_initial__V_57_57;
          MR_Word transform_hlds__term_constr_initial___ZeroSizeHeadVars_56;

          {
            transform_hlds__term_constr_initial__V_57_57 = mercury__list__length_1_f_0(transform_hlds__term_constr_initial__TypeInfo_66_66, transform_hlds__term_constr_initial__HeadProgVars_2);
          }
          transform_hlds__term_constr_initial__NumToDrop_55 = (transform_hlds__term_constr_initial__V_57_57 - (MR_Integer) 2);
          {
            transform_hlds__term_constr_initial__succeeded = mercury__list__drop_3_p_0(transform_hlds__term_constr_initial__TypeInfo_66_66, transform_hlds__term_constr_initial__NumToDrop_55, transform_hlds__term_constr_initial__HeadProgVars_2, &transform_hlds__term_constr_initial___ZeroSizeHeadVars_56);
          }
          if (transform_hlds__term_constr_initial__succeeded)
            {
              transform_hlds__term_constr_initial__make_info_7_p_0(transform_hlds__term_constr_initial__HeadProgVars_2, transform_hlds__term_constr_initial__ModuleInfo_3, transform_hlds__term_constr_initial__VarTypes_4, transform_hlds__term_constr_initial__HeadVar__5_5, transform_hlds__term_constr_initial__Termination_6, transform_hlds__term_constr_initial__SizeVarMap_7, transform_hlds__term_constr_initial__HeadSizeVars_8);
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_initial", (MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "less than two arguments to builtin index");
                return;
              }
            }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__term_constr_initial__Zeros_24;
          MR_Word transform_hlds__term_constr_initial__NonZeroHeadSizeVars_25;
          MR_Word transform_hlds__term_constr_initial__Constrs_26;
          MR_Word transform_hlds__term_constr_initial__V_35_35;
          MR_Word transform_hlds__term_constr_initial__V_36_36;
          MR_Word transform_hlds__term_constr_initial___SizeVarset_23;

          {
            transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadProgVars_2, &transform_hlds__term_constr_initial___SizeVarset_23, transform_hlds__term_constr_initial__SizeVarMap_7);
          }
          {
            *transform_hlds__term_constr_initial__HeadSizeVars_8 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(*transform_hlds__term_constr_initial__SizeVarMap_7, transform_hlds__term_constr_initial__HeadProgVars_2);
          }
          {
            transform_hlds__term_constr_initial__Zeros_24 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(transform_hlds__term_constr_initial__ModuleInfo_3, *transform_hlds__term_constr_initial__SizeVarMap_7, transform_hlds__term_constr_initial__VarTypes_4);
          }
          {
            transform_hlds__term_constr_initial__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_36_36, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_36_36, 1) = ((MR_Box) (transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_36_36, 3) = ((MR_Box) (transform_hlds__term_constr_initial__Zeros_24));
          }
          {
            transform_hlds__term_constr_initial__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_35_35, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_35_35, 1) = ((MR_Box) (transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_2));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_35_35, 3) = ((MR_Box) (transform_hlds__term_constr_initial__V_36_36));
          }
          {
            transform_hlds__term_constr_initial__NonZeroHeadSizeVars_25 = mercury__list__filter_2_f_0((MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[1], transform_hlds__term_constr_initial__V_35_35, *transform_hlds__term_constr_initial__HeadSizeVars_8);
          }
          if ((transform_hlds__term_constr_initial__NonZeroHeadSizeVars_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            transform_hlds__term_constr_initial__Constrs_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Word transform_hlds__term_constr_initial__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__NonZeroHeadSizeVars_25, (MR_Integer) 1)));
              MR_Word transform_hlds__term_constr_initial__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__NonZeroHeadSizeVars_25, (MR_Integer) 0)));

              if ((transform_hlds__term_constr_initial__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_initial", (MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "wrong number of args for unify");
                    return;
                  }
                }
              else
                {
                  MR_Word transform_hlds__term_constr_initial__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_70_70, (MR_Integer) 1)));
                  MR_Word transform_hlds__term_constr_initial__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_70_70, (MR_Integer) 0)));

                  if ((transform_hlds__term_constr_initial__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word transform_hlds__term_constr_initial__V_45_45;

                      {
                        transform_hlds__term_constr_initial__V_45_45 = libs__lp_rational__make_vars_eq_constraint_2_f_0(transform_hlds__term_constr_initial__V_71_71, transform_hlds__term_constr_initial__V_73_73);
                      }
                      {
                        transform_hlds__term_constr_initial__Constrs_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__Constrs_26, 0) = ((MR_Box) (transform_hlds__term_constr_initial__V_45_45));
                        MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__Constrs_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    }
                  else
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.term_constr_initial", (MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "wrong number of args for unify");
                        return;
                      }
                    }
                }
            }
          {
            *transform_hlds__term_constr_initial__HeadVar__5_5 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_initial__Constrs_26);
          }
          *transform_hlds__term_constr_initial__Termination_6 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[3];
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_initial__SpecialPredId_2,
  MR_Word transform_hlds__term_constr_initial__ModuleInfo_3,
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_initial__succeeded;

        if ((transform_hlds__term_constr_initial__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_5 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4;
        else
          {
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
            MR_Integer transform_hlds__term_constr_initial__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_initial__ProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_initial__ProcInfo0_16;
            MR_Word transform_hlds__term_constr_initial__HeadVars_17;
            MR_Word transform_hlds__term_constr_initial__VarTypes_18;
            MR_Word transform_hlds__term_constr_initial__ArgSize_19;
            MR_Word transform_hlds__term_constr_initial__Termination_20;
            MR_Word transform_hlds__term_constr_initial__VarMap_21;
            MR_Word transform_hlds__term_constr_initial__HeadSizeVars_22;
            MR_Word transform_hlds__term_constr_initial__TermStatus_24;
            MR_Word transform_hlds__term_constr_initial__ProcInfo_26;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_29_29;
            MR_Word transform_hlds__term_constr_initial__V_30_30;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_31_31;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_32_32;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_34_34;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_35_35;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_36_36;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_37_37;
            MR_Box transform_hlds__term_constr_initial__conv0_ProcInfo0_16;

            {
              transform_hlds__term_constr_initial__conv0_ProcInfo0_16 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_40_40, transform_hlds__term_constr_initial__ProcId_11, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4);
            }
            transform_hlds__term_constr_initial__ProcInfo0_16 = ((MR_Word) transform_hlds__term_constr_initial__conv0_ProcInfo0_16);
            {
              hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_16, &transform_hlds__term_constr_initial__HeadVars_17);
            }
            {
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_16, &transform_hlds__term_constr_initial__VarTypes_18);
            }
            {
              transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0(transform_hlds__term_constr_initial__SpecialPredId_2, transform_hlds__term_constr_initial__HeadVars_17, transform_hlds__term_constr_initial__ModuleInfo_3, transform_hlds__term_constr_initial__VarTypes_18, &transform_hlds__term_constr_initial__ArgSize_19, &transform_hlds__term_constr_initial__Termination_20, &transform_hlds__term_constr_initial__VarMap_21, &transform_hlds__term_constr_initial__HeadSizeVars_22);
            }
            {
              hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_initial__ProcInfo0_16, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_29_29);
            }
            {
              transform_hlds__term_constr_initial__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_30_30, 0) = ((MR_Box) (transform_hlds__term_constr_initial__ArgSize_19));
            }
            {
              transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(transform_hlds__term_constr_initial__V_30_30, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_29_29, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_31_31);
            }
            {
              transform_hlds__term_constr_initial__TermStatus_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__TermStatus_24, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Termination_20));
            }
            {
              transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(transform_hlds__term_constr_initial__TermStatus_24, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_31_31, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_32_32);
            }
            {
              transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_5[2]), transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_32_32, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_34_34);
            }
            {
              transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(transform_hlds__term_constr_initial__VarMap_21, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_34_34, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_35_35);
            }
            {
              transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(transform_hlds__term_constr_initial__HeadSizeVars_22, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_35_35, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_36_36);
            }
            {
              hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_36_36, transform_hlds__term_constr_initial__ProcInfo0_16, &transform_hlds__term_constr_initial__ProcInfo_26);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_40_40, transform_hlds__term_constr_initial__ProcId_11, ((MR_Box) (transform_hlds__term_constr_initial__ProcInfo_26)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_37_37);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_initial__ProcIds_12;
              MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_4 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_37_37;

              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_4 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0__tmp_copy_4;
              transform_hlds__term_constr_initial__HeadVar__1_1 = transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_builtin_preds_3_p_0(
  MR_Word transform_hlds__term_constr_initial__HeadVar__1_1,
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool transform_hlds__term_constr_initial__succeeded;

        if ((transform_hlds__term_constr_initial__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_3 = transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2;
        else
          {
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_24_24;
            MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_25_25;
            MR_Word transform_hlds__term_constr_initial__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_initial__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word transform_hlds__term_constr_initial__Globals_10;
            MR_Word transform_hlds__term_constr_initial__OpMode_11;
            MR_Word transform_hlds__term_constr_initial__MakeOptInt_12;
            MR_Word transform_hlds__term_constr_initial__PredInfo0_14;
            MR_Word transform_hlds__term_constr_initial__PredInfo_15;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_20_20;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_21_21;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_22_22;
            MR_Word transform_hlds__term_constr_initial__PredStatus_32;
            MR_Word transform_hlds__term_constr_initial__Markers_33;
            MR_Word transform_hlds__term_constr_initial__Context_34;
            MR_Word transform_hlds__term_constr_initial__ProcIds_36;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_41;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_50;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_52_72;
            MR_Word transform_hlds__term_constr_initial__V_18_18;
            MR_Word transform_hlds__term_constr_initial__V_19_19;
            MR_Box transform_hlds__term_constr_initial__conv0_PredInfo0_14;
            MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_22_42;

            {
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__term_constr_initial__Globals_10);
            }
            {
              libs__globals__get_op_mode_2_p_0(transform_hlds__term_constr_initial__Globals_10, &transform_hlds__term_constr_initial__OpMode_11);
            }
            transform_hlds__term_constr_initial__succeeded = ((((MR_tag((MR_Word) transform_hlds__term_constr_initial__OpMode_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_initial__OpMode_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (transform_hlds__term_constr_initial__succeeded)
              {
                transform_hlds__term_constr_initial__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__term_constr_initial__OpMode_11, (MR_Integer) 1)));
                transform_hlds__term_constr_initial__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_initial__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                if (transform_hlds__term_constr_initial__succeeded)
                  {
                    transform_hlds__term_constr_initial__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_18_18, (MR_Integer) 0)));
                    transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
            if (transform_hlds__term_constr_initial__succeeded)
              transform_hlds__term_constr_initial__MakeOptInt_12 = (MR_Integer) 1;
            else
              transform_hlds__term_constr_initial__MakeOptInt_12 = (MR_Integer) 0;
            {
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_20_20);
            }
            transform_hlds__term_constr_initial__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            transform_hlds__term_constr_initial__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
            {
              transform_hlds__term_constr_initial__conv0_PredInfo0_14 = mercury__map__det_elem_2_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_24_24, transform_hlds__term_constr_initial__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__term_constr_initial__PredId_7)), transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_20_20);
            }
            transform_hlds__term_constr_initial__PredInfo0_14 = ((MR_Word) transform_hlds__term_constr_initial__conv0_PredInfo0_14);
            {
              hlds__hlds_pred__pred_info_get_status_2_p_0(transform_hlds__term_constr_initial__PredInfo0_14, &transform_hlds__term_constr_initial__PredStatus_32);
            }
            {
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__term_constr_initial__PredInfo0_14, &transform_hlds__term_constr_initial__Markers_33);
            }
            {
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__term_constr_initial__PredInfo0_14, &transform_hlds__term_constr_initial__Context_34);
            }
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_constr_initial__PredInfo0_14, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_41);
            }
            {
              transform_hlds__term_constr_initial__ProcIds_36 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__term_constr_initial__PredInfo0_14);
            }
            {
              transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__term_constr_initial__PredInfo0_14);
            }
            if (transform_hlds__term_constr_initial__succeeded)
              {
                {
                  transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_p_0(transform_hlds__term_constr_initial__ProcIds_36, transform_hlds__term_constr_initial__PredInfo0_14, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_41, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_22_42);
                }
                transform_hlds__term_constr_initial__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word transform_hlds__term_constr_initial__SpecialPredId_87;
                MR_Word transform_hlds__term_constr_initial__SpecPredId0_84;
                MR_String transform_hlds__term_constr_initial__Name_82;
                MR_Integer transform_hlds__term_constr_initial__Arity_83;
                MR_Word transform_hlds__term_constr_initial__ModuleName_86;
                MR_Integer transform_hlds__term_constr_initial__V_92_92;
                MR_String transform_hlds__term_constr_initial__V_85_85;

                {
                  transform_hlds__term_constr_initial__Name_82 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__term_constr_initial__PredInfo0_14);
                }
                {
                  transform_hlds__term_constr_initial__Arity_83 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__term_constr_initial__PredInfo0_14);
                }
                {
                  transform_hlds__term_constr_initial__succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&transform_hlds__term_constr_initial__SpecPredId0_84, transform_hlds__term_constr_initial__Name_82, &transform_hlds__term_constr_initial__V_85_85, &transform_hlds__term_constr_initial__V_92_92);
                }
                if (transform_hlds__term_constr_initial__succeeded)
                  {
                    transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__Arity_83 == transform_hlds__term_constr_initial__V_92_92);
                    if (transform_hlds__term_constr_initial__succeeded)
                      {
                        {
                          transform_hlds__term_constr_initial__ModuleName_86 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__term_constr_initial__PredInfo0_14);
                        }
                        {
                          transform_hlds__term_constr_initial__succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(transform_hlds__term_constr_initial__ModuleName_86);
                        }
                      }
                  }
                if (transform_hlds__term_constr_initial__succeeded)
                  {
                    transform_hlds__term_constr_initial__SpecialPredId_87 = transform_hlds__term_constr_initial__SpecPredId0_84;
                    transform_hlds__term_constr_initial__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word transform_hlds__term_constr_initial__PredOrigin_88;
                    MR_Word transform_hlds__term_constr_initial__V_89_89;

                    {
                      hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__term_constr_initial__PredInfo0_14, &transform_hlds__term_constr_initial__PredOrigin_88);
                    }
                    transform_hlds__term_constr_initial__succeeded = ((MR_tag((MR_Word) transform_hlds__term_constr_initial__PredOrigin_88)) == (MR_mktag((MR_Integer) 0)));
                    if (transform_hlds__term_constr_initial__succeeded)
                      {
                        transform_hlds__term_constr_initial__SpecialPredId_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__PredOrigin_88, (MR_Integer) 0)));
                        transform_hlds__term_constr_initial__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__PredOrigin_88, (MR_Integer) 1)));
                      }
                  }
                if (transform_hlds__term_constr_initial__succeeded)
                  {
                    {
                      transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(transform_hlds__term_constr_initial__ProcIds_36, transform_hlds__term_constr_initial__SpecialPredId_87, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_41, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_22_42);
                    }
                    transform_hlds__term_constr_initial__succeeded = MR_TRUE;
                  }
              }
            if (transform_hlds__term_constr_initial__succeeded)
              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_50 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_22_42;
            else
              {
                MR_Word transform_hlds__term_constr_initial__V_43_43;

                {
                  transform_hlds__term_constr_initial__V_43_43 = hlds__status__pred_status_defined_in_this_module_1_f_0(transform_hlds__term_constr_initial__PredStatus_32);
                }
                transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__V_43_43 == (MR_Integer) 1);
                if (transform_hlds__term_constr_initial__succeeded)
                  {
                    {
                      transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_initial__Markers_33, (MR_Integer) 18);
                    }
                    if (transform_hlds__term_constr_initial__succeeded)
                      {
                        MR_Word transform_hlds__term_constr_initial__ArgSizeInfo_38;
                        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_27_47;
                        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_29_49;

                        {
                          transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_36, (MR_Integer) 1, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[0], transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_41, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_27_47);
                        }
                        {
                          transform_hlds__term_constr_initial__ArgSizeInfo_38 = libs__polyhedron__universe_0_f_0();
                        }
                        {
                          transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_36, (MR_Integer) 1, transform_hlds__term_constr_initial__ArgSizeInfo_38, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_27_47, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_29_49);
                        }
                        {
                          transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(transform_hlds__term_constr_initial__ProcIds_36, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_29_49, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_50);
                        }
                      }
                    else
                      transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_50 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_41;
                  }
                else
                  {
                    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_35_55;
                    MR_Word transform_hlds__term_constr_initial__ArgSizeInfo_74;

                    {
                      transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_initial__Markers_33, (MR_Integer) 18);
                    }
                    if (!(transform_hlds__term_constr_initial__succeeded))
                      {
                        MR_Word transform_hlds__term_constr_initial__V_51_51;

                        transform_hlds__term_constr_initial__succeeded = (transform_hlds__term_constr_initial__MakeOptInt_12 == (MR_Integer) 0);
                        if (transform_hlds__term_constr_initial__succeeded)
                          {
                            transform_hlds__term_constr_initial__V_51_51 = (MR_Integer) 20;
                            {
                              transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_initial__Markers_33, transform_hlds__term_constr_initial__V_51_51);
                            }
                          }
                      }
                    if (transform_hlds__term_constr_initial__succeeded)
                      {
                        {
                          transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_36, (MR_Integer) 1, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_5[0], transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_41, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_35_55);
                        }
                      }
                    else
                      {
                        {
                          transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_36, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_5[1]), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_21_41, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_35_55);
                        }
                      }
                    {
                      transform_hlds__term_constr_initial__ArgSizeInfo_74 = libs__polyhedron__universe_0_f_0();
                    }
                    {
                      transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_36, (MR_Integer) 1, transform_hlds__term_constr_initial__ArgSizeInfo_74, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_35_55, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_50);
                    }
                  }
              }
            {
              transform_hlds__term_constr_initial__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__term_constr_initial__Markers_33, (MR_Integer) 19);
            }
            if (transform_hlds__term_constr_initial__succeeded)
              {
                MR_Word transform_hlds__term_constr_initial__TerminationInfo_39;
                MR_Word transform_hlds__term_constr_initial__NonTermArgSizeInfo_40;
                MR_Word transform_hlds__term_constr_initial__V_64_64;
                MR_Word transform_hlds__term_constr_initial__V_65_65;
                MR_Word transform_hlds__term_constr_initial__V_66_66;
                MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_49_69;
                MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_51_71;

                {
                  transform_hlds__term_constr_initial__V_66_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), transform_hlds__term_constr_initial__V_66_66, 0) = ((MR_Box) (transform_hlds__term_constr_initial__PredId_7));
                }
                {
                  transform_hlds__term_constr_initial__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_65_65, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Context_34));
                  MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_65_65, 1) = ((MR_Box) (transform_hlds__term_constr_initial__V_66_66));
                }
                {
                  transform_hlds__term_constr_initial__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_64_64, 0) = ((MR_Box) (transform_hlds__term_constr_initial__V_65_65));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  transform_hlds__term_constr_initial__TerminationInfo_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__TerminationInfo_39, 0) = ((MR_Box) (transform_hlds__term_constr_initial__V_64_64));
                }
                {
                  transform_hlds__term_constr_initial__NonTermArgSizeInfo_40 = libs__polyhedron__universe_0_f_0();
                }
                {
                  transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_36, (MR_Integer) 1, transform_hlds__term_constr_initial__TerminationInfo_39, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_50, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_49_69);
                }
                {
                  transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(transform_hlds__term_constr_initial__ProcIds_36, (MR_Integer) 1, transform_hlds__term_constr_initial__NonTermArgSizeInfo_40, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_49_69, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_51_71);
                }
                {
                  transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(transform_hlds__term_constr_initial__ProcIds_36, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_51_71, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_52_72);
                }
              }
            else
              transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_52_72 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_30_50;
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_52_72, transform_hlds__term_constr_initial__PredInfo0_14, &transform_hlds__term_constr_initial__PredInfo_15);
            }
            {
              mercury__map__det_update_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_24_24, transform_hlds__term_constr_initial__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__term_constr_initial__PredId_7)), ((MR_Box) (transform_hlds__term_constr_initial__PredInfo_15)), transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_20_20, &transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_21_21);
            }
            {
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_21_21, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2, &transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_22_22);
            }
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1 = transform_hlds__term_constr_initial__PredIds_8;
              MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2 = transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_22_22;

              transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_2 = transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0__tmp_copy_2;
              transform_hlds__term_constr_initial__HeadVar__1_1 = transform_hlds__term_constr_initial__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
transform_hlds__term_constr_initial__create_lp_term_3_p_0(
  MR_Word transform_hlds__term_constr_initial__SubstMap_4,
  MR_Word transform_hlds__term_constr_initial__ArgSizeTerm_5,
  MR_Word * transform_hlds__term_constr_initial__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__term_constr_initial__succeeded;
    MR_Word transform_hlds__term_constr_initial__Var_6;
    MR_Word transform_hlds__term_constr_initial__Coefficient_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__ArgSizeTerm_5, (MR_Integer) 1)));
    MR_Integer transform_hlds__term_constr_initial__VarId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__ArgSizeTerm_5, (MR_Integer) 0)));
    MR_Box transform_hlds__term_constr_initial__conv0_Var_6;

    {
      transform_hlds__term_constr_initial__conv0_Var_6 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0((MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[1], transform_hlds__term_constr_initial__VarId_8, transform_hlds__term_constr_initial__SubstMap_4);
    }
    transform_hlds__term_constr_initial__Var_6 = ((MR_Word) transform_hlds__term_constr_initial__conv0_Var_6);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__term_constr_initial__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Var_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__term_constr_initial__Coefficient_7));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_2(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
    MR_Word transform_hlds__term_constr_initial__conv1_HeadVar__3_3;

    {
      transform_hlds__term_constr_initial__create_lp_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1), &transform_hlds__term_constr_initial__conv1_HeadVar__3_3);
    }
    *transform_hlds__term_constr_initial__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_initial__conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_1(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
    MR_Word transform_hlds__term_constr_initial__conv0_HeadVar__3_3;

    {
      transform_hlds__term_constr_initial__create_lp_term_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1), &transform_hlds__term_constr_initial__conv0_HeadVar__3_3);
    }
    *transform_hlds__term_constr_initial__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_initial__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(
  MR_Word transform_hlds__term_constr_initial__SubstMap_1,
  MR_Word transform_hlds__term_constr_initial__HeadVar__2_2,
  MR_Word * transform_hlds__term_constr_initial__Constraint_3)
{
  {
    MR_bool transform_hlds__term_constr_initial__succeeded;

    if (((MR_tag((MR_Word) transform_hlds__term_constr_initial__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word transform_hlds__term_constr_initial__Terms0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_initial__Constant_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_initial__Terms_15;
        MR_Word transform_hlds__term_constr_initial__V_16_16;

        {
          transform_hlds__term_constr_initial__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_16_16, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_3[3]));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_16_16, 1) = ((MR_Box) (transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_16_16, 3) = ((MR_Box) (transform_hlds__term_constr_initial__SubstMap_1));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_term_0, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[2], transform_hlds__term_constr_initial__V_16_16, transform_hlds__term_constr_initial__Terms0_12, &transform_hlds__term_constr_initial__Terms_15);
        }
        {
          *transform_hlds__term_constr_initial__Constraint_3 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_initial__Terms_15, (MR_Integer) 1, transform_hlds__term_constr_initial__Constant_13);
        }
      }
    else
      {
        MR_Word transform_hlds__term_constr_initial__Terms0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word transform_hlds__term_constr_initial__Constant_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__term_constr_initial__Terms_8;
        MR_Word transform_hlds__term_constr_initial__V_9_9;

        {
          transform_hlds__term_constr_initial__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_9_9, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_3[3]));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_9_9, 1) = ((MR_Box) (transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_2));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_9_9, 3) = ((MR_Box) (transform_hlds__term_constr_initial__SubstMap_1));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_term_0, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[2], transform_hlds__term_constr_initial__V_9_9, transform_hlds__term_constr_initial__Terms0_5, &transform_hlds__term_constr_initial__Terms_8);
        }
        {
          *transform_hlds__term_constr_initial__Constraint_3 = libs__lp_rational__construct_constraint_3_f_0(transform_hlds__term_constr_initial__Terms_8, (MR_Integer) 0, transform_hlds__term_constr_initial__Constant_6);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_3(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
    MR_Word transform_hlds__term_constr_initial__conv4_Constraint_3;

    {
      transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1), &transform_hlds__term_constr_initial__conv4_Constraint_3);
    }
    *transform_hlds__term_constr_initial__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_initial__conv4_Constraint_3));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_2(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_2)
{
  {
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
    MR_Word transform_hlds__term_constr_initial__conv3_Constraint_3;

    {
      transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1), &transform_hlds__term_constr_initial__conv3_Constraint_3);
    }
    *transform_hlds__term_constr_initial__wrapper_arg_2 = ((MR_Box) (transform_hlds__term_constr_initial__conv3_Constraint_3));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_1(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
    MR_Word transform_hlds__term_constr_initial__conv1_LambdaHeadVar__3_19;

    {
      transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__218__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__closure, (MR_Integer) 4))), ((MR_Integer) transform_hlds__term_constr_initial__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_2), &transform_hlds__term_constr_initial__conv1_LambdaHeadVar__3_19);
    }
    *transform_hlds__term_constr_initial__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_initial__conv1_LambdaHeadVar__3_19));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0(
  MR_Integer transform_hlds__term_constr_initial__ProcId_4,
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_11,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_12)
{
  {
    MR_bool transform_hlds__term_constr_initial__succeeded;
    MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    MR_Word transform_hlds__term_constr_initial__Term2Info0_7;
    MR_Word transform_hlds__term_constr_initial__MaybeImportSuccess_8;
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_13_13;
    MR_Box transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ProcInfo_13_13;

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_19_19, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_11, transform_hlds__term_constr_initial__ProcId_4, &transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ProcInfo_13_13);
    }
    transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_13_13 = ((MR_Word) transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ProcInfo_13_13);
    {
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__term_constr_initial__Term2Info0_7);
    }
    {
      transform_hlds__term_constr_initial__MaybeImportSuccess_8 = transform_hlds__term_constr_main_types__term2_info_get_import_success_1_f_0(transform_hlds__term_constr_initial__Term2Info0_7);
    }
    if ((transform_hlds__term_constr_initial__MaybeImportSuccess_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_12 = transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_11;
    else
      {
        MR_Word transform_hlds__term_constr_initial__TypeInfo_31_47;
        MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_27_71;
        MR_Word transform_hlds__term_constr_initial__Term2Info_10;
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_14_14;
        MR_Word transform_hlds__term_constr_initial__HeadVars_24;
        MR_Word transform_hlds__term_constr_initial__SizeVarMap_26;
        MR_Integer transform_hlds__term_constr_initial__NumHeadVars_27;
        MR_Word transform_hlds__term_constr_initial__HeadVarIds_28;
        MR_Word transform_hlds__term_constr_initial__IdsToProgVars_29;
        MR_Word transform_hlds__term_constr_initial__SubstMap_30;
        MR_Word transform_hlds__term_constr_initial__MaybeSuccessPoly_31;
        MR_Word transform_hlds__term_constr_initial__MaybeFailurePoly_32;
        MR_Word transform_hlds__term_constr_initial__SizeVars_33;
        MR_Integer transform_hlds__term_constr_initial__V_35_35;
        MR_Word transform_hlds__term_constr_initial__V_37_37;
        MR_Word transform_hlds__term_constr_initial__V_38_38;
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_23_39;
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_24_40;
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_25_41;
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_26_42;
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_28_44;
        MR_Word transform_hlds__term_constr_initial__V_57_57;
        MR_Word transform_hlds__term_constr_initial__V_58_58;
        MR_Word transform_hlds__term_constr_initial___SizeVarset_25;
        MR_Box transform_hlds__term_constr_initial__conv2_SubstMap_30;

        {
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__term_constr_initial__HeadVars_24);
        }
        {
          transform_hlds__term_constr_util__make_size_var_map_3_p_0(transform_hlds__term_constr_initial__HeadVars_24, &transform_hlds__term_constr_initial___SizeVarset_25, &transform_hlds__term_constr_initial__SizeVarMap_26);
        }
        transform_hlds__term_constr_initial__TypeInfo_31_47 = (MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[0];
        {
          mercury__list__length_2_p_0(transform_hlds__term_constr_initial__TypeInfo_31_47, transform_hlds__term_constr_initial__HeadVars_24, &transform_hlds__term_constr_initial__NumHeadVars_27);
        }
        transform_hlds__term_constr_initial__V_35_35 = (transform_hlds__term_constr_initial__NumHeadVars_27 - (MR_Integer) 1);
        {
          transform_hlds__term_constr_initial__HeadVarIds_28 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, transform_hlds__term_constr_initial__V_35_35);
        }
        {
          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, transform_hlds__term_constr_initial__TypeInfo_31_47, transform_hlds__term_constr_initial__HeadVarIds_28, transform_hlds__term_constr_initial__HeadVars_24, &transform_hlds__term_constr_initial__IdsToProgVars_29);
        }
        {
          transform_hlds__term_constr_initial__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_57_57, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_57_57, 1) = ((MR_Box) (transform_hlds__term_constr_initial__process_imported_proc_3_p_0_1));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_57_57, 3) = ((MR_Box) (transform_hlds__term_constr_initial__IdsToProgVars_29));
          MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_57_57, 4) = ((MR_Box) (transform_hlds__term_constr_initial__SizeVarMap_26));
        }
        transform_hlds__term_constr_initial__TypeCtorInfo_27_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          transform_hlds__term_constr_initial__V_58_58 = mercury__map__init_0_f_0(transform_hlds__term_constr_initial__TypeCtorInfo_27_71, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_2[1]);
        }
        {
          mercury__list__foldl_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_27_71, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[1], transform_hlds__term_constr_initial__V_57_57, transform_hlds__term_constr_initial__HeadVarIds_28, ((MR_Box) (transform_hlds__term_constr_initial__V_58_58)), &transform_hlds__term_constr_initial__conv2_SubstMap_30);
        }
        transform_hlds__term_constr_initial__SubstMap_30 = ((MR_Word) transform_hlds__term_constr_initial__conv2_SubstMap_30);
        {
          transform_hlds__term_constr_initial__V_37_37 = transform_hlds__term_constr_main_types__term2_info_get_import_success_1_f_0(transform_hlds__term_constr_initial__Term2Info0_7);
        }
        if ((transform_hlds__term_constr_initial__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__term_constr_initial__MaybeSuccessPoly_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word transform_hlds__term_constr_initial__PragmaArgSizeInfo_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_37_37, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_initial__Polyhedron_77;
            MR_Word transform_hlds__term_constr_initial__Constraints_78;
            MR_Word transform_hlds__term_constr_initial__V_79_79;

            {
              transform_hlds__term_constr_initial__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_79_79, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_3[2]));
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_79_79, 1) = ((MR_Box) (transform_hlds__term_constr_initial__process_imported_proc_3_p_0_2));
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_79_79, 3) = ((MR_Box) (transform_hlds__term_constr_initial__SubstMap_30));
            }
            {
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0, (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, transform_hlds__term_constr_initial__V_79_79, transform_hlds__term_constr_initial__PragmaArgSizeInfo_76, &transform_hlds__term_constr_initial__Constraints_78);
            }
            {
              transform_hlds__term_constr_initial__Polyhedron_77 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_initial__Constraints_78);
            }
            {
              transform_hlds__term_constr_initial__MaybeSuccessPoly_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__MaybeSuccessPoly_31, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Polyhedron_77));
            }
          }
        {
          transform_hlds__term_constr_initial__V_38_38 = transform_hlds__term_constr_main_types__term2_info_get_import_failure_1_f_0(transform_hlds__term_constr_initial__Term2Info0_7);
        }
        if ((transform_hlds__term_constr_initial__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          transform_hlds__term_constr_initial__MaybeFailurePoly_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word transform_hlds__term_constr_initial__PragmaArgSizeInfo_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__V_38_38, (MR_Integer) 0)));
            MR_Word transform_hlds__term_constr_initial__Polyhedron_87;
            MR_Word transform_hlds__term_constr_initial__Constraints_88;
            MR_Word transform_hlds__term_constr_initial__V_89_89;

            {
              transform_hlds__term_constr_initial__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_89_89, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_3[2]));
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_89_89, 1) = ((MR_Box) (transform_hlds__term_constr_initial__process_imported_proc_3_p_0_3));
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__V_89_89, 3) = ((MR_Box) (transform_hlds__term_constr_initial__SubstMap_30));
            }
            {
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_size_constr_0, (MR_Word) &libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0, transform_hlds__term_constr_initial__V_89_89, transform_hlds__term_constr_initial__PragmaArgSizeInfo_86, &transform_hlds__term_constr_initial__Constraints_88);
            }
            {
              transform_hlds__term_constr_initial__Polyhedron_87 = libs__polyhedron__from_constraints_1_f_0(transform_hlds__term_constr_initial__Constraints_88);
            }
            {
              transform_hlds__term_constr_initial__MaybeFailurePoly_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), transform_hlds__term_constr_initial__MaybeFailurePoly_32, 0) = ((MR_Box) (transform_hlds__term_constr_initial__Polyhedron_87));
            }
          }
        {
          transform_hlds__term_constr_initial__SizeVars_33 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(transform_hlds__term_constr_initial__SizeVarMap_26, transform_hlds__term_constr_initial__HeadVars_24);
        }
        {
          transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(transform_hlds__term_constr_initial__SizeVarMap_26, transform_hlds__term_constr_initial__Term2Info0_7, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_23_39);
        }
        {
          transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(transform_hlds__term_constr_initial__SizeVars_33, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_23_39, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_24_40);
        }
        {
          transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(transform_hlds__term_constr_initial__MaybeSuccessPoly_31, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_24_40, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_25_41);
        }
        {
          transform_hlds__term_constr_main_types__term2_info_set_failure_constrs_3_p_0(transform_hlds__term_constr_initial__MaybeFailurePoly_32, transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_25_41, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_26_42);
        }
        {
          transform_hlds__term_constr_main_types__term2_info_set_import_success_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_26_42, &transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_28_44);
        }
        {
          transform_hlds__term_constr_main_types__term2_info_set_import_failure_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__term_constr_initial__STATE_VARIABLE_Term2Info_28_44, &transform_hlds__term_constr_initial__Term2Info_10);
        }
        {
          hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(transform_hlds__term_constr_initial__Term2Info_10, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_13_13, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_14_14);
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_19_19, transform_hlds__term_constr_initial__ProcId_4, ((MR_Box) (transform_hlds__term_constr_initial__STATE_VARIABLE_ProcInfo_14_14)), transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_0_11, transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_12);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0_1(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
    MR_Word transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ProcTable_12;

    {
      transform_hlds__term_constr_initial__process_imported_proc_3_p_0(((MR_Integer) transform_hlds__term_constr_initial__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_2), &transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ProcTable_12);
    }
    *transform_hlds__term_constr_initial__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ProcTable_12));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0(
  MR_Word transform_hlds__term_constr_initial__PredId_4,
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_bool transform_hlds__term_constr_initial__succeeded;
    MR_Word transform_hlds__term_constr_initial__TypeSpecInfo_7;
    MR_Word transform_hlds__term_constr_initial__TypeSpecPredIds_9;
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_16_16;
    MR_Word transform_hlds__term_constr_initial__V_8_8;
    MR_Word transform_hlds__term_constr_initial__V_10_10;
    MR_Word transform_hlds__term_constr_initial__V_11_11;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14, &transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_16_16);
    }
    {
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14, &transform_hlds__term_constr_initial__TypeSpecInfo_7);
    }
    transform_hlds__term_constr_initial__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__TypeSpecInfo_7, (MR_Integer) 0)));
    transform_hlds__term_constr_initial__TypeSpecPredIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__TypeSpecInfo_7, (MR_Integer) 1)));
    transform_hlds__term_constr_initial__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__TypeSpecInfo_7, (MR_Integer) 2)));
    transform_hlds__term_constr_initial__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__term_constr_initial__TypeSpecInfo_7, (MR_Integer) 3)));
    {
      transform_hlds__term_constr_initial__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__term_constr_initial__PredId_4)), transform_hlds__term_constr_initial__TypeSpecPredIds_9);
    }
    if (transform_hlds__term_constr_initial__succeeded)
      *transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_15 = transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14;
    else
      {
        MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_21_21 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        MR_Word transform_hlds__term_constr_initial__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
        MR_Word transform_hlds__term_constr_initial__PredInfo0_12;
        MR_Word transform_hlds__term_constr_initial__PredInfo_13;
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_17_19;
        MR_Word transform_hlds__term_constr_initial__ProcIds_27;
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_8_28;
        MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_10_30;
        MR_Box transform_hlds__term_constr_initial__conv0_PredInfo0_12;
        MR_Box transform_hlds__term_constr_initial__conv2_STATE_VARIABLE_ProcTable_10_30;

        {
          mercury__map__lookup_3_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_21_21, transform_hlds__term_constr_initial__TypeCtorInfo_22_22, transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_16_16, ((MR_Box) (transform_hlds__term_constr_initial__PredId_4)), &transform_hlds__term_constr_initial__conv0_PredInfo0_12);
        }
        transform_hlds__term_constr_initial__PredInfo0_12 = ((MR_Word) transform_hlds__term_constr_initial__conv0_PredInfo0_12);
        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__term_constr_initial__PredInfo0_12, &transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_8_28);
        }
        {
          transform_hlds__term_constr_initial__ProcIds_27 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__term_constr_initial__PredInfo0_12);
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[0], (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[4], transform_hlds__term_constr_initial__ProcIds_27, ((MR_Box) (transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_8_28)), &transform_hlds__term_constr_initial__conv2_STATE_VARIABLE_ProcTable_10_30);
        }
        transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_10_30 = ((MR_Word) transform_hlds__term_constr_initial__conv2_STATE_VARIABLE_ProcTable_10_30);
        {
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ProcTable_10_30, transform_hlds__term_constr_initial__PredInfo0_12, &transform_hlds__term_constr_initial__PredInfo_13);
        }
        {
          mercury__map__det_update_4_p_0(transform_hlds__term_constr_initial__TypeCtorInfo_21_21, transform_hlds__term_constr_initial__TypeCtorInfo_22_22, ((MR_Box) (transform_hlds__term_constr_initial__PredId_4)), ((MR_Box) (transform_hlds__term_constr_initial__PredInfo_13)), transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_16_16, &transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_17_19);
        }
        {
          hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_PredTable_17_19, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_14, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_15);
        }
      }
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0_1(
  MR_Box transform_hlds__term_constr_initial__closure_arg,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_1,
  MR_Box transform_hlds__term_constr_initial__wrapper_arg_2,
  MR_Box * transform_hlds__term_constr_initial__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__term_constr_initial__closure = transform_hlds__term_constr_initial__closure_arg;
    MR_Word transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ModuleInfo_15;

    {
      transform_hlds__term_constr_initial__process_imported_pred_3_p_0(((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_1), ((MR_Word) transform_hlds__term_constr_initial__wrapper_arg_2), &transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ModuleInfo_15);
    }
    *transform_hlds__term_constr_initial__wrapper_arg_3 = ((MR_Box) (transform_hlds__term_constr_initial__conv0_STATE_VARIABLE_ModuleInfo_15));
  }
}

void MR_CALL 
transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0(
  MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_bool transform_hlds__term_constr_initial__succeeded;
    MR_Word transform_hlds__term_constr_initial__PredIds_4;
    MR_Word transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_7_7;
    MR_Box transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ModuleInfo_6;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__term_constr_initial__PredIds_4);
    }
    {
      transform_hlds__term_constr_initial__process_builtin_preds_3_p_0(transform_hlds__term_constr_initial__PredIds_4, transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_0_5, &transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_7_7);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__term_constr_initial_scalar_common_1[3], transform_hlds__term_constr_initial__PredIds_4, ((MR_Box) (transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_7_7)), &transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ModuleInfo_6);
    }
    *transform_hlds__term_constr_initial__STATE_VARIABLE_ModuleInfo_6 = ((MR_Word) transform_hlds__term_constr_initial__conv1_STATE_VARIABLE_ModuleInfo_6);
  }
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
