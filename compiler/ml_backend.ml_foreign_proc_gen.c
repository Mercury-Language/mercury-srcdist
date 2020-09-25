/*
** Automatically generated from `ml_foreign_proc_gen.m'
** by the Mercury compiler,
** version rotd-2020-09-25
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


// :- module ml_backend.ml_foreign_proc_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_foreign_proc_gen__init
ENDINIT
*/

#include "ml_backend.ml_foreign_proc_gen.mih"


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
#include "int.mih"
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
#include "backend_libs.c_util.mih"
#include "backend_libs.foreign.mih"
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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s {
  MR_Word ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7;
  MR_bool ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13;
  jmp_buf ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0;
  MR_String ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14;
  MR_String ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__Var_26;
  MR_Box ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14;
};


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_target_code_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_foreign_proc_detism_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_foreign_proc_detism_0_1;

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_foreign_proc_detism_0_2;

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_foreign_proc_detism_0[3];

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_foreign_proc_detism_0[3];

static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_foreign_proc_detism_0[3];

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0[2];

static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0[2];

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_foreign_proc_for_csharp_or_java__204__1_2_p_0(
  MR_Word ExtraArgs_20,
  MR_Word HeadVar__2_55);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____foreign_proc_detism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____foreign_proc_detism_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_ccsj_input_arg_if_used_5_p_0(
  MR_Word Lang_6,
  MR_Word ForeignArg_7,
  MR_Word * AssignInput_8,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(
  MR_Word Lang_7,
  MR_Word HighLevelData_8,
  MR_Word OrigType_9,
  MR_Word MaybeForeignType_10,
  MR_String TypeString_11,
  MR_String * Cast_12);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_102_111_114_95_99_95_95_91_52_93_95_48_12_p_0(
  MR_Word OrdinaryKind_13,
  MR_Word Attributes_14,
  MR_Word PredId_15,
  MR_Word OrigArgs_17,
  MR_Word ExtraArgs_18,
  MR_String C_Code_19,
  MR_Word Context_20,
  MR_Word * Decls_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_output_args_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_gen_output_arg_10_p_0(
  MR_Word Var_11,
  MR_String ArgName_12,
  MR_Word OrigType_13,
  MR_Word BoxPolicy_14,
  MR_Word Context_15,
  MR_Word * AssignOutput_16,
  MR_Word * ConvDecls_17,
  MR_Word * ConvOutputStmts_18,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_decls_9_p_0(
  MR_Word Info_1,
  MR_Word Lang_2,
  MR_String Code_3,
  MR_Integer STATE_VARIABLE_TIIn_0_4,
  MR_Integer STATE_VARIABLE_TIOut_0_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_decl_11_p_0(
  MR_Word Info_12,
  MR_Word Lang_13,
  MR_String Code_14,
  MR_Integer STATE_VARIABLE_TIIn_0_35,
  MR_Integer * STATE_VARIABLE_TIIn_36,
  MR_Integer STATE_VARIABLE_TIOut_0_37,
  MR_Integer * STATE_VARIABLE_TIOut_38,
  MR_Word Arg_17,
  MR_Word * Decls_18,
  MR_Word * TICopyIns_19,
  MR_Word * TICopyOuts_20);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(
  MR_Word Info_3,
  MR_Word * HashDefine_4);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(
  MR_Word C_Codes_7,
  MR_Word Context_8,
  MR_Word * HashDefine_9,
  MR_Word * HashUndef_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(
  MR_Word Info_6,
  MR_Word ThreadSafe_7,
  MR_Word PredId_8,
  MR_String * ObtainLock_9,
  MR_String * ReleaseLock_10);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_102_111_114_95_99_115_104_97_114_112_95_111_114_95_106_97_118_97_95_95_91_53_93_95_48_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_102_111_114_95_99_115_104_97_114_112_95_111_114_95_106_97_118_97_95_95_91_53_93_95_48_13_p_0(
  MR_Word TargetLang_14,
  MR_Word OrdinaryKind_15,
  MR_Word Attributes_16,
  MR_Word PredId_17,
  MR_Word OrigArgs_19,
  MR_Word ExtraArgs_20,
  MR_String CsOrJavaCode_21,
  MR_Word Context_22,
  MR_Word * Decls_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_csharp_java_output_args_8_p_0(
  MR_Word MutableSpecial_1,
  MR_Word HeadVar__2_2,
  MR_Word Context_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_ccsj_input_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_ccsj_input_args_5_p_0(
  MR_Word Lang_6,
  MR_Word Args_7,
  MR_Word * AssignInputs_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_csharp_java_decls_9_p_0(
  MR_Word Info_1,
  MR_Word MutableSpecial_2,
  MR_String Code_3,
  MR_Integer STATE_VARIABLE_TIIn_0_4,
  MR_Integer STATE_VARIABLE_TIOut_0_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_csharp_java_decl_11_p_0(
  MR_Word Info_12,
  MR_Word MutableSpecial_13,
  MR_String Code_14,
  MR_Integer STATE_VARIABLE_TIIn_0_38,
  MR_Integer * STATE_VARIABLE_TIIn_39,
  MR_Integer STATE_VARIABLE_TIOut_0_40,
  MR_Integer * STATE_VARIABLE_TIOut_41,
  MR_Word Arg_17,
  MR_Word * Decls_18,
  MR_Word * TICopyIns_19,
  MR_Word * TICopyOuts_20);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__var_is_singleton_1_p_0(
  MR_String Name_2);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_is_comp_gen_type_info_arg_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_String ArgName_6);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(
  MR_Word Expr_5,
  MR_Word * CondRval_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____foreign_proc_detism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____foreign_proc_detism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_1[19][2];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_2[20][1];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_3[1][8];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_4[1][5];


/* sealed */ struct ml_backend__ml_foreign_proc_gen__vector_common_type_5_0_s {
  const MR_Word ml_backend__ml_foreign_proc_gen__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct ml_backend__ml_foreign_proc_gen__vector_common_type_5_0_s ml_backend__ml_foreign_proc_gen_vector_common_5[4];



static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_1[19][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[2])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[5])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\");\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_2[20][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "}\n"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) " = MR_FALSE;\n"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\n"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\tMR_bool SUCCESS_INDICATOR;\n"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) " = SUCCESS_INDICATOR;\n"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\t"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) " = false;\n"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "{\n"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\t}\n"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "#define MR_ALLOC_ID "))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "#undef MR_ALLOC_ID\n"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "#define MR_PROC_LABEL "))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ");\n"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\t\t{\n"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\n\t\t;}\n"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "#undef MR_PROC_LABEL\n"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "\tif (SUCCESS_INDICATOR) {\n"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) ";\n"))
  },
};

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0)),
    ((MR_Box) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
};


static /* final */ const struct ml_backend__ml_foreign_proc_gen__vector_common_type_5_0_s ml_backend__ml_foreign_proc_gen_vector_common_5[4] = {
  /* row 0 */   {     (MR_Integer) 2 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_target_code_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)
  }
};

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_foreign_proc_detism_0_0 = {
  (MR_String) "kind_det",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_foreign_proc_detism_0_1 = {
  (MR_String) "kind_semi",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_foreign_proc_detism_0_2 = {
  (MR_String) "kind_failure",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_foreign_proc_detism_0[3] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_foreign_proc_detism_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_foreign_proc_detism_0_1,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_foreign_proc_detism_0_2
};

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_foreign_proc_detism_0[3] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_foreign_proc_detism_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_foreign_proc_detism_0_2,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_foreign_proc_detism_0_1
};

static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_foreign_proc_detism_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__type_ctor_info_foreign_proc_detism_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_foreign_proc_gen____Unify____foreign_proc_detism_0_0_10001)),
  ((MR_Box) (ml_backend__ml_foreign_proc_gen____Compare____foreign_proc_detism_0_0_10001)),
  (MR_String) "ml_backend.ml_foreign_proc_gen",
  (MR_String) "foreign_proc_detism",
  {     ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_foreign_proc_detism_0 },
  {     ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_foreign_proc_detism_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_foreign_proc_detism_0
};

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0 = {
  (MR_String) "mutable_special_case",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1 = {
  (MR_String) "not_mutable_special_case",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0[2] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0[2] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1
};

static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__type_ctor_info_mutable_special_case_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001)),
  ((MR_Box) (ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001)),
  (MR_String) "ml_backend.ml_foreign_proc_gen",
  (MR_String) "mutable_special_case",
  {     ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0 },
  {     ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0
};

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_foreign_proc_for_csharp_or_java__204__1_2_p_0(
  MR_Word ExtraArgs_20,
  MR_Word HeadVar__2_55)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_foreign_proc_gen_scalar_common_1[0]), ((MR_Box) (ExtraArgs_20)), ((MR_Box) (HeadVar__2_55)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____foreign_proc_detism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____foreign_proc_detism_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_ccsj_input_arg_if_used_5_p_0(
  MR_Word Lang_6,
  MR_Word ForeignArg_7,
  MR_Word * AssignInput_8,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_10;
    MR_Word Var_11;
    MR_Word MaybeNameAndMode_12;
    MR_Word OrigType_13;
    MR_Word BoxPolicy_14;
    MR_String ArgName_15;
    MR_Word Mode_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Char Var_25;
    MR_String Var_24;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_17, &ModuleInfo_10);
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignArg_7, (MR_Integer) 0))));
    MaybeNameAndMode_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignArg_7, (MR_Integer) 1))));
    OrigType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignArg_7, (MR_Integer) 2))));
    BoxPolicy_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignArg_7, (MR_Integer) 3))) & (MR_Integer) 1);
    succeeded = (MaybeNameAndMode_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndMode_12, (MR_Integer) 0))));
      ArgName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
      Mode_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1))));
      Var_25 = (MR_Char) 95;
      succeeded = mercury__string__first_char_3_p_2(ArgName_15, Var_25, &Var_24);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_20 = (MR_Integer) 0;
        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_10, Mode_16, OrigType_13, &Var_22);
        succeeded = (Var_20 == Var_22);
      }
    }
    if (succeeded)
    {
      MR_Word VarType_35;
      MR_Word VarLval_36;
      MR_Word ModuleInfo_37;
      MR_Word IsDummy_38;
      MR_Word ArgRval_39;
      MR_Word MaybeForeignType_40;
      MR_String TypeString_41;
      MR_Word HighLevelData_42;
      MR_String Cast_43;

      ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_17, Var_11, &VarType_35);
      ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_17, Var_11, &VarLval_36);
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_17, &ModuleInfo_37);
      IsDummy_38 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_37, VarType_35);
      switch (IsDummy_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MLDS_Type_81;

            MLDS_Type_81 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_37, VarType_35);
            succeeded = (Lang_6 == (MR_Integer) 2);
            if (succeeded)
            {
              MR_Word Var_82;

              {
                Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (MLDS_Type_81));
              }
              {
                ArgRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ArgRval_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), ArgRval_39, 1) = ((MR_Box) (Var_82));
              }
            }
            else
              ArgRval_39 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[7]));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_45;

            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_45, 0) = ((MR_Box) (VarLval_36));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_37, VarType_35, OrigType_13, BoxPolicy_14, Var_45, &ArgRval_39);
          }
          break;
      }
      MaybeForeignType_40 = backend_libs__foreign__is_this_a_foreign_type_2_f_0(ModuleInfo_37, OrigType_13);
      TypeString_41 = backend_libs__foreign__maybe_foreign_type_to_string_3_f_0(Lang_6, OrigType_13, MaybeForeignType_40);
      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(STATE_VARIABLE_Info_0_17, &HighLevelData_42);
      succeeded = ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(Lang_6, HighLevelData_42, OrigType_13, MaybeForeignType_40, TypeString_41, &Cast_43);
      if (succeeded)
      {
        MR_String AssignToArgName_44;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_String Var_74;
        MR_String Var_75;

        Var_74 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Cast_43);
        Var_75 = mercury__string__f_43_43_2_f_0(ArgName_15, Var_74);
        AssignToArgName_44 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_75);
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) (AssignToArgName_44));
        }
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (ArgRval_39));
        }
        {
          Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[18])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *AssignInput_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_53));
        }
      }
      else
      {
        MR_Word Var_59;
        MR_String Var_60;
        MR_String Var_62;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_String Var_68;
        MR_String Var_70;

        Var_62 = mercury__string__f_43_43_2_f_0(TypeString_41, (MR_String) ", ");
        Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", Var_62);
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (Var_60));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (ArgRval_39));
        }
        Var_70 = mercury__string__f_43_43_2_f_0(ArgName_15, (MR_String) ");\n");
        Var_68 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_70);
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_67, 0) = ((MR_Box) (Var_68));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *AssignInput_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_64));
        }
      }
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
    }
    else
    {
      *AssignInput_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(
  MR_Word Lang_7,
  MR_Word HighLevelData_8,
  MR_Word OrigType_9,
  MR_Word MaybeForeignType_10,
  MR_String TypeString_11,
  MR_String * Cast_12)
{
  {
    MR_bool succeeded;

    switch (Lang_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (HighLevelData_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              succeeded = ((MR_tag((MR_Word) OrigType_9)) == (MR_Integer) 0);
              if (succeeded)
              {
                *Cast_12 = (MR_String) "(MR_Word) ";
                succeeded = MR_TRUE;
              }
              else
              if ((MaybeForeignType_10 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *Cast_12 = (MR_String) "";
                succeeded = MR_TRUE;
              }
              else
              {
                MR_String Var_21;
                MR_String Var_22;
                MR_String Var_23;
                MR_Word ForeignType_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignType_10, (MR_Integer) 0))));
                MR_Word Assertions_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_27, (MR_Integer) 1))));

                succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(Assertions_28);
                if (succeeded)
                {
                  Var_21 = (MR_String) "(";
                  Var_23 = (MR_String) ")";
                  Var_22 = mercury__string__f_43_43_2_f_0(TypeString_11, Var_23);
                  *Cast_12 = mercury__string__f_43_43_2_f_0(Var_21, Var_22);
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_24;
              MR_String Var_25;
              MR_String Var_26;

              if ((MaybeForeignType_10 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              {
                MR_Word ForeignType_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignType_10, (MR_Integer) 0))));
                MR_Word Assertions_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_13, (MR_Integer) 1))));

                succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(Assertions_15);
              }
              if (succeeded)
              {
                Var_24 = (MR_String) "(";
                Var_26 = (MR_String) ") ";
                Var_25 = mercury__string__f_43_43_2_f_0(TypeString_11, Var_26);
                *Cast_12 = mercury__string__f_43_43_2_f_0(Var_24, Var_25);
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *Cast_12 = (MR_String) "";
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.input_arg_assignable_with_cast\'/6", (MR_String) "unexpected language");
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          *Cast_12 = (MR_String) "";
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_12_p_0(
  MR_Word CodeModel_13,
  MR_Word Attributes_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word Args_17,
  MR_Word ExtraArgs_18,
  MR_String ForeignCode_19,
  MR_Word Context_20,
  MR_Word * Decls_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_34,
  MR_Word * STATE_VARIABLE_Info_35)
{
  {
    MR_Word Lang_24;
    MR_Word OrdinaryKind_25;

    Lang_24 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_14);
    switch (CodeModel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        OrdinaryKind_25 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        {
          MR_Word OrdinaryDespiteDetism_32;

          OrdinaryDespiteDetism_32 = parse_tree__prog_data_foreign__get_ordinary_despite_detism_1_f_0(Attributes_14);
          switch (OrdinaryDespiteDetism_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_foreign_proc\'/12", (MR_String) "unexpected code model");
                return;
              }
              break;
            case (MR_Integer) 1:
              OrdinaryKind_25 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ModuleInfo_26;
          MR_Word ProcInfo_28;
          MR_Word Detism_29;
          MR_Word MaxSoln_31;
          MR_Word _PredInfo_27;
          MR_Word Var_30;

          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_34, &ModuleInfo_26);
          hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_26, PredId_15, ProcId_16, &_PredInfo_27, &ProcInfo_28);
          hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_28, &Detism_29);
          parse_tree__prog_data__determinism_components_3_p_0(Detism_29, &Var_30, &MaxSoln_31);
          OrdinaryKind_25 = ((&ml_backend__ml_foreign_proc_gen_vector_common_5[0 + MaxSoln_31]))->ml_backend__ml_foreign_proc_gen__vector_common_type_5_0__vct_5_f_0;
        }
        break;
    }
    switch (Lang_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_102_111_114_95_99_95_95_91_52_93_95_48_12_p_0(OrdinaryKind_25, Attributes_14, PredId_15, Args_17, ExtraArgs_18, ForeignCode_19, Context_20, Decls_21, Stmts_22, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Target_33;

          ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(STATE_VARIABLE_Info_0_34, &Target_33);
          switch (Target_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_foreign_proc\'/12", (MR_String) "C# foreign code not supported for compilation target");
                return;
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_102_111_114_95_99_115_104_97_114_112_95_111_114_95_106_97_118_97_95_95_91_53_93_95_48_13_p_0((MR_Integer) 1, OrdinaryKind_25, Attributes_14, PredId_15, Args_17, ExtraArgs_18, ForeignCode_19, Context_20, Decls_21, Stmts_22, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_foreign_proc\'/12", (MR_String) "unexpected language Erlang");
          return;
        }
        break;
      case (MR_Integer) 2:
        ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_102_111_114_95_99_115_104_97_114_112_95_111_114_95_106_97_118_97_95_95_91_53_93_95_48_13_p_0((MR_Integer) 2, OrdinaryKind_25, Attributes_14, PredId_15, Args_17, ExtraArgs_18, ForeignCode_19, Context_20, Decls_21, Stmts_22, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_102_111_114_95_99_95_95_91_52_93_95_48_12_p_0(
  MR_Word OrdinaryKind_13,
  MR_Word Attributes_14,
  MR_Word PredId_15,
  MR_Word OrigArgs_17,
  MR_Word ExtraArgs_18,
  MR_String C_Code_19,
  MR_Word Context_20,
  MR_Word * Decls_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_48,
  MR_Word * STATE_VARIABLE_Info_49)
{
  {
    MR_bool succeeded;
    MR_Word Lang_24;
    MR_Word Args_25;
    MR_Word ArgDecls_26;
    MR_Word CopyTIsIn_27;
    MR_Word CopyTIsOut_28;
    MR_Word AssignInputs_29;
    MR_Word AssignOutputs_30;
    MR_Word ConvStmts_32;
    MR_Word ThreadSafe_33;
    MR_String ObtainLock_34;
    MR_String ReleaseLock_35;
    MR_Word HashDefineAllocId_36;
    MR_Word HashUndefAllocId_37;
    MR_Word HashDefineProcLabel_38;
    MR_Word StartingFragments_39;
    MR_Word EndingFragments_40;
    MR_Word StartingCCode_44;
    MR_Word StartingCCodeStmt_45;
    MR_Word EndingCCode_46;
    MR_Word EndingCCodeStmt_47;
    MR_Word STATE_VARIABLE_Info_52_52;
    MR_Word STATE_VARIABLE_Info_53_53;
    MR_Word Var_54;
    MR_Word STATE_VARIABLE_Info_55_55;
    MR_Word Var_207;
    MR_Word Var_208;

    Lang_24 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_14);
    Args_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), OrigArgs_17, ExtraArgs_18);
    ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_decls_9_p_0(STATE_VARIABLE_Info_0_48, Lang_24, C_Code_19, (MR_Integer) 1, (MR_Integer) 1, Args_25, &ArgDecls_26, &CopyTIsIn_27, &CopyTIsOut_28);
    ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_ccsj_input_args_5_p_0(Lang_24, Args_25, &AssignInputs_29, STATE_VARIABLE_Info_0_48, &STATE_VARIABLE_Info_52_52);
    ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_output_args_7_p_0(Args_25, Context_20, &AssignOutputs_30, Decls_21, &ConvStmts_32, STATE_VARIABLE_Info_52_52, &STATE_VARIABLE_Info_53_53);
    ThreadSafe_33 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attributes_14);
    ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(STATE_VARIABLE_Info_53_53, ThreadSafe_33, PredId_15, &ObtainLock_34, &ReleaseLock_35);
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (C_Code_19));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(Var_54, Context_20, &HashDefineAllocId_36, &HashUndefAllocId_37, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_55_55);
    ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(STATE_VARIABLE_Info_55_55, &HashDefineProcLabel_38);
    switch (OrdinaryKind_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_163;
          MR_Word Var_168;
          MR_Word Var_169;
          MR_Word Var_170;
          MR_Word Var_171;
          MR_Word Var_176;
          MR_Word Var_177;
          MR_Word Var_178;
          MR_Word Var_179;
          MR_Word Var_180;
          MR_Word Var_181;
          MR_Word Var_184;
          MR_Word Var_185;
          MR_Word Var_186;
          MR_Word Var_191;
          MR_Word Var_192;
          MR_Word Var_193;
          MR_Word Var_196;
          MR_Word Var_197;
          MR_Word Var_199;
          MR_Word Var_200;

          {
            Var_180 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_180, 0) = ((MR_Box) (ObtainLock_34));
          }
          {
            Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (Context_20));
          }
          {
            Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (C_Code_19));
            MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) (Var_186));
          }
          {
            Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Var_185));
            MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])));
          }
          {
            Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[15])));
            MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (Var_184));
          }
          {
            Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
            MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_181));
          }
          {
            Var_197 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_197, 0) = ((MR_Box) (ReleaseLock_35));
          }
          {
            Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (Var_197));
            MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
            MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (Var_196));
          }
          {
            Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (AssignOutputs_30));
            MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (CopyTIsOut_28));
            MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) (Var_200));
          }
          {
            Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (Var_193));
            MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Var_199));
          }
          {
            Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (HashUndefAllocId_37));
            MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (Var_192));
          }
          {
            Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (Var_179));
            MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_191));
          }
          {
            Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (CopyTIsIn_27));
            MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) (Var_178));
          }
          {
            Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (AssignInputs_29));
            MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) (Var_177));
          }
          {
            Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
            MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_176));
          }
          {
            Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (ArgDecls_26));
            MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (Var_171));
          }
          {
            Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (HashDefineProcLabel_38));
            MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) (Var_170));
          }
          {
            Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (HashDefineAllocId_36));
            MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_169));
          }
          {
            Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[12])));
            MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (Var_168));
          }
          StartingFragments_39 = mercury__list__condense_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), Var_163);
          EndingFragments_40 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[2]));
          *STATE_VARIABLE_Info_49 = STATE_VARIABLE_Info_55_55;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SucceededLval_41;
          MR_Word Var_118;
          MR_Word Var_123;
          MR_Word Var_124;
          MR_Word Var_125;
          MR_Word Var_126;
          MR_Word Var_131;
          MR_Word Var_132;
          MR_Word Var_133;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_Word Var_136;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Word Var_141;
          MR_Word Var_146;
          MR_Word Var_147;
          MR_Word Var_148;
          MR_Word Var_151;
          MR_Word Var_152;
          MR_Word Var_155;

          ml_backend__ml_code_util__ml_success_lval_3_p_0(&SucceededLval_41, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_49);
          {
            Var_135 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_135, 0) = ((MR_Box) (ObtainLock_34));
          }
          {
            Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (Context_20));
          }
          {
            Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (C_Code_19));
            MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_141));
          }
          {
            Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Var_140));
            MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])));
          }
          {
            Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[15])));
            MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_139));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_136));
          }
          {
            Var_152 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_152, 0) = ((MR_Box) (ReleaseLock_35));
          }
          {
            Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (Var_152));
            MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
            MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_151));
          }
          {
            Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Var_148));
            MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (HashUndefAllocId_37));
            MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_147));
          }
          {
            Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Var_134));
            MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_146));
          }
          {
            Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (CopyTIsIn_27));
            MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_133));
          }
          {
            Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (AssignInputs_29));
            MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
          }
          {
            Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
            MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_131));
          }
          {
            Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (ArgDecls_26));
            MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_126));
          }
          {
            Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (HashDefineProcLabel_38));
            MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_125));
          }
          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (HashDefineAllocId_36));
            MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (Var_124));
          }
          {
            Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[12])));
            MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_123));
          }
          StartingFragments_39 = mercury__list__condense_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), Var_118);
          {
            Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) (SucceededLval_41));
          }
          {
            EndingFragments_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), EndingFragments_40, 0) = ((MR_Box) (Var_155));
            MR_hl_field(MR_mktag(1), EndingFragments_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[3])));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IfSuccFragments_42;
          MR_Word EndIfSuccFragments_43;
          MR_Word Var_64;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_88;
          MR_Word Var_89;
          MR_Word Var_90;
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_97;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_103;
          MR_Word Var_105;
          MR_Word Var_106;
          MR_Word Var_107;
          MR_Word Var_108;
          MR_Word SucceededLval_210;

          ml_backend__ml_code_util__ml_success_lval_3_p_0(&SucceededLval_210, STATE_VARIABLE_Info_55_55, STATE_VARIABLE_Info_49);
          succeeded = (CopyTIsOut_28 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (AssignOutputs_30 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              succeeded = (ConvStmts_32 == (MR_Word) ((MR_Unsigned) 0U));
          }
          if (succeeded)
          {
            IfSuccFragments_42 = (MR_Word) ((MR_Unsigned) 0U);
            EndIfSuccFragments_43 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word Var_58;

            {
              Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[18])));
              MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (CopyTIsOut_28));
            }
            IfSuccFragments_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), Var_58, AssignOutputs_30);
            EndIfSuccFragments_43 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[13]));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_84, 0) = ((MR_Box) (ObtainLock_34));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Context_20));
          }
          {
            Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (C_Code_19));
            MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[15])));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_88));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_85));
          }
          {
            Var_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_101, 0) = ((MR_Box) (ReleaseLock_35));
          }
          {
            Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
            MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
            MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (Var_100));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (IfSuccFragments_42));
            MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
            MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_103));
          }
          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (HashUndefAllocId_37));
            MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_95));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (CopyTIsIn_27));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (AssignInputs_29));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_81));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[5])));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_80));
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ArgDecls_26));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (HashDefineProcLabel_38));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_71));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (HashDefineAllocId_36));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_70));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[12])));
            MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_69));
          }
          StartingFragments_39 = mercury__list__condense_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), Var_64);
          {
            Var_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_108, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_108, 1) = ((MR_Box) (SucceededLval_210));
          }
          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (Var_108));
            MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
          }
          {
            Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
            MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (EndIfSuccFragments_43));
            MR_hl_field(MR_mktag(1), Var_105, 1) = ((MR_Box) (Var_106));
          }
          EndingFragments_40 = mercury__list__condense_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), Var_105);
        }
        break;
    }
    {
      StartingCCode_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StartingCCode_44, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), StartingCCode_44, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), StartingCCode_44, 2) = ((MR_Box) (StartingFragments_39));
    }
    {
      StartingCCodeStmt_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StartingCCodeStmt_45, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), StartingCCodeStmt_45, 1) = ((MR_Box) (StartingCCode_44));
      MR_hl_field(MR_mktag(3), StartingCCodeStmt_45, 2) = ((MR_Box) (Context_20));
    }
    {
      EndingCCode_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EndingCCode_46, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), EndingCCode_46, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), EndingCCode_46, 2) = ((MR_Box) (EndingFragments_40));
    }
    {
      EndingCCodeStmt_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EndingCCodeStmt_47, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), EndingCCodeStmt_47, 1) = ((MR_Box) (EndingCCode_46));
      MR_hl_field(MR_mktag(3), EndingCCodeStmt_47, 2) = ((MR_Box) (Context_20));
    }
    {
      Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (StartingCCodeStmt_45));
      MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (ConvStmts_32));
    }
    {
      Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) (EndingCCodeStmt_47));
      MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    *Stmts_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_207, Var_208);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_output_args_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    }
    else
    {
      MR_Word ForeignArg_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ForeignArgs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Components1_19;
      MR_Word ConvDecls1_20;
      MR_Word ConvStmts1_21;
      MR_Word Components2_22;
      MR_Word ConvDecls2_23;
      MR_Word ConvStmts2_24;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignArg_12, (MR_Integer) 0))));
      MR_Word MaybeNameAndMode_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignArg_12, (MR_Integer) 1))));
      MR_Word OrigType_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignArg_12, (MR_Integer) 2))));
      MR_Word BoxPolicy_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignArg_12, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ModuleInfo_44;
      MR_String ArgName_45;
      MR_Word Mode_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_51;
      MR_Char Var_54;
      MR_String Var_53;

      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_6, &ModuleInfo_44);
      succeeded = (MaybeNameAndMode_41 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndMode_41, (MR_Integer) 0))));
        ArgName_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0))));
        Mode_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1))));
        Var_54 = (MR_Char) 95;
        succeeded = mercury__string__first_char_3_p_2(ArgName_45, Var_54, &Var_53);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_48 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_44, OrigType_42);
          succeeded = (Var_48 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_49 = (MR_Integer) 1;
            check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_44, Mode_46, OrigType_42, &Var_51);
            succeeded = (Var_49 == Var_51);
          }
        }
      }
      if (succeeded)
        ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_gen_output_arg_10_p_0(Var_40, ArgName_45, OrigType_42, BoxPolicy_43, Context_2, &Components1_19, &ConvDecls1_20, &ConvStmts1_21, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
      else
      {
        Components1_19 = (MR_Word) ((MR_Unsigned) 0U);
        ConvDecls1_20 = (MR_Word) ((MR_Unsigned) 0U);
        ConvStmts1_21 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_0_6;
      }
      ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_output_args_7_p_0(ForeignArgs_13, Context_2, &Components2_22, &ConvDecls2_23, &ConvStmts2_24, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_7);
      *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), Components1_19, Components2_22);
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), ConvDecls1_20, ConvDecls2_23);
      *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ConvStmts1_21, ConvStmts2_24);
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_gen_output_arg_10_p_0(
  MR_Word Var_11,
  MR_String ArgName_12,
  MR_Word OrigType_13,
  MR_Word BoxPolicy_14,
  MR_Word Context_15,
  MR_Word * AssignOutput_16,
  MR_Word * ConvDecls_17,
  MR_Word * ConvOutputStmts_18,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40)
{
  {
    MR_bool succeeded;
    MR_Word VarType_20;
    MR_Word VarLval_21;
    MR_Word NonMangledArgVarName_22;
    MR_Word ArgLval_23;
    MR_Word ModuleInfo_25;
    MR_Word MaybeForeignType_26;
    MR_String TypeString_27;
    MR_Word _ConvInputStmts_24;
    MR_Word Cast_28;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_39, Var_11, &VarType_20);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_39, Var_11, &VarLval_21);
    {
      NonMangledArgVarName_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), NonMangledArgVarName_22, 0) = ((MR_Box) (ArgName_12));
    }
    ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(VarType_20, OrigType_13, BoxPolicy_14, VarLval_21, NonMangledArgVarName_22, Context_15, (MR_Integer) 0, (MR_Integer) 0, &ArgLval_23, ConvDecls_17, &_ConvInputStmts_24, ConvOutputStmts_18, STATE_VARIABLE_Info_0_39, STATE_VARIABLE_Info_40);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_40, &ModuleInfo_25);
    MaybeForeignType_26 = backend_libs__foreign__is_this_a_foreign_type_2_f_0(ModuleInfo_25, OrigType_13);
    TypeString_27 = backend_libs__foreign__maybe_foreign_type_to_c_string_2_f_0(OrigType_13, MaybeForeignType_26);
    if ((MaybeForeignType_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Cast_28 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ForeignType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignType_26, (MR_Integer) 0))));
      MR_Word Assertions_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_29, (MR_Integer) 1))));

      succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(Assertions_31);
      if (succeeded)
      {
        Cast_28 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word HighLevelData_32;
      MR_String LHS_Cast_33;
      MR_String RHS_Cast_34;
      MR_String AssignFromArgName_37;
      MR_String AssignTo_38;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_String Var_78;
      MR_String Var_79;
      MR_String Var_82;

      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(*STATE_VARIABLE_Info_40, &HighLevelData_32);
      switch (HighLevelData_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            succeeded = ((MR_tag((MR_Word) OrigType_13)) == (MR_Integer) 0);
            if (succeeded)
            {
            }
            if (!(succeeded))
              succeeded = (Cast_28 == (MR_Integer) 1);
            if (succeeded)
              RHS_Cast_34 = (MR_String) "(MR_Box) ";
            else
              RHS_Cast_34 = (MR_String) "";
            LHS_Cast_33 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_45;

            Var_45 = mercury__string__f_43_43_2_f_0(TypeString_27, (MR_String) " *) &");
            LHS_Cast_33 = mercury__string__f_43_43_2_f_0((MR_String) "* (", Var_45);
            RHS_Cast_34 = (MR_String) "";
          }
          break;
      }
      Var_78 = mercury__string__f_43_43_2_f_0(ArgName_12, (MR_String) ";\n");
      Var_79 = mercury__string__f_43_43_2_f_0(RHS_Cast_34, Var_78);
      AssignFromArgName_37 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_79);
      Var_82 = mercury__string__f_43_43_2_f_0(LHS_Cast_33, (MR_String) " ");
      AssignTo_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_82);
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (AssignTo_38));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (ArgLval_23));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (AssignFromArgName_37));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *AssignOutput_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_58));
      }
    }
    else
    {
      MR_Word Var_63;
      MR_String Var_64;
      MR_String Var_66;
      MR_String Var_67;
      MR_String Var_69;
      MR_Word Var_71;
      MR_Word Var_72;

      Var_69 = mercury__string__f_43_43_2_f_0(ArgName_12, (MR_String) ", ");
      Var_67 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_69);
      Var_66 = mercury__string__f_43_43_2_f_0(TypeString_27, Var_67);
      Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(", Var_66);
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_63, 0) = ((MR_Box) (Var_64));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (ArgLval_23));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *AssignOutput_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_71));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_decls_9_p_0(
  MR_Word Info_1,
  MR_Word Lang_2,
  MR_String Code_3,
  MR_Integer STATE_VARIABLE_TIIn_0_4,
  MR_Integer STATE_VARIABLE_TIOut_0_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word HeadArg_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
    MR_Word TailArgs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
    MR_Word HeadDecls_25;
    MR_Word HeadTICopyIns_26;
    MR_Word HeadTICopyOuts_27;
    MR_Word TailDecls_28;
    MR_Word TailTICopyIns_29;
    MR_Word TailTICopyOuts_30;
    MR_Integer STATE_VARIABLE_TIIn_33_33;
    MR_Integer STATE_VARIABLE_TIOut_34_34;

    ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_decl_11_p_0(Info_1, Lang_2, Code_3, STATE_VARIABLE_TIIn_0_4, &STATE_VARIABLE_TIIn_33_33, STATE_VARIABLE_TIOut_0_5, &STATE_VARIABLE_TIOut_34_34, HeadArg_20, &HeadDecls_25, &HeadTICopyIns_26, &HeadTICopyOuts_27);
    ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_decls_9_p_0(Info_1, Lang_2, Code_3, STATE_VARIABLE_TIIn_33_33, STATE_VARIABLE_TIOut_34_34, TailArgs_21, &TailDecls_28, &TailTICopyIns_29, &TailTICopyOuts_30);
    *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), HeadDecls_25, TailDecls_28);
    *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), HeadTICopyIns_26, TailTICopyIns_29);
    *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), HeadTICopyOuts_27, TailTICopyOuts_30);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_c_decl_11_p_0(
  MR_Word Info_12,
  MR_Word Lang_13,
  MR_String Code_14,
  MR_Integer STATE_VARIABLE_TIIn_0_35,
  MR_Integer * STATE_VARIABLE_TIIn_36,
  MR_Integer STATE_VARIABLE_TIOut_0_37,
  MR_Integer * STATE_VARIABLE_TIOut_38,
  MR_Word Arg_17,
  MR_Word * Decls_18,
  MR_Word * TICopyIns_19,
  MR_Word * TICopyOuts_20)
{
  {
    MR_bool succeeded;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 0))));
    MR_Word MaybeNameAndMode_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 1))));
    MR_Word Type_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 2))));
    MR_Word BoxPolicy_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word ModuleInfo_25;
    MR_String ArgName_26;
    MR_Word Mode_27;
    MR_Word Var_39;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_12, &ModuleInfo_25);
    succeeded = (MaybeNameAndMode_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndMode_22, (MR_Integer) 0))));
      ArgName_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 0))));
      Mode_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_39, (MR_Integer) 1))));
      succeeded = ml_backend__ml_foreign_proc_gen__var_is_singleton_1_p_0(ArgName_26);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_String TypeString_28;
      MR_String ArgDecl_29;
      MR_String Var_94;
      MR_String Var_96;
      MR_String Var_97;

      switch (BoxPolicy_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          TypeString_28 = (MR_String) "MR_Word";
          break;
        case (MR_Integer) 0:
          TypeString_28 = backend_libs__foreign__exported_type_to_string_3_f_0(ModuleInfo_25, Lang_13, Type_23);
          break;
      }
      Var_94 = mercury__string__f_43_43_2_f_0(ArgName_26, (MR_String) ";\n");
      Var_96 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_94);
      Var_97 = mercury__string__f_43_43_2_f_0(TypeString_28, Var_96);
      ArgDecl_29 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_97);
      succeeded = ml_backend__ml_foreign_proc_gen__ml_is_comp_gen_type_info_arg_3_p_0(Info_12, Var_21, ArgName_26);
      if (succeeded)
      {
        MR_String SeqArgName_30;
        MR_String SeqArgDecl_34;
        MR_Word Var_87;
        MR_String Var_88;
        MR_String Var_134;
        MR_String Var_136;
        MR_String Var_137;
        MR_Word Var_92;

        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_25, Mode_27, Type_23, &Var_92);
        succeeded = ((MR_Integer) 0 == Var_92);
        if (succeeded)
        {
          MR_String TICopyIn_31;
          MR_Word Var_59;
          MR_String Var_99;
          MR_String Var_108;
          MR_String Var_110;
          MR_String Var_111;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_foreign_proc_gen_scalar_common_2[6]), STATE_VARIABLE_TIIn_0_35, &Var_99);
          SeqArgName_30 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_In_", Var_99);
          *STATE_VARIABLE_TIIn_36 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TIIn_0_35 + (MR_Unsigned) 1);
          Var_108 = mercury__string__f_43_43_2_f_0(ArgName_26, (MR_String) ";\n");
          Var_110 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_108);
          Var_111 = mercury__string__f_43_43_2_f_0(SeqArgName_30, Var_110);
          TICopyIn_31 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_111);
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (TICopyIn_31));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TICopyIns_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *TICopyOuts_20 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_TIOut_38 = STATE_VARIABLE_TIOut_0_37;
        }
        else
        {
          MR_String TICopyOut_33;
          MR_Word Var_79;
          MR_String Var_113;
          MR_Integer _Index_32;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_foreign_proc_gen_scalar_common_2[6]), STATE_VARIABLE_TIOut_0_37, &Var_113);
          SeqArgName_30 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_Out_", Var_113);
          *STATE_VARIABLE_TIOut_38 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TIOut_0_37 + (MR_Unsigned) 1);
          succeeded = mercury__string__sub_string_search_3_p_0(Code_14, SeqArgName_30, &_Index_32);
          if (succeeded)
          {
            MR_String Var_122;
            MR_String Var_124;
            MR_String Var_125;

            Var_122 = mercury__string__f_43_43_2_f_0(SeqArgName_30, (MR_String) ";\n");
            Var_124 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_122);
            Var_125 = mercury__string__f_43_43_2_f_0(ArgName_26, Var_124);
            TICopyOut_33 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_125);
          }
          else
          {
            MR_String Var_128;
            MR_String Var_130;
            MR_String Var_131;

            Var_128 = mercury__string__f_43_43_2_f_0(ArgName_26, (MR_String) ";\n");
            Var_130 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_128);
            Var_131 = mercury__string__f_43_43_2_f_0(SeqArgName_30, Var_130);
            TICopyOut_33 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_131);
          }
          *TICopyIns_19 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_79, 0) = ((MR_Box) (TICopyOut_33));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TICopyOuts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_TIIn_36 = STATE_VARIABLE_TIIn_0_35;
        }
        Var_134 = mercury__string__f_43_43_2_f_0(SeqArgName_30, (MR_String) ";\n");
        Var_136 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_134);
        Var_137 = mercury__string__f_43_43_2_f_0(TypeString_28, Var_136);
        SeqArgDecl_34 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_137);
        Var_88 = mercury__string__f_43_43_2_f_0(ArgDecl_29, SeqArgDecl_34);
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_87, 0) = ((MR_Box) (Var_88));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Decls_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Var_90;

        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_90, 0) = ((MR_Box) (ArgDecl_29));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Decls_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *TICopyIns_19 = (MR_Word) ((MR_Unsigned) 0U);
        *TICopyOuts_20 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_TIOut_38 = STATE_VARIABLE_TIOut_0_37;
        *STATE_VARIABLE_TIIn_36 = STATE_VARIABLE_TIIn_0_35;
      }
    }
    else
    {
      *Decls_18 = (MR_Word) ((MR_Unsigned) 0U);
      *TICopyIns_19 = (MR_Word) ((MR_Unsigned) 0U);
      *TICopyOuts_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TIOut_38 = STATE_VARIABLE_TIOut_0_37;
      *STATE_VARIABLE_TIIn_36 = STATE_VARIABLE_TIIn_0_35;
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(
  MR_Word Info_3,
  MR_Word * HashDefine_4)
{
  {
    MR_Word ModuleInfo_5;
    MR_Word PredProcId_6;
    MR_Word Module_7;
    MR_Word PlainFuncName_8;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_3, &ModuleInfo_5);
    ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(Info_3, &PredProcId_6);
    ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_5, PredProcId_6, &Module_7, &PlainFuncName_8);
    Var_14 = (MR_Word) ((MR_Word) (PlainFuncName_8));
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Module_7));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Var_14));
    }
    Var_12 = (MR_Word) ((MR_Word) (Var_13));
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HashDefine_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[13])));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_11));
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14 = ((MR_String) ((env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14));
    ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Integer Var_15;

      (env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__Var_26 = (MR_String) "MR_ALLOC_ID";
      (env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = mercury__string__sub_string_search_3_p_0((env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14, (env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__Var_26, &Var_15);
      if ((env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
        ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word TypeCtorInfo_42_42;

          (env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = ((env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13 == (MR_Integer) 1);
          if ((env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
          {
            TypeCtorInfo_42_42 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
            mercury__list__member_2_p_1(TypeCtorInfo_42_42, &(env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14, (env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7, ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3, env_ptr);
          }
        }
        (env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(
  MR_Word C_Codes_7,
  MR_Word Context_8,
  MR_Word * HashDefine_9,
  MR_Word * HashUndef_10,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  {
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s env;

    (env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7 = C_Codes_7;
    {
      MR_Word Globals_12;

      ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(STATE_VARIABLE_Info_0_23, &Globals_12);
      libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 222, &(env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13);
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(&env);
      if ((env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
      {
        MR_Word ModuleInfo_16;
        MR_Word PredProcId_17;
        MR_Word ProcLabel_19;
        MR_Word GlobalData0_20;
        MR_Word AllocId_21;
        MR_Word GlobalData_22;
        MR_Word Var_27;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word _Module_18;

        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_23, &ModuleInfo_16);
        ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_23, &PredProcId_17);
        ml_backend__ml_code_util__ml_gen_proc_label_4_p_0(ModuleInfo_16, PredProcId_17, &_Module_18, &ProcLabel_19);
        ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(STATE_VARIABLE_Info_0_23, &GlobalData0_20);
        Var_27 = (MR_Word) ((MR_Word) (ProcLabel_19));
        ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(Var_27, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Context_8, &AllocId_21, GlobalData0_20, &GlobalData_22);
        ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (AllocId_21));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HashDefine_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[11])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_33));
        }
        *HashUndef_10 = (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[15]));
      }
      else
      {
        *HashDefine_9 = (MR_Word) ((MR_Unsigned) 0U);
        *HashUndef_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(
  MR_Word Info_6,
  MR_Word ThreadSafe_7,
  MR_Word PredId_8,
  MR_String * ObtainLock_9,
  MR_String * ReleaseLock_10)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_11;
    MR_Word Globals_12;
    MR_Word Parallel_13;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_6, &ModuleInfo_11);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 244, &Parallel_13);
    succeeded = (Parallel_13 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (ThreadSafe_7 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word PredInfo_14;
      MR_String Name_15;
      MR_String MangledName_16;
      MR_Word Var_18;
      MR_Word Var_20;
      MR_Word Var_24;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_11, PredId_8, &PredInfo_14);
      Name_15 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_14);
      MangledName_16 = backend_libs__c_util__quote_string_1_f_0(Name_15);
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MangledName_16));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[14])));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\""));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
      }
      mercury__string__append_list_2_p_0(Var_18, ObtainLock_9);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\""));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_20));
      }
      mercury__string__append_list_2_p_0(Var_24, ReleaseLock_10);
    }
    else
    {
      *ObtainLock_9 = (MR_String) "";
      *ReleaseLock_10 = (MR_String) "";
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_102_111_114_95_99_115_104_97_114_112_95_111_114_95_106_97_118_97_95_95_91_53_93_95_48_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_foreign_proc_for_csharp_or_java__204__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_102_111_114_95_99_115_104_97_114_112_95_111_114_95_106_97_118_97_95_95_91_53_93_95_48_13_p_0(
  MR_Word TargetLang_14,
  MR_Word OrdinaryKind_15,
  MR_Word Attributes_16,
  MR_Word PredId_17,
  MR_Word OrigArgs_19,
  MR_Word ExtraArgs_20,
  MR_String CsOrJavaCode_21,
  MR_Word Context_22,
  MR_Word * Decls_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_49,
  MR_Word * STATE_VARIABLE_Info_50)
{
  {
    MR_bool succeeded;
    MR_Word Lang_26;
    MR_Word ModuleInfo_27;
    MR_Word PredInfo_28;
    MR_Word Markers_29;
    MR_Word MutableSpecial_30;
    MR_Word ArgDecls_32;
    MR_Word CopyTIsIn_33;
    MR_Word AssignInputs_35;
    MR_Word AssignOutputs_36;
    MR_Word ConvStmts_38;
    MR_Word SucceededDecl_39;
    MR_Word AssignSucceeded_40;
    MR_Word StartingFragments_43;
    MR_Word StartingCode_44;
    MR_Word StartingCodeStmt_45;
    MR_Word EndingFragments_46;
    MR_Word EndingCode_47;
    MR_Word EndingCodeStmt_48;
    MR_Word Var_52;
    MR_Word STATE_VARIABLE_Info_58_58;
    MR_Word STATE_VARIABLE_Info_59_59;
    MR_Word Var_84;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word _CopyTIsOut_34;

    Lang_26 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_16);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_49, &ModuleInfo_27);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_27, PredId_17, &PredInfo_28);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_28, &Markers_29);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_29, (MR_Integer) 23);
    if (succeeded)
      MutableSpecial_30 = (MR_Integer) 0;
    else
      MutableSpecial_30 = (MR_Integer) 1;
    {
      Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_102_111_114_101_105_103_110_95_112_114_111_99_95_102_111_114_95_99_115_104_97_114_112_95_111_114_95_106_97_118_97_95_95_91_53_93_95_48_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (ExtraArgs_20));
      MR_hl_field(MR_mktag(0), Var_52, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_52, (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_foreign_proc_for_csharp_or_java\'/13", (MR_String) "extra args");
    ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_csharp_java_decls_9_p_0(STATE_VARIABLE_Info_0_49, MutableSpecial_30, CsOrJavaCode_21, (MR_Integer) 1, (MR_Integer) 1, OrigArgs_19, &ArgDecls_32, &CopyTIsIn_33, &_CopyTIsOut_34);
    ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_ccsj_input_args_5_p_0(Lang_26, OrigArgs_19, &AssignInputs_35, STATE_VARIABLE_Info_0_49, &STATE_VARIABLE_Info_58_58);
    ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_csharp_java_output_args_8_p_0(MutableSpecial_30, OrigArgs_19, Context_22, &AssignOutputs_36, Decls_23, &ConvStmts_38, STATE_VARIABLE_Info_58_58, &STATE_VARIABLE_Info_59_59);
    switch (OrdinaryKind_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          SucceededDecl_39 = (MR_Word) ((MR_Unsigned) 0U);
          AssignSucceeded_40 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Info_50 = STATE_VARIABLE_Info_59_59;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word SucceededLval_109;

          ml_backend__ml_code_util__ml_success_lval_3_p_0(&SucceededLval_109, STATE_VARIABLE_Info_59_59, STATE_VARIABLE_Info_50);
          SucceededDecl_39 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (SucceededLval_109));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[10])));
          }
          {
            AssignSucceeded_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AssignSucceeded_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[7])));
            MR_hl_field(MR_mktag(1), AssignSucceeded_40, 1) = ((MR_Box) (Var_63));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SucceededLval_41;
          MR_String BoolType_42;
          MR_Word Var_70;
          MR_String Var_71;
          MR_String Var_73;
          MR_Word Var_78;
          MR_Word Var_79;

          ml_backend__ml_code_util__ml_success_lval_3_p_0(&SucceededLval_41, STATE_VARIABLE_Info_59_59, STATE_VARIABLE_Info_50);
          switch (TargetLang_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              BoolType_42 = (MR_String) "bool";
              break;
            case (MR_Integer) 2:
              BoolType_42 = (MR_String) "boolean";
              break;
          }
          Var_73 = mercury__string__f_43_43_2_f_0(BoolType_42, (MR_String) " SUCCESS_INDICATOR;\n");
          Var_71 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_73);
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_70, 0) = ((MR_Box) (Var_71));
          }
          {
            SucceededDecl_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SucceededDecl_39, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(1), SucceededDecl_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (SucceededLval_41));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11])));
          }
          {
            AssignSucceeded_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AssignSucceeded_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[7])));
            MR_hl_field(MR_mktag(1), AssignSucceeded_40, 1) = ((MR_Box) (Var_78));
          }
        }
        break;
    }
    {
      Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Context_22));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (CsOrJavaCode_21));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (Var_96));
    }
    {
      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (CopyTIsIn_33));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (AssignInputs_35));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (SucceededDecl_39));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_91));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (ArgDecls_32));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[12])));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_89));
    }
    StartingFragments_43 = mercury__list__condense_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), Var_84);
    {
      StartingCode_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StartingCode_44, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), StartingCode_44, 1) = (MR_Box) ((MR_Unsigned) (TargetLang_14));
      MR_hl_field(MR_mktag(3), StartingCode_44, 2) = ((MR_Box) (StartingFragments_43));
    }
    {
      StartingCodeStmt_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StartingCodeStmt_45, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), StartingCodeStmt_45, 1) = ((MR_Box) (StartingCode_44));
      MR_hl_field(MR_mktag(3), StartingCodeStmt_45, 2) = ((MR_Box) (Context_22));
    }
    EndingFragments_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), AssignSucceeded_40, (MR_Word) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[13])));
    {
      EndingCode_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EndingCode_47, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), EndingCode_47, 1) = (MR_Box) ((MR_Unsigned) (TargetLang_14));
      MR_hl_field(MR_mktag(3), EndingCode_47, 2) = ((MR_Box) (EndingFragments_46));
    }
    {
      EndingCodeStmt_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EndingCodeStmt_48, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), EndingCodeStmt_48, 1) = ((MR_Box) (EndingCode_47));
      MR_hl_field(MR_mktag(3), EndingCodeStmt_48, 2) = ((MR_Box) (Context_22));
    }
    {
      Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (StartingCodeStmt_45));
      MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (EndingCodeStmt_48));
      MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ConvStmts_38, Var_107);
    Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), AssignOutputs_36, Var_106);
    *Stmts_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_103, Var_105);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_csharp_java_output_args_8_p_0(
  MR_Word MutableSpecial_1,
  MR_Word HeadVar__2_2,
  MR_Word Context_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word JavaArg_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word JavaArgs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Stmts1_22;
      MR_Word ConvDecls1_23;
      MR_Word ConvStmts1_24;
      MR_Word Stmts2_25;
      MR_Word ConvDecls2_26;
      MR_Word ConvStmts2_27;
      MR_Word STATE_VARIABLE_Info_30_30;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), JavaArg_15, (MR_Integer) 0))));
      MR_Word MaybeNameAndMode_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), JavaArg_15, (MR_Integer) 1))));
      MR_Word OrigType_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), JavaArg_15, (MR_Integer) 2))));
      MR_Word BoxPolicy_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), JavaArg_15, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ModuleInfo_47;
      MR_String ArgName_48;
      MR_Word Mode_49;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_67;
      MR_Char Var_72;
      MR_String Var_71;

      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_7, &ModuleInfo_47);
      succeeded = (MaybeNameAndMode_44 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndMode_44, (MR_Integer) 0))));
        ArgName_48 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 0))));
        Mode_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 1))));
        Var_72 = (MR_Char) 95;
        succeeded = mercury__string__first_char_3_p_2(ArgName_48, Var_72, &Var_71);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_59 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_47, OrigType_45);
          succeeded = (Var_59 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_60 = (MR_Integer) 1;
            check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_47, Mode_49, OrigType_45, &Var_67);
            succeeded = (Var_60 == Var_67);
          }
        }
      }
      if (succeeded)
      {
        MR_Word VarType_50;
        MR_Word VarLval_51;
        MR_Word NonMangledArgVarName_52;
        MR_Word ArgLval_53;
        MR_Word MLDSType_55;
        MR_Word LocalVarLval_56;
        MR_Word Rval_57;
        MR_Word Var_65;
        MR_Word _ConvInputStmts_54;

        ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_7, Var_43, &VarType_50);
        ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_7, Var_43, &VarLval_51);
        {
          NonMangledArgVarName_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), NonMangledArgVarName_52, 0) = ((MR_Box) (ArgName_48));
        }
        ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(VarType_50, OrigType_45, BoxPolicy_46, VarLval_51, NonMangledArgVarName_52, Context_3, (MR_Integer) 0, (MR_Integer) 0, &ArgLval_53, &ConvDecls1_23, &_ConvInputStmts_54, &ConvStmts1_24, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_30_30);
        MLDSType_55 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_47, OrigType_45);
        {
          LocalVarLval_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), LocalVarLval_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), LocalVarLval_56, 1) = ((MR_Box) (NonMangledArgVarName_52));
          MR_hl_field(MR_mktag(3), LocalVarLval_56, 2) = ((MR_Box) (MLDSType_55));
        }
        switch (MutableSpecial_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_68;

              Var_68 = parse_tree__builtin_lib_types__int_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OrigType_45, Var_68);
              if (succeeded)
                {
                  Rval_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Rval_57, 0) = ((MR_Box) (LocalVarLval_56));
                }
              else
              {
                MR_Word Var_64;

                {
                  Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (LocalVarLval_56));
                }
                {
                  Rval_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval_57, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), Rval_57, 1) = ((MR_Box) (MLDSType_55));
                  MR_hl_field(MR_mktag(3), Rval_57, 2) = ((MR_Box) (Var_64));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              Rval_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Rval_57, 0) = ((MR_Box) (LocalVarLval_56));
            }
            break;
        }
        Var_65 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_53, Rval_57, Context_3);
        {
          Stmts1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Stmts1_22, 0) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(1), Stmts1_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        Stmts1_22 = (MR_Word) ((MR_Unsigned) 0U);
        ConvDecls1_23 = (MR_Word) ((MR_Unsigned) 0U);
        ConvStmts1_24 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_0_7;
      }
      ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_csharp_java_output_args_8_p_0(MutableSpecial_1, JavaArgs_16, Context_3, &Stmts2_25, &ConvDecls2_26, &ConvStmts2_27, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_8);
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Stmts1_22, Stmts2_25);
      *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), ConvDecls1_23, ConvDecls2_26);
      *HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ConvStmts1_24, ConvStmts2_27);
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_ccsj_input_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_AssignInput_8;
    MR_Word conv0_STATE_VARIABLE_Info_18;

    ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_ccsj_input_arg_if_used_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_AssignInput_8, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_18);
    *wrapper_arg_2 = ((MR_Box) (conv1_AssignInput_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_ccsj_input_args_5_p_0(
  MR_Word Lang_6,
  MR_Word Args_7,
  MR_Word * AssignInputs_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word AssignInputsList_10;
    MR_Word Var_13;
    MR_Box conv2_STATE_VARIABLE_Info_12;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_ccsj_input_args_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Lang_6));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&ml_backend__ml_foreign_proc_gen_scalar_common_1[1]), (MR_Word) (&ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0), Var_13, Args_7, &AssignInputsList_10, ((MR_Box) (STATE_VARIABLE_Info_0_11)), &conv2_STATE_VARIABLE_Info_12);
    *STATE_VARIABLE_Info_12 = ((MR_Word) (conv2_STATE_VARIABLE_Info_12));
    mercury__list__condense_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), AssignInputsList_10, AssignInputs_8);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_csharp_java_decls_9_p_0(
  MR_Word Info_1,
  MR_Word MutableSpecial_2,
  MR_String Code_3,
  MR_Integer STATE_VARIABLE_TIIn_0_4,
  MR_Integer STATE_VARIABLE_TIOut_0_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word * HeadVar__9_9)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word HeadArg_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
    MR_Word TailArgs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
    MR_Word HeadDecls_25;
    MR_Word HeadTICopyIns_26;
    MR_Word HeadTICopyOuts_27;
    MR_Word TailDecls_28;
    MR_Word TailTICopyIns_29;
    MR_Word TailTICopyOuts_30;
    MR_Integer STATE_VARIABLE_TIIn_33_33;
    MR_Integer STATE_VARIABLE_TIOut_34_34;

    ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_csharp_java_decl_11_p_0(Info_1, MutableSpecial_2, Code_3, STATE_VARIABLE_TIIn_0_4, &STATE_VARIABLE_TIIn_33_33, STATE_VARIABLE_TIOut_0_5, &STATE_VARIABLE_TIOut_34_34, HeadArg_20, &HeadDecls_25, &HeadTICopyIns_26, &HeadTICopyOuts_27);
    ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_csharp_java_decls_9_p_0(Info_1, MutableSpecial_2, Code_3, STATE_VARIABLE_TIIn_33_33, STATE_VARIABLE_TIOut_34_34, TailArgs_21, &TailDecls_28, &TailTICopyIns_29, &TailTICopyOuts_30);
    *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), HeadDecls_25, TailDecls_28);
    *HeadVar__8_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), HeadTICopyIns_26, TailTICopyIns_29);
    *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), HeadTICopyOuts_27, TailTICopyOuts_30);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_foreign_proc_csharp_java_decl_11_p_0(
  MR_Word Info_12,
  MR_Word MutableSpecial_13,
  MR_String Code_14,
  MR_Integer STATE_VARIABLE_TIIn_0_38,
  MR_Integer * STATE_VARIABLE_TIIn_39,
  MR_Integer STATE_VARIABLE_TIOut_0_40,
  MR_Integer * STATE_VARIABLE_TIOut_41,
  MR_Word Arg_17,
  MR_Word * Decls_18,
  MR_Word * TICopyIns_19,
  MR_Word * TICopyOuts_20)
{
  {
    MR_bool succeeded;
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 0))));
    MR_Word MaybeNameAndMode_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 1))));
    MR_Word Type_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_17, (MR_Integer) 2))));
    MR_Word ModuleInfo_25;
    MR_String ArgName_26;
    MR_Word Mode_27;
    MR_Word Var_42;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_12, &ModuleInfo_25);
    succeeded = (MaybeNameAndMode_22 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNameAndMode_22, (MR_Integer) 0))));
      ArgName_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 0))));
      Mode_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_42, (MR_Integer) 1))));
      succeeded = ml_backend__ml_foreign_proc_gen__var_is_singleton_1_p_0(ArgName_26);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word MLDS_Type_28;
      MR_Word TypeDecl_29;
      MR_String ArgDeclStr_30;
      MR_Word ArgDecl_31;
      MR_String Var_107;

      switch (MutableSpecial_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_104;

            Var_104 = parse_tree__builtin_lib_types__int_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_23, Var_104);
            if (succeeded)
              MLDS_Type_28 = (MR_Word) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[9]));
            else
              MLDS_Type_28 = (MR_Word) ((MR_Unsigned) 20U);
          }
          break;
        case (MR_Integer) 1:
          MLDS_Type_28 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_25, Type_23);
          break;
      }
      {
        TypeDecl_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), TypeDecl_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), TypeDecl_29, 1) = ((MR_Box) (MLDS_Type_28));
      }
      Var_107 = mercury__string__f_43_43_2_f_0(ArgName_26, (MR_String) ";\n");
      ArgDeclStr_30 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_107);
      {
        ArgDecl_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ArgDecl_31, 0) = ((MR_Box) (ArgDeclStr_30));
      }
      succeeded = ml_backend__ml_foreign_proc_gen__ml_is_comp_gen_type_info_arg_3_p_0(Info_12, Var_21, ArgName_26);
      if (succeeded)
      {
        MR_Word Var_105;

        check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_25, Mode_27, Type_23, &Var_105);
        succeeded = ((MR_Integer) 0 == Var_105);
        if (succeeded)
        {
          MR_String SeqArgName_32;
          MR_String SeqDeclStr_33;
          MR_Word SeqDecl_34;
          MR_String TICopyIn_35;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_69;
          MR_String Var_109;
          MR_String Var_118;
          MR_String Var_121;
          MR_String Var_123;
          MR_String Var_124;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_foreign_proc_gen_scalar_common_2[6]), STATE_VARIABLE_TIIn_0_38, &Var_109);
          SeqArgName_32 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_In_", Var_109);
          *STATE_VARIABLE_TIIn_39 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TIIn_0_38 + (MR_Unsigned) 1);
          Var_118 = mercury__string__f_43_43_2_f_0(SeqArgName_32, (MR_String) ";\n");
          SeqDeclStr_33 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_118);
          {
            SeqDecl_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), SeqDecl_34, 0) = ((MR_Box) (SeqDeclStr_33));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (SeqDecl_34));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (TypeDecl_29));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ArgDecl_31));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Decls_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeDecl_29));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_59));
          }
          Var_121 = mercury__string__f_43_43_2_f_0(ArgName_26, (MR_String) ";\n");
          Var_123 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_121);
          Var_124 = mercury__string__f_43_43_2_f_0(SeqArgName_32, Var_123);
          TICopyIn_35 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_124);
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (TICopyIn_35));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TICopyIns_19 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *TICopyOuts_20 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_TIOut_41 = STATE_VARIABLE_TIOut_0_40;
        }
        else
        {
          MR_String TICopyOut_37;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_97;
          MR_String SeqArgName_101;
          MR_String SeqDeclStr_102;
          MR_Word SeqDecl_103;
          MR_String Var_126;
          MR_String Var_135;
          MR_Integer _Index_36;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__ml_foreign_proc_gen_scalar_common_2[6]), STATE_VARIABLE_TIOut_0_40, &Var_126);
          SeqArgName_101 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_Out_", Var_126);
          *STATE_VARIABLE_TIOut_41 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TIOut_0_40 + (MR_Unsigned) 1);
          Var_135 = mercury__string__f_43_43_2_f_0(SeqArgName_101, (MR_String) ";\n");
          SeqDeclStr_102 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_135);
          {
            SeqDecl_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), SeqDecl_103, 0) = ((MR_Box) (SeqDeclStr_102));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (SeqDecl_103));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (TypeDecl_29));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (ArgDecl_31));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_82));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Decls_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeDecl_29));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_81));
          }
          succeeded = mercury__string__sub_string_search_3_p_0(Code_14, SeqArgName_101, &_Index_36);
          if (succeeded)
          {
            MR_String Var_138;
            MR_String Var_140;
            MR_String Var_141;

            Var_138 = mercury__string__f_43_43_2_f_0(SeqArgName_101, (MR_String) ";\n");
            Var_140 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_138);
            Var_141 = mercury__string__f_43_43_2_f_0(ArgName_26, Var_140);
            TICopyOut_37 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_141);
          }
          else
          {
            MR_String Var_144;
            MR_String Var_146;
            MR_String Var_147;

            Var_144 = mercury__string__f_43_43_2_f_0(ArgName_26, (MR_String) ";\n");
            Var_146 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_144);
            Var_147 = mercury__string__f_43_43_2_f_0(SeqArgName_101, Var_146);
            TICopyOut_37 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_147);
          }
          *TICopyIns_19 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_97, 0) = ((MR_Box) (TICopyOut_37));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *TICopyOuts_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_97));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *STATE_VARIABLE_TIIn_39 = STATE_VARIABLE_TIIn_0_38;
        }
      }
      else
      {
        MR_Word Var_99;

        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (ArgDecl_31));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Decls_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeDecl_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_99));
        }
        *TICopyIns_19 = (MR_Word) ((MR_Unsigned) 0U);
        *TICopyOuts_20 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_TIOut_41 = STATE_VARIABLE_TIOut_0_40;
        *STATE_VARIABLE_TIIn_39 = STATE_VARIABLE_TIIn_0_38;
      }
    }
    else
    {
      *Decls_18 = (MR_Word) ((MR_Unsigned) 0U);
      *TICopyIns_19 = (MR_Word) ((MR_Unsigned) 0U);
      *TICopyOuts_20 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_TIOut_41 = STATE_VARIABLE_TIOut_0_40;
      *STATE_VARIABLE_TIIn_39 = STATE_VARIABLE_TIIn_0_38;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__var_is_singleton_1_p_0(
  MR_String Name_2)
{
  {
    MR_bool succeeded;
    MR_String Var_3;

    succeeded = mercury__string__first_char_3_p_2(Name_2, (MR_Char) 95, &Var_3);
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_is_comp_gen_type_info_arg_3_p_0(
  MR_Word Info_4,
  MR_Word Var_5,
  MR_String ArgName_6)
{
  {
    MR_bool succeeded;
    MR_Word VarTypes_7;
    MR_Word Type_8;
    MR_Word TypeCtorSymName_9;
    MR_Word TypeCtorModuleName_10;
    MR_String TypeCtorName_11;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;

    succeeded = mercury__string__prefix_2_p_0(ArgName_6, (MR_String) "TypeInfo_for_");
    if (succeeded)
    {
      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(Info_4, &VarTypes_7);
      hlds__vartypes__lookup_var_type_3_p_0(VarTypes_7, Var_5, &Type_8);
      succeeded = ((MR_tag((MR_Word) Type_8)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorSymName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_8, (MR_Integer) 0))));
        Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_8, (MR_Integer) 1))));
        Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Type_8, (MR_Integer) 2))));
        succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = (Var_14 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) TypeCtorSymName_9)) == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtorModuleName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_9, (MR_Integer) 0))));
              TypeCtorName_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_9, (MR_Integer) 1))));
              Var_15 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(TypeCtorModuleName_10, Var_15);
              if (succeeded)
                succeeded = (strcmp(TypeCtorName_11, (MR_String) "type_info") == 0);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_5_p_0(
  MR_Word TraceRuntimeCond_6,
  MR_Word Context_7,
  MR_Word * Stmts_8,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  {
    MR_Word SuccessLval_10;
    MR_Word CondRval_11;
    MR_Word Stmt_12;
    MR_Word STATE_VARIABLE_Info_15_15;
    MR_Word Var_17;

    ml_backend__ml_code_util__ml_success_lval_3_p_0(&SuccessLval_10, STATE_VARIABLE_Info_0_13, &STATE_VARIABLE_Info_15_15);
    ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(TraceRuntimeCond_6, &CondRval_11, STATE_VARIABLE_Info_15_15, STATE_VARIABLE_Info_14);
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_17, 0) = ((MR_Box) (SuccessLval_10));
      MR_hl_field(MR_mktag(2), Var_17, 1) = ((MR_Box) (CondRval_11));
    }
    {
      Stmt_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Stmt_12, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), Stmt_12, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(3), Stmt_12, 2) = ((MR_Box) (Context_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(
  MR_Word Expr_5,
  MR_Word * CondRval_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  switch (MR_tag((MR_Word) Expr_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String EnvVar_8;
        MR_Word EnvVarRval_9;
        MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Expr_5, (MR_Integer) 0))));
        MR_Word Var_25;
        MR_Word Var_26;

        EnvVar_8 = (MR_String) (Var_23);
        ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_p_0(EnvVar_8, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
        Var_26 = (MR_Word) (EnvVar_8);
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (Var_26));
        }
        {
          EnvVarRval_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), EnvVarRval_9, 0) = ((MR_Box) (Var_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[8])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EnvVarRval_9));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[7])));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExprA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Expr_5, (MR_Integer) 0))));
        MR_Word RvalA_12;

        ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ExprA_11, &RvalA_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalA_12));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TraceOp_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word ExprB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 2))));
        MR_Word RvalB_15;
        MR_Word Op_16;
        MR_Word STATE_VARIABLE_Info_19_19;
        MR_Word ExprA_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 1))));
        MR_Word RvalA_32;

        ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ExprA_31, &RvalA_32, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_19_19);
        ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ExprB_14, &RvalB_15, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_18);
        switch (TraceOp_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Op_16 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 0:
            Op_16 = (MR_Word) ((MR_Unsigned) 4U);
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Op_16));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalA_32));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (RvalB_15));
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____foreign_proc_detism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_foreign_proc_gen____Unify____foreign_proc_detism_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____foreign_proc_detism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_foreign_proc_gen____Compare____foreign_proc_detism_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_foreign_proc_gen__init(void)
{
}

void mercury__ml_backend__ml_foreign_proc_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__type_ctor_info_foreign_proc_detism_0);
	MR_register_type_ctor_info(&ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__type_ctor_info_mutable_special_case_0);
}

void mercury__ml_backend__ml_foreign_proc_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_foreign_proc_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_foreign_proc_gen.
