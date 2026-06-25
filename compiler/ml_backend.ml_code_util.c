/*
** Automatically generated from `ml_code_util.m'
** by the Mercury compiler,
** version rotd-2026-06-25
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


// :- module ml_backend.ml_code_util.
// :- implementation.

/*
INIT mercury__ml_backend__ml_code_util__init
ENDINIT
*/

#include "ml_backend.ml_code_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_accurate_gc.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.java_names.mih"
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
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_VA_TypeInfo_Struct5 ml_backend__ml_code_util____vti_pred_5list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;

static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1643__1_1_f_0(
  MR_Word LambdaHeadVar__1_22);

static MR_bool MR_CALL 
ml_backend__ml_code_util__search_ground_rval_3_p_0(
  MR_Word FinalConstVarMap_4,
  MR_Word Var_5,
  MR_Word * Rval_6);

static MR_bool MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_code_util__ml_skip_dummy_argument_types_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_code_util____Unify____gen_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_code_util____Compare____gen_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_1[25][2];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_2[15][1];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_3[8][3];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_4[1][5];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_5[1][6];




static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_1[25][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(1, &ml_backend__ml_code_util_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 28U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 32U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[4])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[6])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(1, &ml_backend__ml_code_util_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 36U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 40U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 48U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 52U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  21 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[6])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(1, &ml_backend__ml_code_util_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[13])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_3[3]))),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[14])))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_2[15][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U)) },
  /* row   1 */
  { (MR_Box) (((MR_Unsigned) 1U << 1)) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "{\n")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "MR_MemoryList allocated_mem = NULL;\n")) },
  /* row   4 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_3[1]))) },
  /* row   5 */
  { ((MR_Box) ((MR_String) ", ((MR_Closure_Layout *)\n\t")) },
  /* row   6 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_3[0]))) },
  /* row   7 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "}\n")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "MR_deallocate(allocated_mem);\n")) },
  /* row  10 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_3[4]))) },
  /* row  11 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_3[5]))) },
  /* row  12 */
  { ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))) },
  /* row  13 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_3[3]))) },
  /* row  14 */
  { ((MR_Box) ((MR_String) " = (MR_C_Pointer) MR_make_type_info_maybe_existq(\n\t")) },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_3[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &ml_backend__ml_code_util_scalar_common_1[12])))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 36U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_4[0])),
    ((MR_Box) (ml_backend__ml_code_util__ml_gen_call_current_success_cont_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)),
    ((MR_Box) (&ml_backend__ml_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0) }
};

static const MR_VA_TypeInfo_Struct5 ml_backend__ml_code_util____vti_pred_5list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) (&ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0),
    (MR_TypeInfo) (&ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0),
    (MR_TypeInfo) (&ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0),
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0),
    (MR_TypeInfo) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)
  }
};

const MR_TypeCtorInfo_Struct ml_backend__ml_code_util__ml_backend__ml_code_util__type_ctor_info_gen_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_code_util____Unify____gen_pred_0_0_10001)),
  ((MR_Box) (ml_backend__ml_code_util____Compare____gen_pred_0_0_10001)),
  (MR_String) "ml_backend.ml_code_util",
  (MR_String) "gen_pred",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__ml_code_util____vti_pred_5list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1643__1_1_f_0(
  MR_Word LambdaHeadVar__1_22)
{
  MR_Word LambdaHeadVar__2_23;

  {
    LambdaHeadVar__2_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, LambdaHeadVar__2_23, 0) = ((MR_Box) (LambdaHeadVar__1_22));
  }
  return LambdaHeadVar__2_23;
}

void MR_CALL 
ml_backend__ml_code_util____Compare____gen_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
ml_backend__ml_code_util____Unify____gen_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_code_util__search_ground_rval_3_p_0(
  MR_Word FinalConstVarMap_4,
  MR_Word Var_5,
  MR_Word * Rval_6)
{
  MR_bool succeeded;
  MR_Word GroundTerm_7;
  MR_Box conv0_GroundTerm_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[3]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0), FinalConstVarMap_4, ((MR_Box) (Var_5)), &conv0_GroundTerm_7);
  if (succeeded)
  {
    GroundTerm_7 = ((MR_Word) (conv0_GroundTerm_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Rval_6 = ((MR_Word) ((MR_hl_field(0, GroundTerm_7, 0))));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
ml_backend__ml_code_util__fixup_builtin_module_1_f_0(
  MR_Word ModuleName0_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ModuleName0_3)) == (MR_Integer) 0);
  MR_Word ModuleName_4;
  MR_String Var_5;

  if (succeeded)
  {
    Var_5 = ((MR_String) ((MR_hl_field(0, ModuleName0_3, 0))));
    succeeded = (strcmp(Var_5, (MR_String) "") == 0);
  }
  if (succeeded)
    ModuleName_4 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  else
    ModuleName_4 = ModuleName0_3;
  return ModuleName_4;
}

void MR_CALL 
ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(
  MR_Word OutVars_11,
  MR_Word FieldTypes_12,
  MR_Word FieldIds_13,
  MR_Word VectorCommon_14,
  MR_Word StructType_15,
  MR_Word IndexRval_16,
  MR_Word Context_17,
  MR_Word * Stmts_18,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded = (OutVars_11 == (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
  {
    succeeded = (FieldTypes_12 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (FieldIds_13 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    *Stmts_18 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_0_29;
  }
  else
  {
    MR_Word HeadOutVar_20;
    MR_Word TailOutVars_21;
    MR_Word HeadFieldType_22;
    MR_Word TailFieldTypes_23;
    MR_Word HeadFieldId_24;
    MR_Word TailFieldIds_25;

    succeeded = (OutVars_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadOutVar_20 = ((MR_Word) ((MR_hl_field(1, OutVars_11, 0))));
      TailOutVars_21 = ((MR_Word) ((MR_hl_field(1, OutVars_11, 1))));
      succeeded = (FieldTypes_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadFieldType_22 = ((MR_Word) ((MR_hl_field(1, FieldTypes_12, 0))));
        TailFieldTypes_23 = ((MR_Word) ((MR_hl_field(1, FieldTypes_12, 1))));
        succeeded = (FieldIds_13 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadFieldId_24 = ((MR_Word) ((MR_hl_field(1, FieldIds_13, 0))));
          TailFieldIds_25 = ((MR_Word) ((MR_hl_field(1, FieldIds_13, 1))));
        }
      }
    }
    if (succeeded)
    {
      MR_Word HeadOutVarLval_26;
      MR_Word HeadStmt_27;
      MR_Word TailStmts_28;
      MR_Word BaseRval_34;
      MR_Word FieldLval_35;
      MR_Word AtomicStmt_36;
      MR_Word Var_40;

      ml_backend__ml_code_util__ml_gen_var_direct_3_p_0(STATE_VARIABLE_Info_0_29, HeadOutVar_20, &HeadOutVarLval_26);
      {
        BaseRval_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, BaseRval_34, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, BaseRval_34, 1) = ((MR_Box) (VectorCommon_14));
        MR_hl_field(3, BaseRval_34, 2) = ((MR_Box) (IndexRval_16));
      }
      {
        FieldLval_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FieldLval_35, 0) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_code_util_scalar_common_2[12])));
        MR_hl_field(0, FieldLval_35, 1) = ((MR_Box) (BaseRval_34));
        MR_hl_field(0, FieldLval_35, 2) = ((MR_Box) (StructType_15));
        MR_hl_field(0, FieldLval_35, 3) = ((MR_Box) (HeadFieldId_24));
        MR_hl_field(0, FieldLval_35, 4) = ((MR_Box) (HeadFieldType_22));
      }
      {
        Var_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_40, 0) = ((MR_Box) (FieldLval_35));
      }
      {
        AtomicStmt_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, AtomicStmt_36, 0) = ((MR_Box) (HeadOutVarLval_26));
        MR_hl_field(2, AtomicStmt_36, 1) = ((MR_Box) (Var_40));
      }
      {
        HeadStmt_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, HeadStmt_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, HeadStmt_27, 1) = ((MR_Box) (AtomicStmt_36));
        MR_hl_field(3, HeadStmt_27, 2) = ((MR_Box) (Context_17));
      }
      ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(TailOutVars_21, TailFieldTypes_23, TailFieldIds_25, VectorCommon_14, StructType_15, IndexRval_16, Context_17, &TailStmts_28, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadStmt_27));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailStmts_28));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_util.ml_generate_field_assigns\'/10", (MR_String) "mismatched lists");
        return;
      }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_generate_field_assign_8_p_0(
  MR_Word OutVarLval_9,
  MR_Word FieldType_10,
  MR_Word FieldId_11,
  MR_Word VectorCommon_12,
  MR_Word StructType_13,
  MR_Word IndexRval_14,
  MR_Word Context_15,
  MR_Word * Stmt_16)
{
  MR_Word BaseRval_17;
  MR_Word FieldLval_18;
  MR_Word AtomicStmt_19;
  MR_Word Var_23;

  {
    BaseRval_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, BaseRval_17, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, BaseRval_17, 1) = ((MR_Box) (VectorCommon_12));
    MR_hl_field(3, BaseRval_17, 2) = ((MR_Box) (IndexRval_14));
  }
  {
    FieldLval_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FieldLval_18, 0) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_code_util_scalar_common_2[12])));
    MR_hl_field(0, FieldLval_18, 1) = ((MR_Box) (BaseRval_17));
    MR_hl_field(0, FieldLval_18, 2) = ((MR_Box) (StructType_13));
    MR_hl_field(0, FieldLval_18, 3) = ((MR_Box) (FieldId_11));
    MR_hl_field(0, FieldLval_18, 4) = ((MR_Box) (FieldType_10));
  }
  {
    Var_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_23, 0) = ((MR_Box) (FieldLval_18));
  }
  {
    AtomicStmt_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, AtomicStmt_19, 0) = ((MR_Box) (OutVarLval_9));
    MR_hl_field(2, AtomicStmt_19, 1) = ((MR_Box) (Var_23));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *Stmt_16 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, base, 1) = ((MR_Box) (AtomicStmt_19));
    MR_hl_field(3, base, 2) = ((MR_Box) (Context_15));
  }
}

MR_bool MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arms_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Goals_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Soln_13;
    MR_Word Solns_14;
    MR_Word STATE_VARIABLE_Info_1_18;

    succeeded = ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(HeadVar__1_1, Goal_11, &Soln_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_1_18);
    if (succeeded)
    {
      succeeded = ml_backend__ml_code_util__ml_generate_constants_for_arms_5_p_0(HeadVar__1_1, Goals_12, &Solns_14, STATE_VARIABLE_Info_1_18, STATE_VARIABLE_Info_5);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Soln_13));
          MR_hl_field(1, base, 1) = ((MR_Box) (Solns_14));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Rval_6;

  succeeded = ml_backend__ml_code_util__search_ground_rval_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Rval_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Rval_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(
  MR_Word Vars_6,
  MR_Word Goal_7,
  MR_Word * Soln_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  MR_bool succeeded;
  MR_Word InitConstVarMap_10;
  MR_Word FinalConstVarMap_14;
  MR_Word STATE_VARIABLE_Info_1_18;
  MR_Word Var_19;
  MR_Word _LocalVarDefns_11;
  MR_Word _FuncDefns_12;
  MR_Word _Stmts_13;

  ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_15, &InitConstVarMap_10);
  ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 0, Goal_7, &_LocalVarDefns_11, &_FuncDefns_12, &_Stmts_13, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_1_18);
  ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_1_18, &FinalConstVarMap_14);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_5[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (FinalConstVarMap_14));
  }
  succeeded = mercury__list__map_3_p_2((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[3]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_19, Vars_6, Soln_8);
  if (succeeded)
  {
    ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_10, STATE_VARIABLE_Info_1_18, STATE_VARIABLE_Info_16);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Integer MR_CALL 
ml_backend__ml_code_util__ml_base_typeclass_info_method_offset_0_f_0(void)
{
  return (MR_Integer) 4;
}

MR_Integer MR_CALL 
ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_f_0(void)
{
  return (MR_Integer) 0;
}

MR_Integer MR_CALL 
ml_backend__ml_code_util__ml_closure_arg_offset_0_f_0(void)
{
  return (MR_Integer) 2;
}

void MR_CALL 
ml_backend__ml_code_util__ml_declare_env_ptr_arg_1_p_0(
  MR_Word * Arg_2)
{
  *Arg_2 = (MR_Word) (&ml_backend__ml_code_util_scalar_common_3[6]);
}

void MR_CALL 
ml_backend__ml_code_util__ml_get_env_ptr_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[11]));
}

void MR_CALL 
ml_backend__ml_code_util__ml_initial_cont_3_p_0(
  MR_Word Info_4,
  MR_Word OutputVarLvalsTypes_5,
  MR_Word * Cont_6)
{
  MR_Word ModuleInfo_7;
  MR_Word OutputVarLvalsMLDSTypes_8;
  MR_Word OutputVarMLDSTypes_9;
  MR_Word ContLval_10;
  MR_Word Var_14;
  MR_Word Var_18;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_4, &ModuleInfo_7);
  ml_backend__ml_code_util__ml_skip_dummy_argument_types_3_p_0(ModuleInfo_7, OutputVarLvalsTypes_5, &OutputVarLvalsMLDSTypes_8);
  mercury__assoc_list__values_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), OutputVarLvalsMLDSTypes_8, &OutputVarMLDSTypes_9);
  {
    Var_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_14, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_14, 1) = ((MR_Box) (OutputVarMLDSTypes_9));
  }
  {
    ContLval_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ContLval_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, ContLval_10, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[16])));
    MR_hl_field(3, ContLval_10, 2) = ((MR_Box) (Var_14));
  }
  {
    Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_18, 0) = ((MR_Box) (ContLval_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Cont_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[10])));
    MR_hl_field(0, base, 2) = ((MR_Box) (OutputVarLvalsMLDSTypes_8));
  }
}

static void MR_CALL 
ml_backend__ml_code_util__ml_skip_dummy_argument_types_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Lval_6;
    MR_Word Type_7;
    MR_Word LvalsTypes_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word TailLvalsMLDSTypes_10;
    MR_Word IsDummy_11;
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    Lval_6 = ((MR_Word) ((MR_hl_field(0, Var_13, 0))));
    Type_7 = ((MR_Word) ((MR_hl_field(0, Var_13, 1))));
    ml_backend__ml_code_util__ml_skip_dummy_argument_types_3_p_0(ModuleInfo_1, LvalsTypes_8, &TailLvalsMLDSTypes_10);
    IsDummy_11 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, Type_7);
    switch (IsDummy_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__3_3 = TailLvalsMLDSTypes_10;
        break;
      case (MR_Integer) 1:
        {
          MR_Word MLDSType_12;
          MR_Word Var_14;

          MLDSType_12 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_1, Type_7);
          {
            Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_14, 0) = ((MR_Box) (Lval_6));
            MR_hl_field(0, Var_14, 1) = ((MR_Box) (MLDSType_12));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_14));
            MR_hl_field(1, base, 1) = ((MR_Box) (TailLvalsMLDSTypes_10));
          }
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_set_cond_var_4_p_0(
  MR_Word CondVar_5,
  MR_Word Value_6,
  MR_Word Context_7,
  MR_Word * Stmt_8)
{
  MR_Word CondVarLval_9;
  MR_Word Var_10;
  MR_Integer CondNum_12 = (MR_Integer) (CondVar_5);
  MR_Word Var_13;
  MR_Word Assign_14;

  {
    Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_13, 1) = ((MR_Box) (CondNum_12));
  }
  {
    Var_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_10, 1) = ((MR_Box) (Var_13));
  }
  {
    CondVarLval_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CondVarLval_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, CondVarLval_9, 1) = ((MR_Box) (Var_10));
    MR_hl_field(3, CondVarLval_9, 2) = ((MR_Box) ((MR_Unsigned) 16U));
  }
  {
    Assign_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Assign_14, 0) = ((MR_Box) (CondVarLval_9));
    MR_hl_field(2, Assign_14, 1) = ((MR_Box) (Value_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *Stmt_8 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Assign_14));
    MR_hl_field(3, base, 2) = ((MR_Box) (Context_7));
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_test_cond_var_2_p_0(
  MR_Word CondVar_3,
  MR_Word * CondVarRval_4)
{
  MR_Word CondVarLval_5;
  MR_Word Var_6;
  MR_Integer CondNum_8 = (MR_Integer) (CondVar_3);
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_9, 1) = ((MR_Box) (CondNum_8));
  }
  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) (Var_9));
  }
  {
    CondVarLval_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CondVarLval_5, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, CondVarLval_5, 1) = ((MR_Box) (Var_6));
    MR_hl_field(3, CondVarLval_5, 2) = ((MR_Box) ((MR_Unsigned) 16U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    *CondVarRval_4 = base;
    MR_hl_field(2, base, 0) = ((MR_Box) (CondVarLval_5));
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_cond_var_lval_2_p_0(
  MR_Word CondSeq_3,
  MR_Word * CondVarLval_4)
{
  MR_Word Var_5;
  MR_Integer CondNum_7 = (MR_Integer) (CondSeq_3);
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_8, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_8, 1) = ((MR_Box) (CondNum_7));
  }
  {
    Var_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_5, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_5, 1) = ((MR_Box) (Var_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *CondVarLval_4 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_5));
    MR_hl_field(3, base, 2) = ((MR_Box) ((MR_Unsigned) 16U));
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_cond_var_decl_2_f_0(
  MR_Word CondSeq_4,
  MR_Word Context_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_6;
  MR_Integer CondNum_9 = (MR_Integer) (CondSeq_4);
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_10, 1) = ((MR_Box) (CondNum_9));
  }
  {
    Var_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_6, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Var_6, 1) = ((MR_Box) (Var_10));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__3_3, 0) = ((MR_Box) (Var_6));
    MR_hl_field(0, HeadVar__3_3, 1) = ((MR_Box) (Context_5));
    MR_hl_field(0, HeadVar__3_3, 2) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(0, HeadVar__3_3, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__3_3, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__3_3;
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_set_success_5_p_0(
  MR_Word Value_6,
  MR_Word Context_7,
  MR_Word * Stmt_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  MR_Word Assign_17;

  ml_backend__ml_gen_info__ml_gen_info_set_used_succeeded_var_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
  {
    Assign_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Assign_17, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_3[3])));
    MR_hl_field(2, Assign_17, 1) = ((MR_Box) (Value_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *Stmt_8 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Assign_17));
    MR_hl_field(3, base, 2) = ((MR_Box) (Context_7));
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_test_success_3_p_0(
  MR_Word * SucceededRval_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  ml_backend__ml_gen_info__ml_gen_info_set_used_succeeded_var_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_7, STATE_VARIABLE_Info_8);
  *SucceededRval_4 = (MR_Word) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[13]));
}

void MR_CALL 
ml_backend__ml_code_util__ml_success_lval_3_p_0(
  MR_Word * SucceededLval_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  *SucceededLval_4 = (MR_Word) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_3[3]));
  ml_backend__ml_gen_info__ml_gen_info_set_used_succeeded_var_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_6, STATE_VARIABLE_Info_7);
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(
  MR_Word Context_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[15])));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Context_3));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(0, HeadVar__2_2, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__2_2, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_failure_5_p_0(
  MR_Word CodeModel_6,
  MR_Word Context_7,
  MR_Word * Stmts_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  switch (CodeModel_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_failure\'/5", (MR_String) "\140fail\' has determinism \140det\'");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        *Stmts_8 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_12 = STATE_VARIABLE_Info_0_11;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SetSuccessFalse_10;

        ml_backend__ml_gen_info__ml_gen_info_set_used_succeeded_var_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
        {
          SetSuccessFalse_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, SetSuccessFalse_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, SetSuccessFalse_10, 1) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_1[24])));
          MR_hl_field(3, SetSuccessFalse_10, 2) = ((MR_Box) (Context_7));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SetSuccessFalse_10));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_success_5_p_0(
  MR_Word CodeModel_6,
  MR_Word Context_7,
  MR_Word * Stmts_8,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  switch (CodeModel_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Stmts_8 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CallCont_11;

        ml_backend__ml_code_util__ml_gen_call_current_success_cont_3_p_0(STATE_VARIABLE_Info_0_12, Context_7, &CallCont_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CallCont_11));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SetSuccessTrue_10;

        ml_backend__ml_gen_info__ml_gen_info_set_used_succeeded_var_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
        {
          SetSuccessTrue_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, SetSuccessTrue_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, SetSuccessTrue_10, 1) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_1[23])));
          MR_hl_field(3, SetSuccessTrue_10, 2) = ((MR_Box) (Context_7));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SetSuccessTrue_10));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_23;

  conv0_LambdaHeadVar__2_23 = ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1643__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_23));
  return wrapper_arg_2;
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_3_p_0(
  MR_Word Info_4,
  MR_Word Context_5,
  MR_Word * Stmt_6)
{
  MR_Word SuccCont_7;
  MR_Word FuncRval_8;
  MR_Word EnvPtrRval_9;
  MR_Word ArgTypesLvals0_10;
  MR_Word ArgLvals0_11;
  MR_Word ArgTypes0_12;
  MR_Word ArgRvals0_13;
  MR_Word ArgRvals_15;
  MR_Word ArgTypes_17;
  MR_Word Signature_19;
  MR_Word Var_24;

  ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(Info_4, &SuccCont_7);
  FuncRval_8 = ((MR_Word) ((MR_hl_field(0, SuccCont_7, 0))));
  EnvPtrRval_9 = ((MR_Word) ((MR_hl_field(0, SuccCont_7, 1))));
  ArgTypesLvals0_10 = ((MR_Word) ((MR_hl_field(0, SuccCont_7, 2))));
  mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), ArgTypesLvals0_10, &ArgLvals0_11, &ArgTypes0_12);
  ArgRvals0_13 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_code_util_scalar_common_3[7]), ArgLvals0_11);
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (EnvPtrRval_9));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ArgRvals_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ArgRvals0_13, Var_24);
  ArgTypes_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), ArgTypes0_12, (MR_Word) (MR_mkword(1, &ml_backend__ml_code_util_scalar_common_1[4])));
  {
    Signature_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Signature_19, 0) = ((MR_Box) (ArgTypes_17));
    MR_hl_field(0, Signature_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    *Stmt_6 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Signature_19));
    MR_hl_field(3, base, 2) = ((MR_Box) (FuncRval_8));
    MR_hl_field(3, base, 3) = ((MR_Box) (ArgRvals_15));
    MR_hl_field(3, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(3, base, 6) = ((MR_Box) (Context_5));
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(
  MR_Word CallerType_15,
  MR_Word CalleeType_16,
  MR_Word BoxPolicy_17,
  MR_Word VarLval_18,
  MR_Word VarName_19,
  MR_Word Context_20,
  MR_Word ForClosureWrapper_21,
  MR_Integer ArgNum_22,
  MR_Word * ArgLval_23,
  MR_Word * ConvDecls_24,
  MR_Word * ConvInputStmts_25,
  MR_Word * ConvOutputStmts_26,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_28;
  MR_Word BoxedRval_29;
  MR_Word Var_48;
  MR_Word Var_60;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_46, &ModuleInfo_28);
  {
    Var_48 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_48, 0) = ((MR_Box) (VarLval_18));
  }
  switch (BoxPolicy_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      BoxedRval_29 = Var_48;
      break;
    case (MR_Integer) 0:
      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_28, CalleeType_16, CallerType_15, Var_48, &BoxedRval_29);
      break;
  }
  succeeded = ((MR_tag((MR_Word) BoxedRval_29)) == (MR_Integer) 2);
  if (succeeded)
  {
    Var_60 = ((MR_Word) ((MR_hl_field(2, BoxedRval_29, 0))));
    succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(VarLval_18, Var_60);
  }
  if (succeeded)
  {
    *ArgLval_23 = VarLval_18;
    *ConvDecls_24 = (MR_Word) ((MR_Unsigned) 0U);
    *ConvInputStmts_25 = (MR_Word) ((MR_Unsigned) 0U);
    *ConvOutputStmts_26 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_0_46;
  }
  else
  {
    MR_Word ConvVarSeq_30;
    MR_Integer ConvVarNum_31;
    MR_Word ArgVarName_34;
    MR_Word MLDS_CalleeType_36;
    MR_Word ArgVarDecl_39;
    MR_Word CallerIsDummy_41;
    MR_Word STATE_VARIABLE_Info_1_49;
    MR_Word ModuleInfo_62;
    MR_String ProgVarName_32;
    MR_Integer ProgVarNum_33;

    ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(&ConvVarSeq_30, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_1_49);
    ConvVarNum_31 = (MR_Integer) (ConvVarSeq_30);
    succeeded = ((MR_tag((MR_Word) VarName_19)) == (MR_Integer) 1);
    if (succeeded)
    {
      ProgVarName_32 = ((MR_String) ((MR_hl_field(1, VarName_19, 0))));
      ProgVarNum_33 = ((MR_Integer) ((MR_hl_field(1, VarName_19, 1))));
      {
        ArgVarName_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ArgVarName_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, ArgVarName_34, 1) = ((MR_Box) (ConvVarNum_31));
        MR_hl_field(3, ArgVarName_34, 2) = ((MR_Box) (ProgVarName_32));
        MR_hl_field(3, ArgVarName_34, 3) = ((MR_Box) (ProgVarNum_33));
      }
    }
    else
    {
      MR_String VarNameStr_35;
      MR_Word Var_50;

      VarNameStr_35 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(VarName_19);
      {
        Var_50 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_50, 0) = ((MR_Box) (ConvVarNum_31));
        MR_hl_field(2, Var_50, 1) = ((MR_Box) (VarNameStr_35));
      }
      {
        ArgVarName_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ArgVarName_34, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, ArgVarName_34, 1) = ((MR_Box) (Var_50));
      }
    }
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_1_49, &ModuleInfo_62);
    MLDS_CalleeType_36 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_62, CalleeType_16);
    switch (ForClosureWrapper_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word GC_Stmts_40;

          ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_p_0(ArgVarName_34, CalleeType_16, CallerType_15, Context_20, &GC_Stmts_40, STATE_VARIABLE_Info_1_49, STATE_VARIABLE_Info_47);
          {
            ArgVarDecl_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ArgVarDecl_39, 0) = ((MR_Box) (ArgVarName_34));
            MR_hl_field(0, ArgVarDecl_39, 1) = ((MR_Box) (Context_20));
            MR_hl_field(0, ArgVarDecl_39, 2) = ((MR_Box) (MLDS_CalleeType_36));
            MR_hl_field(0, ArgVarDecl_39, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ArgVarDecl_39, 4) = ((MR_Box) (GC_Stmts_40));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = ((MR_tag((MR_Word) CallerType_15)) == (MR_Integer) 0);
          if (succeeded)
            ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_p_0(ArgVarName_34, CalleeType_16, ArgNum_22, Context_20, &ArgVarDecl_39, STATE_VARIABLE_Info_1_49, STATE_VARIABLE_Info_47);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_box_or_unbox_lval\'/14", (MR_String) "invalid CalleeType for closure wrapper");
              return;
            }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ConvDecls_24 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ArgVarDecl_39));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *ArgLval_23 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, base, 1) = ((MR_Box) (ArgVarName_34));
      MR_hl_field(3, base, 2) = ((MR_Box) (MLDS_CalleeType_36));
    }
    CallerIsDummy_41 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_28, CallerType_15);
    switch (CallerIsDummy_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ConvInputStmts_25 = (MR_Word) ((MR_Unsigned) 0U);
          *ConvOutputStmts_26 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConvertedVarRval_42;
          MR_Word AssignInputStmt_43;
          MR_Word ConvertedArgRval_44;
          MR_Word AssignOutputStmt_45;
          MR_Word Var_58;
          MR_Word Assign_64;
          MR_Word Assign_65;

          switch (BoxPolicy_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              ConvertedVarRval_42 = Var_48;
              break;
            case (MR_Integer) 0:
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_28, CallerType_15, CalleeType_16, Var_48, &ConvertedVarRval_42);
              break;
          }
          {
            Assign_64 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Assign_64, 0) = ((MR_Box) (*ArgLval_23));
            MR_hl_field(2, Assign_64, 1) = ((MR_Box) (ConvertedVarRval_42));
          }
          {
            AssignInputStmt_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, AssignInputStmt_43, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, AssignInputStmt_43, 1) = ((MR_Box) (Assign_64));
            MR_hl_field(3, AssignInputStmt_43, 2) = ((MR_Box) (Context_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ConvInputStmts_25 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (AssignInputStmt_43));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_58, 0) = ((MR_Box) (*ArgLval_23));
          }
          switch (BoxPolicy_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              ConvertedArgRval_44 = Var_58;
              break;
            case (MR_Integer) 0:
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_28, CalleeType_16, CallerType_15, Var_58, &ConvertedArgRval_44);
              break;
          }
          {
            Assign_65 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Assign_65, 0) = ((MR_Box) (VarLval_18));
            MR_hl_field(2, Assign_65, 1) = ((MR_Box) (ConvertedArgRval_44));
          }
          {
            AssignOutputStmt_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, AssignOutputStmt_45, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, AssignOutputStmt_45, 1) = ((MR_Box) (Assign_65));
            MR_hl_field(3, AssignOutputStmt_45, 2) = ((MR_Box) (Context_20));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ConvOutputStmts_26 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (AssignOutputStmt_45));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_p_0(
  MR_Word VarName_8,
  MR_Word Type_9,
  MR_Integer ArgNum_10,
  MR_Word Context_11,
  MR_Word * LocalVarDefn_12,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  MR_Word TypeInfoName_20 = (MR_Word) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[8]));
  MR_Word ModuleInfo_21;
  MR_Word TypeInfoMercuryType_22;
  MR_Word TypeInfoType_23;
  MR_Word TypeInfoLval_24;
  MR_Word TypeInfoDecl_25;
  MR_Word GCStmt0_26;
  MR_Word GCStmt_33;
  MR_Word Var_40;
  MR_Word Var_92;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_21);
  TypeInfoMercuryType_22 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  TypeInfoType_23 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_21, TypeInfoMercuryType_22);
  {
    TypeInfoLval_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, TypeInfoLval_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, TypeInfoLval_24, 1) = ((MR_Box) (TypeInfoName_20));
    MR_hl_field(3, TypeInfoLval_24, 2) = ((MR_Box) (TypeInfoType_23));
  }
  TypeInfoDecl_25 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(TypeInfoName_20, TypeInfoType_23, (MR_Word) ((MR_Unsigned) 0U), Context_11);
  {
    Var_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_40, 0) = ((MR_Box) (TypeInfoLval_24));
  }
  ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_p_0(VarName_8, Type_9, Var_40, Context_11, &GCStmt0_26, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
  switch (MR_tag((MR_Word) GCStmt0_26)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      GCStmt_33 = GCStmt0_26;
      break;
    case (MR_Integer) 1:
      {
        MR_Word CallTraceFuncCode_103 = ((MR_Word) ((MR_hl_field(1, GCStmt0_26, 0))));
        MR_Word MakeTypeInfoCodeC_104;
        MR_Word MakeTypeInfoCode_105;
        MR_Word DeallocateCode_107;
        MR_Word GCTraceCode_108;
        MR_Word Var_110;
        MR_Word Var_112;
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_119;
        MR_Word Var_121;
        MR_Word Var_123;
        MR_Word Var_125;
        MR_Word Var_126;
        MR_String Var_127;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word Var_132;
        MR_String Var_134;
        MR_String Var_136;

        {
          Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_115, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_115, 1) = ((MR_Box) (TypeInfoLval_24));
        }
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_2[7]), ArgNum_10, &Var_134);
        Var_136 = mercury__string__f_43_43_2_f_0(Var_134, (MR_String) " - 1],\n\tNULL, NULL, &allocated_mem);\n");
        Var_127 = mercury__string__f_43_43_2_f_0((MR_String) ")->MR_closure_arg_pseudo_type_info[", Var_136);
        {
          Var_126 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_126, 0) = ((MR_Box) (Var_127));
        }
        {
          Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
          MR_hl_field(1, Var_125, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_123, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[10])));
          MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_125));
        }
        {
          Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_121, 0) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[5])));
          MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_123));
        }
        {
          Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_119, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[9])));
          MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_121));
        }
        {
          Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_116, 0) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[14])));
          MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
        }
        {
          Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
          MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_116));
        }
        {
          Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_112, 0) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[3])));
          MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_114));
        }
        {
          Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_110, 0) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[2])));
          MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_112));
        }
        {
          MakeTypeInfoCodeC_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, MakeTypeInfoCodeC_104, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, MakeTypeInfoCodeC_104, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, MakeTypeInfoCodeC_104, 2) = ((MR_Box) (Var_110));
        }
        {
          MakeTypeInfoCode_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, MakeTypeInfoCode_105, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, MakeTypeInfoCode_105, 1) = ((MR_Box) (MakeTypeInfoCodeC_104));
          MR_hl_field(3, MakeTypeInfoCode_105, 2) = ((MR_Box) (Context_11));
        }
        {
          DeallocateCode_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, DeallocateCode_107, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, DeallocateCode_107, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_3[2])));
          MR_hl_field(3, DeallocateCode_107, 2) = ((MR_Box) (Context_11));
        }
        {
          Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_129, 0) = ((MR_Box) (TypeInfoDecl_25));
          MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_132, 0) = ((MR_Box) (DeallocateCode_107));
          MR_hl_field(1, Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_131, 0) = ((MR_Box) (CallTraceFuncCode_103));
          MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_132));
        }
        {
          Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_130, 0) = ((MR_Box) (MakeTypeInfoCode_105));
          MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
        }
        {
          GCTraceCode_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GCTraceCode_108, 0) = ((MR_Box) (Var_129));
          MR_hl_field(0, GCTraceCode_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, GCTraceCode_108, 2) = ((MR_Box) (Var_130));
          MR_hl_field(0, GCTraceCode_108, 3) = ((MR_Box) (Context_11));
        }
        {
          GCStmt_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, GCStmt_33, 0) = ((MR_Box) (GCTraceCode_108));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CallTraceFuncCode_27 = ((MR_Word) ((MR_hl_field(2, GCStmt0_26, 0))));
        MR_Word MakeTypeInfoCodeC_28;
        MR_Word MakeTypeInfoCode_29;
        MR_Word DeallocateCode_31;
        MR_Word GCTraceCode_32;
        MR_Word Var_43;
        MR_Word Var_46;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_56;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_String Var_67;
        MR_Word Var_85;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_String Var_94;
        MR_String Var_101;

        {
          Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_50, 1) = ((MR_Box) (TypeInfoLval_24));
        }
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_2[7]), ArgNum_10, &Var_94);
        Var_101 = mercury__string__f_43_43_2_f_0(Var_94, (MR_String) " - 1],\n\tNULL, NULL, &allocated_mem);\n");
        Var_67 = mercury__string__f_43_43_2_f_0((MR_String) ")->MR_closure_arg_pseudo_type_info[", Var_101);
        {
          Var_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_66, 0) = ((MR_Box) (Var_67));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[10])));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_65));
        }
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[5])));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[9])));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[14])));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_56));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_51));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[3])));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[2])));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
        }
        {
          MakeTypeInfoCodeC_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, MakeTypeInfoCodeC_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, MakeTypeInfoCodeC_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, MakeTypeInfoCodeC_28, 2) = ((MR_Box) (Var_43));
        }
        {
          MakeTypeInfoCode_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, MakeTypeInfoCode_29, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, MakeTypeInfoCode_29, 1) = ((MR_Box) (MakeTypeInfoCodeC_28));
          MR_hl_field(3, MakeTypeInfoCode_29, 2) = ((MR_Box) (Context_11));
        }
        {
          DeallocateCode_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, DeallocateCode_31, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, DeallocateCode_31, 1) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_3[2])));
          MR_hl_field(3, DeallocateCode_31, 2) = ((MR_Box) (Context_11));
        }
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) (TypeInfoDecl_25));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_90, 0) = ((MR_Box) (DeallocateCode_31));
          MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_89, 0) = ((MR_Box) (CallTraceFuncCode_27));
          MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_88, 0) = ((MR_Box) (MakeTypeInfoCode_29));
          MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_89));
        }
        {
          GCTraceCode_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, GCTraceCode_32, 0) = ((MR_Box) (Var_85));
          MR_hl_field(0, GCTraceCode_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, GCTraceCode_32, 2) = ((MR_Box) (Var_88));
          MR_hl_field(0, GCTraceCode_32, 3) = ((MR_Box) (Context_11));
        }
        {
          GCStmt_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, GCStmt_33, 0) = ((MR_Box) (GCTraceCode_32));
        }
      }
      break;
  }
  Var_92 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_21, Type_9);
  *LocalVarDefn_12 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(VarName_8, Var_92, GCStmt_33, Context_11);
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word SourceType_8,
  MR_Word DestType_9,
  MR_Word BoxPolicy_10,
  MR_Word VarRval_11,
  MR_Word * ArgRval_12)
{
  switch (BoxPolicy_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *ArgRval_12 = VarRval_11;
      break;
    case (MR_Integer) 0:
      ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(ModuleInfo_7, SourceType_8, DestType_9, VarRval_11, ArgRval_12);
      break;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_native_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word SourceType_7,
  MR_Word DestType_8,
  MR_Word VarRval_9,
  MR_Word * ArgRval_10)
{
  MR_bool succeeded;
  MR_Word ArgRvalPrime_16;

  if (((MR_tag((MR_Word) SourceType_7)) == (MR_Integer) 2))
  {
    MR_Word SourceBuiltinType_17 = ((MR_Word) ((MR_hl_field(2, SourceType_7, 0))));
    MR_Word MLDS_SourceType_21;
    MR_Word Var_27;
    MR_Word MLDS_DestType_30;
    MR_Word Var_41;

    if ((SourceBuiltinType_17 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) SourceBuiltinType_17)) == (MR_Integer) 1))
    {
      MR_Word IntType_18 = ((MR_Unsigned) ((MR_hl_field(1, SourceBuiltinType_17, 0))) & (MR_Integer) 15);

      switch (IntType_18) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 8:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 9:
          succeeded = MR_TRUE;
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) DestType_8)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_41 = ((MR_Word) ((MR_hl_field(2, DestType_8, 0))));
        succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(SourceBuiltinType_17, Var_41);
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) DestType_8)) != (MR_Integer) 0);
        if (succeeded)
        {
          MLDS_SourceType_21 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_6, SourceType_7);
          MLDS_DestType_30 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_6, DestType_8);
          {
            Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, Var_27, 1) = ((MR_Box) (MLDS_SourceType_21));
            MR_hl_field(3, Var_27, 2) = ((MR_Box) (VarRval_9));
          }
          {
            ArgRvalPrime_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ArgRvalPrime_16, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, ArgRvalPrime_16, 1) = ((MR_Box) (MLDS_DestType_30));
            MR_hl_field(3, ArgRvalPrime_16, 2) = ((MR_Box) (Var_27));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  else
  if (((MR_tag((MR_Word) SourceType_7)) == (MR_Integer) 0))
  {
    MR_Word MLDS_DestType_15;

    succeeded = ((MR_tag((MR_Word) DestType_8)) != (MR_Integer) 0);
    if (succeeded)
    {
      MLDS_DestType_15 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_6, DestType_8);
      {
        ArgRvalPrime_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, ArgRvalPrime_16, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, ArgRvalPrime_16, 1) = ((MR_Box) (MLDS_DestType_15));
        MR_hl_field(3, ArgRvalPrime_16, 2) = ((MR_Box) (VarRval_9));
      }
      succeeded = MR_TRUE;
    }
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    *ArgRval_10 = ArgRvalPrime_16;
  else
  {
    MR_Word ArgRvalPrime_40;

    if (((MR_tag((MR_Word) DestType_8)) == (MR_Integer) 2))
    {
      MR_Word DestBuiltinType_26 = ((MR_Word) ((MR_hl_field(2, DestType_8, 0))));
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word MLDS_DestType_34;
      MR_Word Var_42;

      if ((DestBuiltinType_26 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = MR_TRUE;
      else
      if (((MR_tag((MR_Word) DestBuiltinType_26)) == (MR_Integer) 1))
      {
        MR_Word IntType_32 = ((MR_Unsigned) ((MR_hl_field(1, DestBuiltinType_26, 0))) & (MR_Integer) 15);

        switch (IntType_32) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 8:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 9:
            succeeded = MR_TRUE;
            break;
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) SourceType_7)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_42 = ((MR_Word) ((MR_hl_field(2, SourceType_7, 0))));
          succeeded = parse_tree__prog_data____Unify____builtin_type_0_0(DestBuiltinType_26, Var_42);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          MLDS_DestType_34 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_6, DestType_8);
          Var_29 = (MR_Word) ((MR_Unsigned) 20U);
          {
            Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, Var_28, 1) = ((MR_Box) (Var_29));
            MR_hl_field(3, Var_28, 2) = ((MR_Box) (VarRval_9));
          }
          {
            ArgRvalPrime_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, ArgRvalPrime_40, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, ArgRvalPrime_40, 1) = ((MR_Box) (MLDS_DestType_34));
            MR_hl_field(3, ArgRvalPrime_40, 2) = ((MR_Box) (Var_28));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    else
    if (((MR_tag((MR_Word) DestType_8)) == (MR_Integer) 0))
    {
      MR_Word MLDS_SourceType_31;

      succeeded = ((MR_tag((MR_Word) SourceType_7)) != (MR_Integer) 0);
      if (succeeded)
      {
        MLDS_SourceType_31 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_6, SourceType_7);
        {
          ArgRvalPrime_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, ArgRvalPrime_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, ArgRvalPrime_40, 1) = ((MR_Box) (MLDS_SourceType_31));
          MR_hl_field(3, ArgRvalPrime_40, 2) = ((MR_Box) (VarRval_9));
        }
        succeeded = MR_TRUE;
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      *ArgRval_10 = ArgRvalPrime_40;
    else
    {
      MR_Word Var_48;
      MR_Word Var_45;
      MR_Word SourceTypeCtor_51;
      MR_Word SourceTypeArgs_52;
      MR_Word DestTypeCtor_53;
      MR_Word DestTypeArgs_54;

      Var_48 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
      succeeded = parse_tree__prog_type_unify__type_unify_5_p_0(SourceType_7, DestType_8, (MR_Word) ((MR_Unsigned) 0U), Var_48, &Var_45);
      if (succeeded)
      {
        succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(SourceType_7, &SourceTypeCtor_51, &SourceTypeArgs_52);
        if (succeeded)
        {
          succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(DestType_8, &DestTypeCtor_53, &DestTypeArgs_54);
          if (succeeded)
          {
            {
              MR_Word Var_59;
              MR_Word Var_60;

              succeeded = parse_tree__prog_type_test__type_ctor_is_array_1_p_0(SourceTypeCtor_51);
              if (succeeded)
              {
                succeeded = (SourceTypeArgs_52 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_59 = ((MR_Word) ((MR_hl_field(1, SourceTypeArgs_52, 0))));
                  Var_60 = ((MR_Word) ((MR_hl_field(1, SourceTypeArgs_52, 1))));
                  succeeded = ((MR_tag((MR_Word) Var_59)) == (MR_Integer) 0);
                  if (succeeded)
                    succeeded = (Var_60 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
            if (!(succeeded))
            {
              MR_Word Var_61;
              MR_Word Var_62;

              succeeded = parse_tree__prog_type_test__type_ctor_is_array_1_p_0(DestTypeCtor_53);
              if (succeeded)
              {
                succeeded = (DestTypeArgs_54 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_61 = ((MR_Word) ((MR_hl_field(1, DestTypeArgs_54, 0))));
                  Var_62 = ((MR_Word) ((MR_hl_field(1, DestTypeArgs_54, 1))));
                  succeeded = ((MR_tag((MR_Word) Var_61)) == (MR_Integer) 0);
                  if (succeeded)
                    succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
            if (succeeded)
            {
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(SourceType_7, DestType_8);
              succeeded = !(succeeded);
            }
          }
        }
        succeeded = !(succeeded);
      }
      if (succeeded)
        *ArgRval_10 = VarRval_9;
      else
      {
        MR_Word MLDS_DestType_46;

        MLDS_DestType_46 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_6, DestType_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *ArgRval_10 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, base, 1) = ((MR_Box) (MLDS_DestType_46));
          MR_hl_field(3, base, 2) = ((MR_Box) (VarRval_9));
        }
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_box_const_rval_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word Context_10,
  MR_Word MLDS_Type_11,
  MR_Word Width_12,
  MR_Word Rval_13,
  MR_Word * BoxedRval_14,
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26)
{
  MR_bool succeeded;

  if ((MLDS_Type_11 == (MR_Word) ((MR_Unsigned) 20U)))
    succeeded = MR_TRUE;
  else
  if (((((MR_tag((MR_Word) MLDS_Type_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MLDS_Type_11, 0)))) == (MR_Integer) 3))))
  {
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_11, 1))));

    succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    *BoxedRval_14 = Rval_13;
    *STATE_VARIABLE_GlobalData_26 = STATE_VARIABLE_GlobalData_0_25;
  }
  else
  {
    MR_Word ConstVarKind_19;
    MR_Word Var_28;
    MR_Word Var_34;

    if ((MLDS_Type_11 == (MR_Word) ((MR_Unsigned) 4U)))
    {
      ConstVarKind_19 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    if (((((MR_tag((MR_Word) MLDS_Type_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, MLDS_Type_11, 0)))) == (MR_Integer) 6))))
    {
      MR_Word IntType_20 = ((MR_Unsigned) ((MR_hl_field(3, MLDS_Type_11, 1))) & (MR_Integer) 15);

      switch (IntType_20) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 8:
          {
            ConstVarKind_19 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            ConstVarKind_19 = (MR_Integer) 3;
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      Var_28 = (MR_Integer) 0;
      ml_backend__ml_global_data__ml_global_data_get_target_2_p_0(STATE_VARIABLE_GlobalData_0_25, &Var_34);
      succeeded = (Var_28 == Var_34);
    }
    if (succeeded)
    {
      MR_Word Var_31;

      switch (ConstVarKind_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_35;

            ml_backend__ml_global_data__ml_global_data_have_unboxed_floats_2_p_0(STATE_VARIABLE_GlobalData_0_25, &Var_35);
            succeeded = ((MR_Integer) 1 == Var_35);
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MR_Word Var_36;

            ml_backend__ml_global_data__ml_global_data_have_unboxed_int64s_2_p_0(STATE_VARIABLE_GlobalData_0_25, &Var_36);
            succeeded = ((MR_Integer) 1 == Var_36);
          }
          break;
      }
      if (succeeded)
      {
        Var_31 = (MR_Integer) 0;
        switch (Width_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
            succeeded = (Var_31 == (MR_Integer) 1);
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            succeeded = (Var_31 == (MR_Integer) 0);
            break;
        }
      }
      if (succeeded)
      {
        MR_Word ModuleName_21;
        MR_Word MLDS_ModuleName_22;
        MR_Word Initializer_23;
        MR_Word ConstAddrRval_24;

        hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_9, &ModuleName_21);
        MLDS_ModuleName_22 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_21);
        {
          Initializer_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Initializer_23, 0) = ((MR_Box) (Rval_13));
        }
        ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(MLDS_ModuleName_22, ConstVarKind_19, MLDS_Type_11, Initializer_23, Context_10, &ConstAddrRval_24, STATE_VARIABLE_GlobalData_0_25, STATE_VARIABLE_GlobalData_26);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *BoxedRval_14 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 20U));
          MR_hl_field(3, base, 2) = ((MR_Box) (ConstAddrRval_24));
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *BoxedRval_14 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, base, 1) = ((MR_Box) (MLDS_Type_11));
          MR_hl_field(3, base, 2) = ((MR_Box) (Rval_13));
        }
        *STATE_VARIABLE_GlobalData_26 = STATE_VARIABLE_GlobalData_0_25;
      }
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *BoxedRval_14 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, base, 1) = ((MR_Box) (MLDS_Type_11));
        MR_hl_field(3, base, 2) = ((MR_Box) (Rval_13));
      }
      *STATE_VARIABLE_GlobalData_26 = STATE_VARIABLE_GlobalData_0_25;
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word Width_6)
{
  MR_bool succeeded;
  MR_Word Globals_7;
  MR_Word Target_8;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_7);
  libs__globals__get_target_2_p_0(Globals_7, &Target_8);
  switch (Target_8) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word Category_9;
        MR_Word UnboxedFloat_10;
        MR_Word UnboxedInt64s_11;
        MR_Word Var_89;

        Category_9 = hlds__type_util__classify_type_2_f_0(ModuleInfo_4, Type_5);
        libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 104, &UnboxedFloat_10);
        libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 105, &UnboxedInt64s_11);
        succeeded = ((MR_tag((MR_Word) Category_9)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_89 = ((MR_Word) ((MR_hl_field(1, Category_9, 0))));
          switch (MR_tag((MR_Word) Var_89)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(Var_89)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    succeeded = (UnboxedFloat_10 == (MR_Integer) 0);
                    if (succeeded)
                      switch (Width_6) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 2:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 0:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_code_util.ml_must_box_field_type_category\'/4", (MR_String) "none for float");
                            succeeded = MR_TRUE;
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_code_util.ml_must_box_field_type_category\'/4", (MR_String) "partial word for float");
                            succeeded = MR_TRUE;
                          }
                          break;
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntType_15 = ((MR_Unsigned) ((MR_hl_field(1, Var_89, 0))) & (MR_Integer) 15);

                switch (IntType_15) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 8:
                  case (MR_Integer) 9:
                    {
                      succeeded = (UnboxedInt64s_11 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        switch (Width_6) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 3:
                            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_code_util.ml_must_box_field_type_category\'/4", (MR_String) "double word for 64-bit integer");
                            break;
                          case (MR_Integer) 2:
                            {
                            }
                            break;
                          case (MR_Integer) 0:
                            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_code_util.ml_must_box_field_type_category\'/4", (MR_String) "none for 64-bit integer");
                            break;
                          case (MR_Integer) 1:
                            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_code_util.ml_must_box_field_type_category\'/4", (MR_String) "partial word for 64-bit integer");
                            break;
                        }
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                }
              }
              break;
          }
        }
      }
      break;
  }
  return succeeded;
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_hld_field_name_3_f_0(
  MR_Word MaybeFieldName_5,
  MR_Word MaybeBaseCtorArg_6,
  MR_Integer ArgNum_7)
{
  MR_Word FieldVarName_8;
  MR_Word FieldNameToUse_9;
  MR_String FieldName_13;

  if ((MaybeBaseCtorArg_6 == (MR_Word) ((MR_Unsigned) 0U)))
    FieldNameToUse_9 = MaybeFieldName_5;
  else
    FieldNameToUse_9 = ((MR_Word) ((MR_hl_field(1, MaybeBaseCtorArg_6, 0))));
  if ((FieldNameToUse_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_16;

    Var_16 = mercury__string__int_to_string_1_f_0(ArgNum_7);
    FieldName_13 = mercury__string__f_43_43_2_f_0((MR_String) "F", Var_16);
  }
  else
  {
    MR_Word QualifiedFieldName_11;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, FieldNameToUse_9, 0))));

    QualifiedFieldName_11 = ((MR_Word) ((MR_hl_field(0, Var_14, 0))));
    FieldName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(QualifiedFieldName_11);
  }
  {
    FieldVarName_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, FieldVarName_8, 0) = ((MR_Box) (FieldName_13));
  }
  return FieldVarName_8;
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0(void)
{
  return (MR_Word) (&ml_backend__ml_code_util_scalar_common_2[1]);
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(
  MR_Word DataName_7,
  MR_Word MLDS_Type_8,
  MR_Word Initializer_9,
  MR_Word GCStmt_10,
  MR_Word Context_11)
{
  MR_Word HeadVar__6_6;

  {
    HeadVar__6_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__6_6, 0) = ((MR_Box) (DataName_7));
    MR_hl_field(0, HeadVar__6_6, 1) = ((MR_Box) (Context_11));
    MR_hl_field(0, HeadVar__6_6, 2) = ((MR_Box) (MLDS_Type_8));
    MR_hl_field(0, HeadVar__6_6, 3) = ((MR_Box) (Initializer_9));
    MR_hl_field(0, HeadVar__6_6, 4) = ((MR_Box) (GCStmt_10));
  }
  return HeadVar__6_6;
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(
  MR_Word DataName_6,
  MR_Word MLDS_Type_7,
  MR_Word GCStmt_8,
  MR_Word Context_9)
{
  MR_Word HeadVar__5_5;

  {
    HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__5_5, 0) = ((MR_Box) (DataName_6));
    MR_hl_field(0, HeadVar__5_5, 1) = ((MR_Box) (Context_9));
    MR_hl_field(0, HeadVar__5_5, 2) = ((MR_Box) (MLDS_Type_7));
    MR_hl_field(0, HeadVar__5_5, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, HeadVar__5_5, 4) = ((MR_Box) (GCStmt_8));
  }
  return HeadVar__5_5;
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_local_var_decl_6_p_0(
  MR_Word VarName_7,
  MR_Word Type_8,
  MR_Word Context_9,
  MR_Word * Defn_10,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word ModuleInfo_12;
  MR_Word GCStmt_13;
  MR_Word Var_17;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_14, &ModuleInfo_12);
  ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(VarName_7, Type_8, Context_9, &GCStmt_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
  Var_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_12, Type_8);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Defn_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (VarName_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Context_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 4) = ((MR_Box) (GCStmt_13));
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(
  MR_Word Var_4,
  MR_Word Entry_5)
{
  MR_Word MLDSVarName_6;
  MR_String VarName_7 = ((MR_String) ((MR_hl_field(0, Entry_5, 0))));
  MR_Integer VarNumber_8;

  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_4, &VarNumber_8);
  {
    MLDSVarName_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MLDSVarName_6, 0) = ((MR_Box) (VarName_7));
    MR_hl_field(1, MLDSVarName_6, 1) = ((MR_Box) (VarNumber_8));
  }
  return MLDSVarName_6;
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word MLDSVarName_8;
    MR_Word MLDSVarNames_9;
    MR_Word VarEntry_10;
    MR_String VarName_11;
    MR_Integer VarNumber_12;

    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_1, Var_6, &VarEntry_10);
    VarName_11 = ((MR_String) ((MR_hl_field(0, VarEntry_10, 0))));
    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, &VarNumber_12);
    {
      MLDSVarName_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MLDSVarName_8, 0) = ((MR_Box) (VarName_11));
      MR_hl_field(1, MLDSVarName_8, 1) = ((MR_Box) (VarNumber_12));
    }
    MLDSVarNames_9 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(VarTable_1, Vars_7);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (MLDSVarName_8));
      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (MLDSVarNames_9));
    }
  }
  return HeadVar__3_3;
}

void MR_CALL 
ml_backend__ml_code_util__ml_variable_type_direct_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * Type_6)
{
  MR_Word VarTable_7;
  MR_Word Entry_8;

  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_4, &VarTable_7);
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_7, Var_5, &Entry_8);
  *Type_6 = ((MR_Word) ((MR_hl_field(0, Entry_8, 1))));
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(
  MR_Word Info_5,
  MR_Word Var_6,
  MR_Word Type_7,
  MR_Word * Lval_8)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_9;
  MR_Word IsDummy_10;
  MR_Word MLDS_Type_11;
  MR_Word ModuleInfo_20;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_5, &ModuleInfo_9);
  IsDummy_10 = hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_9, Type_7);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_5, &ModuleInfo_20);
  MLDS_Type_11 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_20, Type_7);
  switch (IsDummy_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_17;

        Var_17 = ml_backend__mlds__global_dummy_var_0_f_0();
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Lval_8 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, base, 1) = ((MR_Box) (Var_17));
          MR_hl_field(3, base, 2) = ((MR_Box) (MLDS_Type_11));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word VarTable_12;
        MR_Word Entry_13;
        MR_Word VarName_14;
        MR_Word VarLval_15;
        MR_Word ByRefOutputVars_16;
        MR_String VarName_21;
        MR_Integer VarNumber_22;

        ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_5, &VarTable_12);
        parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_12, Var_6, &Entry_13);
        VarName_21 = ((MR_String) ((MR_hl_field(0, Entry_13, 0))));
        mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, &VarNumber_22);
        {
          VarName_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, VarName_14, 0) = ((MR_Box) (VarName_21));
          MR_hl_field(1, VarName_14, 1) = ((MR_Box) (VarNumber_22));
        }
        {
          VarLval_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, VarLval_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, VarLval_15, 1) = ((MR_Box) (VarName_14));
          MR_hl_field(3, VarLval_15, 2) = ((MR_Box) (MLDS_Type_11));
        }
        ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(Info_5, &ByRefOutputVars_16);
        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ByRefOutputVars_16, Var_6);
        if (succeeded)
        {
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_18, 0) = ((MR_Box) (VarLval_15));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Lval_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
            MR_hl_field(1, base, 1) = ((MR_Box) (MLDS_Type_11));
          }
        }
        else
          *Lval_8 = VarLval_15;
      }
      break;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_4_p_0(
  MR_Word Info_5,
  MR_Word Var_6,
  MR_Word Entry_7,
  MR_Word * Lval_8)
{
  MR_bool succeeded;
  MR_Word VarLvals_9;
  MR_Word VarLval_10;
  MR_Box conv0_VarLval_10;

  ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_p_0(Info_5, &VarLvals_9);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[3]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), VarLvals_9, ((MR_Box) (Var_6)), &conv0_VarLval_10);
  if (succeeded)
  {
    VarLval_10 = ((MR_Word) (conv0_VarLval_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Lval_8 = VarLval_10;
  else
  {
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(0, Entry_7, 1))));
    MR_Word IsDummy_15 = ((MR_Unsigned) ((MR_hl_field(0, Entry_7, 2))) & (MR_Integer) 1);
    MR_Word MLDS_Type_16;
    MR_Word ModuleInfo_23;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_5, &ModuleInfo_23);
    MLDS_Type_16 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_23, Type_14);
    switch (IsDummy_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_20;

          Var_20 = ml_backend__mlds__global_dummy_var_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Lval_8 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, base, 1) = ((MR_Box) (Var_20));
            MR_hl_field(3, base, 2) = ((MR_Box) (MLDS_Type_16));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarName_17;
          MR_Word VarLval_18;
          MR_Word ByRefOutputVars_19;
          MR_String VarName_24 = ((MR_String) ((MR_hl_field(0, Entry_7, 0))));
          MR_Integer VarNumber_25;

          mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, &VarNumber_25);
          {
            VarName_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, VarName_17, 0) = ((MR_Box) (VarName_24));
            MR_hl_field(1, VarName_17, 1) = ((MR_Box) (VarNumber_25));
          }
          {
            VarLval_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, VarLval_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, VarLval_18, 1) = ((MR_Box) (VarName_17));
            MR_hl_field(3, VarLval_18, 2) = ((MR_Box) (MLDS_Type_16));
          }
          ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(Info_5, &ByRefOutputVars_19);
          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ByRefOutputVars_19, Var_6);
          if (succeeded)
          {
            MR_Word Var_21;

            {
              Var_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_21, 0) = ((MR_Box) (VarLval_18));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_8 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
              MR_hl_field(1, base, 1) = ((MR_Box) (MLDS_Type_16));
            }
          }
          else
            *Lval_8 = VarLval_18;
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_direct_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Lval_8;
    MR_Word Lvals_9;

    ml_backend__ml_code_util__ml_gen_var_direct_3_p_0(HeadVar__1_1, Var_6, &Lval_8);
    ml_backend__ml_code_util__ml_gen_var_direct_list_3_p_0(HeadVar__1_1, Vars_7, &Lvals_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Lval_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Lvals_9));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_direct_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * Lval_6)
{
  MR_bool succeeded;
  MR_Word VarLvals_7;
  MR_Word VarLval_8;
  MR_Box conv0_VarLval_8;

  ml_backend__ml_gen_info__ml_gen_info_get_var_lvals_2_p_0(Info_4, &VarLvals_7);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[3]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), VarLvals_7, ((MR_Box) (Var_5)), &conv0_VarLval_8);
  if (succeeded)
  {
    VarLval_8 = ((MR_Word) (conv0_VarLval_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Lval_6 = VarLval_8;
  else
  {
    MR_Word VarTable_9;
    MR_Word Entry_10;
    MR_Word Type_14;
    MR_Word IsDummy_15;
    MR_Word MLDS_Type_16;
    MR_Word ModuleInfo_23;

    ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(Info_4, &VarTable_9);
    parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_9, Var_5, &Entry_10);
    Type_14 = ((MR_Word) ((MR_hl_field(0, Entry_10, 1))));
    IsDummy_15 = ((MR_Unsigned) ((MR_hl_field(0, Entry_10, 2))) & (MR_Integer) 1);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_4, &ModuleInfo_23);
    MLDS_Type_16 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_23, Type_14);
    switch (IsDummy_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_20;

          Var_20 = ml_backend__mlds__global_dummy_var_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Lval_6 = base;
            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, base, 1) = ((MR_Box) (Var_20));
            MR_hl_field(3, base, 2) = ((MR_Box) (MLDS_Type_16));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarName_17;
          MR_Word VarLval_18;
          MR_Word ByRefOutputVars_19;
          MR_String VarName_24 = ((MR_String) ((MR_hl_field(0, Entry_10, 0))));
          MR_Integer VarNumber_25;

          mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5, &VarNumber_25);
          {
            VarName_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, VarName_17, 0) = ((MR_Box) (VarName_24));
            MR_hl_field(1, VarName_17, 1) = ((MR_Box) (VarNumber_25));
          }
          {
            VarLval_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, VarLval_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, VarLval_18, 1) = ((MR_Box) (VarName_17));
            MR_hl_field(3, VarLval_18, 2) = ((MR_Box) (MLDS_Type_16));
          }
          ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(Info_4, &ByRefOutputVars_19);
          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ByRefOutputVars_19, Var_5);
          if (succeeded)
          {
            MR_Word Var_21;

            {
              Var_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_21, 0) = ((MR_Box) (VarLval_18));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
              MR_hl_field(1, base, 1) = ((MR_Box) (MLDS_Type_16));
            }
          }
          else
            *Lval_6 = VarLval_18;
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_new_label_3_p_0(
  MR_Word * Label_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  MR_Integer LabelNum_6;
  MR_String Var_10;
  MR_String Var_12;

  ml_backend__ml_gen_info__ml_gen_info_new_label_3_p_0(&LabelNum_6, STATE_VARIABLE_Info_0_7, STATE_VARIABLE_Info_8);
  Var_12 = mercury__string__int_to_string_1_f_0(LabelNum_6);
  Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "label_", Var_12);
  *Label_4 = (MR_Word) (Var_10);
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(
  MR_Word _ModuleInfo_5,
  MR_Word RttiProcLabel_6,
  MR_Word * MLDS_PredLabel_7,
  MR_Word * MLDS_Module_8)
{
  ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_101_100_95_108_97_98_101_108_95_102_114_111_109_95_114_116_116_105_95_95_91_49_93_95_48_4_p_0(RttiProcLabel_6, MLDS_PredLabel_7, MLDS_Module_8);
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word * MLDS_PredLabel_7,
  MR_Word * MLDS_Module_8)
{
  MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(0, PredProcId_6, 0))));
  MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(0, PredProcId_6, 1))));
  MR_Word RttiProcLabel_11;

  RttiProcLabel_11 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, PredId_9, ProcId_10);
  ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_101_100_95_108_97_98_101_108_95_102_114_111_109_95_114_116_116_105_95_95_91_49_93_95_48_4_p_0(RttiProcLabel_11, MLDS_PredLabel_7, MLDS_Module_8);
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_nondet_label_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word MaybeAux_7)
{
  MR_Word MLDS_Name_8;
  MR_Word PredLabel_10;
  MR_Word PredId_11;
  MR_Integer ProcId_12;
  MR_Word ProcLabel_13;
  MR_Word FuncLabel_14;
  MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(0, PredProcId_6, 0))));
  MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(0, PredProcId_6, 1))));
  MR_Word RttiProcLabel_17;
  MR_Word _MLDS_ModuleName_9;

  RttiProcLabel_17 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, PredId_15, ProcId_16);
  ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_101_100_95_108_97_98_101_108_95_102_114_111_109_95_114_116_116_105_95_95_91_49_93_95_48_4_p_0(RttiProcLabel_17, &PredLabel_10, &_MLDS_ModuleName_9);
  PredId_11 = ((MR_Word) ((MR_hl_field(0, PredProcId_6, 0))));
  ProcId_12 = ((MR_Integer) ((MR_hl_field(0, PredProcId_6, 1))));
  {
    ProcLabel_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcLabel_13, 0) = ((MR_Box) (PredLabel_10));
    MR_hl_field(0, ProcLabel_13, 1) = ((MR_Box) (ProcId_12));
  }
  {
    FuncLabel_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FuncLabel_14, 0) = ((MR_Box) (ProcLabel_13));
    MR_hl_field(0, FuncLabel_14, 1) = ((MR_Box) (MaybeAux_7));
  }
  {
    MLDS_Name_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MLDS_Name_8, 0) = ((MR_Box) (FuncLabel_14));
    MR_hl_field(0, MLDS_Name_8, 1) = ((MR_Box) (PredId_11));
  }
  return MLDS_Name_8;
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word * MLDS_ModuleName_7,
  MR_Word * MLDS_Name_8)
{
  MR_Word PredLabel_10;
  MR_Word PredId_11;
  MR_Integer ProcId_12;
  MR_Word ProcLabel_13;
  MR_Word FuncLabel_14;
  MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(0, PredProcId_6, 0))));
  MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(0, PredProcId_6, 1))));
  MR_Word RttiProcLabel_17;

  RttiProcLabel_17 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, PredId_15, ProcId_16);
  ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_101_100_95_108_97_98_101_108_95_102_114_111_109_95_114_116_116_105_95_95_91_49_93_95_48_4_p_0(RttiProcLabel_17, &PredLabel_10, MLDS_ModuleName_7);
  PredId_11 = ((MR_Word) ((MR_hl_field(0, PredProcId_6, 0))));
  ProcId_12 = ((MR_Integer) ((MR_hl_field(0, PredProcId_6, 1))));
  {
    ProcLabel_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcLabel_13, 0) = ((MR_Box) (PredLabel_10));
    MR_hl_field(0, ProcLabel_13, 1) = ((MR_Box) (ProcId_12));
  }
  {
    FuncLabel_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FuncLabel_14, 0) = ((MR_Box) (ProcLabel_13));
    MR_hl_field(0, FuncLabel_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *MLDS_Name_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FuncLabel_14));
    MR_hl_field(0, base, 1) = ((MR_Box) (PredId_11));
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_java_mercury_enum_class_0_f_0(void)
{
  MR_Word EnumClassId_2;
  MR_Word InterfaceModuleName_3;
  MR_Word EnumClass_4;
  MR_Word Var_5;

  Var_5 = parse_tree__java_names__java_mercury_runtime_package_name_0_f_0();
  InterfaceModuleName_3 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(Var_5);
  {
    EnumClass_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EnumClass_4, 0) = ((MR_Box) (InterfaceModuleName_3));
    MR_hl_field(0, EnumClass_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, EnumClass_4, 2) = ((MR_Box) ((MR_String) "MercuryEnum"));
  }
  {
    EnumClassId_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, EnumClassId_2, 0) = ((MR_Box) (EnumClass_4));
    MR_hl_field(0, EnumClassId_2, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  return EnumClassId_2;
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0(void)
{
  MR_Word TypeInterfaceDefn_2;
  MR_Word InterfaceModuleName_3;
  MR_Word Var_4;

  Var_4 = parse_tree__java_names__java_mercury_runtime_package_name_0_f_0();
  InterfaceModuleName_3 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(Var_4);
  {
    TypeInterfaceDefn_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInterfaceDefn_2, 0) = ((MR_Box) (InterfaceModuleName_3));
    MR_hl_field(0, TypeInterfaceDefn_2, 1) = ((MR_Box) ((MR_String) "MercuryType"));
  }
  return TypeInterfaceDefn_2;
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(
  MR_Integer Arity_3)
{
  MR_Word BoxedTypes_4;
  MR_Word TypeVarSet0_5;
  MR_Word BoxedTypeVars_6;
  MR_Word Var_8;
  MR_Word _TypeVarSet_7;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_5);
  mercury__varset__new_vars_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), Arity_3, &BoxedTypeVars_6, TypeVarSet0_5, &_TypeVarSet_7);
  Var_8 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_list_to_type_list_3_p_0(Var_8, BoxedTypeVars_6, &BoxedTypes_4);
  return BoxedTypes_4;
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_make_boxed_type_0_f_0(void)
{
  MR_Word BoxedType_2;
  MR_Word TypeVarSet0_3;
  MR_Word BoxedTypeVar_4;
  MR_Word Var_6;
  MR_Word _TypeVarSet_5;

  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet0_3);
  mercury__varset__new_var_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &BoxedTypeVar_4, TypeVarSet0_3, &_TypeVarSet_5);
  Var_6 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0));
  parse_tree__prog_type__var_to_type_3_p_0(Var_6, BoxedTypeVar_4, &BoxedType_2);
  return BoxedType_2;
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_array_elem_type_1_f_0(
  MR_Word ElemType_3)
{
  MR_Word MLDS_Type_4;

  if (((MR_tag((MR_Word) ElemType_3)) == (MR_Integer) 0))
  {
    MR_Word ScalarElem_5 = ((MR_Unsigned) ((MR_hl_field(0, ElemType_3, 0))) & (MR_Integer) 3);

    switch (ScalarElem_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        MLDS_Type_4 = (MR_Word) ((MR_Unsigned) 20U);
        break;
      case (MR_Integer) 1:
        MLDS_Type_4 = (MR_Word) (MR_mkword(3, &ml_backend__ml_code_util_scalar_common_1[20]));
        break;
      case (MR_Integer) 0:
        MLDS_Type_4 = (MR_Word) ((MR_Unsigned) 8U);
        break;
    }
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_code_util.ml_gen_array_elem_type\'/1", (MR_String) "struct");
  return MLDS_Type_4;
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_mlds_type_3_p_0(
  MR_Word Info_4,
  MR_Word Type_5,
  MR_Word * MLDS_Type_6)
{
  MR_Word ModuleInfo_7;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_4, &ModuleInfo_7);
  *MLDS_Type_6 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, Type_5);
}

MR_Word MR_CALL 
ml_backend__ml_code_util__var_table_entry_to_mlds_type_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word Entry_5)
{
  MR_Word MLDSType_6;
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, Entry_5, 1))));

  MLDSType_6 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_4, Var_7);
  return MLDSType_6;
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(
  MR_Word IntTag_5,
  MR_Word MerType_6,
  MR_Word MLDS_Type_7)
{
  MR_bool succeeded;
  MR_Word Rval_8;
  MR_Word Const_10;

  switch (MR_tag((MR_Word) IntTag_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Int_9 = ((MR_Integer) ((MR_hl_field(0, IntTag_5, 0))));
        MR_Word Var_20;

        Var_20 = parse_tree__builtin_lib_types__int_type_0_f_0();
        succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_6, Var_20);
        if (succeeded)
          {
            Const_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Const_10, 0) = ((MR_Box) (Int_9));
          }
        else
        {
          MR_Word Var_21;

          Var_21 = parse_tree__builtin_lib_types__char_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_6, Var_21);
          if (succeeded)
            {
              Const_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_10, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, Const_10, 1) = ((MR_Box) (Int_9));
            }
          else
            {
              Const_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_10, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Const_10, 1) = ((MR_Box) (Int_9));
              MR_hl_field(3, Const_10, 2) = ((MR_Box) (MLDS_Type_7));
            }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned UInt_11 = ((MR_Unsigned) ((MR_hl_field(1, IntTag_5, 0))));

        {
          Const_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Const_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Const_10, 1) = ((MR_Box) (UInt_11));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        int8_t Int8_12 = ((int8_t) (MR_Word) (MR_hl_field(2, IntTag_5, 0)));

        {
          Const_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Const_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Const_10, 1) = ((MR_Box) (MR_Word) (Int8_12));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, IntTag_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            uint8_t UInt8_13 = ((uint8_t) (MR_Word) (MR_hl_field(3, IntTag_5, 1)));

            {
              Const_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Const_10, 1) = ((MR_Box) (MR_Word) (UInt8_13));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            int16_t Int16_14 = ((int16_t) (MR_Word) (MR_hl_field(3, IntTag_5, 1)));

            {
              Const_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_10, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, Const_10, 1) = ((MR_Box) (MR_Word) (Int16_14));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            uint16_t UInt16_15 = ((uint16_t) (MR_Word) (MR_hl_field(3, IntTag_5, 1)));

            {
              Const_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, Const_10, 1) = ((MR_Box) (MR_Word) (UInt16_15));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            int32_t Int32_16 = ((int32_t) (MR_Word) (MR_hl_field(3, IntTag_5, 1)));

            {
              Const_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_10, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, Const_10, 1) = ((MR_Box) (MR_Word) (Int32_16));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            uint32_t UInt32_17 = ((uint32_t) (MR_Word) (MR_hl_field(3, IntTag_5, 1)));

            {
              Const_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_10, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, Const_10, 1) = ((MR_Box) (MR_Word) (UInt32_17));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            int64_t Int64_18 = MR_unbox_int64((MR_hl_field(3, IntTag_5, 1)));

            {
              Const_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_10, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, Const_10, 1) = MR_box_int64(Int64_18);
            }
          }
          break;
        case (MR_Integer) 6:
          {
            uint64_t UInt64_19 = MR_unbox_uint64((MR_hl_field(3, IntTag_5, 1)));

            {
              Const_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Const_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Const_10, 1) = MR_box_uint64(UInt64_19);
            }
          }
          break;
      }
      break;
  }
  {
    Rval_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Rval_8, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Rval_8, 1) = ((MR_Box) (Const_10));
  }
  return Rval_8;
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_nondet_label_func_6_p_0(
  MR_Word Info_7,
  MR_Word MaybeAux_8,
  MR_Word Source_9,
  MR_Word Context_10,
  MR_Word Stmt_11,
  MR_Word * Func_12)
{
  ml_backend__ml_code_util__ml_gen_label_func_7_p_0(Info_7, MaybeAux_8, Source_9, (MR_Word) (&ml_backend__ml_code_util_scalar_common_1[22]), Context_10, Stmt_11, Func_12);
}

void MR_CALL 
ml_backend__ml_code_util__ml_combine_conj_9_p_0(
  MR_Word FirstCodeModel_10,
  MR_Word Context_11,
  MR_Word DoGenFirst_12,
  MR_Word DoGenRest_13,
  MR_Word * LocalVarDefns_14,
  MR_Word * FuncDefns_15,
  MR_Word * Stmts_16,
  MR_Word STATE_VARIABLE_Info_0_33,
  MR_Word * STATE_VARIABLE_Info_34)
{
  MR_bool succeeded;

  switch (FirstCodeModel_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word FirstLocalVarDefns_18;
        MR_Word FirstFuncDefns_19;
        MR_Word FirstStmts_20;
        MR_Word RestLocalVarDefns_21;
        MR_Word RestFuncDefns_22;
        MR_Word RestStmts_23;
        MR_Word STATE_VARIABLE_Info_1_35;
        void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, DoGenFirst_12, 1))));
        MR_Box conv4_FirstLocalVarDefns_18;
        MR_Box conv3_FirstFuncDefns_19;
        MR_Box conv2_FirstStmts_20;
        MR_Box conv1_STATE_VARIABLE_Info_1_35;
        void MR_CALL (* func_5)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
        MR_Box conv9_RestLocalVarDefns_21;
        MR_Box conv8_RestFuncDefns_22;
        MR_Box conv7_RestStmts_23;
        MR_Box conv6_STATE_VARIABLE_Info_34;

        func_0(((MR_Box) (DoGenFirst_12)), &conv4_FirstLocalVarDefns_18, &conv3_FirstFuncDefns_19, &conv2_FirstStmts_20, ((MR_Box) (STATE_VARIABLE_Info_0_33)), &conv1_STATE_VARIABLE_Info_1_35);
        FirstLocalVarDefns_18 = ((MR_Word) (conv4_FirstLocalVarDefns_18));
        FirstFuncDefns_19 = ((MR_Word) (conv3_FirstFuncDefns_19));
        FirstStmts_20 = ((MR_Word) (conv2_FirstStmts_20));
        STATE_VARIABLE_Info_1_35 = ((MR_Word) (conv1_STATE_VARIABLE_Info_1_35));
        func_5 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, DoGenRest_13, 1))));
        func_5(((MR_Box) (DoGenRest_13)), &conv9_RestLocalVarDefns_21, &conv8_RestFuncDefns_22, &conv7_RestStmts_23, ((MR_Box) (STATE_VARIABLE_Info_1_35)), &conv6_STATE_VARIABLE_Info_34);
        RestLocalVarDefns_21 = ((MR_Word) (conv9_RestLocalVarDefns_21));
        RestFuncDefns_22 = ((MR_Word) (conv8_RestFuncDefns_22));
        RestStmts_23 = ((MR_Word) (conv7_RestStmts_23));
        *STATE_VARIABLE_Info_34 = ((MR_Word) (conv6_STATE_VARIABLE_Info_34));
        *LocalVarDefns_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), FirstLocalVarDefns_18, RestLocalVarDefns_21);
        *FuncDefns_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), FirstFuncDefns_19, RestFuncDefns_22);
        *Stmts_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), FirstStmts_20, RestStmts_23);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word RestFuncLabel_27;
        MR_Word RestFuncLabelRval_28;
        MR_Word SuccessCont_30;
        MR_Word RestStmt_31;
        MR_Word RestFunc_32;
        MR_Word STATE_VARIABLE_Info_6_46;
        MR_Word STATE_VARIABLE_Info_7_48;
        MR_Word STATE_VARIABLE_Info_8_49;
        MR_Word STATE_VARIABLE_Info_9_50;
        MR_Word Var_51;
        MR_Word STATE_VARIABLE_Info_10_52;
        MR_Word STATE_VARIABLE_Info_11_53;
        MR_Word STATE_VARIABLE_Info_12_54;
        MR_Word STATE_VARIABLE_Info_13_55;
        MR_Word Var_56;
        MR_Word Var_59;
        MR_Word FirstFuncDefns_68;
        MR_Word RestLocalVarDefns_70;
        MR_Word RestFuncDefns_71;
        MR_Word RestStmts_72;
        void MR_CALL (* func_10)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
        MR_Box conv14_LocalVarDefns_14;
        MR_Box conv13_FirstFuncDefns_68;
        MR_Box conv12_Stmts_16;
        MR_Box conv11_STATE_VARIABLE_Info_8_49;
        void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
        MR_Box conv19_RestLocalVarDefns_70;
        MR_Box conv18_RestFuncDefns_71;
        MR_Box conv17_RestStmts_72;
        MR_Box conv16_STATE_VARIABLE_Info_12_54;
        MR_Word SingleStmt_86;
        MR_Word Var_87;

        ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) ((MR_Unsigned) 0U), &RestFuncLabel_27, &RestFuncLabelRval_28, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_6_46);
        {
          SuccessCont_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SuccessCont_30, 0) = ((MR_Box) (RestFuncLabelRval_28));
          MR_hl_field(0, SuccessCont_30, 1) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[11])));
          MR_hl_field(0, SuccessCont_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(SuccessCont_30, STATE_VARIABLE_Info_6_46, &STATE_VARIABLE_Info_7_48);
        func_10 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, DoGenFirst_12, 1))));
        func_10(((MR_Box) (DoGenFirst_12)), &conv14_LocalVarDefns_14, &conv13_FirstFuncDefns_68, &conv12_Stmts_16, ((MR_Box) (STATE_VARIABLE_Info_7_48)), &conv11_STATE_VARIABLE_Info_8_49);
        *LocalVarDefns_14 = ((MR_Word) (conv14_LocalVarDefns_14));
        FirstFuncDefns_68 = ((MR_Word) (conv13_FirstFuncDefns_68));
        *Stmts_16 = ((MR_Word) (conv12_Stmts_16));
        STATE_VARIABLE_Info_8_49 = ((MR_Word) (conv11_STATE_VARIABLE_Info_8_49));
        ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(STATE_VARIABLE_Info_8_49, &STATE_VARIABLE_Info_9_50);
        Var_51 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_code_util_scalar_common_1[1]));
        ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(Var_51, STATE_VARIABLE_Info_9_50, &STATE_VARIABLE_Info_10_52);
        ml_backend__ml_gen_info__ml_gen_info_increment_func_nest_depth_2_p_0(STATE_VARIABLE_Info_10_52, &STATE_VARIABLE_Info_11_53);
        func_15 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, DoGenRest_13, 1))));
        func_15(((MR_Box) (DoGenRest_13)), &conv19_RestLocalVarDefns_70, &conv18_RestFuncDefns_71, &conv17_RestStmts_72, ((MR_Box) (STATE_VARIABLE_Info_11_53)), &conv16_STATE_VARIABLE_Info_12_54);
        RestLocalVarDefns_70 = ((MR_Word) (conv19_RestLocalVarDefns_70));
        RestFuncDefns_71 = ((MR_Word) (conv18_RestFuncDefns_71));
        RestStmts_72 = ((MR_Word) (conv17_RestStmts_72));
        STATE_VARIABLE_Info_12_54 = ((MR_Word) (conv16_STATE_VARIABLE_Info_12_54));
        ml_backend__ml_gen_info__ml_gen_info_decrement_func_nest_depth_2_p_0(STATE_VARIABLE_Info_12_54, &STATE_VARIABLE_Info_13_55);
        Var_56 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_code_util_scalar_common_1[1]));
        ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(Var_56, STATE_VARIABLE_Info_13_55, STATE_VARIABLE_Info_34);
        succeeded = (RestLocalVarDefns_70 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (RestFuncDefns_71 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (RestStmts_72 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              SingleStmt_86 = ((MR_Word) ((MR_hl_field(1, RestStmts_72, 0))));
              Var_87 = ((MR_Word) ((MR_hl_field(1, RestStmts_72, 1))));
              succeeded = (Var_87 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
        }
        if (succeeded)
          RestStmt_31 = SingleStmt_86;
        else
          {
            RestStmt_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, RestStmt_31, 0) = ((MR_Box) (RestLocalVarDefns_70));
            MR_hl_field(0, RestStmt_31, 1) = ((MR_Box) (RestFuncDefns_71));
            MR_hl_field(0, RestStmt_31, 2) = ((MR_Box) (RestStmts_72));
            MR_hl_field(0, RestStmt_31, 3) = ((MR_Box) (Context_11));
          }
        ml_backend__ml_code_util__ml_gen_label_func_7_p_0(*STATE_VARIABLE_Info_34, RestFuncLabel_27, (MR_Word) ((MR_Unsigned) 4U), (MR_Word) (&ml_backend__ml_code_util_scalar_common_1[22]), Context_11, RestStmt_31, &RestFunc_32);
        {
          Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_59, 0) = ((MR_Box) (RestFunc_32));
          MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *FuncDefns_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), FirstFuncDefns_68, Var_59);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ThenStmt_25;
        MR_Word ITEStmt_26;
        MR_Word STATE_VARIABLE_Info_3_37;
        MR_Word STATE_VARIABLE_Info_4_38;
        MR_Word Var_43;
        MR_Word FirstLocalVarDefns_61;
        MR_Word FirstFuncDefns_62;
        MR_Word FirstStmts_63;
        MR_Word RestLocalVarDefns_64;
        MR_Word RestFuncDefns_65;
        MR_Word RestStmts_66;
        void MR_CALL (* func_20)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, DoGenFirst_12, 1))));
        MR_Box conv24_FirstLocalVarDefns_61;
        MR_Box conv23_FirstFuncDefns_62;
        MR_Box conv22_FirstStmts_63;
        MR_Box conv21_STATE_VARIABLE_Info_3_37;
        void MR_CALL (* func_25)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
        MR_Box conv29_RestLocalVarDefns_64;
        MR_Box conv28_RestFuncDefns_65;
        MR_Box conv27_RestStmts_66;
        MR_Box conv26_STATE_VARIABLE_Info_34;
        MR_Word SingleStmt_102;
        MR_Word Var_103;

        func_20(((MR_Box) (DoGenFirst_12)), &conv24_FirstLocalVarDefns_61, &conv23_FirstFuncDefns_62, &conv22_FirstStmts_63, ((MR_Box) (STATE_VARIABLE_Info_0_33)), &conv21_STATE_VARIABLE_Info_3_37);
        FirstLocalVarDefns_61 = ((MR_Word) (conv24_FirstLocalVarDefns_61));
        FirstFuncDefns_62 = ((MR_Word) (conv23_FirstFuncDefns_62));
        FirstStmts_63 = ((MR_Word) (conv22_FirstStmts_63));
        STATE_VARIABLE_Info_3_37 = ((MR_Word) (conv21_STATE_VARIABLE_Info_3_37));
        ml_backend__ml_gen_info__ml_gen_info_set_used_succeeded_var_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_3_37, &STATE_VARIABLE_Info_4_38);
        func_25 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, DoGenRest_13, 1))));
        func_25(((MR_Box) (DoGenRest_13)), &conv29_RestLocalVarDefns_64, &conv28_RestFuncDefns_65, &conv27_RestStmts_66, ((MR_Box) (STATE_VARIABLE_Info_4_38)), &conv26_STATE_VARIABLE_Info_34);
        RestLocalVarDefns_64 = ((MR_Word) (conv29_RestLocalVarDefns_64));
        RestFuncDefns_65 = ((MR_Word) (conv28_RestFuncDefns_65));
        RestStmts_66 = ((MR_Word) (conv27_RestStmts_66));
        *STATE_VARIABLE_Info_34 = ((MR_Word) (conv26_STATE_VARIABLE_Info_34));
        succeeded = (RestStmts_66 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SingleStmt_102 = ((MR_Word) ((MR_hl_field(1, RestStmts_66, 0))));
          Var_103 = ((MR_Word) ((MR_hl_field(1, RestStmts_66, 1))));
          succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 0U));
        }
        if (succeeded)
          ThenStmt_25 = SingleStmt_102;
        else
          {
            ThenStmt_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ThenStmt_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ThenStmt_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ThenStmt_25, 2) = ((MR_Box) (RestStmts_66));
            MR_hl_field(0, ThenStmt_25, 3) = ((MR_Box) (Context_11));
          }
        {
          ITEStmt_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, ITEStmt_26, 0) = ((MR_Box) (MR_mkword(2, &ml_backend__ml_code_util_scalar_common_2[13])));
          MR_hl_field(2, ITEStmt_26, 1) = ((MR_Box) (ThenStmt_25));
          MR_hl_field(2, ITEStmt_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, ITEStmt_26, 3) = ((MR_Box) (Context_11));
        }
        *LocalVarDefns_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), FirstLocalVarDefns_61, RestLocalVarDefns_64);
        *FuncDefns_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), FirstFuncDefns_62, RestFuncDefns_65);
        {
          Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_43, 0) = ((MR_Box) (ITEStmt_26));
          MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *Stmts_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), FirstStmts_63, Var_43);
      }
      break;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0(
  MR_Word MaybeParams_6,
  MR_Word * MaybeAux_7,
  MR_Word * FuncLabelRval_8,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word ModuleInfo_10;
  MR_Word PredProcId_11;
  MR_Word PredLabel_12;
  MR_Word PredModule_13;
  MR_Word Signature_15;
  MR_Integer ProcId_18;
  MR_Word ProcLabel_19;
  MR_Word FuncLabel_20;
  MR_Word QualFuncLabel_21;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word PredId_30;
  MR_Integer ProcId_31;
  MR_Word RttiProcLabel_32;

  ml_backend__ml_gen_info__ml_gen_info_new_aux_func_id_3_p_0(MaybeAux_7, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_23, &ModuleInfo_10);
  ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(*STATE_VARIABLE_Info_23, &PredProcId_11);
  PredId_30 = ((MR_Word) ((MR_hl_field(0, PredProcId_11, 0))));
  ProcId_31 = ((MR_Integer) ((MR_hl_field(0, PredProcId_11, 1))));
  RttiProcLabel_32 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_10, PredId_30, ProcId_31);
  ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_101_100_95_108_97_98_101_108_95_102_114_111_109_95_114_116_116_105_95_95_91_49_93_95_48_4_p_0(RttiProcLabel_32, &PredLabel_12, &PredModule_13);
  if ((MaybeParams_6 == (MR_Word) ((MR_Unsigned) 0U)))
    Signature_15 = (MR_Word) (&ml_backend__ml_code_util_scalar_common_1[5]);
  else
  {
    MR_Word Params_14 = ((MR_Word) ((MR_hl_field(1, MaybeParams_6, 0))));

    Signature_15 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_14);
  }
  ProcId_18 = ((MR_Integer) ((MR_hl_field(0, PredProcId_11, 1))));
  {
    ProcLabel_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcLabel_19, 0) = ((MR_Box) (PredLabel_12));
    MR_hl_field(0, ProcLabel_19, 1) = ((MR_Box) (ProcId_18));
  }
  {
    FuncLabel_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FuncLabel_20, 0) = ((MR_Box) (ProcLabel_19));
    MR_hl_field(0, FuncLabel_20, 1) = ((MR_Box) (*MaybeAux_7));
  }
  {
    QualFuncLabel_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QualFuncLabel_21, 0) = ((MR_Box) (PredModule_13));
    MR_hl_field(0, QualFuncLabel_21, 1) = ((MR_Box) (FuncLabel_20));
  }
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (QualFuncLabel_21));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (Signature_15));
  }
  Var_28 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_29)));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *FuncLabelRval_8 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_28));
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_label_func_7_p_0(
  MR_Word Info_8,
  MR_Word MaybeAux_9,
  MR_Word Source_10,
  MR_Word FuncParams_11,
  MR_Word Context_12,
  MR_Word Stmt_13,
  MR_Word * Func_14)
{
  MR_Word ModuleInfo_15;
  MR_Word PredProcId_16;
  MR_Word FuncName_17;
  MR_Word Body_19;
  MR_Word EnvVarNames_20;
  MR_Word Var_23;
  MR_Word PredLabel_27;
  MR_Word PredId_28;
  MR_Integer ProcId_29;
  MR_Word ProcLabel_30;
  MR_Word FuncLabel_31;
  MR_Word PredId_32;
  MR_Integer ProcId_33;
  MR_Word RttiProcLabel_34;
  MR_Word _MLDS_ModuleName_26;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_8, &ModuleInfo_15);
  ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(Info_8, &PredProcId_16);
  PredId_32 = ((MR_Word) ((MR_hl_field(0, PredProcId_16, 0))));
  ProcId_33 = ((MR_Integer) ((MR_hl_field(0, PredProcId_16, 1))));
  RttiProcLabel_34 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_15, PredId_32, ProcId_33);
  ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_101_100_95_108_97_98_101_108_95_102_114_111_109_95_114_116_116_105_95_95_91_49_93_95_48_4_p_0(RttiProcLabel_34, &PredLabel_27, &_MLDS_ModuleName_26);
  PredId_28 = ((MR_Word) ((MR_hl_field(0, PredProcId_16, 0))));
  ProcId_29 = ((MR_Integer) ((MR_hl_field(0, PredProcId_16, 1))));
  {
    ProcLabel_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcLabel_30, 0) = ((MR_Box) (PredLabel_27));
    MR_hl_field(0, ProcLabel_30, 1) = ((MR_Box) (ProcId_29));
  }
  {
    FuncLabel_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FuncLabel_31, 0) = ((MR_Box) (ProcLabel_30));
    MR_hl_field(0, FuncLabel_31, 1) = ((MR_Box) (MaybeAux_9));
  }
  {
    FuncName_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FuncName_17, 0) = ((MR_Box) (FuncLabel_31));
    MR_hl_field(0, FuncName_17, 1) = ((MR_Box) (PredId_28));
  }
  {
    Body_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Body_19, 0) = ((MR_Box) (Stmt_13));
  }
  EnvVarNames_20 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_23 = (MR_Word) ((MR_Word) (FuncName_17));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *Func_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (Context_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_2[0]));
    MR_hl_field(0, base, 3) = ((MR_Box) (Source_10));
    MR_hl_field(0, base, 4) = ((MR_Box) (FuncParams_11));
    MR_hl_field(0, base, 5) = ((MR_Box) (Body_19));
    MR_hl_field(0, base, 6) = ((MR_Box) (EnvVarNames_20));
    MR_hl_field(0, base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
ml_backend__ml_code_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_112_114_101_100_95_108_97_98_101_108_95_102_114_111_109_95_114_116_116_105_95_95_91_49_93_95_48_4_p_0(
  MR_Word RttiProcLabel_6,
  MR_Word * MLDS_PredLabel_7,
  MR_Word * MLDS_Module_8)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(0, RttiProcLabel_6, 0))) & (MR_Integer) 1);
  MR_Word ThisModule_10 = ((MR_Word) ((MR_hl_field(0, RttiProcLabel_6, 1))));
  MR_Word PredModule_11 = ((MR_Word) ((MR_hl_field(0, RttiProcLabel_6, 2))));
  MR_String PredName_12 = ((MR_String) ((MR_hl_field(0, RttiProcLabel_6, 3))));
  MR_Word PredFormArity_13 = ((MR_Word) ((MR_hl_field(0, RttiProcLabel_6, 4))));
  MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(0, RttiProcLabel_6, 7))));
  MR_Word PredIsImported_20 = ((((MR_Unsigned) ((MR_hl_field(0, RttiProcLabel_6, 10))) >> 1)) & (MR_Integer) 1);
  MR_Word Origin_22 = ((MR_Word) ((MR_hl_field(0, RttiProcLabel_6, 11))));
  MR_Word DefiningModule_31;
  MR_Word SpecialPred_25;
  MR_Word TypeCtor_26;
  MR_Word Var_33;

  succeeded = ((MR_tag((MR_Word) Origin_22)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_33 = ((MR_Word) ((MR_hl_field(1, Origin_22, 0))));
    succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_Integer) 0);
    if (succeeded)
    {
      SpecialPred_25 = ((MR_Unsigned) ((MR_hl_field(0, Var_33, 0))) & (MR_Integer) 3);
      TypeCtor_26 = ((MR_Word) ((MR_hl_field(0, Var_33, 1))));
    }
  }
  if (succeeded)
  {
    MR_Integer TypeArity_28 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_26, 1))));
    MR_String TypeName_29;
    MR_Word TypeModule_30;
    MR_Word TypeCtorSymName_27 = ((MR_Word) ((MR_hl_field(0, TypeCtor_26, 0))));

    if (((MR_tag((MR_Word) TypeCtorSymName_27)) == (MR_Integer) 1))
    {
      TypeModule_30 = ((MR_Word) ((MR_hl_field(1, TypeCtorSymName_27, 0))));
      TypeName_29 = ((MR_String) ((MR_hl_field(1, TypeCtorSymName_27, 1))));
      succeeded = MR_TRUE;
    }
    else
    {
      TypeName_29 = ((MR_String) ((MR_hl_field(0, TypeCtorSymName_27, 0))));
      succeeded = parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(TypeCtor_26);
      if (succeeded)
      {
        TypeModule_30 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word MaybeDeclaringModule_32;
      MR_Integer Var_40;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_10, TypeModule_30);
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = (SpecialPred_25 == (MR_Integer) 0);
        if (succeeded)
        {
          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_40);
          succeeded = (ProcId_16 != Var_40);
        }
      }
      if (succeeded)
      {
        DefiningModule_31 = ThisModule_10;
        {
          MaybeDeclaringModule_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeDeclaringModule_32, 0) = ((MR_Box) (TypeModule_30));
        }
      }
      else
      {
        DefiningModule_31 = TypeModule_30;
        MaybeDeclaringModule_32 = (MR_Word) ((MR_Unsigned) 0U);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *MLDS_PredLabel_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredName_12));
        MR_hl_field(1, base, 1) = ((MR_Box) (MaybeDeclaringModule_32));
        MR_hl_field(1, base, 2) = ((MR_Box) (TypeName_29));
        MR_hl_field(1, base, 3) = ((MR_Box) (TypeArity_28));
      }
    }
    else
    {
      MR_String Var_35;
      MR_String Var_37;

      Var_37 = mercury__string__f_43_43_2_f_0(PredName_12, (MR_String) "\'");
      Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred \140", Var_37);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_pred_label_from_rtti\'/4", Var_35);
        return;
      }
    }
  }
  else
  {
    MR_Word MaybeDeclaringModule_39;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_10, PredModule_11);
    succeeded = !(succeeded);
    if (succeeded)
      succeeded = (PredIsImported_20 == (MR_Integer) 0);
    if (succeeded)
    {
      DefiningModule_31 = ThisModule_10;
      {
        MaybeDeclaringModule_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeDeclaringModule_39, 0) = ((MR_Box) (PredModule_11));
      }
    }
    else
    {
      DefiningModule_31 = PredModule_11;
      MaybeDeclaringModule_39 = (MR_Word) ((MR_Unsigned) 0U);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *MLDS_PredLabel_7 = base;
      MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_9));
      MR_hl_field(0, base, 1) = ((MR_Box) (MaybeDeclaringModule_39));
      MR_hl_field(0, base, 2) = ((MR_Box) (PredName_12));
      MR_hl_field(0, base, 3) = ((MR_Box) (PredFormArity_13));
    }
  }
  *MLDS_Module_8 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(DefiningModule_31);
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_block_4_f_0(
  MR_Word LocalVarDefns_6,
  MR_Word FuncDefns_7,
  MR_Word Stmts_8,
  MR_Word Context_9)
{
  MR_bool succeeded = (LocalVarDefns_6 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Block_10;
  MR_Word SingleStmt_11;
  MR_Word Var_12;

  if (succeeded)
  {
    succeeded = (FuncDefns_7 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (Stmts_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SingleStmt_11 = ((MR_Word) ((MR_hl_field(1, Stmts_8, 0))));
        Var_12 = ((MR_Word) ((MR_hl_field(1, Stmts_8, 1))));
        succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
    Block_10 = SingleStmt_11;
  else
    {
      Block_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Block_10, 0) = ((MR_Box) (LocalVarDefns_6));
      MR_hl_field(0, Block_10, 1) = ((MR_Box) (FuncDefns_7));
      MR_hl_field(0, Block_10, 2) = ((MR_Box) (Stmts_8));
      MR_hl_field(0, Block_10, 3) = ((MR_Box) (Context_9));
    }
  return Block_10;
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_assign_3_f_0(
  MR_Word Lval_5,
  MR_Word Rval_6,
  MR_Word Context_7)
{
  MR_Word Stmt_8;
  MR_Word Assign_9;

  {
    Assign_9 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Assign_9, 0) = ((MR_Box) (Lval_5));
    MR_hl_field(2, Assign_9, 1) = ((MR_Box) (Rval_6));
  }
  {
    Stmt_8 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Stmt_8, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Stmt_8, 1) = ((MR_Box) (Assign_9));
    MR_hl_field(3, Stmt_8, 2) = ((MR_Box) (Context_7));
  }
  return Stmt_8;
}

static MR_bool MR_CALL 
ml_backend__ml_code_util____Unify____gen_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_code_util____Unify____gen_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_code_util____Compare____gen_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_code_util____Compare____gen_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__ml_code_util__init(void)
{
}

void mercury__ml_backend__ml_code_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ml_backend__ml_code_util__ml_backend__ml_code_util__type_ctor_info_gen_pred_0);
}

void mercury__ml_backend__ml_code_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_code_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_code_util.
