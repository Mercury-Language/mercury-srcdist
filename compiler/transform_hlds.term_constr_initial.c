/*
** Automatically generated from `term_constr_initial.m'
** by the Mercury compiler,
** version rotd-2018-07-04
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module transform_hlds.term_constr_initial.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__438__1_2_p_0(
  MR_Word HeadVar__1_36,
  MR_Word HeadVar__2_61);

static void MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__219__1_5_p_0(
  MR_Word IdToProgVar_6,
  MR_Word SizeVarMap_7,
  MR_Integer LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static void MR_CALL 
transform_hlds__term_constr_initial__create_lp_term_3_p_0(
  MR_Word SubstMap_4,
  MR_Word ArgSizeTerm_5,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(
  MR_Word SubstMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * Constraint_3);

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0(
  MR_Integer ProcId_4,
  MR_Word STATE_VARIABLE_ProcTable_0_11,
  MR_Word * STATE_VARIABLE_ProcTable_12);

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_initial__process_builtin_preds_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3);

static void MR_CALL 
transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredInfo_3,
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcTable_0_5,
  MR_Word * STATE_VARIABLE_ProcTable_6);

static void MR_CALL 
transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ProcTable_0_2,
  MR_Word * STATE_VARIABLE_ProcTable_3);

static void MR_CALL 
transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SpecialPredId_2,
  MR_Word ModuleInfo_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5);

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadProgVars_2,
  MR_Word ModuleInfo_3,
  MR_Word VarTypes_4,
  MR_Word * HeadVar__5_5,
  MR_Word * Termination_6,
  MR_Word * SizeVarMap_7,
  MR_Word * HeadSizeVars_8);

static void MR_CALL 
transform_hlds__term_constr_initial__make_info_7_p_0(
  MR_Word HeadProgVars_8,
  MR_Word ModuleInfo_9,
  MR_Word VarTypes_10,
  MR_Word * ArgSize_11,
  MR_Word * Termination_12,
  MR_Word * SizeVarMap_13,
  MR_Word * HeadSizeVars_14);


static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_2[2][2];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_3[5][1];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_4[2][5];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_6[4][6];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_7[1][8];


/* sealed */ struct transform_hlds__term_constr_initial__vector_common_type_5_0_s {
  const MR_String transform_hlds__term_constr_initial__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct transform_hlds__term_constr_initial__vector_common_type_5_0_s transform_hlds__term_constr_initial_vector_common_5[4];



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
    ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[1])),
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

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_3[0]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_4[2][5] = {
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

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_6[4][6] = {
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
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_7[1][8] = {
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


static /* final */ const struct transform_hlds__term_constr_initial__vector_common_type_5_0_s transform_hlds__term_constr_initial_vector_common_5[4] = {
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



static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial____vpti_pred_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_PseudoTypeInfo) (&libs__rat__libs__rat__type_ctor_info_rat_0)
  }
};

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__438__1_2_p_0(
  MR_Word HeadVar__1_36,
  MR_Word HeadVar__2_61)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[1]), HeadVar__1_36, ((MR_Box) (HeadVar__2_61)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__219__1_5_p_0(
  MR_Word IdToProgVar_6,
  MR_Word SizeVarMap_7,
  MR_Integer LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17)
{
  {
    MR_Word ProgVar_11;
    MR_Word SizeVar_12;
    MR_Box conv0_ProgVar_11;
    MR_Box conv1_SizeVar_12;

    conv0_ProgVar_11 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[0]), LambdaHeadVar__1_15, IdToProgVar_6);
    ProgVar_11 = ((MR_Word) (conv0_ProgVar_11));
    conv1_SizeVar_12 = mercury__map__lookup_2_f_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[0]), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[1]), SizeVarMap_7, ((MR_Box) (ProgVar_11)));
    SizeVar_12 = ((MR_Word) (conv1_SizeVar_12));
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[1]), LambdaHeadVar__1_15, ((MR_Box) (SizeVar_12)), LambdaHeadVar__2_16, LambdaHeadVar__3_17);
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__create_lp_term_3_p_0(
  MR_Word SubstMap_4,
  MR_Word ArgSizeTerm_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word Var_6;
    MR_Word Coefficient_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgSizeTerm_5, (MR_Integer) 1))));
    MR_Integer VarId_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgSizeTerm_5, (MR_Integer) 0))));
    MR_Box conv0_Var_6;

    conv0_Var_6 = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_101_108_101_109_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_2_f_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[1]), VarId_8, SubstMap_4);
    Var_6 = ((MR_Word) (conv0_Var_6));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Coefficient_7));
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    transform_hlds__term_constr_initial__create_lp_term_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    transform_hlds__term_constr_initial__create_lp_term_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(
  MR_Word SubstMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * Constraint_3)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Terms0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Constant_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Terms_15;
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (SubstMap_1));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_1[2]), Var_16, Terms0_12, &Terms_15);
    *Constraint_3 = libs__lp_rational__construct_constraint_3_f_0(Terms_15, (MR_Integer) 1, Constant_13);
  }
  else
  {
    MR_Word Terms0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Constant_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Terms_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_2));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (SubstMap_1));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_1[2]), Var_9, Terms0_5, &Terms_8);
    *Constraint_3 = libs__lp_rational__construct_constraint_3_f_0(Terms_8, (MR_Integer) 0, Constant_6);
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Constraint_3;

    transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Constraint_3);
    *wrapper_arg_2 = ((MR_Box) (conv4_Constraint_3));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_Constraint_3;

    transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_3);
    *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_3));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__3_17;

    transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__219__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_17);
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_17));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0(
  MR_Integer ProcId_4,
  MR_Word STATE_VARIABLE_ProcTable_0_11,
  MR_Word * STATE_VARIABLE_ProcTable_12)
{
  {
    MR_Word Term2Info0_7;
    MR_Word MaybeImportSuccess_8;
    MR_Word STATE_VARIABLE_ProcInfo_13_13;
    MR_Box conv0_STATE_VARIABLE_ProcInfo_13_13;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_11, ((MR_Box) (ProcId_4)), &conv0_STATE_VARIABLE_ProcInfo_13_13);
    STATE_VARIABLE_ProcInfo_13_13 = ((MR_Word) (conv0_STATE_VARIABLE_ProcInfo_13_13));
    hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(STATE_VARIABLE_ProcInfo_13_13, &Term2Info0_7);
    MaybeImportSuccess_8 = transform_hlds__term_constr_main_types__term2_info_get_import_success_1_f_0(Term2Info0_7);
    if ((MaybeImportSuccess_8 == (MR_Word) ((MR_Integer) 0)))
      *STATE_VARIABLE_ProcTable_12 = STATE_VARIABLE_ProcTable_0_11;
    else
    {
      MR_Word Term2Info_10;
      MR_Word STATE_VARIABLE_ProcInfo_14_14;
      MR_Word HeadVars_22;
      MR_Word SizeVarMap_24;
      MR_Integer NumHeadVars_25;
      MR_Word HeadVarIds_26;
      MR_Word IdsToProgVars_27;
      MR_Word SubstMap_28;
      MR_Word MaybeSuccessPoly_29;
      MR_Word MaybeFailurePoly_30;
      MR_Word SizeVars_31;
      MR_Integer Var_33;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word STATE_VARIABLE_Term2Info_23_37;
      MR_Word STATE_VARIABLE_Term2Info_24_38;
      MR_Word STATE_VARIABLE_Term2Info_25_39;
      MR_Word STATE_VARIABLE_Term2Info_26_40;
      MR_Word STATE_VARIABLE_Term2Info_28_42;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word _SizeVarset_23;
      MR_Box conv2_SubstMap_28;

      hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_13_13, &HeadVars_22);
      transform_hlds__term_constr_util__make_size_var_map_3_p_0(HeadVars_22, &_SizeVarset_23, &SizeVarMap_24);
      mercury__list__length_2_p_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[0]), HeadVars_22, &NumHeadVars_25);
      Var_33 = (MR_Integer) ((MR_Unsigned) NumHeadVars_25 - (MR_Unsigned) (MR_Integer) 1);
      HeadVarIds_26 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_33);
      mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[0]), HeadVarIds_26, HeadVars_22, &IdsToProgVars_27);
      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (transform_hlds__term_constr_initial__process_imported_proc_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_55, 3) = ((MR_Box) (IdsToProgVars_27));
        MR_hl_field(MR_mktag(0), Var_55, 4) = ((MR_Box) (SizeVarMap_24));
      }
      Var_56 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[1]));
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_1[1]), Var_55, HeadVarIds_26, ((MR_Box) (Var_56)), &conv2_SubstMap_28);
      SubstMap_28 = ((MR_Word) (conv2_SubstMap_28));
      Var_35 = transform_hlds__term_constr_main_types__term2_info_get_import_success_1_f_0(Term2Info0_7);
      if ((Var_35 == (MR_Word) ((MR_Integer) 0)))
        MaybeSuccessPoly_29 = (MR_Word) ((MR_Integer) 0);
      else
      {
        MR_Word PragmaArgSizeInfo_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
        MR_Word Polyhedron_75;
        MR_Word Constraints_76;
        MR_Word Var_77;

        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (transform_hlds__term_constr_initial__process_imported_proc_3_p_0_2));
          MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (SubstMap_28));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Var_77, PragmaArgSizeInfo_74, &Constraints_76);
        Polyhedron_75 = libs__polyhedron__from_constraints_1_f_0(Constraints_76);
        {
          MaybeSuccessPoly_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeSuccessPoly_29, 0) = ((MR_Box) (Polyhedron_75));
        }
      }
      Var_36 = transform_hlds__term_constr_main_types__term2_info_get_import_failure_1_f_0(Term2Info0_7);
      if ((Var_36 == (MR_Word) ((MR_Integer) 0)))
        MaybeFailurePoly_30 = (MR_Word) ((MR_Integer) 0);
      else
      {
        MR_Word PragmaArgSizeInfo_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 0))));
        MR_Word Polyhedron_85;
        MR_Word Constraints_86;
        MR_Word Var_87;

        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (transform_hlds__term_constr_initial__process_imported_proc_3_p_0_3));
          MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (SubstMap_28));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_constraint_0), Var_87, PragmaArgSizeInfo_84, &Constraints_86);
        Polyhedron_85 = libs__polyhedron__from_constraints_1_f_0(Constraints_86);
        {
          MaybeFailurePoly_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeFailurePoly_30, 0) = ((MR_Box) (Polyhedron_85));
        }
      }
      SizeVars_31 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_24, HeadVars_22);
      transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(SizeVarMap_24, Term2Info0_7, &STATE_VARIABLE_Term2Info_23_37);
      transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(SizeVars_31, STATE_VARIABLE_Term2Info_23_37, &STATE_VARIABLE_Term2Info_24_38);
      transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(MaybeSuccessPoly_29, STATE_VARIABLE_Term2Info_24_38, &STATE_VARIABLE_Term2Info_25_39);
      transform_hlds__term_constr_main_types__term2_info_set_failure_constrs_3_p_0(MaybeFailurePoly_30, STATE_VARIABLE_Term2Info_25_39, &STATE_VARIABLE_Term2Info_26_40);
      transform_hlds__term_constr_main_types__term2_info_set_import_success_3_p_0((MR_Word) ((MR_Integer) 0), STATE_VARIABLE_Term2Info_26_40, &STATE_VARIABLE_Term2Info_28_42);
      transform_hlds__term_constr_main_types__term2_info_set_import_failure_3_p_0((MR_Word) ((MR_Integer) 0), STATE_VARIABLE_Term2Info_28_42, &Term2Info_10);
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(Term2Info_10, STATE_VARIABLE_ProcInfo_13_13, &STATE_VARIABLE_ProcInfo_14_14);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_4)), ((MR_Box) (STATE_VARIABLE_ProcInfo_14_14)), STATE_VARIABLE_ProcTable_0_11, STATE_VARIABLE_ProcTable_12);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ProcTable_12;

    transform_hlds__term_constr_initial__process_imported_proc_3_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcTable_12);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcTable_12));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_bool succeeded;
    MR_Word TypeSpecInfo_7;
    MR_Word TypeSpecPredIds_9;
    MR_Word STATE_VARIABLE_PredTable_16_16;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &STATE_VARIABLE_PredTable_16_16);
    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_14, &TypeSpecInfo_7);
    TypeSpecPredIds_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_7, (MR_Integer) 1))));
    succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_4)), TypeSpecPredIds_9);
    if (succeeded)
      *STATE_VARIABLE_ModuleInfo_15 = STATE_VARIABLE_ModuleInfo_0_14;
    else
    {
      MR_Word PredInfo0_12;
      MR_Word PredInfo_13;
      MR_Word STATE_VARIABLE_PredTable_17_17;
      MR_Word ProcIds_26;
      MR_Word STATE_VARIABLE_ProcTable_8_27;
      MR_Word STATE_VARIABLE_ProcTable_10_29;
      MR_Box conv0_PredInfo0_12;
      MR_Box conv2_STATE_VARIABLE_ProcTable_10_29;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_16_16, ((MR_Box) (PredId_4)), &conv0_PredInfo0_12);
      PredInfo0_12 = ((MR_Word) (conv0_PredInfo0_12));
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_12, &STATE_VARIABLE_ProcTable_8_27);
      ProcIds_26 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo0_12);
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_1[4]), ProcIds_26, ((MR_Box) (STATE_VARIABLE_ProcTable_8_27)), &conv2_STATE_VARIABLE_ProcTable_10_29);
      STATE_VARIABLE_ProcTable_10_29 = ((MR_Word) (conv2_STATE_VARIABLE_ProcTable_10_29));
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(STATE_VARIABLE_ProcTable_10_29, PredInfo0_12, &PredInfo_13);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_4)), ((MR_Box) (PredInfo_13)), STATE_VARIABLE_PredTable_16_16, &STATE_VARIABLE_PredTable_17_17);
      hlds__hlds_module__module_info_set_preds_3_p_0(STATE_VARIABLE_PredTable_17_17, STATE_VARIABLE_ModuleInfo_0_14, STATE_VARIABLE_ModuleInfo_15);
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_15;

    transform_hlds__term_constr_initial__process_imported_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_15);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_15));
  }
}

void MR_CALL 
transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  {
    MR_Word PredIds_4;
    MR_Word STATE_VARIABLE_ModuleInfo_7_7;
    MR_Box conv1_STATE_VARIABLE_ModuleInfo_6;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_5, &PredIds_4);
    transform_hlds__term_constr_initial__process_builtin_preds_3_p_0(PredIds_4, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_7_7);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_1[3]), PredIds_4, ((MR_Box) (STATE_VARIABLE_ModuleInfo_7_7)), &conv1_STATE_VARIABLE_ModuleInfo_6);
    *STATE_VARIABLE_ModuleInfo_6 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_6));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_builtin_preds_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    else
    {
      MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Globals_10;
      MR_Word OpMode_11;
      MR_Word MakeOptInt_12;
      MR_Word PredInfo0_14;
      MR_Word PredInfo_15;
      MR_Word STATE_VARIABLE_PredTable_20_20;
      MR_Word STATE_VARIABLE_PredTable_21_21;
      MR_Word STATE_VARIABLE_ModuleInfo_22_22;
      MR_Word PredStatus_32;
      MR_Word Markers_33;
      MR_Word Context_34;
      MR_Word ProcIds_36;
      MR_Word STATE_VARIABLE_ProcTable_21_41;
      MR_Word STATE_VARIABLE_ProcTable_30_50;
      MR_Word STATE_VARIABLE_ProcTable_52_72;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Box conv0_PredInfo0_14;
      MR_Word STATE_VARIABLE_ProcTable_22_42;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_2, &Globals_10);
      libs__globals__get_op_mode_2_p_0(Globals_10, &OpMode_11);
      succeeded = ((MR_tag((MR_Word) OpMode_11)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_11, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0))));
          succeeded = (Var_19 == (MR_Word) ((MR_Integer) 0));
        }
      }
      if (succeeded)
        MakeOptInt_12 = (MR_Integer) 1;
      else
        MakeOptInt_12 = (MR_Integer) 0;
      hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_PredTable_20_20);
      conv0_PredInfo0_14 = mercury__map__det_elem_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_7)), STATE_VARIABLE_PredTable_20_20);
      PredInfo0_14 = ((MR_Word) (conv0_PredInfo0_14));
      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_14, &PredStatus_32);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_14, &Markers_33);
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_14, &Context_34);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_14, &STATE_VARIABLE_ProcTable_21_41);
      ProcIds_36 = hlds__hlds_pred__pred_info_procids_1_f_0(PredInfo0_14);
      succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo0_14);
      if (succeeded)
      {
        transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_p_0(ProcIds_36, PredInfo0_14, STATE_VARIABLE_ModuleInfo_0_2, STATE_VARIABLE_ProcTable_21_41, &STATE_VARIABLE_ProcTable_22_42);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word SpecialPredId_87;
        MR_Word SpecPredId0_84;
        MR_String Name_82;
        MR_Integer Arity_83;
        MR_Word ModuleName_86;
        MR_Integer Var_92;
        MR_String Var_85;

        Name_82 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_14);
        Arity_83 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo0_14);
        succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&SpecPredId0_84, Name_82, &Var_85, &Var_92);
        if (succeeded)
        {
          succeeded = (Arity_83 == Var_92);
          if (succeeded)
          {
            ModuleName_86 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_14);
            succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(ModuleName_86);
          }
        }
        if (succeeded)
        {
          SpecialPredId_87 = SpecPredId0_84;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word PredOrigin_88;

          hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_14, &PredOrigin_88);
          succeeded = ((MR_tag((MR_Word) PredOrigin_88)) == (MR_Integer) 0);
          if (succeeded)
            SpecialPredId_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredOrigin_88, (MR_Integer) 0))));
        }
        if (succeeded)
        {
          transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(ProcIds_36, SpecialPredId_87, STATE_VARIABLE_ModuleInfo_0_2, STATE_VARIABLE_ProcTable_21_41, &STATE_VARIABLE_ProcTable_22_42);
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        STATE_VARIABLE_ProcTable_30_50 = STATE_VARIABLE_ProcTable_22_42;
      else
      {
        MR_Word Var_43;

        Var_43 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_32);
        succeeded = (Var_43 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_33, (MR_Integer) 19);
          if (succeeded)
          {
            MR_Word ArgSizeInfo_38;
            MR_Word STATE_VARIABLE_ProcTable_27_47;
            MR_Word STATE_VARIABLE_ProcTable_29_49;

            transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(ProcIds_36, (MR_Integer) 1, (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_3[3]), STATE_VARIABLE_ProcTable_21_41, &STATE_VARIABLE_ProcTable_27_47);
            ArgSizeInfo_38 = libs__polyhedron__universe_0_f_0();
            transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(ProcIds_36, (MR_Integer) 1, ArgSizeInfo_38, STATE_VARIABLE_ProcTable_27_47, &STATE_VARIABLE_ProcTable_29_49);
            transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(ProcIds_36, STATE_VARIABLE_ProcTable_29_49, &STATE_VARIABLE_ProcTable_30_50);
          }
          else
            STATE_VARIABLE_ProcTable_30_50 = STATE_VARIABLE_ProcTable_21_41;
        }
        else
        {
          MR_Word STATE_VARIABLE_ProcTable_35_55;
          MR_Word ArgSizeInfo_74;

          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_33, (MR_Integer) 19);
          if (!(succeeded))
          {
            MR_Word Var_51;

            succeeded = (MakeOptInt_12 == (MR_Integer) 0);
            if (succeeded)
            {
              Var_51 = (MR_Integer) 21;
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_33, Var_51);
            }
          }
          if (succeeded)
          {
            transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(ProcIds_36, (MR_Integer) 1, (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_3[3]), STATE_VARIABLE_ProcTable_21_41, &STATE_VARIABLE_ProcTable_35_55);
          }
          else
          {
            transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(ProcIds_36, (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_3[4])), STATE_VARIABLE_ProcTable_21_41, &STATE_VARIABLE_ProcTable_35_55);
          }
          ArgSizeInfo_74 = libs__polyhedron__universe_0_f_0();
          transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(ProcIds_36, (MR_Integer) 1, ArgSizeInfo_74, STATE_VARIABLE_ProcTable_35_55, &STATE_VARIABLE_ProcTable_30_50);
        }
      }
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_33, (MR_Integer) 20);
      if (succeeded)
      {
        MR_Word TerminationInfo_39;
        MR_Word NonTermArgSizeInfo_40;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word STATE_VARIABLE_ProcTable_49_69;
        MR_Word STATE_VARIABLE_ProcTable_51_71;

        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_66, 0) = ((MR_Box) (PredId_7));
        }
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (Context_34));
          MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          TerminationInfo_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TerminationInfo_39, 0) = ((MR_Box) (Var_64));
        }
        NonTermArgSizeInfo_40 = libs__polyhedron__universe_0_f_0();
        transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(ProcIds_36, (MR_Integer) 1, TerminationInfo_39, STATE_VARIABLE_ProcTable_30_50, &STATE_VARIABLE_ProcTable_49_69);
        transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(ProcIds_36, (MR_Integer) 1, NonTermArgSizeInfo_40, STATE_VARIABLE_ProcTable_49_69, &STATE_VARIABLE_ProcTable_51_71);
        transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(ProcIds_36, STATE_VARIABLE_ProcTable_51_71, &STATE_VARIABLE_ProcTable_52_72);
      }
      else
        STATE_VARIABLE_ProcTable_52_72 = STATE_VARIABLE_ProcTable_30_50;
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(STATE_VARIABLE_ProcTable_52_72, PredInfo0_14, &PredInfo_15);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_7)), ((MR_Box) (PredInfo_15)), STATE_VARIABLE_PredTable_20_20, &STATE_VARIABLE_PredTable_21_21);
      hlds__hlds_module__module_info_set_preds_3_p_0(STATE_VARIABLE_PredTable_21_21, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_8;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_22_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_50_93_95_48_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredInfo_3,
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_ProcTable_0_5,
  MR_Word * STATE_VARIABLE_ProcTable_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
      *STATE_VARIABLE_ProcTable_6 = STATE_VARIABLE_ProcTable_0_5;
    else
    {
      MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProcIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProcInfo0_19;
      MR_Word HeadVars_20;
      MR_Word PredModule_21;
      MR_String PredName_22;
      MR_Integer PredArity_23;
      MR_Word SizeVarMap_25;
      MR_Word Constrs_26;
      MR_Word Polyhedron_27;
      MR_Word ArgSizeInfo_28;
      MR_Word HeadSizeVars_29;
      MR_Word TermStatus_31;
      MR_Word IntermodStatus_32;
      MR_Word ProcInfo_33;
      MR_Word STATE_VARIABLE_Term2Info_38_38;
      MR_Word STATE_VARIABLE_Term2Info_39_39;
      MR_Word STATE_VARIABLE_Term2Info_42_42;
      MR_Word STATE_VARIABLE_Term2Info_44_44;
      MR_Word STATE_VARIABLE_Term2Info_45_45;
      MR_Word STATE_VARIABLE_Term2Info_46_46;
      MR_Word STATE_VARIABLE_ProcTable_47_47;
      MR_Box conv0_ProcInfo0_19;
      MR_Word _SizeVarset_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_5;

      conv0_ProcInfo0_19 = mercury__map__det_elem_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_13)), STATE_VARIABLE_ProcTable_0_5);
      ProcInfo0_19 = ((MR_Word) (conv0_ProcInfo0_19));
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_19, &HeadVars_20);
      PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_3);
      PredName_22 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_3);
      PredArity_23 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_3);
      transform_hlds__term_constr_util__make_size_var_map_3_p_0(HeadVars_20, &_SizeVarset_24, &SizeVarMap_25);
      succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_21, PredName_22, PredArity_23);
      if (succeeded)
      {
        MR_Word ConstraintsPrime_59;
        MR_Word HVar1_55;
        MR_Word HVar2_56;
        MR_Word Var_60;
        MR_Word Var_61;

        succeeded = ((MR_tag((MR_Word) HeadVars_20)) == (MR_Integer) 1);
        if (succeeded)
        {
          HVar1_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_20, (MR_Integer) 0))));
          Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVars_20, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_Integer) 1);
          if (succeeded)
          {
            HVar2_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0))));
            Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1))));
            succeeded = (Var_61 == (MR_Word) ((MR_Integer) 0));
            if (succeeded)
            {
              if ((strcmp(PredName_22, (MR_String) "unsafe_type_cast") == 0))
                succeeded = MR_TRUE;
              else
              if ((strcmp(PredName_22, (MR_String) "unsafe_promise_unique") == 0))
                succeeded = MR_TRUE;
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                MR_Word SizeVar1_57;
                MR_Word SizeVar2_58;
                MR_Word Var_62;

                SizeVar1_57 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_25, HVar1_55);
                SizeVar2_58 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_25, HVar2_56);
                Var_62 = libs__lp_rational__make_vars_eq_constraint_2_f_0(SizeVar1_57, SizeVar2_58);
                {
                  ConstraintsPrime_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ConstraintsPrime_59, 0) = ((MR_Box) (Var_62));
                  MR_hl_field(MR_mktag(1), ConstraintsPrime_59, 1) = ((MR_Box) ((MR_Integer) 0));
                }
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Integer lo_0 = (MR_Integer) 0;
                MR_Integer hi_1 = (MR_Integer) 3;
                MR_Integer mid_2;
                MR_Integer result_3;

                // binary string simple lookup switch
                ;
                do
                {
                  mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
                  result_3 = MR_strcmp(PredName_22, ((&transform_hlds__term_constr_initial_vector_common_5[0 + mid_2]))->transform_hlds__term_constr_initial__vector_common_type_5_0__vct_5_f_0);
                  if ((result_3 == (MR_Integer) 0))
                  {
                    succeeded = MR_TRUE;
                    // jump out of search loop
                    ;
                    goto label_0;
                  }
                  else
                  if ((result_3 < (MR_Integer) 0))
                    hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) (MR_Integer) 1);
                  else
                    lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) (MR_Integer) 1);
                }
                while ((lo_0 <= hi_1));
                succeeded = MR_FALSE;
              label_0:;
                if (succeeded)
                {
                  ConstraintsPrime_59 = (MR_Word) ((MR_Integer) 0);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        if (succeeded)
          Constrs_26 = ConstraintsPrime_59;
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", (MR_String) "unrecognised predicate");
            return;
          }
        }
      }
      else
      {
        succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(ModuleInfo_4, PredInfo_3, ProcInfo0_19);
        if (succeeded)
          Constrs_26 = (MR_Word) ((MR_Integer) 0);
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_initial.set_builtin_terminates\'/6", (MR_String) "builtin with non-zero size args");
            return;
          }
        }
      }
      Polyhedron_27 = libs__polyhedron__from_constraints_1_f_0(Constrs_26);
      {
        ArgSizeInfo_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ArgSizeInfo_28, 0) = ((MR_Box) (Polyhedron_27));
      }
      HeadSizeVars_29 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_25, HeadVars_20);
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_19, &STATE_VARIABLE_Term2Info_38_38);
      transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(ArgSizeInfo_28, STATE_VARIABLE_Term2Info_38_38, &STATE_VARIABLE_Term2Info_39_39);
      TermStatus_31 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_3[2]));
      transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(TermStatus_31, STATE_VARIABLE_Term2Info_39_39, &STATE_VARIABLE_Term2Info_42_42);
      IntermodStatus_32 = (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_3[1]));
      transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0(IntermodStatus_32, STATE_VARIABLE_Term2Info_42_42, &STATE_VARIABLE_Term2Info_44_44);
      transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(SizeVarMap_25, STATE_VARIABLE_Term2Info_44_44, &STATE_VARIABLE_Term2Info_45_45);
      transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(HeadSizeVars_29, STATE_VARIABLE_Term2Info_45_45, &STATE_VARIABLE_Term2Info_46_46);
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(STATE_VARIABLE_Term2Info_46_46, ProcInfo0_19, &ProcInfo_33);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_13)), ((MR_Box) (ProcInfo_33)), STATE_VARIABLE_ProcTable_0_5, &STATE_VARIABLE_ProcTable_47_47);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_14;
      next_value_of_STATE_VARIABLE_ProcTable_0_5 = STATE_VARIABLE_ProcTable_47_47;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_5 = next_value_of_STATE_VARIABLE_ProcTable_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ProcTable_0_2,
  MR_Word * STATE_VARIABLE_ProcTable_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
      *STATE_VARIABLE_ProcTable_3 = STATE_VARIABLE_ProcTable_0_2;
    else
    {
      MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProcIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProcInfo0_10;
      MR_Word Term2Info0_11;
      MR_Word HeadVars_12;
      MR_Word SizeVarMap_14;
      MR_Word Term2Info_15;
      MR_Word ProcInfo_16;
      MR_Word STATE_VARIABLE_ProcTable_19_19;
      MR_Box conv0_ProcInfo0_10;
      MR_Word _SizeVarset_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_2;

      conv0_ProcInfo0_10 = mercury__map__det_elem_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_7)), STATE_VARIABLE_ProcTable_0_2);
      ProcInfo0_10 = ((MR_Word) (conv0_ProcInfo0_10));
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_10, &Term2Info0_11);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_10, &HeadVars_12);
      transform_hlds__term_constr_util__make_size_var_map_3_p_0(HeadVars_12, &_SizeVarset_13, &SizeVarMap_14);
      transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(SizeVarMap_14, Term2Info0_11, &Term2Info_15);
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(Term2Info_15, ProcInfo0_10, &ProcInfo_16);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_7)), ((MR_Box) (ProcInfo_16)), STATE_VARIABLE_ProcTable_0_2, &STATE_VARIABLE_ProcTable_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_8;
      next_value_of_STATE_VARIABLE_ProcTable_0_2 = STATE_VARIABLE_ProcTable_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_2 = next_value_of_STATE_VARIABLE_ProcTable_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SpecialPredId_2,
  MR_Word ModuleInfo_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Integer) 0)))
      *STATE_VARIABLE_ProcTable_5 = STATE_VARIABLE_ProcTable_0_4;
    else
    {
      MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ProcIds_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ProcInfo0_16;
      MR_Word HeadVars_17;
      MR_Word VarTypes_18;
      MR_Word ArgSize_19;
      MR_Word Termination_20;
      MR_Word VarMap_21;
      MR_Word HeadSizeVars_22;
      MR_Word TermStatus_24;
      MR_Word ProcInfo_26;
      MR_Word STATE_VARIABLE_Term2Info_29_29;
      MR_Word Var_30;
      MR_Word STATE_VARIABLE_Term2Info_31_31;
      MR_Word STATE_VARIABLE_Term2Info_32_32;
      MR_Word STATE_VARIABLE_Term2Info_34_34;
      MR_Word STATE_VARIABLE_Term2Info_35_35;
      MR_Word STATE_VARIABLE_Term2Info_36_36;
      MR_Word STATE_VARIABLE_ProcTable_37_37;
      MR_Box conv0_ProcInfo0_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_4;

      conv0_ProcInfo0_16 = mercury__map__det_elem_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_11)), STATE_VARIABLE_ProcTable_0_4);
      ProcInfo0_16 = ((MR_Word) (conv0_ProcInfo0_16));
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_16, &HeadVars_17);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo0_16, &VarTypes_18);
      transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0(SpecialPredId_2, HeadVars_17, ModuleInfo_3, VarTypes_18, &ArgSize_19, &Termination_20, &VarMap_21, &HeadSizeVars_22);
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_16, &STATE_VARIABLE_Term2Info_29_29);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (ArgSize_19));
      }
      transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(Var_30, STATE_VARIABLE_Term2Info_29_29, &STATE_VARIABLE_Term2Info_31_31);
      {
        TermStatus_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TermStatus_24, 0) = ((MR_Box) (Termination_20));
      }
      transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(TermStatus_24, STATE_VARIABLE_Term2Info_31_31, &STATE_VARIABLE_Term2Info_32_32);
      transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__term_constr_initial_scalar_common_3[1])), STATE_VARIABLE_Term2Info_32_32, &STATE_VARIABLE_Term2Info_34_34);
      transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(VarMap_21, STATE_VARIABLE_Term2Info_34_34, &STATE_VARIABLE_Term2Info_35_35);
      transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(HeadSizeVars_22, STATE_VARIABLE_Term2Info_35_35, &STATE_VARIABLE_Term2Info_36_36);
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(STATE_VARIABLE_Term2Info_36_36, ProcInfo0_16, &ProcInfo_26);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_11)), ((MR_Box) (ProcInfo_26)), STATE_VARIABLE_ProcTable_0_4, &STATE_VARIABLE_ProcTable_37_37);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_12;
      next_value_of_STATE_VARIABLE_ProcTable_0_4 = STATE_VARIABLE_ProcTable_37_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_4 = next_value_of_STATE_VARIABLE_ProcTable_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_initial__IntroducedFrom__pred__special_pred_id_to_termination__438__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadProgVars_2,
  MR_Word ModuleInfo_3,
  MR_Word VarTypes_4,
  MR_Word * HeadVar__5_5,
  MR_Word * Termination_6,
  MR_Word * SizeVarMap_7,
  MR_Word * HeadSizeVars_8)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word Zeros_79;
          MR_Word Constraints_80;
          MR_Word _SizeVarset_78;

          transform_hlds__term_constr_util__make_size_var_map_3_p_0(HeadProgVars_2, &_SizeVarset_78, SizeVarMap_7);
          Zeros_79 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(ModuleInfo_3, *SizeVarMap_7, VarTypes_4);
          Constraints_80 = transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0(*SizeVarMap_7, Zeros_79);
          *HeadVar__5_5 = libs__polyhedron__from_constraints_1_f_0(Constraints_80);
          *Termination_6 = (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_3[0]);
          *HeadSizeVars_8 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(*SizeVarMap_7, HeadProgVars_2);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer NumToDrop_54;
          MR_Integer Var_56;
          MR_Word _ZeroSizeHeadVars_55;

          Var_56 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[0]), HeadProgVars_2);
          NumToDrop_54 = (MR_Integer) ((MR_Unsigned) Var_56 - (MR_Unsigned) (MR_Integer) 2);
          succeeded = mercury__list__drop_3_p_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[0]), NumToDrop_54, HeadProgVars_2, &_ZeroSizeHeadVars_55);
          if (succeeded)
            transform_hlds__term_constr_initial__make_info_7_p_0(HeadProgVars_2, ModuleInfo_3, VarTypes_4, HeadVar__5_5, Termination_6, SizeVarMap_7, HeadSizeVars_8);
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "less than two arguments to builtin index");
              return;
            }
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Zeros_24;
          MR_Word NonZeroHeadSizeVars_25;
          MR_Word Constrs_26;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word _SizeVarset_23;

          transform_hlds__term_constr_util__make_size_var_map_3_p_0(HeadProgVars_2, &_SizeVarset_23, SizeVarMap_7);
          *HeadSizeVars_8 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(*SizeVarMap_7, HeadProgVars_2);
          Zeros_24 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(ModuleInfo_3, *SizeVarMap_7, VarTypes_4);
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_4[0]));
            MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Zeros_24));
          }
          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (transform_hlds__term_constr_initial__special_pred_id_to_termination_8_p_0_2));
            MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Var_36));
          }
          NonZeroHeadSizeVars_25 = mercury__list__filter_2_f_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[1]), Var_35, *HeadSizeVars_8);
          if ((NonZeroHeadSizeVars_25 == (MR_Word) ((MR_Integer) 0)))
            Constrs_26 = (MR_Word) ((MR_Integer) 0);
          else
          {
            MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonZeroHeadSizeVars_25, (MR_Integer) 1))));
            MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NonZeroHeadSizeVars_25, (MR_Integer) 0))));

            if ((Var_67 == (MR_Word) ((MR_Integer) 0)))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "wrong number of args for unify");
                return;
              }
            }
            else
            {
              MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 1))));
              MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_67, (MR_Integer) 0))));

              if ((Var_69 == (MR_Word) ((MR_Integer) 0)))
              {
                MR_Word Var_44;

                Var_44 = libs__lp_rational__make_vars_eq_constraint_2_f_0(Var_68, Var_70);
                {
                  Constrs_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Constrs_26, 0) = ((MR_Box) (Var_44));
                  MR_hl_field(MR_mktag(1), Constrs_26, 1) = ((MR_Box) ((MR_Integer) 0));
                }
              }
              else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "wrong number of args for unify");
                  return;
                }
              }
            }
          }
          *HeadVar__5_5 = libs__polyhedron__from_constraints_1_f_0(Constrs_26);
          *Termination_6 = (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_3[0]);
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__make_info_7_p_0(
  MR_Word HeadProgVars_8,
  MR_Word ModuleInfo_9,
  MR_Word VarTypes_10,
  MR_Word * ArgSize_11,
  MR_Word * Termination_12,
  MR_Word * SizeVarMap_13,
  MR_Word * HeadSizeVars_14)
{
  {
    MR_Word Zeros_16;
    MR_Word Constraints_17;
    MR_Word _SizeVarset_15;

    transform_hlds__term_constr_util__make_size_var_map_3_p_0(HeadProgVars_8, &_SizeVarset_15, SizeVarMap_13);
    Zeros_16 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(ModuleInfo_9, *SizeVarMap_13, VarTypes_10);
    Constraints_17 = transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0(*SizeVarMap_13, Zeros_16);
    *ArgSize_11 = libs__polyhedron__from_constraints_1_f_0(Constraints_17);
    *Termination_12 = (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_3[0]);
    *HeadSizeVars_14 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(*SizeVarMap_13, HeadProgVars_8);
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__term_constr_initial__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.term_constr_initial.
