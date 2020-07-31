/*
** Automatically generated from `ml_code_util.m'
** by the Mercury compiler,
** version rotd-2020-07-31
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
#include "getopt_io.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.java_names.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_code_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_code_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_VA_TypeInfo_Struct5 ml_backend__ml_code_util____vti_pred_5list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;

static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1574__1_1_f_0(
  MR_Word LambdaHeadVar__1_25);

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
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0_1(
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


static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_1[26][2];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_2[1][7];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_3[15][1];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_4[8][3];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_5[1][5];

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_6[1][6];




static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_1[26][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_bitfield_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_packed_word_instance_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 52U))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_4[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 48U))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 28U))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 32U))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[9])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[11])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 36U))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 40U))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_2[1][7] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[4])),
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[5])),
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_1[6])),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_3[15][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "}\n"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "MR_deallocate(allocated_mem);\n"))
  },
  /* row 2 */
  {
    (MR_Box) (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_4[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_4[3])))
  },
  /* row 5 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "{\n"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "MR_MemoryList allocated_mem = NULL;\n"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) " = (MR_C_Pointer) MR_make_type_info_maybe_existq(\n\t"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_4[5])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) ", ((MR_Closure_Layout *)\n\t"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_4[4])))
  },
  /* row 12 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_4[7])))
  },
  /* row 14 */
  {
    ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0)))))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_4[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[8])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 24U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 36U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_code_util_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 24U))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_code_util_scalar_common_6[1][6] = {
  /* row 0 */
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



static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_code_util__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)
  }
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_code_util____Unify____gen_pred_0_0_10001)),
  ((MR_Box) (ml_backend__ml_code_util____Compare____gen_pred_0_0_10001)),
  (MR_String) "ml_backend.ml_code_util",
  (MR_String) "gen_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&ml_backend__ml_code_util____vti_pred_5list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_function_defn_0list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_stmt_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static MR_Word MR_CALL 
ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1574__1_1_f_0(
  MR_Word LambdaHeadVar__1_25)
{
  {
    MR_Word LambdaHeadVar__2_26;

    {
      LambdaHeadVar__2_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), LambdaHeadVar__2_26, 0) = ((MR_Box) (LambdaHeadVar__1_25));
    }
    return LambdaHeadVar__2_26;
  }
}

void MR_CALL 
ml_backend__ml_code_util____Compare____gen_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_code_util____Unify____gen_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_code_util__search_ground_rval_3_p_0(
  MR_Word FinalConstVarMap_4,
  MR_Word Var_5,
  MR_Word * Rval_6)
{
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
      *Rval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GroundTerm_7, (MR_Integer) 0))));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__fixup_builtin_module_1_f_0(
  MR_Word ModuleName0_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ModuleName0_3)) == (MR_Integer) 0);
    MR_Word ModuleName_4;
    MR_String Var_5;

    if (succeeded)
    {
      Var_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName0_3, (MR_Integer) 0))));
      succeeded = (strcmp(Var_5, (MR_String) "") == 0);
    }
    if (succeeded)
      ModuleName_4 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    else
      ModuleName_4 = ModuleName0_3;
    return ModuleName_4;
  }
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
        HeadOutVar_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutVars_11, (MR_Integer) 0))));
        TailOutVars_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutVars_11, (MR_Integer) 1))));
        succeeded = (FieldTypes_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          HeadFieldType_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldTypes_12, (MR_Integer) 0))));
          TailFieldTypes_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldTypes_12, (MR_Integer) 1))));
          succeeded = (FieldIds_13 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            HeadFieldId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_13, (MR_Integer) 0))));
            TailFieldIds_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldIds_13, (MR_Integer) 1))));
          }
        }
      }
      if (succeeded)
      {
        MR_Word HeadOutVarLval_26;
        MR_Word HeadStmt_27;
        MR_Word TailStmts_28;
        MR_Word BaseRval_46;
        MR_Word FieldLval_47;
        MR_Word AtomicStmt_48;
        MR_Word Var_52;

        ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_29, HeadOutVar_20, &HeadOutVarLval_26);
        {
          BaseRval_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), BaseRval_46, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), BaseRval_46, 1) = ((MR_Box) (VectorCommon_14));
          MR_hl_field(MR_mktag(3), BaseRval_46, 2) = ((MR_Box) (IndexRval_16));
        }
        {
          FieldLval_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FieldLval_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_3[14])));
          MR_hl_field(MR_mktag(0), FieldLval_47, 1) = ((MR_Box) (BaseRval_46));
          MR_hl_field(MR_mktag(0), FieldLval_47, 2) = ((MR_Box) (StructType_15));
          MR_hl_field(MR_mktag(0), FieldLval_47, 3) = ((MR_Box) (HeadFieldId_24));
          MR_hl_field(MR_mktag(0), FieldLval_47, 4) = ((MR_Box) (HeadFieldType_22));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (FieldLval_47));
        }
        {
          AtomicStmt_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), AtomicStmt_48, 0) = ((MR_Box) (HeadOutVarLval_26));
          MR_hl_field(MR_mktag(2), AtomicStmt_48, 1) = ((MR_Box) (Var_52));
        }
        {
          HeadStmt_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), HeadStmt_27, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), HeadStmt_27, 1) = ((MR_Box) (AtomicStmt_48));
          MR_hl_field(MR_mktag(3), HeadStmt_27, 2) = ((MR_Box) (Context_17));
        }
        ml_backend__ml_code_util__ml_generate_field_assigns_10_p_0(TailOutVars_21, TailFieldTypes_23, TailFieldIds_25, VectorCommon_14, StructType_15, IndexRval_16, Context_17, &TailStmts_28, STATE_VARIABLE_Info_0_29, STATE_VARIABLE_Info_30);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadStmt_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailStmts_28));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_util.ml_generate_field_assigns\'/10", (MR_String) "mismatched lists");
          return;
        }
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_generate_field_assign_10_p_0(
  MR_Word OutVarLval_11,
  MR_Word FieldType_12,
  MR_Word FieldId_13,
  MR_Word VectorCommon_14,
  MR_Word StructType_15,
  MR_Word IndexRval_16,
  MR_Word Context_17,
  MR_Word * Stmt_18,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    MR_Word BaseRval_20;
    MR_Word FieldLval_21;
    MR_Word AtomicStmt_22;
    MR_Word Var_28;

    {
      BaseRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BaseRval_20, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), BaseRval_20, 1) = ((MR_Box) (VectorCommon_14));
      MR_hl_field(MR_mktag(3), BaseRval_20, 2) = ((MR_Box) (IndexRval_16));
    }
    {
      FieldLval_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldLval_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_3[14])));
      MR_hl_field(MR_mktag(0), FieldLval_21, 1) = ((MR_Box) (BaseRval_20));
      MR_hl_field(MR_mktag(0), FieldLval_21, 2) = ((MR_Box) (StructType_15));
      MR_hl_field(MR_mktag(0), FieldLval_21, 3) = ((MR_Box) (FieldId_13));
      MR_hl_field(MR_mktag(0), FieldLval_21, 4) = ((MR_Box) (FieldType_12));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (FieldLval_21));
    }
    {
      AtomicStmt_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), AtomicStmt_22, 0) = ((MR_Box) (OutVarLval_11));
      MR_hl_field(MR_mktag(2), AtomicStmt_22, 1) = ((MR_Box) (Var_28));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Stmt_18 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (AtomicStmt_22));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_17));
    }
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
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
      MR_Word Goal_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Soln_13;
      MR_Word Solns_14;
      MR_Word STATE_VARIABLE_Info_18_18;

      succeeded = ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(HeadVar__1_1, Goal_11, &Soln_13, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_18_18);
      if (succeeded)
      {
        succeeded = ml_backend__ml_code_util__ml_generate_constants_for_arms_5_p_0(HeadVar__1_1, Goals_12, &Solns_14, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_5);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Soln_13));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Solns_14));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_Rval_6;

    succeeded = ml_backend__ml_code_util__search_ground_rval_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Rval_6);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Rval_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0(
  MR_Word Vars_6,
  MR_Word Goal_7,
  MR_Word * Soln_8,
  MR_Word STATE_VARIABLE_Info_0_15,
  MR_Word * STATE_VARIABLE_Info_16)
{
  {
    MR_bool succeeded;
    MR_Word InitConstVarMap_10;
    MR_Word FinalConstVarMap_14;
    MR_Word STATE_VARIABLE_Info_18_18;
    MR_Word Var_19;
    MR_Word _LocalVarDefns_11;
    MR_Word _FuncDefns_12;
    MR_Word _Stmts_13;

    ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_0_15, &InitConstVarMap_10);
    ml_backend__ml_code_gen__ml_gen_goal_7_p_0((MR_Integer) 0, Goal_7, &_LocalVarDefns_11, &_FuncDefns_12, &_Stmts_13, STATE_VARIABLE_Info_0_15, &STATE_VARIABLE_Info_18_18);
    ml_backend__ml_gen_info__ml_gen_info_get_const_var_map_2_p_0(STATE_VARIABLE_Info_18_18, &FinalConstVarMap_14);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_19, 0) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_19, 1) = ((MR_Box) (ml_backend__ml_code_util__ml_generate_constants_for_arm_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_19, 3) = ((MR_Box) (FinalConstVarMap_14));
    }
    succeeded = mercury__list__map_3_p_2((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[3]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_19, Vars_6, Soln_8);
    if (succeeded)
    {
      ml_backend__ml_gen_info__ml_gen_info_set_const_var_map_3_p_0(InitConstVarMap_10, STATE_VARIABLE_Info_18_18, STATE_VARIABLE_Info_16);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
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
  *Arg_2 = (MR_Word) (&ml_backend__ml_code_util_scalar_common_4[1]);
}

void MR_CALL 
ml_backend__ml_code_util__ml_get_env_ptr_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[4]));
}

void MR_CALL 
ml_backend__ml_code_util__ml_initial_cont_3_p_0(
  MR_Word Info_4,
  MR_Word OutputVarLvalsTypes_5,
  MR_Word * Cont_6)
{
  {
    MR_Word OutputVarLvalsMLDSTypes_7;
    MR_Word OutputVarMLDSTypes_8;
    MR_Word ContLval_9;
    MR_Word Var_13;
    MR_Word Var_17;

    ml_backend__ml_code_util__ml_skip_dummy_argument_types_3_p_0(Info_4, OutputVarLvalsTypes_5, &OutputVarLvalsMLDSTypes_7);
    mercury__assoc_list__values_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), OutputVarLvalsMLDSTypes_7, &OutputVarMLDSTypes_8);
    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (OutputVarMLDSTypes_8));
    }
    {
      ContLval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ContLval_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), ContLval_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[24])));
      MR_hl_field(MR_mktag(3), ContLval_9, 2) = ((MR_Box) (Var_13));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_17, 0) = ((MR_Box) (ContLval_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Cont_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[13])));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (OutputVarLvalsMLDSTypes_7));
    }
  }
}

static void MR_CALL 
ml_backend__ml_code_util__ml_skip_dummy_argument_types_3_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Lval_6;
    MR_Word Type_7;
    MR_Word LvalsTypes_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word TailLvalsMLDSTypes_10;
    MR_Word ModuleInfo_11;
    MR_Word IsDummy_12;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    Lval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
    Type_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
    ml_backend__ml_code_util__ml_skip_dummy_argument_types_3_p_0(Info_1, LvalsTypes_8, &TailLvalsMLDSTypes_10);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_11);
    IsDummy_12 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_11, Type_7);
    switch (IsDummy_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *HeadVar__3_3 = TailLvalsMLDSTypes_10;
        break;
      case (MR_Integer) 1:
        {
          MR_Word MLDSType_13;
          MR_Word Var_15;
          MR_Word ModuleInfo_19;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_19);
          MLDSType_13 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_19, Type_7);
          {
            Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (Lval_6));
            MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (MLDSType_13));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailLvalsMLDSTypes_10));
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
  {
    MR_Word CondVarLval_9;
    MR_Word Var_12;
    MR_Integer CondNum_16 = (MR_Integer) (CondVar_5);
    MR_Word Var_17;
    MR_Word Assign_22;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (CondNum_16));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_12, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_12, 1) = ((MR_Box) (Var_17));
    }
    {
      CondVarLval_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CondVarLval_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), CondVarLval_9, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(3), CondVarLval_9, 2) = ((MR_Box) ((MR_Unsigned) 16U));
    }
    {
      Assign_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Assign_22, 0) = ((MR_Box) (CondVarLval_9));
      MR_hl_field(MR_mktag(2), Assign_22, 1) = ((MR_Box) (Value_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Stmt_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Assign_22));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_7));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_test_cond_var_2_p_0(
  MR_Word CondVar_3,
  MR_Word * CondVarRval_4)
{
  {
    MR_Word CondVarLval_5;
    MR_Word Var_8;
    MR_Integer CondNum_12 = (MR_Integer) (CondVar_3);
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (CondNum_12));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_8, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_8, 1) = ((MR_Box) (Var_13));
    }
    {
      CondVarLval_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), CondVarLval_5, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), CondVarLval_5, 1) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(3), CondVarLval_5, 2) = ((MR_Box) ((MR_Unsigned) 16U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *CondVarRval_4 = base;
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (CondVarLval_5));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_cond_var_lval_2_p_0(
  MR_Word CondSeq_3,
  MR_Word * CondVarLval_4)
{
  {
    MR_Word Var_5;
    MR_Integer CondNum_9 = (MR_Integer) (CondSeq_3);
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_10, 1) = ((MR_Box) (CondNum_9));
    }
    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_5, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_5, 1) = ((MR_Box) (Var_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *CondVarLval_4 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 16U));
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_cond_var_decl_2_f_0(
  MR_Word CondSeq_4,
  MR_Word Context_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_6;
    MR_Integer CondNum_11 = (MR_Integer) (CondSeq_4);
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_12, 1) = ((MR_Box) (CondNum_11));
    }
    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_6, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Var_6, 1) = ((MR_Box) (Var_12));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_success_lval_3_p_0(
  MR_Word * SucceededLval_4,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    *SucceededLval_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_4[2]));
    ml_backend__ml_gen_info__ml_gen_info_set_used_succeeded_var_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_6, STATE_VARIABLE_Info_7);
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_f_0(
  MR_Word Context_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[14])));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Context_3));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__2_2;
  }
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

        ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[23])), Context_7, &SetSuccessFalse_10, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetSuccessFalse_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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

        ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(Context_7, &CallCont_11, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CallCont_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SetSuccessTrue_10;

        ml_backend__ml_code_util__ml_gen_set_success_5_p_0((MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[22])), Context_7, &SetSuccessTrue_10, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmts_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetSuccessTrue_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_26;

    conv0_LambdaHeadVar__2_26 = ml_backend__ml_code_util__IntroducedFrom__func__ml_gen_call_current_success_cont__1574__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_26));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_call_current_success_cont_4_p_0(
  MR_Word Context_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_Word SuccCont_8;
    MR_Word FuncRval_9;
    MR_Word EnvPtrRval_10;
    MR_Word ArgTypesLvals0_11;
    MR_Word ArgLvals0_12;
    MR_Word ArgTypes0_13;
    MR_Word ArgRvals0_14;
    MR_Word ArgRvals_16;
    MR_Word ArgTypes_18;
    MR_Word Signature_20;
    MR_Word Var_27;

    ml_backend__ml_gen_info__ml_gen_info_current_success_cont_2_p_0(STATE_VARIABLE_Info_0_22, &SuccCont_8);
    FuncRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuccCont_8, (MR_Integer) 0))));
    EnvPtrRval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuccCont_8, (MR_Integer) 1))));
    ArgTypesLvals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SuccCont_8, (MR_Integer) 2))));
    mercury__assoc_list__keys_and_values_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), ArgTypesLvals0_11, &ArgLvals0_12, &ArgTypes0_13);
    ArgRvals0_14 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_code_util_scalar_common_4[6]), ArgLvals0_12);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (EnvPtrRval_10));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ArgRvals_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), ArgRvals0_14, Var_27);
    ArgTypes_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), ArgTypes0_13, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_code_util_scalar_common_1[12])));
    {
      Signature_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Signature_20, 0) = ((MR_Box) (ArgTypes_18));
      MR_hl_field(MR_mktag(0), Signature_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
      *Stmt_6 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Signature_20));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (FuncRval_9));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ArgRvals_16));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_5));
    }
    *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_set_success_5_p_0(
  MR_Word Value_6,
  MR_Word Context_7,
  MR_Word * Stmt_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word Assign_27;

    ml_backend__ml_gen_info__ml_gen_info_set_used_succeeded_var_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_11, STATE_VARIABLE_Info_12);
    {
      Assign_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Assign_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_4[2])));
      MR_hl_field(MR_mktag(2), Assign_27, 1) = ((MR_Box) (Value_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Stmt_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Assign_27));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_7));
    }
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
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_28;
    MR_Word BoxedRval_29;
    MR_Word Var_48;
    MR_Word Var_60;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_46, &ModuleInfo_28);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_48, 0) = ((MR_Box) (VarLval_18));
    }
    ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_28, CalleeType_16, CallerType_15, BoxPolicy_17, Var_48, &BoxedRval_29);
    succeeded = ((MR_tag((MR_Word) BoxedRval_29)) == (MR_Integer) 2);
    if (succeeded)
    {
      Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), BoxedRval_29, (MR_Integer) 0))));
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
      MR_Word STATE_VARIABLE_Info_49_49;
      MR_Word ModuleInfo_65;
      MR_String ProgVarName_32;
      MR_Integer ProgVarNum_33;

      ml_backend__ml_gen_info__ml_gen_info_new_conv_var_3_p_0(&ConvVarSeq_30, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_49_49);
      ConvVarNum_31 = (MR_Integer) (ConvVarSeq_30);
      succeeded = ((MR_tag((MR_Word) VarName_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        ProgVarName_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), VarName_19, (MR_Integer) 0))));
        ProgVarNum_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), VarName_19, (MR_Integer) 1))));
        {
          ArgVarName_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ArgVarName_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), ArgVarName_34, 1) = ((MR_Box) (ConvVarNum_31));
          MR_hl_field(MR_mktag(3), ArgVarName_34, 2) = ((MR_Box) (ProgVarName_32));
          MR_hl_field(MR_mktag(3), ArgVarName_34, 3) = ((MR_Box) (ProgVarNum_33));
        }
      }
      else
      {
        MR_String VarNameStr_35;
        MR_Word Var_50;

        VarNameStr_35 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(VarName_19);
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_50, 0) = ((MR_Box) (ConvVarNum_31));
          MR_hl_field(MR_mktag(2), Var_50, 1) = ((MR_Box) (VarNameStr_35));
        }
        {
          ArgVarName_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ArgVarName_34, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(MR_mktag(3), ArgVarName_34, 1) = ((MR_Box) (Var_50));
        }
      }
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_49_49, &ModuleInfo_65);
      MLDS_CalleeType_36 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_65, CalleeType_16);
      switch (ForClosureWrapper_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GC_Stmts_40;

            ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_p_0(ArgVarName_34, CalleeType_16, CallerType_15, Context_20, &GC_Stmts_40, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_47);
            {
              ArgVarDecl_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ArgVarDecl_39, 0) = ((MR_Box) (ArgVarName_34));
              MR_hl_field(MR_mktag(0), ArgVarDecl_39, 1) = ((MR_Box) (Context_20));
              MR_hl_field(MR_mktag(0), ArgVarDecl_39, 2) = ((MR_Box) (MLDS_CalleeType_36));
              MR_hl_field(MR_mktag(0), ArgVarDecl_39, 3) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), ArgVarDecl_39, 4) = ((MR_Box) (GC_Stmts_40));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            succeeded = ((MR_tag((MR_Word) CallerType_15)) == (MR_Integer) 0);
            if (succeeded)
              ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_p_0(ArgVarName_34, CalleeType_16, ArgNum_22, Context_20, &ArgVarDecl_39, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_47);
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *ConvDecls_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgVarDecl_39));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *ArgLval_23 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ArgVarName_34));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MLDS_CalleeType_36));
      }
      CallerIsDummy_41 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_28, CallerType_15);
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
            MR_Word Assign_80;
            MR_Word Assign_85;

            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_28, CallerType_15, CalleeType_16, BoxPolicy_17, Var_48, &ConvertedVarRval_42);
            {
              Assign_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Assign_80, 0) = ((MR_Box) (*ArgLval_23));
              MR_hl_field(MR_mktag(2), Assign_80, 1) = ((MR_Box) (ConvertedVarRval_42));
            }
            {
              AssignInputStmt_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), AssignInputStmt_43, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), AssignInputStmt_43, 1) = ((MR_Box) (Assign_80));
              MR_hl_field(MR_mktag(3), AssignInputStmt_43, 2) = ((MR_Box) (Context_20));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ConvInputStmts_25 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignInputStmt_43));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (*ArgLval_23));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_28, CalleeType_16, CallerType_15, BoxPolicy_17, Var_58, &ConvertedArgRval_44);
            {
              Assign_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Assign_85, 0) = ((MR_Box) (VarLval_18));
              MR_hl_field(MR_mktag(2), Assign_85, 1) = ((MR_Box) (ConvertedArgRval_44));
            }
            {
              AssignOutputStmt_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), AssignOutputStmt_45, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), AssignOutputStmt_45, 1) = ((MR_Box) (Assign_85));
              MR_hl_field(MR_mktag(3), AssignOutputStmt_45, 2) = ((MR_Box) (Context_20));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *ConvOutputStmts_26 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (AssignOutputStmt_45));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
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
  {
    MR_Word TypeInfoName_20 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[19]));
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
      TypeInfoLval_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TypeInfoLval_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), TypeInfoLval_24, 1) = ((MR_Box) (TypeInfoName_20));
      MR_hl_field(MR_mktag(3), TypeInfoLval_24, 2) = ((MR_Box) (TypeInfoType_23));
    }
    TypeInfoDecl_25 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(TypeInfoName_20, TypeInfoType_23, (MR_Word) ((MR_Unsigned) 0U), Context_11);
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_40, 0) = ((MR_Box) (TypeInfoLval_24));
    }
    ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_p_0(VarName_8, Type_9, Var_40, Context_11, &GCStmt0_26, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
    switch (MR_tag((MR_Word) GCStmt0_26)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        GCStmt_33 = GCStmt0_26;
        break;
      case (MR_Integer) 1:
        {
          MR_Word CallTraceFuncCode_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GCStmt0_26, (MR_Integer) 0))));
          MR_Word MakeTypeInfoCodeC_94;
          MR_Word MakeTypeInfoCode_95;
          MR_Word DeallocateCode_97;
          MR_Word GCTraceCode_98;
          MR_Word Var_100;
          MR_Word Var_103;
          MR_Word Var_106;
          MR_Word Var_107;
          MR_Word Var_108;
          MR_Word Var_113;
          MR_Word Var_116;
          MR_Word Var_119;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_String Var_124;
          MR_Word Var_134;
          MR_Word Var_137;
          MR_Word Var_138;
          MR_Word Var_139;
          MR_String Var_142;
          MR_String Var_149;

          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_107, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_107, 1) = ((MR_Box) (TypeInfoLval_24));
          }
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_3[12]), ArgNum_10, &Var_142);
          Var_149 = mercury__string__f_43_43_2_f_0(Var_142, (MR_String) " - 1],\n\tNULL, NULL, &allocated_mem);\n");
          Var_124 = mercury__string__f_43_43_2_f_0((MR_String) ")->MR_closure_arg_pseudo_type_info[", Var_149);
          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_123, 0) = ((MR_Box) (Var_124));
          }
          {
            Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[21])));
            MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_122));
          }
          {
            Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[10])));
            MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_119));
          }
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[20])));
            MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_116));
          }
          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[8])));
            MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_113));
          }
          {
            Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
            MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (Var_108));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[7])));
            MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (Var_106));
          }
          {
            Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[6])));
            MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_103));
          }
          {
            MakeTypeInfoCodeC_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MakeTypeInfoCodeC_94, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), MakeTypeInfoCodeC_94, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), MakeTypeInfoCodeC_94, 2) = ((MR_Box) (Var_100));
          }
          {
            MakeTypeInfoCode_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MakeTypeInfoCode_95, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), MakeTypeInfoCode_95, 1) = ((MR_Box) (MakeTypeInfoCodeC_94));
            MR_hl_field(MR_mktag(3), MakeTypeInfoCode_95, 2) = ((MR_Box) (Context_11));
          }
          {
            DeallocateCode_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DeallocateCode_97, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), DeallocateCode_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_4[0])));
            MR_hl_field(MR_mktag(3), DeallocateCode_97, 2) = ((MR_Box) (Context_11));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (TypeInfoDecl_25));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (DeallocateCode_97));
            MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) (CallTraceFuncCode_93));
            MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_139));
          }
          {
            Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (MakeTypeInfoCode_95));
            MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_138));
          }
          {
            GCTraceCode_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GCTraceCode_98, 0) = ((MR_Box) (Var_134));
            MR_hl_field(MR_mktag(0), GCTraceCode_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), GCTraceCode_98, 2) = ((MR_Box) (Var_137));
            MR_hl_field(MR_mktag(0), GCTraceCode_98, 3) = ((MR_Box) (Context_11));
          }
          {
            GCStmt_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), GCStmt_33, 0) = ((MR_Box) (GCTraceCode_98));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CallTraceFuncCode_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GCStmt0_26, (MR_Integer) 0))));
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
          MR_String Var_152;
          MR_String Var_159;

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (TypeInfoLval_24));
          }
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_3[12]), ArgNum_10, &Var_152);
          Var_159 = mercury__string__f_43_43_2_f_0(Var_152, (MR_String) " - 1],\n\tNULL, NULL, &allocated_mem);\n");
          Var_67 = mercury__string__f_43_43_2_f_0((MR_String) ")->MR_closure_arg_pseudo_type_info[", Var_159);
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_66, 0) = ((MR_Box) (Var_67));
          }
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[21])));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[10])));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[20])));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[8])));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_56));
          }
          {
            Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
            MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[7])));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
          }
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[6])));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
          }
          {
            MakeTypeInfoCodeC_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MakeTypeInfoCodeC_28, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(MR_mktag(3), MakeTypeInfoCodeC_28, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), MakeTypeInfoCodeC_28, 2) = ((MR_Box) (Var_43));
          }
          {
            MakeTypeInfoCode_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MakeTypeInfoCode_29, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), MakeTypeInfoCode_29, 1) = ((MR_Box) (MakeTypeInfoCodeC_28));
            MR_hl_field(MR_mktag(3), MakeTypeInfoCode_29, 2) = ((MR_Box) (Context_11));
          }
          {
            DeallocateCode_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DeallocateCode_31, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(MR_mktag(3), DeallocateCode_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_4[0])));
            MR_hl_field(MR_mktag(3), DeallocateCode_31, 2) = ((MR_Box) (Context_11));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (TypeInfoDecl_25));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (DeallocateCode_31));
            MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (CallTraceFuncCode_27));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MakeTypeInfoCode_29));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_89));
          }
          {
            GCTraceCode_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), GCTraceCode_32, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(0), GCTraceCode_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), GCTraceCode_32, 2) = ((MR_Box) (Var_88));
            MR_hl_field(MR_mktag(0), GCTraceCode_32, 3) = ((MR_Box) (Context_11));
          }
          {
            GCStmt_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), GCStmt_33, 0) = ((MR_Box) (GCTraceCode_32));
          }
        }
        break;
    }
    Var_92 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_21, Type_9);
    *LocalVarDefn_12 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(VarName_8, Var_92, GCStmt_33, Context_11);
  }
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
  {
    MR_bool succeeded;

    switch (BoxPolicy_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *ArgRval_12 = VarRval_11;
        break;
      case (MR_Integer) 0:
        {
          succeeded = ((MR_tag((MR_Word) SourceType_8)) == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) DestType_9)) == (MR_Integer) 0);
            if (succeeded)
            {
            }
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            MR_Word MLDS_DestType_17;

            MLDS_DestType_17 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, DestType_9);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *ArgRval_12 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_DestType_17));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_11));
            }
          }
          else
          {
            succeeded = ((MR_tag((MR_Word) SourceType_8)) == (MR_Integer) 0);
            if (succeeded)
            {
            }
            succeeded = !(succeeded);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) DestType_9)) == (MR_Integer) 0);
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              MR_Word MLDS_SourceType_22;

              MLDS_SourceType_22 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, SourceType_8);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *ArgRval_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_SourceType_22));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_11));
              }
            }
            else
            {
              MR_Word Var_33;
              MR_Word Var_34;

              succeeded = ((MR_tag((MR_Word) SourceType_8)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SourceType_8, (MR_Integer) 0))));
                succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
              }
              succeeded = !(succeeded);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) DestType_9)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DestType_9, (MR_Integer) 0))));
                  succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word Var_35;
                MR_Word MLDS_DestType_53;

                MLDS_DestType_53 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, DestType_9);
                {
                  Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                  MR_hl_field(MR_mktag(3), Var_35, 2) = ((MR_Box) (VarRval_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *ArgRval_12 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_DestType_53));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_35));
                }
              }
              else
              {
                MR_Word Var_37;
                MR_Word Var_38;

                succeeded = ((MR_tag((MR_Word) DestType_9)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DestType_9, (MR_Integer) 0))));
                  succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 0U));
                }
                succeeded = !(succeeded);
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) SourceType_8)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SourceType_8, (MR_Integer) 0))));
                    succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
                if (succeeded)
                {
                  MR_Word Var_39;
                  MR_Word MLDS_DestType_54;
                  MR_Word MLDS_SourceType_55;

                  MLDS_SourceType_55 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, SourceType_8);
                  MLDS_DestType_54 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, DestType_9);
                  {
                    Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (MLDS_SourceType_55));
                    MR_hl_field(MR_mktag(3), Var_39, 2) = ((MR_Box) (VarRval_11));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *ArgRval_12 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_DestType_54));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_39));
                  }
                }
                else
                {
                  MR_Word IntType_23;
                  MR_Word Var_40;
                  MR_Word Var_41;
                  MR_Word Var_76;

                  succeeded = ((MR_tag((MR_Word) DestType_9)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DestType_9, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      IntType_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))) & (MR_Integer) 15);
                      switch (IntType_23) {
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
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) SourceType_8)) == (MR_Integer) 2);
                        if (succeeded)
                        {
                          Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SourceType_8, (MR_Integer) 0))));
                          succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            Var_76 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))) & (MR_Integer) 15);
                            succeeded = (IntType_23 == Var_76);
                          }
                        }
                        succeeded = !(succeeded);
                      }
                    }
                  }
                  if (succeeded)
                  {
                    MR_Word Var_42;
                    MR_Word MLDS_DestType_56;

                    MLDS_DestType_56 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, DestType_9);
                    {
                      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 20U));
                      MR_hl_field(MR_mktag(3), Var_42, 2) = ((MR_Box) (VarRval_11));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *ArgRval_12 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_DestType_56));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_42));
                    }
                  }
                  else
                  {
                    MR_Word Var_44;
                    MR_Word IntType_57;
                    MR_Word Var_45;
                    MR_Word Var_77;

                    succeeded = ((MR_tag((MR_Word) SourceType_8)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), SourceType_8, (MR_Integer) 0))));
                      succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        IntType_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))) & (MR_Integer) 15);
                        switch (IntType_57) {
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
                        if (succeeded)
                        {
                          succeeded = ((MR_tag((MR_Word) DestType_9)) == (MR_Integer) 2);
                          if (succeeded)
                          {
                            Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DestType_9, (MR_Integer) 0))));
                            succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 1);
                            if (succeeded)
                            {
                              Var_77 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_45, (MR_Integer) 0))) & (MR_Integer) 15);
                              succeeded = (IntType_57 == Var_77);
                            }
                          }
                          succeeded = !(succeeded);
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word Var_46;
                      MR_Word MLDS_DestType_58;
                      MR_Word MLDS_SourceType_59;

                      MLDS_SourceType_59 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, SourceType_8);
                      MLDS_DestType_58 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, DestType_9);
                      {
                        Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (MLDS_SourceType_59));
                        MR_hl_field(MR_mktag(3), Var_46, 2) = ((MR_Box) (VarRval_11));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *ArgRval_12 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_DestType_58));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_46));
                      }
                    }
                    else
                    {
                      MR_Word SourceTypeCtor_24;
                      MR_Word SourceTypeArgs_25;
                      MR_Word DestTypeCtor_26;
                      MR_Word DestTypeArgs_27;

                      succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(SourceType_8, &SourceTypeCtor_24, &SourceTypeArgs_25);
                      if (succeeded)
                      {
                        succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(DestType_9, &DestTypeCtor_26, &DestTypeArgs_27);
                        if (succeeded)
                        {
                          {
                            MR_Word Var_49;
                            MR_Word Var_50;

                            succeeded = parse_tree__prog_type__type_ctor_is_array_1_p_0(SourceTypeCtor_24);
                            if (succeeded)
                            {
                              succeeded = (SourceTypeArgs_25 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SourceTypeArgs_25, (MR_Integer) 0))));
                                Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SourceTypeArgs_25, (MR_Integer) 1))));
                                succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 0);
                                if (succeeded)
                                  succeeded = (Var_50 == (MR_Word) ((MR_Unsigned) 0U));
                              }
                            }
                          }
                          if (!(succeeded))
                          {
                            MR_Word Var_47;
                            MR_Word Var_48;

                            succeeded = parse_tree__prog_type__type_ctor_is_array_1_p_0(DestTypeCtor_26);
                            if (succeeded)
                            {
                              succeeded = (DestTypeArgs_27 != (MR_Word) ((MR_Unsigned) 0U));
                              if (succeeded)
                              {
                                Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DestTypeArgs_27, (MR_Integer) 0))));
                                Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DestTypeArgs_27, (MR_Integer) 1))));
                                succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 0);
                                if (succeeded)
                                  succeeded = (Var_48 == (MR_Word) ((MR_Unsigned) 0U));
                              }
                            }
                          }
                          if (succeeded)
                          {
                            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(SourceType_8, DestType_9);
                            succeeded = !(succeeded);
                          }
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word MLDS_DestType_60;

                        MLDS_DestType_60 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, DestType_9);
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *ArgRval_12 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_DestType_60));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_11));
                        }
                      }
                      else
                      {
                        MR_Word Var_52;
                        MR_Word Var_32;

                        Var_52 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0));
                        succeeded = parse_tree__prog_type__type_unify_5_p_0(SourceType_8, DestType_9, (MR_Word) ((MR_Unsigned) 0U), Var_52, &Var_32);
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          MR_Word MLDS_DestType_61;

                          MLDS_DestType_61 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, DestType_9);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            *ArgRval_12 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_DestType_61));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (VarRval_11));
                          }
                        }
                        else
                          *ArgRval_12 = VarRval_11;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
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
  {
    MR_bool succeeded;

    if ((MLDS_Type_11 == (MR_Word) ((MR_Unsigned) 20U)))
      succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) MLDS_Type_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
    {
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MLDS_Type_11, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0);
      if (succeeded)
      {
      }
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
      if (((((MR_tag((MR_Word) MLDS_Type_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), MLDS_Type_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
      {
        MR_Word IntType_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), MLDS_Type_11, (MR_Integer) 1))) & (MR_Integer) 15);

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
            Initializer_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Initializer_23, 0) = ((MR_Box) (Rval_13));
          }
          ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(MLDS_ModuleName_22, ConstVarKind_19, MLDS_Type_11, Initializer_23, Context_10, &ConstAddrRval_24, STATE_VARIABLE_GlobalData_0_25, STATE_VARIABLE_GlobalData_26);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *BoxedRval_14 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 20U));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ConstAddrRval_24));
          }
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *BoxedRval_14 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_Type_11));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_13));
          }
          *STATE_VARIABLE_GlobalData_26 = STATE_VARIABLE_GlobalData_0_25;
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *BoxedRval_14 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MLDS_Type_11));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_13));
        }
        *STATE_VARIABLE_GlobalData_26 = STATE_VARIABLE_GlobalData_0_25;
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Type_5,
  MR_Word Width_6)
{
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
      case (MR_Integer) 3:
        {
          MR_Word Category_9;
          MR_Word UnboxedFloat_10;
          MR_Word UnboxedInt64s_11;
          MR_Word Var_94;

          Category_9 = check_hlds__type_util__classify_type_2_f_0(ModuleInfo_4, Type_5);
          libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 268, &UnboxedFloat_10);
          libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 269, &UnboxedInt64s_11);
          succeeded = ((MR_tag((MR_Word) Category_9)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Category_9, (MR_Integer) 0))));
            switch (MR_tag((MR_Word) Var_94)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(Var_94)) {
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
                  MR_Word IntType_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_94, (MR_Integer) 0))) & (MR_Integer) 15);

                  switch (IntType_20) {
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
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(
  MR_Word MaybeFieldName_4,
  MR_Integer ArgNum_5)
{
  {
    MR_Word FieldVarName_6;
    MR_String FieldName_9;

    if ((MaybeFieldName_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_11;

      Var_11 = mercury__string__int_to_string_1_f_0(ArgNum_5);
      FieldName_9 = mercury__string__f_43_43_2_f_0((MR_String) "F", Var_11);
    }
    else
    {
      MR_Word QualifiedFieldName_7;
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFieldName_4, (MR_Integer) 0))));

      QualifiedFieldName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
      FieldName_9 = mdbcomp__sym_name__unqualify_name_1_f_0(QualifiedFieldName_7);
    }
    {
      FieldVarName_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), FieldVarName_6, 0) = ((MR_Box) (FieldName_9));
    }
    return FieldVarName_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0(void)
{
  return (MR_Word) (&ml_backend__ml_code_util_scalar_common_3[5]);
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(
  MR_Word DataName_7,
  MR_Word MLDS_Type_8,
  MR_Word Initializer_9,
  MR_Word GCStmt_10,
  MR_Word Context_11)
{
  {
    MR_Word HeadVar__6_6;

    {
      HeadVar__6_6 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 0) = ((MR_Box) (DataName_7));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 1) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 2) = ((MR_Box) (MLDS_Type_8));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 3) = ((MR_Box) (Initializer_9));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 4) = ((MR_Box) (GCStmt_10));
    }
    return HeadVar__6_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(
  MR_Word DataName_6,
  MR_Word MLDS_Type_7,
  MR_Word GCStmt_8,
  MR_Word Context_9)
{
  {
    MR_Word HeadVar__5_5;

    {
      HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__5_5, 0) = ((MR_Box) (DataName_6));
      MR_hl_field(MR_mktag(0), HeadVar__5_5, 1) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), HeadVar__5_5, 2) = ((MR_Box) (MLDS_Type_7));
      MR_hl_field(MR_mktag(0), HeadVar__5_5, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__5_5, 4) = ((MR_Box) (GCStmt_8));
    }
    return HeadVar__5_5;
  }
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (GCStmt_13));
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(
  MR_Word VarSet_4,
  MR_Word Var_5)
{
  {
    MR_bool succeeded;
    MR_Word MLDSVarName_6;
    MR_Integer VarNumber_7;
    MR_String VarName_8;

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5, &VarNumber_7);
    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_4, Var_5, &VarName_8);
    if (succeeded)
      {
        MLDSVarName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MLDSVarName_6, 0) = ((MR_Box) (VarName_8));
        MR_hl_field(MR_mktag(1), MLDSVarName_6, 1) = ((MR_Box) (VarNumber_7));
      }
    else
      {
        MLDSVarName_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MLDSVarName_6, 0) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(1), MLDSVarName_6, 1) = ((MR_Box) (VarNumber_7));
      }
    return MLDSVarName_6;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word MLDSVarName_8;
      MR_Word MLDSVarNames_9;
      MR_Integer VarNumber_13;
      MR_String VarName_14;

      mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, &VarNumber_13);
      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), HeadVar__1_1, Var_6, &VarName_14);
      if (succeeded)
        {
          MLDSVarName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MLDSVarName_8, 0) = ((MR_Box) (VarName_14));
          MR_hl_field(MR_mktag(1), MLDSVarName_8, 1) = ((MR_Box) (VarNumber_13));
        }
      else
        {
          MLDSVarName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MLDSVarName_8, 0) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(1), MLDSVarName_8, 1) = ((MR_Box) (VarNumber_13));
        }
      MLDSVarNames_9 = ml_backend__ml_code_util__ml_gen_local_var_names_2_f_0(HeadVar__1_1, Vars_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (MLDSVarName_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (MLDSVarNames_9));
      }
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_variable_type_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * Type_6)
{
  {
    MR_Word VarTypes_7;

    ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(Info_4, &VarTypes_7);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_7, Var_5, Type_6);
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_variable_types_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Type_8;
    MR_Word Types_9;
    MR_Word VarTypes_13;

    ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(HeadVar__1_1, &VarTypes_13);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_13, Var_6, &Type_8);
    ml_backend__ml_code_util__ml_variable_types_3_p_0(HeadVar__1_1, Vars_7, &Types_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Type_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Types_9));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Lval_8;
    MR_Word Lvals_9;

    ml_backend__ml_code_util__ml_gen_var_3_p_0(HeadVar__1_1, Var_6, &Lval_8);
    ml_backend__ml_code_util__ml_gen_var_list_3_p_0(HeadVar__1_1, Vars_7, &Lvals_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Lval_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Lvals_9));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_Word * Lval_6)
{
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
      MR_Word Type_9;
      MR_Word VarTypes_15;

      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(Info_4, &VarTypes_15);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_15, Var_5, &Type_9);
      ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(Info_4, Var_5, Type_9, Lval_6);
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_var_with_type_4_p_0(
  MR_Word Info_5,
  MR_Word Var_6,
  MR_Word Type_7,
  MR_Word * Lval_8)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_9;
    MR_Word IsDummy_10;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_5, &ModuleInfo_9);
    IsDummy_10 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_9, Type_7);
    switch (IsDummy_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MLDS_Type_11;
          MR_Word Var_17;
          MR_Word ModuleInfo_23;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_5, &ModuleInfo_23);
          MLDS_Type_11 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_23, Type_7);
          Var_17 = ml_backend__mlds__global_dummy_var_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Lval_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MLDS_Type_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word VarSet_12;
          MR_Word VarName_13;
          MR_Word VarLval_14;
          MR_Word ByRefOutputVars_15;
          MR_Word MLDS_Type_18;
          MR_Integer VarNumber_27;
          MR_Word ModuleInfo_34;
          MR_String VarName_28;

          ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(Info_5, &VarSet_12);
          mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_6, &VarNumber_27);
          succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_12, Var_6, &VarName_28);
          if (succeeded)
            {
              VarName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), VarName_13, 0) = ((MR_Box) (VarName_28));
              MR_hl_field(MR_mktag(1), VarName_13, 1) = ((MR_Box) (VarNumber_27));
            }
          else
            {
              VarName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), VarName_13, 0) = ((MR_Box) ((MR_String) ""));
              MR_hl_field(MR_mktag(1), VarName_13, 1) = ((MR_Box) (VarNumber_27));
            }
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_5, &ModuleInfo_34);
          MLDS_Type_18 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_34, Type_7);
          {
            VarLval_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), VarLval_14, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), VarLval_14, 1) = ((MR_Box) (VarName_13));
            MR_hl_field(MR_mktag(3), VarLval_14, 2) = ((MR_Box) (MLDS_Type_18));
          }
          ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(Info_5, &ByRefOutputVars_15);
          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ByRefOutputVars_15, Var_6);
          if (succeeded)
          {
            MR_Word Var_16;

            {
              Var_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_16, 0) = ((MR_Box) (VarLval_14));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Lval_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MLDS_Type_18));
            }
          }
          else
            *Lval_8 = VarLval_14;
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_new_label_3_p_0(
  MR_String * Label_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  {
    MR_Integer LabelNum_6;
    MR_String Var_11;

    ml_backend__ml_gen_info__ml_gen_info_new_label_3_p_0(&LabelNum_6, STATE_VARIABLE_Info_0_7, STATE_VARIABLE_Info_8);
    Var_11 = mercury__string__int_to_string_1_f_0(LabelNum_6);
    *Label_4 = mercury__string__f_43_43_2_f_0((MR_String) "label_", Var_11);
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_pred_label_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word * MLDS_PredLabel_7,
  MR_Word * MLDS_Module_8)
{
  {
    MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0))));
    MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1))));
    MR_Word RttiProcLabel_11;

    RttiProcLabel_11 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, PredId_9, ProcId_10);
    ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ModuleInfo_5, RttiProcLabel_11, MLDS_PredLabel_7, MLDS_Module_8);
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_nondet_label_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word MaybeAux_7)
{
  {
    MR_Word MLDS_Name_8;
    MR_Word PredLabel_15;
    MR_Word PredId_16;
    MR_Integer ProcId_17;
    MR_Word ProcLabel_18;
    MR_Word FuncLabel_19;
    MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0))));
    MR_Integer ProcId_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1))));
    MR_Word RttiProcLabel_26;
    MR_Word _MLDS_ModuleName_9;

    RttiProcLabel_26 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, PredId_24, ProcId_25);
    ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ModuleInfo_5, RttiProcLabel_26, &PredLabel_15, &_MLDS_ModuleName_9);
    PredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0))));
    ProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1))));
    {
      ProcLabel_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcLabel_18, 0) = ((MR_Box) (PredLabel_15));
      MR_hl_field(MR_mktag(0), ProcLabel_18, 1) = ((MR_Box) (ProcId_17));
    }
    {
      FuncLabel_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncLabel_19, 0) = ((MR_Box) (ProcLabel_18));
      MR_hl_field(MR_mktag(0), FuncLabel_19, 1) = ((MR_Box) (MaybeAux_7));
    }
    {
      MLDS_Name_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MLDS_Name_8, 0) = ((MR_Box) (FuncLabel_19));
      MR_hl_field(MR_mktag(0), MLDS_Name_8, 1) = ((MR_Box) (PredId_16));
    }
    return MLDS_Name_8;
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word * MLDS_ModuleName_7,
  MR_Word * MLDS_Name_8)
{
  {
    MR_Word PredLabel_15;
    MR_Word PredId_16;
    MR_Integer ProcId_17;
    MR_Word ProcLabel_18;
    MR_Word FuncLabel_19;
    MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0))));
    MR_Integer ProcId_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1))));
    MR_Word RttiProcLabel_26;

    RttiProcLabel_26 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_5, PredId_24, ProcId_25);
    ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ModuleInfo_5, RttiProcLabel_26, &PredLabel_15, MLDS_ModuleName_7);
    PredId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0))));
    ProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1))));
    {
      ProcLabel_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcLabel_18, 0) = ((MR_Box) (PredLabel_15));
      MR_hl_field(MR_mktag(0), ProcLabel_18, 1) = ((MR_Box) (ProcId_17));
    }
    {
      FuncLabel_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncLabel_19, 0) = ((MR_Box) (ProcLabel_18));
      MR_hl_field(MR_mktag(0), FuncLabel_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *MLDS_Name_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FuncLabel_19));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PredId_16));
    }
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_java_mercury_enum_class_0_f_0(void)
{
  {
    MR_Word EnumClassId_2;
    MR_Word InterfaceModuleName_3;
    MR_Word EnumClass_4;
    MR_Word Var_5;

    Var_5 = parse_tree__java_names__java_mercury_runtime_package_name_0_f_0();
    InterfaceModuleName_3 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(Var_5);
    {
      EnumClass_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EnumClass_4, 0) = ((MR_Box) (InterfaceModuleName_3));
      MR_hl_field(MR_mktag(0), EnumClass_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), EnumClass_4, 2) = ((MR_Box) ((MR_String) "MercuryEnum"));
    }
    {
      EnumClassId_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), EnumClassId_2, 0) = ((MR_Box) (EnumClass_4));
      MR_hl_field(MR_mktag(0), EnumClassId_2, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), EnumClassId_2, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    return EnumClassId_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0(void)
{
  {
    MR_Word TypeInterfaceDefn_2;
    MR_Word InterfaceModuleName_3;
    MR_Word TypeInterface_4;
    MR_Word Var_5;

    Var_5 = parse_tree__java_names__java_mercury_runtime_package_name_0_f_0();
    InterfaceModuleName_3 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(Var_5);
    {
      TypeInterface_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInterface_4, 0) = ((MR_Box) (InterfaceModuleName_3));
      MR_hl_field(MR_mktag(0), TypeInterface_4, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), TypeInterface_4, 2) = ((MR_Box) ((MR_String) "MercuryType"));
    }
    {
      TypeInterfaceDefn_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInterfaceDefn_2, 0) = ((MR_Box) (TypeInterface_4));
      MR_hl_field(MR_mktag(0), TypeInterfaceDefn_2, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), TypeInterfaceDefn_2, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    return TypeInterfaceDefn_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_make_boxed_types_1_f_0(
  MR_Integer Arity_3)
{
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
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_make_boxed_type_0_f_0(void)
{
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
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_array_elem_type_1_f_0(
  MR_Word ElemType_3)
{
  {
    MR_Word MLDS_Type_4;

    if (((MR_tag((MR_Word) ElemType_3)) == (MR_Integer) 0))
    {
      MR_Word ScalarElem_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ElemType_3, (MR_Integer) 0))) & (MR_Integer) 3);

      switch (ScalarElem_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          MLDS_Type_4 = (MR_Word) ((MR_Unsigned) 20U);
          break;
        case (MR_Integer) 1:
          MLDS_Type_4 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_code_util_scalar_common_1[16]));
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
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_type_3_p_0(
  MR_Word Info_4,
  MR_Word Type_5,
  MR_Word * MLDS_Type_6)
{
  {
    MR_Word ModuleInfo_7;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_4, &ModuleInfo_7);
    *MLDS_Type_6 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_7, Type_5);
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_int_tag_to_rval_const_3_f_0(
  MR_Word IntTag_5,
  MR_Word MerType_6,
  MR_Word MLDS_Type_7)
{
  {
    MR_bool succeeded;
    MR_Word Rval_8;
    MR_Word Const_10;

    switch (MR_tag((MR_Word) IntTag_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Int_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IntTag_5, (MR_Integer) 0))));
          MR_Word Var_20;

          Var_20 = parse_tree__builtin_lib_types__int_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_6, Var_20);
          if (succeeded)
            {
              Const_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Const_10, 0) = ((MR_Box) (Int_9));
            }
          else
          {
            MR_Word Var_21;

            Var_21 = parse_tree__builtin_lib_types__char_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(MerType_6, Var_21);
            if (succeeded)
              {
                Const_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_10, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                MR_hl_field(MR_mktag(3), Const_10, 1) = ((MR_Box) (Int_9));
              }
            else
              {
                Const_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_10, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(MR_mktag(3), Const_10, 1) = ((MR_Box) (Int_9));
                MR_hl_field(MR_mktag(3), Const_10, 2) = ((MR_Box) (MLDS_Type_7));
              }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Unsigned UInt_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), IntTag_5, (MR_Integer) 0))));

          {
            Const_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Const_10, 1) = ((MR_Box) (UInt_11));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int8_t Int8_12 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(2), IntTag_5, (MR_Integer) 0)));

          {
            Const_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Const_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Const_10, 1) = ((MR_Box) (MR_Word) (Int8_12));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), IntTag_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              uint8_t UInt8_13 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_5, (MR_Integer) 1)));

              {
                Const_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_10, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), Const_10, 1) = ((MR_Box) (MR_Word) (UInt8_13));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int16_t Int16_14 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_5, (MR_Integer) 1)));

              {
                Const_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_10, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), Const_10, 1) = ((MR_Box) (MR_Word) (Int16_14));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              uint16_t UInt16_15 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_5, (MR_Integer) 1)));

              {
                Const_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_10, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Const_10, 1) = ((MR_Box) (MR_Word) (UInt16_15));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              int32_t Int32_16 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_5, (MR_Integer) 1)));

              {
                Const_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_10, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Const_10, 1) = ((MR_Box) (MR_Word) (Int32_16));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              uint32_t UInt32_17 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), IntTag_5, (MR_Integer) 1)));

              {
                Const_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_10, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), Const_10, 1) = ((MR_Box) (MR_Word) (UInt32_17));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              int64_t Int64_18 = MR_unbox_int64((MR_hl_field(MR_mktag(3), IntTag_5, (MR_Integer) 1)));

              {
                Const_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_10, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), Const_10, 1) = MR_box_int64(Int64_18);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              uint64_t UInt64_19 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), IntTag_5, (MR_Integer) 1)));

              {
                Const_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Const_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), Const_10, 1) = MR_box_uint64(UInt64_19);
              }
            }
            break;
        }
        break;
    }
    {
      Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Rval_8, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Rval_8, 1) = ((MR_Box) (Const_10));
    }
    return Rval_8;
  }
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
          MR_Word STATE_VARIABLE_Info_58_58;
          void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), DoGenFirst_12, (MR_Integer) 1))));
          MR_Box conv4_FirstLocalVarDefns_18;
          MR_Box conv3_FirstFuncDefns_19;
          MR_Box conv2_FirstStmts_20;
          MR_Box conv1_STATE_VARIABLE_Info_58_58;
          void MR_CALL (* func_5)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
          MR_Box conv9_RestLocalVarDefns_21;
          MR_Box conv8_RestFuncDefns_22;
          MR_Box conv7_RestStmts_23;
          MR_Box conv6_STATE_VARIABLE_Info_34;

          func_0(((MR_Box) (DoGenFirst_12)), &conv4_FirstLocalVarDefns_18, &conv3_FirstFuncDefns_19, &conv2_FirstStmts_20, ((MR_Box) (STATE_VARIABLE_Info_0_33)), &conv1_STATE_VARIABLE_Info_58_58);
          FirstLocalVarDefns_18 = ((MR_Word) (conv4_FirstLocalVarDefns_18));
          FirstFuncDefns_19 = ((MR_Word) (conv3_FirstFuncDefns_19));
          FirstStmts_20 = ((MR_Word) (conv2_FirstStmts_20));
          STATE_VARIABLE_Info_58_58 = ((MR_Word) (conv1_STATE_VARIABLE_Info_58_58));
          func_5 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), DoGenRest_13, (MR_Integer) 1))));
          func_5(((MR_Box) (DoGenRest_13)), &conv9_RestLocalVarDefns_21, &conv8_RestFuncDefns_22, &conv7_RestStmts_23, ((MR_Box) (STATE_VARIABLE_Info_58_58)), &conv6_STATE_VARIABLE_Info_34);
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
          MR_Word STATE_VARIABLE_Info_36_36;
          MR_Word STATE_VARIABLE_Info_38_38;
          MR_Word STATE_VARIABLE_Info_39_39;
          MR_Word STATE_VARIABLE_Info_40_40;
          MR_Word Var_41;
          MR_Word STATE_VARIABLE_Info_42_42;
          MR_Word STATE_VARIABLE_Info_43_43;
          MR_Word STATE_VARIABLE_Info_44_44;
          MR_Word STATE_VARIABLE_Info_45_45;
          MR_Word Var_46;
          MR_Word Var_48;
          MR_Word FirstFuncDefns_67;
          MR_Word RestLocalVarDefns_69;
          MR_Word RestFuncDefns_70;
          MR_Word RestStmts_71;
          void MR_CALL (* func_10)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
          MR_Box conv14_LocalVarDefns_14;
          MR_Box conv13_FirstFuncDefns_67;
          MR_Box conv12_Stmts_16;
          MR_Box conv11_STATE_VARIABLE_Info_39_39;
          void MR_CALL (* func_15)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
          MR_Box conv19_RestLocalVarDefns_69;
          MR_Box conv18_RestFuncDefns_70;
          MR_Box conv17_RestStmts_71;
          MR_Box conv16_STATE_VARIABLE_Info_44_44;
          MR_Word SingleStmt_90;
          MR_Word Var_91;

          ml_backend__ml_code_util__ml_gen_new_func_label_5_p_0((MR_Word) ((MR_Unsigned) 0U), &RestFuncLabel_27, &RestFuncLabelRval_28, STATE_VARIABLE_Info_0_33, &STATE_VARIABLE_Info_36_36);
          {
            SuccessCont_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SuccessCont_30, 0) = ((MR_Box) (RestFuncLabelRval_28));
            MR_hl_field(MR_mktag(0), SuccessCont_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[4])));
            MR_hl_field(MR_mktag(0), SuccessCont_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_p_0(SuccessCont_30, STATE_VARIABLE_Info_36_36, &STATE_VARIABLE_Info_38_38);
          func_10 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), DoGenFirst_12, (MR_Integer) 1))));
          func_10(((MR_Box) (DoGenFirst_12)), &conv14_LocalVarDefns_14, &conv13_FirstFuncDefns_67, &conv12_Stmts_16, ((MR_Box) (STATE_VARIABLE_Info_38_38)), &conv11_STATE_VARIABLE_Info_39_39);
          *LocalVarDefns_14 = ((MR_Word) (conv14_LocalVarDefns_14));
          FirstFuncDefns_67 = ((MR_Word) (conv13_FirstFuncDefns_67));
          *Stmts_16 = ((MR_Word) (conv12_Stmts_16));
          STATE_VARIABLE_Info_39_39 = ((MR_Word) (conv11_STATE_VARIABLE_Info_39_39));
          ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_p_0(STATE_VARIABLE_Info_39_39, &STATE_VARIABLE_Info_40_40);
          Var_41 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_code_util_scalar_common_1[1]));
          ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(Var_41, STATE_VARIABLE_Info_40_40, &STATE_VARIABLE_Info_42_42);
          ml_backend__ml_gen_info__ml_gen_info_increment_func_nest_depth_2_p_0(STATE_VARIABLE_Info_42_42, &STATE_VARIABLE_Info_43_43);
          func_15 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), DoGenRest_13, (MR_Integer) 1))));
          func_15(((MR_Box) (DoGenRest_13)), &conv19_RestLocalVarDefns_69, &conv18_RestFuncDefns_70, &conv17_RestStmts_71, ((MR_Box) (STATE_VARIABLE_Info_43_43)), &conv16_STATE_VARIABLE_Info_44_44);
          RestLocalVarDefns_69 = ((MR_Word) (conv19_RestLocalVarDefns_69));
          RestFuncDefns_70 = ((MR_Word) (conv18_RestFuncDefns_70));
          RestStmts_71 = ((MR_Word) (conv17_RestStmts_71));
          STATE_VARIABLE_Info_44_44 = ((MR_Word) (conv16_STATE_VARIABLE_Info_44_44));
          ml_backend__ml_gen_info__ml_gen_info_decrement_func_nest_depth_2_p_0(STATE_VARIABLE_Info_44_44, &STATE_VARIABLE_Info_45_45);
          Var_46 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__ml_code_util_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_code_util_scalar_common_1[1]));
          ml_backend__ml_gen_info__ml_gen_info_set_packed_word_map_3_p_0(Var_46, STATE_VARIABLE_Info_45_45, STATE_VARIABLE_Info_34);
          succeeded = (RestLocalVarDefns_69 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (RestFuncDefns_70 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (RestStmts_71 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SingleStmt_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RestStmts_71, (MR_Integer) 0))));
                Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RestStmts_71, (MR_Integer) 1))));
                succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
            RestStmt_31 = SingleStmt_90;
          else
            {
              RestStmt_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), RestStmt_31, 0) = ((MR_Box) (RestLocalVarDefns_69));
              MR_hl_field(MR_mktag(0), RestStmt_31, 1) = ((MR_Box) (RestFuncDefns_70));
              MR_hl_field(MR_mktag(0), RestStmt_31, 2) = ((MR_Box) (RestStmts_71));
              MR_hl_field(MR_mktag(0), RestStmt_31, 3) = ((MR_Box) (Context_11));
            }
          ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(*STATE_VARIABLE_Info_34, RestFuncLabel_27, Context_11, RestStmt_31, &RestFunc_32);
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (RestFunc_32));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *FuncDefns_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), FirstFuncDefns_67, Var_48);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Succeeded_24;
          MR_Word ThenStmt_25;
          MR_Word ITEStmt_26;
          MR_Word STATE_VARIABLE_Info_50_50;
          MR_Word STATE_VARIABLE_Info_51_51;
          MR_Word Var_56;
          MR_Word FirstLocalVarDefns_60;
          MR_Word FirstFuncDefns_61;
          MR_Word FirstStmts_62;
          MR_Word RestLocalVarDefns_63;
          MR_Word RestFuncDefns_64;
          MR_Word RestStmts_65;
          void MR_CALL (* func_20)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), DoGenFirst_12, (MR_Integer) 1))));
          MR_Box conv24_FirstLocalVarDefns_60;
          MR_Box conv23_FirstFuncDefns_61;
          MR_Box conv22_FirstStmts_62;
          MR_Box conv21_STATE_VARIABLE_Info_50_50;
          void MR_CALL (* func_25)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *);
          MR_Box conv29_RestLocalVarDefns_63;
          MR_Box conv28_RestFuncDefns_64;
          MR_Box conv27_RestStmts_65;
          MR_Box conv26_STATE_VARIABLE_Info_34;

          func_20(((MR_Box) (DoGenFirst_12)), &conv24_FirstLocalVarDefns_60, &conv23_FirstFuncDefns_61, &conv22_FirstStmts_62, ((MR_Box) (STATE_VARIABLE_Info_0_33)), &conv21_STATE_VARIABLE_Info_50_50);
          FirstLocalVarDefns_60 = ((MR_Word) (conv24_FirstLocalVarDefns_60));
          FirstFuncDefns_61 = ((MR_Word) (conv23_FirstFuncDefns_61));
          FirstStmts_62 = ((MR_Word) (conv22_FirstStmts_62));
          STATE_VARIABLE_Info_50_50 = ((MR_Word) (conv21_STATE_VARIABLE_Info_50_50));
          ml_backend__ml_code_util__ml_gen_test_success_3_p_0(&Succeeded_24, STATE_VARIABLE_Info_50_50, &STATE_VARIABLE_Info_51_51);
          func_25 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), DoGenRest_13, (MR_Integer) 1))));
          func_25(((MR_Box) (DoGenRest_13)), &conv29_RestLocalVarDefns_63, &conv28_RestFuncDefns_64, &conv27_RestStmts_65, ((MR_Box) (STATE_VARIABLE_Info_51_51)), &conv26_STATE_VARIABLE_Info_34);
          RestLocalVarDefns_63 = ((MR_Word) (conv29_RestLocalVarDefns_63));
          RestFuncDefns_64 = ((MR_Word) (conv28_RestFuncDefns_64));
          RestStmts_65 = ((MR_Word) (conv27_RestStmts_65));
          *STATE_VARIABLE_Info_34 = ((MR_Word) (conv26_STATE_VARIABLE_Info_34));
          ThenStmt_25 = ml_backend__ml_code_util__ml_gen_block_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), RestStmts_65, Context_11);
          {
            ITEStmt_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ITEStmt_26, 0) = ((MR_Box) (Succeeded_24));
            MR_hl_field(MR_mktag(2), ITEStmt_26, 1) = ((MR_Box) (ThenStmt_25));
            MR_hl_field(MR_mktag(2), ITEStmt_26, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), ITEStmt_26, 3) = ((MR_Box) (Context_11));
          }
          *LocalVarDefns_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), FirstLocalVarDefns_60, RestLocalVarDefns_63);
          *FuncDefns_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), FirstFuncDefns_61, RestFuncDefns_64);
          {
            Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (ITEStmt_26));
            MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *Stmts_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), FirstStmts_62, Var_56);
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_test_success_3_p_0(
  MR_Word * SucceededRval_4,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  {
    ml_backend__ml_gen_info__ml_gen_info_set_used_succeeded_var_3_p_0((MR_Integer) 1, STATE_VARIABLE_Info_0_7, STATE_VARIABLE_Info_8);
    *SucceededRval_4 = (MR_Word) (MR_mkword(MR_mktag(2), &ml_backend__ml_code_util_scalar_common_3[3]));
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
    MR_Word PredId_34;
    MR_Integer ProcId_35;
    MR_Word RttiProcLabel_36;

    ml_backend__ml_gen_info__ml_gen_info_new_aux_func_id_3_p_0(MaybeAux_7, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_23, &ModuleInfo_10);
    ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(*STATE_VARIABLE_Info_23, &PredProcId_11);
    PredId_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_11, (MR_Integer) 0))));
    ProcId_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_11, (MR_Integer) 1))));
    RttiProcLabel_36 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_10, PredId_34, ProcId_35);
    ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ModuleInfo_10, RttiProcLabel_36, &PredLabel_12, &PredModule_13);
    if ((MaybeParams_6 == (MR_Word) ((MR_Unsigned) 0U)))
      Signature_15 = (MR_Word) (&ml_backend__ml_code_util_scalar_common_1[13]);
    else
    {
      MR_Word Params_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeParams_6, (MR_Integer) 0))));

      Signature_15 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_14);
    }
    ProcId_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_11, (MR_Integer) 1))));
    {
      ProcLabel_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcLabel_19, 0) = ((MR_Box) (PredLabel_12));
      MR_hl_field(MR_mktag(0), ProcLabel_19, 1) = ((MR_Box) (ProcId_18));
    }
    {
      FuncLabel_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncLabel_20, 0) = ((MR_Box) (ProcLabel_19));
      MR_hl_field(MR_mktag(0), FuncLabel_20, 1) = ((MR_Box) (*MaybeAux_7));
    }
    {
      QualFuncLabel_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualFuncLabel_21, 0) = ((MR_Box) (PredModule_13));
      MR_hl_field(MR_mktag(0), QualFuncLabel_21, 1) = ((MR_Box) (FuncLabel_20));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (QualFuncLabel_21));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (Signature_15));
    }
    Var_28 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (Var_29)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *FuncLabelRval_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_28));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_nondet_label_func_5_p_0(
  MR_Word Info_6,
  MR_Word MaybeAux_7,
  MR_Word Context_8,
  MR_Word Stmt_9,
  MR_Word * Func_10)
{
  ml_backend__ml_code_util__ml_gen_label_func_6_p_0(Info_6, MaybeAux_7, (MR_Word) (&ml_backend__ml_code_util_scalar_common_1[11]), Context_8, Stmt_9, Func_10);
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_label_func_6_p_0(
  MR_Word Info_7,
  MR_Word MaybeAux_8,
  MR_Word FuncParams_9,
  MR_Word Context_10,
  MR_Word Stmt_11,
  MR_Word * Func_12)
{
  {
    MR_Word ModuleInfo_13;
    MR_Word PredProcId_14;
    MR_Word FuncName_15;
    MR_Word Body_18;
    MR_Word EnvVarNames_19;
    MR_Word Var_22;
    MR_Word PredLabel_35;
    MR_Word PredId_36;
    MR_Integer ProcId_37;
    MR_Word ProcLabel_38;
    MR_Word FuncLabel_39;
    MR_Word PredId_44;
    MR_Integer ProcId_45;
    MR_Word RttiProcLabel_46;
    MR_Word _MLDS_ModuleName_29;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_7, &ModuleInfo_13);
    ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(Info_7, &PredProcId_14);
    PredId_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_14, (MR_Integer) 0))));
    ProcId_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_14, (MR_Integer) 1))));
    RttiProcLabel_46 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_13, PredId_44, ProcId_45);
    ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ModuleInfo_13, RttiProcLabel_46, &PredLabel_35, &_MLDS_ModuleName_29);
    PredId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_14, (MR_Integer) 0))));
    ProcId_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_14, (MR_Integer) 1))));
    {
      ProcLabel_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcLabel_38, 0) = ((MR_Box) (PredLabel_35));
      MR_hl_field(MR_mktag(0), ProcLabel_38, 1) = ((MR_Box) (ProcId_37));
    }
    {
      FuncLabel_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncLabel_39, 0) = ((MR_Box) (ProcLabel_38));
      MR_hl_field(MR_mktag(0), FuncLabel_39, 1) = ((MR_Box) (MaybeAux_8));
    }
    {
      FuncName_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FuncName_15, 0) = ((MR_Box) (FuncLabel_39));
      MR_hl_field(MR_mktag(0), FuncName_15, 1) = ((MR_Box) (PredId_36));
    }
    {
      Body_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Body_18, 0) = ((MR_Box) (Stmt_11));
    }
    EnvVarNames_19 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    Var_22 = (MR_Word) ((MR_Word) (FuncName_15));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *Func_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (&ml_backend__ml_code_util_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FuncParams_9));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Body_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (EnvVarNames_19));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

void MR_CALL 
ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word RttiProcLabel_6,
  MR_Word * MLDS_PredLabel_7,
  MR_Word * MLDS_Module_8)
{
  {
    MR_bool succeeded;
    MR_Word PredOrFunc_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_6, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ThisModule_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_6, (MR_Integer) 1))));
    MR_Word PredModule_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_6, (MR_Integer) 2))));
    MR_String PredName_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), RttiProcLabel_6, (MR_Integer) 3))));
    MR_Integer PredArity_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RttiProcLabel_6, (MR_Integer) 4))));
    MR_Word PredId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_6, (MR_Integer) 6))));
    MR_Integer ProcId_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), RttiProcLabel_6, (MR_Integer) 7))));
    MR_Word Detism_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_6, (MR_Integer) 10))) >> 2)) & (MR_Integer) 7);
    MR_Word PredIsImported_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), RttiProcLabel_6, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
    MR_Word Origin_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RttiProcLabel_6, (MR_Integer) 11))));
    MR_Word DefiningModule_31;
    MR_Word SpecialPred_25;
    MR_Word TypeCtor_26;

    succeeded = ((MR_tag((MR_Word) Origin_22)) == (MR_Integer) 1);
    if (succeeded)
    {
      SpecialPred_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Origin_22, (MR_Integer) 0))) & (MR_Integer) 3);
      TypeCtor_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_22, (MR_Integer) 1))));
      {
        MR_Integer TypeArity_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_26, (MR_Integer) 1))));
        MR_String TypeName_29;
        MR_Word TypeModule_30;
        MR_Word TypeCtorSymName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_26, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) TypeCtorSymName_27)) == (MR_Integer) 1))
        {
          TypeModule_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_27, (MR_Integer) 0))));
          TypeName_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_27, (MR_Integer) 1))));
          succeeded = MR_TRUE;
        }
        else
        {
          TypeName_29 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorSymName_27, (MR_Integer) 0))));
          succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(TypeCtor_26);
          if (succeeded)
          {
            TypeModule_30 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word MaybeDeclaringModule_32;
          MR_Integer Var_43;

          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_10, TypeModule_30);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = (SpecialPred_25 == (MR_Integer) 0);
            if (succeeded)
            {
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_43);
              succeeded = (ProcId_16 != Var_43);
            }
          }
          if (succeeded)
          {
            DefiningModule_31 = ThisModule_10;
            {
              MaybeDeclaringModule_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeDeclaringModule_32, 0) = ((MR_Box) (TypeModule_30));
            }
          }
          else
          {
            DefiningModule_31 = TypeModule_30;
            MaybeDeclaringModule_32 = (MR_Word) ((MR_Unsigned) 0U);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *MLDS_PredLabel_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredName_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeDeclaringModule_32));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (TypeName_29));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (TypeArity_28));
          }
        }
        else
        {
          MR_String Var_37;
          MR_String Var_39;

          Var_39 = mercury__string__f_43_43_2_f_0(PredName_12, (MR_String) "\'");
          Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred \140", Var_39);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_code_util.ml_gen_pred_label_from_rtti\'/4", Var_37);
            return;
          }
        }
      }
    }
    else
    {
      MR_Word NonOutputFunc_34;
      MR_Word CodeModel_35;
      MR_Word MaybeDeclaringModule_42;
      MR_Word TypeCtorInfo_21_64;
      MR_Word TypeCtorInfo_22_65;
      MR_Word TypeInfo_23_66;
      MR_Word Var_41;
      MR_Word PredInfo_50;
      MR_Word ProcInfo_51;
      MR_Word Modes_52;
      MR_Word ArgTypes_53;
      MR_Word ArgVars_54;
      MR_Word TopFunctorModes_55;
      MR_Word RetTopFunctorMode_57;
      MR_Word RetArgType_59;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word _InputTopFunctorModes_56;
      MR_Box conv0_RetTopFunctorMode_57;
      MR_Word _InputArgTypes_58;
      MR_Box conv1_RetArgType_59;
      MR_Word _InputArgVars_60;
      MR_Box conv2_Var_33;

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ThisModule_10, PredModule_11);
      succeeded = !(succeeded);
      if (succeeded)
        succeeded = (PredIsImported_20 == (MR_Integer) 0);
      if (succeeded)
      {
        DefiningModule_31 = ThisModule_10;
        {
          MaybeDeclaringModule_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeDeclaringModule_42, 0) = ((MR_Box) (PredModule_11));
        }
      }
      else
      {
        DefiningModule_31 = PredModule_11;
        MaybeDeclaringModule_42 = (MR_Word) ((MR_Unsigned) 0U);
      }
      succeeded = (PredOrFunc_9 == (MR_Integer) 1);
      if (succeeded)
      {
        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (PredId_15));
          MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (ProcId_16));
        }
        hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, Var_41, &PredInfo_50, &ProcInfo_51);
        Var_61 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_50);
        succeeded = (Var_61 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_62 = hlds__code_model__proc_info_interface_code_model_1_f_0(ProcInfo_51);
          succeeded = (Var_62 == (MR_Integer) 0);
          if (succeeded)
          {
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_51, &Modes_52);
            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_50, &ArgTypes_53);
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_51, &ArgVars_54);
            check_hlds__mode_util__modes_to_top_functor_modes_4_p_0(ModuleInfo_5, Modes_52, ArgTypes_53, &TopFunctorModes_55);
            TypeCtorInfo_21_64 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_top_functor_mode_0);
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_21_64, TopFunctorModes_55, &_InputTopFunctorModes_56, &conv0_RetTopFunctorMode_57);
            RetTopFunctorMode_57 = ((MR_Word) (conv0_RetTopFunctorMode_57));
            TypeCtorInfo_22_65 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_22_65, ArgTypes_53, &_InputArgTypes_58, &conv1_RetArgType_59);
            RetArgType_59 = ((MR_Word) (conv1_RetArgType_59));
            TypeInfo_23_66 = (MR_Word) (&ml_backend__ml_code_util_scalar_common_1[3]);
            parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeInfo_23_66, ArgVars_54, &_InputArgVars_60, &conv2_Var_33);
            succeeded = (RetTopFunctorMode_57 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_63 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_5, RetArgType_59);
              succeeded = (Var_63 == (MR_Integer) 1);
            }
          }
        }
        succeeded = !(succeeded);
      }
      if (succeeded)
        NonOutputFunc_34 = (MR_Integer) 1;
      else
        NonOutputFunc_34 = (MR_Integer) 0;
      hlds__code_model__determinism_to_code_model_2_p_0(Detism_19, &CodeModel_35);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *MLDS_PredLabel_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_9));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeDeclaringModule_42));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PredName_12));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredArity_13));
        MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) (((((MR_Unsigned) (CodeModel_35) << 1)) | (MR_Unsigned) (NonOutputFunc_34)));
      }
    }
    *MLDS_Module_8 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(DefiningModule_31);
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_block_4_f_0(
  MR_Word LocalVarDefns_6,
  MR_Word FuncDefns_7,
  MR_Word Stmts_8,
  MR_Word Context_9)
{
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
          SingleStmt_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmts_8, (MR_Integer) 0))));
          Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmts_8, (MR_Integer) 1))));
          succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
      Block_10 = SingleStmt_11;
    else
      {
        Block_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Block_10, 0) = ((MR_Box) (LocalVarDefns_6));
        MR_hl_field(MR_mktag(0), Block_10, 1) = ((MR_Box) (FuncDefns_7));
        MR_hl_field(MR_mktag(0), Block_10, 2) = ((MR_Box) (Stmts_8));
        MR_hl_field(MR_mktag(0), Block_10, 3) = ((MR_Box) (Context_9));
      }
    return Block_10;
  }
}

MR_Word MR_CALL 
ml_backend__ml_code_util__ml_gen_assign_3_f_0(
  MR_Word Lval_5,
  MR_Word Rval_6,
  MR_Word Context_7)
{
  {
    MR_Word Stmt_8;
    MR_Word Assign_9;

    {
      Assign_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Assign_9, 0) = ((MR_Box) (Lval_5));
      MR_hl_field(MR_mktag(2), Assign_9, 1) = ((MR_Box) (Rval_6));
    }
    {
      Stmt_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Stmt_8, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Stmt_8, 1) = ((MR_Box) (Assign_9));
      MR_hl_field(MR_mktag(3), Stmt_8, 2) = ((MR_Box) (Context_7));
    }
    return Stmt_8;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_code_util____Unify____gen_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_code_util____Unify____gen_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_code_util____Compare____gen_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_code_util____Compare____gen_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
