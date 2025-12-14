/*
** Automatically generated from `term_constr_initial.m'
** by the Mercury compiler,
** version rotd-2025-12-14
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
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__term_constr_initial__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0;

static void MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__217__1_5_p_0(
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14);

static void MR_CALL 
transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__term_constr_initial__process_builtin_preds_4_p_0(
  MR_Word BelieveCheckTerm_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4);

static void MR_CALL 
transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ProcTable_0_5,
  MR_Word * STATE_VARIABLE_ProcTable_6);

static MR_Word MR_CALL 
transform_hlds__term_constr_initial__process_no_type_info_builtin_3_f_0(
  MR_String PredName_5,
  MR_Word HeadVars_6,
  MR_Word SizeVarMap_7);

static void MR_CALL 
transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ProcTable_0_2,
  MR_Word * STATE_VARIABLE_ProcTable_3);

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__set_generated_terminates_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word SpecialPredId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5);


static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_1[5][3];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_2[2][2];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_3[5][1];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_4[1][5];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_6[4][6];

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_7[1][8];


struct transform_hlds__term_constr_initial__vector_common_type_5_0_s {
  const MR_String transform_hlds__term_constr_initial__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct transform_hlds__term_constr_initial__vector_common_type_5_0_s transform_hlds__term_constr_initial_vector_common_5[105];



static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_2[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_2[1])),
    ((MR_Box) (&libs__rat__libs__rat__type_ctor_info_rat_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__term_constr_initial__process_imported_pred_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_2[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_3[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   4 */
  { ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_3[3])) },
};

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__term_constr_initial__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_6[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0)),
    ((MR_Box) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__pair__pti_pair_2__plain_term__ti_var_1term__type_ctor_info_generic_0__plain_libs__rat__type_ctor_info_rat_0))
  },
};

static /* final */ const MR_Box transform_hlds__term_constr_initial_scalar_common_7[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0)),
    ((MR_Box) (&transform_hlds__term_constr_initial__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_term__ti_var_1term__type_ctor_info_generic_0))
  },
};


static /* final */ const struct transform_hlds__term_constr_initial__vector_common_type_5_0_s transform_hlds__term_constr_initial_vector_common_5[105] = {
  /* row   0 */   { (MR_String) "get_future" },
  /* row   1 */   { (MR_String) "increment_size" },
  /* row   2 */   { NULL },
  /* row   3 */   { (MR_String) "unsafe_promise_unique" },
  /* row   4 */   { NULL },
  /* row   5 */   { (MR_String) "signal_future" },
  /* row   6 */   { NULL },
  /* row   7 */   { NULL },
  /* row   8 */   { NULL },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { (MR_String) "unsafe_type_cast" },
  /* row  14 */   { NULL },
  /* row  15 */   { NULL },
  /* row  16 */   { NULL },
  /* row  17 */   { NULL },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { (MR_String) "wait_future" },
  /* row  21 */   { (MR_String) "partial_inst_copy" },
  /* row  22 */   { NULL },
  /* row  23 */   { NULL },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { NULL },
  /* row  27 */   { NULL },
  /* row  28 */   { NULL },
  /* row  29 */   { (MR_String) "store_at_ref_impure" },
  /* row  30 */   { (MR_String) "new_future" },
  /* row  31 */   { NULL },
  /* row  32 */   { (MR_String) "get_future" },
  /* row  33 */   { (MR_String) "increment_size" },
  /* row  34 */   { NULL },
  /* row  35 */   { (MR_String) "unsafe_promise_unique" },
  /* row  36 */   { NULL },
  /* row  37 */   { (MR_String) "signal_future" },
  /* row  38 */   { NULL },
  /* row  39 */   { NULL },
  /* row  40 */   { NULL },
  /* row  41 */   { NULL },
  /* row  42 */   { NULL },
  /* row  43 */   { NULL },
  /* row  44 */   { NULL },
  /* row  45 */   { (MR_String) "unsafe_type_cast" },
  /* row  46 */   { NULL },
  /* row  47 */   { NULL },
  /* row  48 */   { NULL },
  /* row  49 */   { NULL },
  /* row  50 */   { NULL },
  /* row  51 */   { NULL },
  /* row  52 */   { (MR_String) "wait_future" },
  /* row  53 */   { (MR_String) "partial_inst_copy" },
  /* row  54 */   { NULL },
  /* row  55 */   { NULL },
  /* row  56 */   { NULL },
  /* row  57 */   { NULL },
  /* row  58 */   { NULL },
  /* row  59 */   { NULL },
  /* row  60 */   { NULL },
  /* row  61 */   { (MR_String) "store_at_ref_impure" },
  /* row  62 */   { (MR_String) "new_future" },
  /* row  63 */   { NULL },
  /* row  64 */   { (MR_String) "superclass_from_typeclass_info" },
  /* row  65 */   { NULL },
  /* row  66 */   { NULL },
  /* row  67 */   { NULL },
  /* row  68 */   { NULL },
  /* row  69 */   { (MR_String) "type_info_from_typeclass_info" },
  /* row  70 */   { (MR_String) "compare_local_uint_words" },
  /* row  71 */   { (MR_String) "unconstrained_type_info_from_typeclass_info" },
  /* row  72 */   { (MR_String) "semidet_call_3" },
  /* row  73 */   { NULL },
  /* row  74 */   { NULL },
  /* row  75 */   { (MR_String) "table_restore_any_answer" },
  /* row  76 */   { NULL },
  /* row  77 */   { (MR_String) "table_lookup_insert_typeclassinfo" },
  /* row  78 */   { (MR_String) "table_lookup_insert_typeinfo" },
  /* row  79 */   { NULL },
  /* row  80 */   { (MR_String) "result_call_4" },
  /* row  81 */   { (MR_String) "table_lookup_insert_enum" },
  /* row  82 */   { NULL },
  /* row  83 */   { NULL },
  /* row  84 */   { (MR_String) "compare_local_int8_bitfields" },
  /* row  85 */   { NULL },
  /* row  86 */   { NULL },
  /* row  87 */   { (MR_String) "semidet_call_4" },
  /* row  88 */   { (MR_String) "compare_local_int32_bitfields" },
  /* row  89 */   { (MR_String) "instance_constraint_from_typeclass_info" },
  /* row  90 */   { (MR_String) "compare_local_int16_bitfields" },
  /* row  91 */   { (MR_String) "unify_remote_arg_words" },
  /* row  92 */   { NULL },
  /* row  93 */   { NULL },
  /* row  94 */   { NULL },
  /* row  95 */   { NULL },
  /* row  96 */   { (MR_String) "compare_local_uint_bitfields" },
  /* row  97 */   { (MR_String) "compare_remote_uint_words" },
  /* row  98 */   { (MR_String) "result_call_5" },
  /* row  99 */   { (MR_String) "semidet_call_5" },
  /* row 100 */   { (MR_String) "compare_remote_int16_bitfields" },
  /* row 101 */   { (MR_String) "compare_remote_int32_bitfields" },
  /* row 102 */   { (MR_String) "compare_remote_int8_bitfields" },
  /* row 103 */   { (MR_String) "result_call_6" },
  /* row 104 */   { (MR_String) "semidet_call_6" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__term_constr_initial__term__ti_var_1term__type_ctor_info_generic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__term_constr_initial__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
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
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
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

static void MR_CALL 
transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__217__1_5_p_0(
  MR_Word IdToProgVar_6,
  MR_Word SizeVarMap_7,
  MR_Integer LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17)
{
  MR_Word ProgVar_11;
  MR_Word SizeVar_12;
  MR_Box conv0_ProgVar_11;
  MR_Box conv1_SizeVar_12;

  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[0]), IdToProgVar_6, LambdaHeadVar__1_15, &conv0_ProgVar_11);
  ProgVar_11 = ((MR_Word) (conv0_ProgVar_11));
  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[0]), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[1]), SizeVarMap_7, ((MR_Box) (ProgVar_11)), &conv1_SizeVar_12);
  SizeVar_12 = ((MR_Word) (conv1_SizeVar_12));
  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[1]), LambdaHeadVar__1_15, ((MR_Box) (SizeVar_12)), LambdaHeadVar__2_16, LambdaHeadVar__3_17);
}

static void MR_CALL 
transform_hlds__term_constr_initial__create_lp_term_3_p_0(
  MR_Word SubstMap_4,
  MR_Word ArgSizeTerm_5,
  MR_Word * HeadVar__3_3)
{
  MR_Word Var_6;
  MR_Word Coefficient_7 = ((MR_Word) ((MR_hl_field(0, ArgSizeTerm_5, 1))));
  MR_Integer VarId_8 = ((MR_Integer) ((MR_hl_field(0, ArgSizeTerm_5, 0))));
  MR_Box conv0_Var_6;

  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[1]), SubstMap_4, VarId_8, &conv0_Var_6);
  Var_6 = ((MR_Word) (conv0_Var_6));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (Coefficient_7));
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  transform_hlds__term_constr_initial__create_lp_term_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  transform_hlds__term_constr_initial__create_lp_term_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(
  MR_Word SubstMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * Constraint_3)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Terms0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Constant_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Terms_15;
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[3]));
      MR_hl_field(0, Var_16, 1) = ((MR_Box) (transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_1));
      MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_16, 3) = ((MR_Box) (SubstMap_1));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_term_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_1[2]), Var_16, Terms0_12, &Terms_15);
    *Constraint_3 = libs__lp_rational__construct_constraint_3_f_0(Terms_15, (MR_Integer) 1, Constant_13);
  }
  else
  {
    MR_Word Terms0_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word Constant_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word Terms_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_9, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[3]));
      MR_hl_field(0, Var_9, 1) = ((MR_Box) (transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0_2));
      MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_9, 3) = ((MR_Box) (SubstMap_1));
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
  MR_Box closure = closure_arg;
  MR_Word conv4_Constraint_3;

  transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Constraint_3);
  *wrapper_arg_2 = ((MR_Box) (conv4_Constraint_3));
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Constraint_3;

  transform_hlds__term_constr_initial__create_arg_size_constraint_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_3);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_3));
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_17;

  transform_hlds__term_constr_initial__IntroducedFrom__pred__create_substitution_map__217__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_17);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_17));
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_proc_3_p_0(
  MR_Integer ProcId_4,
  MR_Word STATE_VARIABLE_ProcTable_0_11,
  MR_Word * STATE_VARIABLE_ProcTable_12)
{
  MR_Word Term2Info0_7;
  MR_Word MaybeImportSuccess_8;
  MR_Word STATE_VARIABLE_ProcInfo_1_13;
  MR_Box conv0_STATE_VARIABLE_ProcInfo_1_13;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_11, ((MR_Box) (ProcId_4)), &conv0_STATE_VARIABLE_ProcInfo_1_13);
  STATE_VARIABLE_ProcInfo_1_13 = ((MR_Word) (conv0_STATE_VARIABLE_ProcInfo_1_13));
  hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(STATE_VARIABLE_ProcInfo_1_13, &Term2Info0_7);
  MaybeImportSuccess_8 = transform_hlds__term_constr_main_types__term2_info_get_import_success_1_f_0(Term2Info0_7);
  if ((MaybeImportSuccess_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_ProcTable_12 = STATE_VARIABLE_ProcTable_0_11;
  else
  {
    MR_Word Term2Info_10;
    MR_Word STATE_VARIABLE_ProcInfo_2_14;
    MR_Word HeadVars_17;
    MR_Word SizeVarMap_19;
    MR_Integer NumHeadVars_20;
    MR_Word HeadVarIds_21;
    MR_Word IdsToProgVars_22;
    MR_Word SubstMap_23;
    MR_Word MaybeSuccessPoly_24;
    MR_Word MaybeFailurePoly_25;
    MR_Word SizeVars_26;
    MR_Integer Var_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Term2Info_1_32;
    MR_Word STATE_VARIABLE_Term2Info_2_33;
    MR_Word STATE_VARIABLE_Term2Info_3_34;
    MR_Word STATE_VARIABLE_Term2Info_4_35;
    MR_Word STATE_VARIABLE_Term2Info_5_37;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word _SizeVarset_18;
    MR_Box conv2_SubstMap_23;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_1_13, &HeadVars_17);
    transform_hlds__term_constr_util__make_size_var_map_3_p_0(HeadVars_17, &_SizeVarset_18, &SizeVarMap_19);
    mercury__list__length_2_p_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[0]), HeadVars_17, &NumHeadVars_20);
    Var_28 = (MR_Integer) ((MR_Unsigned) NumHeadVars_20 - (MR_Unsigned) 1);
    HeadVarIds_21 = mercury__list__f_46_46_2_f_0((MR_Integer) 0, Var_28);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[0]), HeadVarIds_21, HeadVars_17, &IdsToProgVars_22);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_7[0]));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (transform_hlds__term_constr_initial__process_imported_proc_3_p_0_1));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_41, 3) = ((MR_Box) (IdsToProgVars_22));
      MR_hl_field(0, Var_41, 4) = ((MR_Box) (SizeVarMap_19));
    }
    Var_42 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[1]));
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_1[1]), Var_41, HeadVarIds_21, ((MR_Box) (Var_42)), &conv2_SubstMap_23);
    SubstMap_23 = ((MR_Word) (conv2_SubstMap_23));
    Var_30 = transform_hlds__term_constr_main_types__term2_info_get_import_success_1_f_0(Term2Info0_7);
    if ((Var_30 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeSuccessPoly_24 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PragmaArgSizeInfo_46 = ((MR_Word) ((MR_hl_field(1, Var_30, 0))));
      MR_Word Polyhedron_47;
      MR_Word Constraints_48;
      MR_Word Var_49;

      {
        Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_49, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[2]));
        MR_hl_field(0, Var_49, 1) = ((MR_Box) (transform_hlds__term_constr_initial__process_imported_proc_3_p_0_2));
        MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_49, 3) = ((MR_Box) (SubstMap_23));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0), Var_49, PragmaArgSizeInfo_46, &Constraints_48);
      Polyhedron_47 = libs__polyhedron__from_constraints_1_f_0(Constraints_48);
      {
        MaybeSuccessPoly_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeSuccessPoly_24, 0) = ((MR_Box) (Polyhedron_47));
      }
    }
    Var_31 = transform_hlds__term_constr_main_types__term2_info_get_import_failure_1_f_0(Term2Info0_7);
    if ((Var_31 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeFailurePoly_25 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PragmaArgSizeInfo_52 = ((MR_Word) ((MR_hl_field(1, Var_31, 0))));
      MR_Word Polyhedron_53;
      MR_Word Constraints_54;
      MR_Word Var_55;

      {
        Var_55 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_55, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_6[2]));
        MR_hl_field(0, Var_55, 1) = ((MR_Box) (transform_hlds__term_constr_initial__process_imported_proc_3_p_0_3));
        MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_55, 3) = ((MR_Box) (SubstMap_23));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_arg_size_constr_0), (MR_Word) (&libs__lp_rational__libs__lp_rational__type_ctor_info_lp_constraint_0), Var_55, PragmaArgSizeInfo_52, &Constraints_54);
      Polyhedron_53 = libs__polyhedron__from_constraints_1_f_0(Constraints_54);
      {
        MaybeFailurePoly_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeFailurePoly_25, 0) = ((MR_Box) (Polyhedron_53));
      }
    }
    SizeVars_26 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_19, HeadVars_17);
    transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(SizeVarMap_19, Term2Info0_7, &STATE_VARIABLE_Term2Info_1_32);
    transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(SizeVars_26, STATE_VARIABLE_Term2Info_1_32, &STATE_VARIABLE_Term2Info_2_33);
    transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(MaybeSuccessPoly_24, STATE_VARIABLE_Term2Info_2_33, &STATE_VARIABLE_Term2Info_3_34);
    transform_hlds__term_constr_main_types__term2_info_set_failure_constrs_3_p_0(MaybeFailurePoly_25, STATE_VARIABLE_Term2Info_3_34, &STATE_VARIABLE_Term2Info_4_35);
    transform_hlds__term_constr_main_types__term2_info_set_import_success_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Term2Info_4_35, &STATE_VARIABLE_Term2Info_5_37);
    transform_hlds__term_constr_main_types__term2_info_set_import_failure_3_p_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Term2Info_5_37, &Term2Info_10);
    hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(Term2Info_10, STATE_VARIABLE_ProcInfo_1_13, &STATE_VARIABLE_ProcInfo_2_14);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_4)), ((MR_Box) (STATE_VARIABLE_ProcInfo_2_14)), STATE_VARIABLE_ProcTable_0_11, STATE_VARIABLE_ProcTable_12);
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcTable_12;

  transform_hlds__term_constr_initial__process_imported_proc_3_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ProcTable_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ProcTable_12));
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_imported_pred_3_p_0(
  MR_Word PredId_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * STATE_VARIABLE_ModuleInfo_14)
{
  MR_bool succeeded;
  MR_Word TypeSpecTables_6;
  MR_Word TypeSpecPredIds_8;

  hlds__hlds_module__module_info_get_type_spec_tables_2_p_0(STATE_VARIABLE_ModuleInfo_0_13, &TypeSpecTables_6);
  TypeSpecPredIds_8 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables_6, 1))));
  succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_4)), TypeSpecPredIds_8);
  if (succeeded)
    *STATE_VARIABLE_ModuleInfo_14 = STATE_VARIABLE_ModuleInfo_0_13;
  else
  {
    MR_Word PredInfo0_11;
    MR_Word PredInfo_12;
    MR_Word ProcIds_16;
    MR_Word STATE_VARIABLE_ProcTable_1_17;
    MR_Word STATE_VARIABLE_ProcTable_2_19;
    MR_Box conv1_STATE_VARIABLE_ProcTable_2_19;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_13, PredId_4, &PredInfo0_11);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_11, &STATE_VARIABLE_ProcTable_1_17);
    ProcIds_16 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo0_11);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_1[0]), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_1[4]), ProcIds_16, ((MR_Box) (STATE_VARIABLE_ProcTable_1_17)), &conv1_STATE_VARIABLE_ProcTable_2_19);
    STATE_VARIABLE_ProcTable_2_19 = ((MR_Word) (conv1_STATE_VARIABLE_ProcTable_2_19));
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(STATE_VARIABLE_ProcTable_2_19, PredInfo0_11, &PredInfo_12);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_4, PredInfo_12, STATE_VARIABLE_ModuleInfo_0_13, STATE_VARIABLE_ModuleInfo_14);
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_14;

  transform_hlds__term_constr_initial__process_imported_pred_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_14));
}

void MR_CALL 
transform_hlds__term_constr_initial__term2_preprocess_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  MR_Word BelieveCheckTerm_4;
  MR_Word PredIds_5;
  MR_Word STATE_VARIABLE_ModuleInfo_1_8;
  MR_Box conv1_STATE_VARIABLE_ModuleInfo_7;

  transform_hlds__term_util__should_we_believe_check_termination_markers_2_p_0(STATE_VARIABLE_ModuleInfo_0_6, &BelieveCheckTerm_4);
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_6, &PredIds_5);
  transform_hlds__term_constr_initial__process_builtin_preds_4_p_0(BelieveCheckTerm_4, PredIds_5, STATE_VARIABLE_ModuleInfo_0_6, &STATE_VARIABLE_ModuleInfo_1_8);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_1[3]), PredIds_5, ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_8)), &conv1_STATE_VARIABLE_ModuleInfo_7);
  *STATE_VARIABLE_ModuleInfo_7 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_7));
}

static void MR_CALL 
transform_hlds__term_constr_initial__process_builtin_preds_4_p_0(
  MR_Word BelieveCheckTerm_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_1_15;
      MR_Word PredInfo0_16;
      MR_Word PredInfo_17;
      MR_Word PredStatus_18;
      MR_Word Markers_19;
      MR_Word Context_20;
      MR_Word ProcIds_21;
      MR_Word STATE_VARIABLE_ProcTable_1_26;
      MR_Word STATE_VARIABLE_ProcTable_5_35;
      MR_Word STATE_VARIABLE_ProcTable_11_55;
      MR_Word STATE_VARIABLE_ProcTable_2_27;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredId_10, &PredInfo0_16);
      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_16, &PredStatus_18);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_16, &Markers_19);
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_16, &Context_20);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_16, &STATE_VARIABLE_ProcTable_1_26);
      ProcIds_21 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo0_16);
      succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo0_16);
      if (succeeded)
      {
        transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_51_93_95_48_6_p_0(STATE_VARIABLE_ModuleInfo_0_3, PredInfo0_16, ProcIds_21, STATE_VARIABLE_ProcTable_1_26, &STATE_VARIABLE_ProcTable_2_27);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word SpecialPredId_62;
        MR_Word SpecialPredId0_59;
        MR_String Name_57;
        MR_Integer PredFormArityInt_58;
        MR_Word ModuleName_61;
        MR_Word Var_65;
        MR_Integer Var_67;
        MR_String Var_60;

        Name_57 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_16);
        hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo0_16, &Var_65);
        PredFormArityInt_58 = (MR_Integer) (Var_65);
        succeeded = mdbcomp__prim_data__special_pred_name_arity_4_p_1(&SpecialPredId0_59, Name_57, &Var_60, &Var_67);
        if (succeeded)
        {
          succeeded = (PredFormArityInt_58 == Var_67);
          if (succeeded)
          {
            ModuleName_61 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_16);
            succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(ModuleName_61);
          }
        }
        if (succeeded)
        {
          SpecialPredId_62 = SpecialPredId0_59;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word PredOrigin_63;
          MR_Word Var_66;

          hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_16, &PredOrigin_63);
          succeeded = ((MR_tag((MR_Word) PredOrigin_63)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_66 = ((MR_Word) ((MR_hl_field(1, PredOrigin_63, 0))));
            succeeded = ((MR_tag((MR_Word) Var_66)) == (MR_Integer) 0);
            if (succeeded)
              SpecialPredId_62 = ((MR_Unsigned) ((MR_hl_field(0, Var_66, 0))) & (MR_Integer) 3);
          }
        }
        if (succeeded)
        {
          transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(STATE_VARIABLE_ModuleInfo_0_3, SpecialPredId_62, ProcIds_21, STATE_VARIABLE_ProcTable_1_26, &STATE_VARIABLE_ProcTable_2_27);
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        STATE_VARIABLE_ProcTable_5_35 = STATE_VARIABLE_ProcTable_2_27;
      else
      {
        MR_Word Var_28;

        Var_28 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_18);
        succeeded = (Var_28 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_19, (MR_Integer) 20);
          if (succeeded)
          {
            MR_Word ArgSizeInfo_23;
            MR_Word STATE_VARIABLE_ProcTable_3_32;
            MR_Word STATE_VARIABLE_ProcTable_4_34;

            transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(ProcIds_21, (MR_Integer) 1, (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_3[0]), STATE_VARIABLE_ProcTable_1_26, &STATE_VARIABLE_ProcTable_3_32);
            ArgSizeInfo_23 = libs__polyhedron__universe_0_f_0();
            transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(ProcIds_21, (MR_Integer) 1, ArgSizeInfo_23, STATE_VARIABLE_ProcTable_3_32, &STATE_VARIABLE_ProcTable_4_34);
            transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(ProcIds_21, STATE_VARIABLE_ProcTable_4_34, &STATE_VARIABLE_ProcTable_5_35);
          }
          else
            STATE_VARIABLE_ProcTable_5_35 = STATE_VARIABLE_ProcTable_1_26;
        }
        else
        {
          MR_Word STATE_VARIABLE_ProcTable_6_40;
          MR_Word ArgSizeInfo_56;

          succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_19, (MR_Integer) 20);
          if (!(succeeded))
          {
            MR_Word Var_37;

            succeeded = (BelieveCheckTerm_1 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_37 = (MR_Integer) 22;
              succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_19, Var_37);
            }
          }
          if (succeeded)
            transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(ProcIds_21, (MR_Integer) 1, (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_3[0]), STATE_VARIABLE_ProcTable_1_26, &STATE_VARIABLE_ProcTable_6_40);
          else
            transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(ProcIds_21, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &transform_hlds__term_constr_initial_scalar_common_3[1])), STATE_VARIABLE_ProcTable_1_26, &STATE_VARIABLE_ProcTable_6_40);
          ArgSizeInfo_56 = libs__polyhedron__universe_0_f_0();
          transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(ProcIds_21, (MR_Integer) 1, ArgSizeInfo_56, STATE_VARIABLE_ProcTable_6_40, &STATE_VARIABLE_ProcTable_5_35);
        }
      }
      succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_19, (MR_Integer) 21);
      if (succeeded)
      {
        MR_Word TerminationInfo_24;
        MR_Word NonTermArgSizeInfo_25;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word STATE_VARIABLE_ProcTable_9_52;
        MR_Word STATE_VARIABLE_ProcTable_10_54;

        {
          Var_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_49, 0) = ((MR_Box) (PredId_10));
        }
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (Context_20));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TerminationInfo_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, TerminationInfo_24, 0) = ((MR_Box) (Var_47));
        }
        NonTermArgSizeInfo_25 = libs__polyhedron__universe_0_f_0();
        transform_hlds__term_constr_util__change_procs_constr_termination_info_5_p_0(ProcIds_21, (MR_Integer) 1, TerminationInfo_24, STATE_VARIABLE_ProcTable_5_35, &STATE_VARIABLE_ProcTable_9_52);
        transform_hlds__term_constr_util__change_procs_constr_arg_size_info_5_p_0(ProcIds_21, (MR_Integer) 1, NonTermArgSizeInfo_25, STATE_VARIABLE_ProcTable_9_52, &STATE_VARIABLE_ProcTable_10_54);
        transform_hlds__term_constr_initial__initialise_size_var_maps_3_p_0(ProcIds_21, STATE_VARIABLE_ProcTable_10_54, &STATE_VARIABLE_ProcTable_11_55);
      }
      else
        STATE_VARIABLE_ProcTable_11_55 = STATE_VARIABLE_ProcTable_5_35;
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(STATE_VARIABLE_ProcTable_11_55, PredInfo0_16, &PredInfo_17);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_10, PredInfo_17, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__term_constr_initial__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_98_117_105_108_116_105_110_95_116_101_114_109_105_110_97_116_101_115_95_95_91_51_93_95_48_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Word PredInfo_2,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ProcTable_0_5,
  MR_Word * STATE_VARIABLE_ProcTable_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcTable_6 = STATE_VARIABLE_ProcTable_0_5;
    else
    {
      MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word ProcIds_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word ProcInfo0_19;
      MR_Word HeadVars_20;
      MR_Word PredModule_21;
      MR_String PredName_22;
      MR_Integer PredFormArityInt_23;
      MR_Word SizeVarMap_25;
      MR_Word Constrs_26;
      MR_Word Polyhedron_27;
      MR_Word ArgSizeInfo_28;
      MR_Word HeadSizeVars_29;
      MR_Word ProcInfo_33;
      MR_Word Var_36;
      MR_Word STATE_VARIABLE_Term2Info_1_39;
      MR_Word STATE_VARIABLE_Term2Info_2_40;
      MR_Word STATE_VARIABLE_Term2Info_3_43;
      MR_Word STATE_VARIABLE_Term2Info_4_45;
      MR_Word STATE_VARIABLE_Term2Info_5_46;
      MR_Word STATE_VARIABLE_Term2Info_6_47;
      MR_Word STATE_VARIABLE_ProcTable_1_48;
      MR_Box conv0_ProcInfo0_19;
      MR_Word _SizeVarset_24;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_5;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_5, ((MR_Box) (ProcId_16)), &conv0_ProcInfo0_19);
      ProcInfo0_19 = ((MR_Word) (conv0_ProcInfo0_19));
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_19, &HeadVars_20);
      PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_2);
      PredName_22 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_2);
      hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_2, &Var_36);
      PredFormArityInt_23 = (MR_Integer) (Var_36);
      transform_hlds__term_constr_util__make_size_var_map_3_p_0(HeadVars_20, &_SizeVarset_24, &SizeVarMap_25);
      succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_21, PredName_22, PredFormArityInt_23);
      if (succeeded)
        Constrs_26 = transform_hlds__term_constr_initial__process_no_type_info_builtin_3_f_0(PredName_22, HeadVars_20, SizeVarMap_25);
      else
      {
        succeeded = transform_hlds__term_util__all_args_input_or_zero_size_3_p_0(ModuleInfo_1, PredInfo_2, ProcInfo0_19);
        if (succeeded)
          Constrs_26 = (MR_Word) ((MR_Unsigned) 0U);
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_initial.set_builtin_terminates\'/6", (MR_String) "builtin with non-zero size args");
            return;
          }
      }
      Polyhedron_27 = libs__polyhedron__from_constraints_1_f_0(Constrs_26);
      {
        ArgSizeInfo_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgSizeInfo_28, 0) = ((MR_Box) (Polyhedron_27));
      }
      HeadSizeVars_29 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(SizeVarMap_25, HeadVars_20);
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_19, &STATE_VARIABLE_Term2Info_1_39);
      transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(ArgSizeInfo_28, STATE_VARIABLE_Term2Info_1_39, &STATE_VARIABLE_Term2Info_2_40);
      transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0((MR_Word) (MR_mkword(1, &transform_hlds__term_constr_initial_scalar_common_3[4])), STATE_VARIABLE_Term2Info_2_40, &STATE_VARIABLE_Term2Info_3_43);
      transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0((MR_Word) (MR_mkword(1, &transform_hlds__term_constr_initial_scalar_common_3[2])), STATE_VARIABLE_Term2Info_3_43, &STATE_VARIABLE_Term2Info_4_45);
      transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(SizeVarMap_25, STATE_VARIABLE_Term2Info_4_45, &STATE_VARIABLE_Term2Info_5_46);
      transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(HeadSizeVars_29, STATE_VARIABLE_Term2Info_5_46, &STATE_VARIABLE_Term2Info_6_47);
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(STATE_VARIABLE_Term2Info_6_47, ProcInfo0_19, &ProcInfo_33);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_16)), ((MR_Box) (ProcInfo_33)), STATE_VARIABLE_ProcTable_0_5, &STATE_VARIABLE_ProcTable_1_48);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = ProcIds_17;
      next_value_of_STATE_VARIABLE_ProcTable_0_5 = STATE_VARIABLE_ProcTable_1_48;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_ProcTable_0_5 = next_value_of_STATE_VARIABLE_ProcTable_0_5;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
transform_hlds__term_constr_initial__process_no_type_info_builtin_3_f_0(
  MR_String PredName_5,
  MR_Word HeadVars_6,
  MR_Word SizeVarMap_7)
{
  MR_bool succeeded;
  MR_Word Constraints_8;

  if ((HeadVars_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_68;

    Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised arity-0 no_type_info_builtin ", PredName_5);
    mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", Var_68);
  }
  else
  {
    MR_Word Var_156 = ((MR_Word) ((MR_hl_field(1, HeadVars_6, 1))));
    MR_Word Var_157 = ((MR_Word) ((MR_hl_field(1, HeadVars_6, 0))));

    if ((Var_156 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_72;

      Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised arity-1 no_type_info_builtin ", PredName_5);
      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", Var_72);
    }
    else
    {
      MR_Word Var_158 = ((MR_Word) ((MR_hl_field(1, Var_156, 1))));
      MR_Word Var_159 = ((MR_Word) ((MR_hl_field(1, Var_156, 0))));

      if ((Var_158 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Integer slot_0 = ((MR_hash_string6(PredName_5)) & (MR_Integer) 31);
        MR_String str_1 = ((&transform_hlds__term_constr_initial_vector_common_5[0 + slot_0]))->transform_hlds__term_constr_initial__vector_common_type_5_0__vct_5_f_0;

        // hashed string simple lookup switch
        ;
        // compute the hash value of the input string
        ;
        // no collisions; no hash chain loop
        ;
        // lookup the string for this hash slot
        ;
        // did we find a match?
        ;
        if ((((str_1 != NULL)) && ((strcmp(str_1, PredName_5) == 0))))
        {
          // we found a match; look up the results
          ;
          succeeded = MR_TRUE;
          // jump out of search loop
          ;
          goto label_0;
        }
        succeeded = MR_FALSE;
      label_0:;
        if (succeeded)
        {
          MR_Integer slot_2 = ((MR_hash_string6(PredName_5)) & (MR_Integer) 31);
          MR_String str_3 = ((&transform_hlds__term_constr_initial_vector_common_5[32 + slot_2]))->transform_hlds__term_constr_initial__vector_common_type_5_0__vct_5_f_0;

          // hashed string jump switch
          ;
          // compute the hash value of the input string
          ;
          // no collisions; no hash chain loop
          ;
          // lookup the string for this hash slot
          ;
          // did we find a match?
          ;
          if ((((str_3 != NULL)) && ((strcmp(str_3, PredName_5) == 0))))
          {
            // we found a match; dispatch to the corresponding code
            ;
            switch (slot_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 5:
              case (MR_Integer) 20:
              case (MR_Integer) 29:
              case (MR_Integer) 30:
                {
                  // case "get_future", "increment_size", "new_future", "signal_future", "store_at_ref_impure", "wait_future"
                  ;
                  Constraints_8 = (MR_Word) ((MR_Unsigned) 0U);
                }
                break;
              case (MR_Integer) 3:
              case (MR_Integer) 13:
              case (MR_Integer) 21:
                {
                  // case "partial_inst_copy", "unsafe_promise_unique", "unsafe_type_cast"
                  ;
                  {
                    MR_Word SizeVar1_12;
                    MR_Word SizeVar2_13;
                    MR_Word Var_76;

                    SizeVar1_12 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_7, Var_157);
                    SizeVar2_13 = transform_hlds__term_constr_util__prog_var_to_size_var_2_f_0(SizeVarMap_7, Var_159);
                    Var_76 = libs__lp_rational__make_vars_eq_constraint_2_f_0(SizeVar1_12, SizeVar2_13);
                    {
                      Constraints_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Constraints_8, 0) = ((MR_Box) (Var_76));
                      MR_hl_field(1, Constraints_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                }
                break;
            }
          }
        }
        else
        {
          MR_String Var_79;

          Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised arity-2 no_type_info_builtin ", PredName_5);
          mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", Var_79);
        }
      }
      else
      {
        MR_Word Var_160 = ((MR_Word) ((MR_hl_field(1, Var_158, 1))));

        if ((Var_160 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Integer slot_4 = ((MR_hash_string4(PredName_5)) & (MR_Integer) 15);
          MR_String str_5 = ((&transform_hlds__term_constr_initial_vector_common_5[64 + slot_4]))->transform_hlds__term_constr_initial__vector_common_type_5_0__vct_5_f_0;

          // hashed string simple lookup switch
          ;
          // compute the hash value of the input string
          ;
          // no collisions; no hash chain loop
          ;
          // lookup the string for this hash slot
          ;
          // did we find a match?
          ;
          if ((((str_5 != NULL)) && ((strcmp(str_5, PredName_5) == 0))))
          {
            // we found a match; look up the results
            ;
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_1;
          }
          succeeded = MR_FALSE;
        label_1:;
          if (succeeded)
            Constraints_8 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_String Var_85;

            Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised arity-3 no_type_info_builtin ", PredName_5);
            mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", Var_85);
          }
        }
        else
        {
          MR_Word Var_162 = ((MR_Word) ((MR_hl_field(1, Var_160, 1))));

          if ((Var_162 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Integer slot_6 = ((MR_hash_string6(PredName_5)) & (MR_Integer) 15);
            MR_String str_7 = ((&transform_hlds__term_constr_initial_vector_common_5[80 + slot_6]))->transform_hlds__term_constr_initial__vector_common_type_5_0__vct_5_f_0;

            // hashed string simple lookup switch
            ;
            // compute the hash value of the input string
            ;
            // no collisions; no hash chain loop
            ;
            // lookup the string for this hash slot
            ;
            // did we find a match?
            ;
            if ((((str_7 != NULL)) && ((strcmp(str_7, PredName_5) == 0))))
            {
              // we found a match; look up the results
              ;
              succeeded = MR_TRUE;
              // jump out of search loop
              ;
              goto label_2;
            }
            succeeded = MR_FALSE;
          label_2:;
            if (succeeded)
              Constraints_8 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_String Var_92;

              Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised arity-4 no_type_info_builtin ", PredName_5);
              mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", Var_92);
            }
          }
          else
          {
            MR_Word Var_164 = ((MR_Word) ((MR_hl_field(1, Var_162, 1))));

            if ((Var_164 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Integer lo_8 = (MR_Integer) 0;
              MR_Integer hi_9 = (MR_Integer) 3;
              MR_Integer mid_10;
              MR_Integer result_11;

              // binary string simple lookup switch
              ;
              do
              {
                mid_10 = (((MR_Integer) ((MR_Unsigned) lo_8 + (MR_Unsigned) hi_9)) / (MR_Integer) 2);
                result_11 = MR_strcmp(PredName_5, ((&transform_hlds__term_constr_initial_vector_common_5[96 + mid_10]))->transform_hlds__term_constr_initial__vector_common_type_5_0__vct_5_f_0);
                if ((result_11 == (MR_Integer) 0))
                {
                  succeeded = MR_TRUE;
                  // jump out of search loop
                  ;
                  goto label_3;
                }
                else
                if ((result_11 < (MR_Integer) 0))
                  hi_9 = (MR_Integer) ((MR_Unsigned) mid_10 - (MR_Unsigned) 1);
                else
                  lo_8 = (MR_Integer) ((MR_Unsigned) mid_10 + (MR_Unsigned) 1);
              }
              while ((lo_8 <= hi_9));
              succeeded = MR_FALSE;
            label_3:;
              if (succeeded)
                Constraints_8 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_String Var_100;

                Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised arity-5 no_type_info_builtin ", PredName_5);
                mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", Var_100);
              }
            }
            else
            {
              MR_Word Var_166 = ((MR_Word) ((MR_hl_field(1, Var_164, 1))));

              if ((Var_166 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Integer lo_12 = (MR_Integer) 0;
                MR_Integer hi_13 = (MR_Integer) 4;
                MR_Integer mid_14;
                MR_Integer result_15;

                // binary string simple lookup switch
                ;
                do
                {
                  mid_14 = (((MR_Integer) ((MR_Unsigned) lo_12 + (MR_Unsigned) hi_13)) / (MR_Integer) 2);
                  result_15 = MR_strcmp(PredName_5, ((&transform_hlds__term_constr_initial_vector_common_5[100 + mid_14]))->transform_hlds__term_constr_initial__vector_common_type_5_0__vct_5_f_0);
                  if ((result_15 == (MR_Integer) 0))
                  {
                    succeeded = MR_TRUE;
                    // jump out of search loop
                    ;
                    goto label_4;
                  }
                  else
                  if ((result_15 < (MR_Integer) 0))
                    hi_13 = (MR_Integer) ((MR_Unsigned) mid_14 - (MR_Unsigned) 1);
                  else
                    lo_12 = (MR_Integer) ((MR_Unsigned) mid_14 + (MR_Unsigned) 1);
                }
                while ((lo_12 <= hi_13));
                succeeded = MR_FALSE;
              label_4:;
                if (succeeded)
                  Constraints_8 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_String Var_109;

                  Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised arity-6 no_type_info_builtin ", PredName_5);
                  mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", Var_109);
                }
              }
              else
              {
                MR_Word Var_168 = ((MR_Word) ((MR_hl_field(1, Var_166, 1))));

                if ((Var_168 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  if ((strcmp(PredName_5, (MR_String) "result_call_7") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(PredName_5, (MR_String) "semidet_call_7") == 0))
                    succeeded = MR_TRUE;
                  else
                  if ((strcmp(PredName_5, (MR_String) "compare_remote_uint_bitfields") == 0))
                    succeeded = MR_TRUE;
                  else
                    succeeded = MR_FALSE;
                  if (succeeded)
                    Constraints_8 = (MR_Word) ((MR_Unsigned) 0U);
                  else
                  {
                    MR_String Var_119;

                    Var_119 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised arity-7 no_type_info_builtin ", PredName_5);
                    mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", Var_119);
                  }
                }
                else
                {
                  MR_Word Var_170 = ((MR_Word) ((MR_hl_field(1, Var_168, 1))));

                  if ((Var_170 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    if ((strcmp(PredName_5, (MR_String) "result_call_8") == 0))
                      succeeded = MR_TRUE;
                    else
                    if ((strcmp(PredName_5, (MR_String) "semidet_call_8") == 0))
                      succeeded = MR_TRUE;
                    else
                      succeeded = MR_FALSE;
                    if (succeeded)
                      Constraints_8 = (MR_Word) ((MR_Unsigned) 0U);
                    else
                    {
                      MR_String Var_130;

                      Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised arity-8 no_type_info_builtin ", PredName_5);
                      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", Var_130);
                    }
                  }
                  else
                  {
                    MR_Word Var_172 = ((MR_Word) ((MR_hl_field(1, Var_170, 1))));

                    if ((Var_172 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      succeeded = (strcmp(PredName_5, (MR_String) "result_call_9") == 0);
                      if (succeeded)
                        Constraints_8 = (MR_Word) ((MR_Unsigned) 0U);
                      else
                      {
                        MR_String Var_142;

                        Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised arity-9 no_type_info_builtin ", PredName_5);
                        mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", Var_142);
                      }
                    }
                    else
                    {
                      MR_String Var_154;

                      Var_154 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognised arity-10+ no_type_info_builtin ", PredName_5);
                      mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.term_constr_initial.process_no_type_info_builtin\'/3", Var_154);
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
  return Constraints_8;
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcTable_3 = STATE_VARIABLE_ProcTable_0_2;
    else
    {
      MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ProcIds_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ProcInfo0_10;
      MR_Word Term2Info0_11;
      MR_Word HeadVars_12;
      MR_Word SizeVarMap_14;
      MR_Word Term2Info_15;
      MR_Word ProcInfo_16;
      MR_Word STATE_VARIABLE_ProcTable_1_19;
      MR_Box conv0_ProcInfo0_10;
      MR_Word _SizeVarset_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_2;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_2, ((MR_Box) (ProcId_7)), &conv0_ProcInfo0_10);
      ProcInfo0_10 = ((MR_Word) (conv0_ProcInfo0_10));
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_10, &Term2Info0_11);
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_10, &HeadVars_12);
      transform_hlds__term_constr_util__make_size_var_map_3_p_0(HeadVars_12, &_SizeVarset_13, &SizeVarMap_14);
      transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(SizeVarMap_14, Term2Info0_11, &Term2Info_15);
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(Term2Info_15, ProcInfo0_10, &ProcInfo_16);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_7)), ((MR_Box) (ProcInfo_16)), STATE_VARIABLE_ProcTable_0_2, &STATE_VARIABLE_ProcTable_1_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_8;
      next_value_of_STATE_VARIABLE_ProcTable_0_2 = STATE_VARIABLE_ProcTable_1_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcTable_0_2 = next_value_of_STATE_VARIABLE_ProcTable_0_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__term_constr_initial__set_generated_terminates_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__term_constr_util__is_zero_size_var_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__term_constr_initial__set_generated_terminates_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word SpecialPredId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ProcTable_0_4,
  MR_Word * STATE_VARIABLE_ProcTable_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcTable_5 = STATE_VARIABLE_ProcTable_0_4;
    else
    {
      MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ProcIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ProcInfo0_16;
      MR_Word HeadVars_17;
      MR_Word VarTable_18;
      MR_Word ArgSize_19;
      MR_Word Termination_20;
      MR_Word VarMap_21;
      MR_Word HeadSizeVars_22;
      MR_Word TermStatus_24;
      MR_Word ProcInfo_26;
      MR_Word STATE_VARIABLE_Term2Info_1_29;
      MR_Word Var_30;
      MR_Word STATE_VARIABLE_Term2Info_2_31;
      MR_Word STATE_VARIABLE_Term2Info_3_32;
      MR_Word STATE_VARIABLE_Term2Info_4_34;
      MR_Word STATE_VARIABLE_Term2Info_5_35;
      MR_Word STATE_VARIABLE_Term2Info_6_36;
      MR_Word STATE_VARIABLE_ProcTable_1_37;
      MR_Box conv0_ProcInfo0_16;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_ProcTable_0_4, ((MR_Box) (ProcId_13)), &conv0_ProcInfo0_16);
      ProcInfo0_16 = ((MR_Word) (conv0_ProcInfo0_16));
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo0_16, &HeadVars_17);
      hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo0_16, &VarTable_18);
      switch (SpecialPredId_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          {
            MR_Word Zeros_64;
            MR_Word Constraints_65;
            MR_Word _SizeVarset_63;

            transform_hlds__term_constr_util__make_size_var_map_3_p_0(HeadVars_17, &_SizeVarset_63, &VarMap_21);
            Zeros_64 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(ModuleInfo_1, VarTable_18, VarMap_21);
            Constraints_65 = transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0(VarMap_21, Zeros_64);
            ArgSize_19 = libs__polyhedron__from_constraints_1_f_0(Constraints_65);
            Termination_20 = (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_3[3]);
            HeadSizeVars_22 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(VarMap_21, HeadVars_17);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer NumToDrop_44;
            MR_Integer Var_51;
            MR_Word _ZeroSizeHeadVars_45;

            Var_51 = mercury__list__length_1_f_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[0]), HeadVars_17);
            NumToDrop_44 = (MR_Integer) ((MR_Unsigned) Var_51 - (MR_Unsigned) 2);
            succeeded = mercury__list__drop_3_p_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[0]), NumToDrop_44, HeadVars_17, &_ZeroSizeHeadVars_45);
            if (succeeded)
            {
              MR_Word Zeros_69;
              MR_Word Constraints_70;
              MR_Word _SizeVarset_68;

              transform_hlds__term_constr_util__make_size_var_map_3_p_0(HeadVars_17, &_SizeVarset_68, &VarMap_21);
              Zeros_69 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(ModuleInfo_1, VarTable_18, VarMap_21);
              Constraints_70 = transform_hlds__term_constr_util__create_nonneg_constraints_2_f_0(VarMap_21, Zeros_69);
              ArgSize_19 = libs__polyhedron__from_constraints_1_f_0(Constraints_70);
              Termination_20 = (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_3[3]);
              HeadSizeVars_22 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(VarMap_21, HeadVars_17);
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "less than two arguments to builtin index");
                return;
              }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Zeros_41;
            MR_Word NonZeroHeadSizeVars_42;
            MR_Word Constrs_43;
            MR_Word Var_46;
            MR_Word _SizeVarset_40;

            transform_hlds__term_constr_util__make_size_var_map_3_p_0(HeadVars_17, &_SizeVarset_40, &VarMap_21);
            HeadSizeVars_22 = transform_hlds__term_constr_util__prog_vars_to_size_vars_2_f_0(VarMap_21, HeadVars_17);
            Zeros_41 = transform_hlds__term_constr_util__find_zero_size_vars_3_f_0(ModuleInfo_1, VarTable_18, VarMap_21);
            {
              Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_46, 0) = ((MR_Box) (&transform_hlds__term_constr_initial_scalar_common_4[0]));
              MR_hl_field(0, Var_46, 1) = ((MR_Box) (transform_hlds__term_constr_initial__set_generated_terminates_5_p_0_1));
              MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_46, 3) = ((MR_Box) (Zeros_41));
            }
            NonZeroHeadSizeVars_42 = mercury__list__negated_filter_2_f_0((MR_Word) (&transform_hlds__term_constr_initial_scalar_common_2[1]), Var_46, HeadSizeVars_22);
            if ((NonZeroHeadSizeVars_42 == (MR_Word) ((MR_Unsigned) 0U)))
              Constrs_43 = (MR_Word) ((MR_Unsigned) 0U);
            else
            {
              MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, NonZeroHeadSizeVars_42, 1))));
              MR_Word Var_60 = ((MR_Word) ((MR_hl_field(1, NonZeroHeadSizeVars_42, 0))));

              if ((Var_59 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "wrong number of args for unify");
                  return;
                }
              else
              {
                MR_Word Var_61 = ((MR_Word) ((MR_hl_field(1, Var_59, 1))));
                MR_Word Var_62 = ((MR_Word) ((MR_hl_field(1, Var_59, 0))));

                if ((Var_61 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_47;

                  Var_47 = libs__lp_rational__make_vars_eq_constraint_2_f_0(Var_60, Var_62);
                  {
                    Constrs_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Constrs_43, 0) = ((MR_Box) (Var_47));
                    MR_hl_field(1, Constrs_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.term_constr_initial.special_pred_id_to_termination\'/8", (MR_String) "wrong number of args for unify");
                    return;
                  }
              }
            }
            ArgSize_19 = libs__polyhedron__from_constraints_1_f_0(Constrs_43);
            Termination_20 = (MR_Word) (&transform_hlds__term_constr_initial_scalar_common_3[3]);
          }
          break;
      }
      hlds__hlds_pred__proc_info_get_termination2_info_2_p_0(ProcInfo0_16, &STATE_VARIABLE_Term2Info_1_29);
      {
        Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_30, 0) = ((MR_Box) (ArgSize_19));
      }
      transform_hlds__term_constr_main_types__term2_info_set_success_constrs_3_p_0(Var_30, STATE_VARIABLE_Term2Info_1_29, &STATE_VARIABLE_Term2Info_2_31);
      {
        TermStatus_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TermStatus_24, 0) = ((MR_Box) (Termination_20));
      }
      transform_hlds__term_constr_main_types__term2_info_set_term_status_3_p_0(TermStatus_24, STATE_VARIABLE_Term2Info_2_31, &STATE_VARIABLE_Term2Info_3_32);
      transform_hlds__term_constr_main_types__term2_info_set_intermod_status_3_p_0((MR_Word) (MR_mkword(1, &transform_hlds__term_constr_initial_scalar_common_3[2])), STATE_VARIABLE_Term2Info_3_32, &STATE_VARIABLE_Term2Info_4_34);
      transform_hlds__term_constr_main_types__term2_info_set_size_var_map_3_p_0(VarMap_21, STATE_VARIABLE_Term2Info_4_34, &STATE_VARIABLE_Term2Info_5_35);
      transform_hlds__term_constr_main_types__term2_info_set_head_vars_3_p_0(HeadSizeVars_22, STATE_VARIABLE_Term2Info_5_35, &STATE_VARIABLE_Term2Info_6_36);
      hlds__hlds_pred__proc_info_set_termination2_info_3_p_0(STATE_VARIABLE_Term2Info_6_36, ProcInfo0_16, &ProcInfo_26);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_13)), ((MR_Box) (ProcInfo_26)), STATE_VARIABLE_ProcTable_0_4, &STATE_VARIABLE_ProcTable_1_37);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = ProcIds_14;
      next_value_of_STATE_VARIABLE_ProcTable_0_4 = STATE_VARIABLE_ProcTable_1_37;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ProcTable_0_4 = next_value_of_STATE_VARIABLE_ProcTable_0_4;
      continue;
    }
    break;
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
