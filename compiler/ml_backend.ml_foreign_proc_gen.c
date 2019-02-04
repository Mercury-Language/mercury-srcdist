/*
** Automatically generated from `ml_foreign_proc_gen.m'
** by the Mercury compiler,
** version rotd-2017-12-28
** configured for x86_64-pc-linux-gnu.
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


// :- module ml_backend.ml_foreign_proc_gen.
// :- implementation.

/*
INIT mercury__ml_backend__ml_foreign_proc_gen__init
ENDINIT
*/

#include "ml_backend.ml_foreign_proc_gen.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"



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

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0[2];

static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0[2];

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1;

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2;

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_ordinary_pragma_kind_0[3];

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_ordinary_pragma_kind_0[3];

static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_ordinary_pragma_kind_0[3];

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__198__1_2_p_0(
  MR_Word ExtraArgs_20,
  MR_Word HeadVar__2_52);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

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
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(
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
  MR_Word ExportedType_10,
  MR_String TypeString_11,
  MR_String * Cast_12);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(
  MR_Word OrdinaryKind_13,
  MR_Word Attributes_14,
  MR_Word PredId_15,
  MR_Word OrigArgs_17,
  MR_Word ExtraArgs_18,
  MR_String C_Code_19,
  MR_Word Context_20,
  MR_Word * Decls_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Context_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Info_0_6,
  MR_Word * STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(
  MR_Word Var_11,
  MR_String ArgName_12,
  MR_Word OrigType_13,
  MR_Word BoxPolicy_14,
  MR_Word Context_15,
  MR_Word * AssignOutput_16,
  MR_Word * ConvDecls_17,
  MR_Word * ConvOutputStmts_18,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(
  MR_Word Info_1,
  MR_Word Lang_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

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
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0(
  MR_Word TargetLang_14,
  MR_Word OrdinaryKind_15,
  MR_Word Attributes_16,
  MR_Word PredId_17,
  MR_Word Args_19,
  MR_Word ExtraArgs_20,
  MR_String JavaCode_21,
  MR_Word Context_22,
  MR_Word * Decls_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(
  MR_Word MutableSpecial_1,
  MR_Word HeadVar__2_2,
  MR_Word Context_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Info_0_7,
  MR_Word * STATE_VARIABLE_Info_8);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(
  MR_Word Lang_6,
  MR_Word ArgList_7,
  MR_Word * AssignInputs_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(
  MR_Word Info_1,
  MR_Word MutableSpecial_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(
  MR_Word Expr_5,
  MR_Word * CondRval_6,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0_10001(
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\");\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
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


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_target_code_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0 = {
  (MR_String) "mutable_special_case",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1 = {
  (MR_String) "not_mutable_special_case",
  (MR_Integer) 1
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001)),
  ((MR_Box) (ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001)),
  (MR_String) "ml_backend.ml_foreign_proc_gen",
  (MR_String) "mutable_special_case",
  {     ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0 },
  {     ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0
};

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0 = {
  (MR_String) "kind_det",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1 = {
  (MR_String) "kind_semi",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2 = {
  (MR_String) "kind_failure",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_ordinary_pragma_kind_0[3] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2
};

static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_ordinary_pragma_kind_0[3] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1
};

static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_ordinary_pragma_kind_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__type_ctor_info_ordinary_pragma_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0_10001)),
  ((MR_Box) (ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0_10001)),
  (MR_String) "ml_backend.ml_foreign_proc_gen",
  (MR_String) "ordinary_pragma_kind",
  {     ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_ordinary_pragma_kind_0 },
  {     ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_ordinary_pragma_kind_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_ordinary_pragma_kind_0
};

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__198__1_2_p_0(
  MR_Word ExtraArgs_20,
  MR_Word HeadVar__2_52)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[0], ((MR_Box) (ExtraArgs_20)), ((MR_Box) (HeadVar__2_52)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

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
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(
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
    MR_Word OrigType_13;
    MR_Word BoxPolicy_14;
    MR_String ArgName_15;
    MR_Word MaybeNameAndMode_12;
    MR_Word Mode_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Char Var_25;
    MR_String Var_24;

    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_17, &ModuleInfo_10);
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignArg_7, (MR_Integer) 0)));
    MaybeNameAndMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignArg_7, (MR_Integer) 1)));
    OrigType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignArg_7, (MR_Integer) 2)));
    BoxPolicy_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignArg_7, (MR_Integer) 3)));
    succeeded = ((MR_tag((MR_Word) MaybeNameAndMode_12)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameAndMode_12, (MR_Integer) 0)));
      ArgName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0)));
      Mode_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 1)));
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
      MR_Word ExportedType_40;
      MR_String TypeString_41;
      MR_Word Globals_42;
      MR_Word HighLevelData_43;
      MR_String Cast_44;

      ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_17, Var_11, &VarType_35);
      ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_17, Var_11, &VarLval_36);
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_17, &ModuleInfo_37);
      IsDummy_38 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_37, VarType_35);
      switch (IsDummy_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MLDS_Type_85;

            MLDS_Type_85 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_37, VarType_35);
            succeeded = (Lang_6 == (MR_Integer) 2);
            if (succeeded)
            {
              MR_Word Var_86;

              {
                Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) (MLDS_Type_85));
              }
              {
                ArgRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ArgRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ArgRval_39, 1) = ((MR_Box) (Var_86));
              }
            }
            else
            {
              ArgRval_39 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[7]);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_46;

            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_46, 0) = ((MR_Box) (VarLval_36));
            }
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ModuleInfo_37, VarType_35, OrigType_13, BoxPolicy_14, Var_46, &ArgRval_39);
          }
          break;
      }
      ExportedType_40 = backend_libs__foreign__to_exported_type_2_f_0(ModuleInfo_37, OrigType_13);
      TypeString_41 = backend_libs__foreign__exported_type_to_string_2_f_0(Lang_6, ExportedType_40);
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_37, &Globals_42);
      libs__globals__lookup_bool_option_3_p_0(Globals_42, (MR_Integer) 267, &HighLevelData_43);
      succeeded = ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(Lang_6, HighLevelData_43, OrigType_13, ExportedType_40, TypeString_41, &Cast_44);
      if (succeeded)
      {
        MR_String AssignToArgName_45;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_String Var_76;
        MR_String Var_78;
        MR_String Var_79;

        Var_76 = mercury__string__f_43_43_2_f_0(Cast_44, (MR_String) " ");
        Var_78 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_76);
        Var_79 = mercury__string__f_43_43_2_f_0(ArgName_15, Var_78);
        AssignToArgName_45 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_79);
        {
          Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_54, 0) = ((MR_Box) (AssignToArgName_45));
        }
        {
          Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (ArgRval_39));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[18])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *AssignInput_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_55));
        }
      }
      else
      {
        MR_Word Var_61;
        MR_String Var_62;
        MR_String Var_64;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_String Var_70;
        MR_String Var_72;

        Var_64 = mercury__string__f_43_43_2_f_0(TypeString_41, (MR_String) ", ");
        Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", Var_64);
        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (Var_62));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (ArgRval_39));
        }
        Var_72 = mercury__string__f_43_43_2_f_0(ArgName_15, (MR_String) ");\n");
        Var_70 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_72);
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (Var_70));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *AssignInput_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_66));
        }
      }
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
    }
    else
    {
      *AssignInput_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_18 = STATE_VARIABLE_Info_0_17;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(
  MR_Word Lang_7,
  MR_Word HighLevelData_8,
  MR_Word OrigType_9,
  MR_Word ExportedType_10,
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
              MR_Word Var_15;
              MR_Word Var_16;

              succeeded = ((MR_tag((MR_Word) OrigType_9)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrigType_9, (MR_Integer) 0)));
                Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrigType_9, (MR_Integer) 1)));
                *Cast_12 = (MR_String) "(MR_Word)";
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word IsForeign_27;

                IsForeign_27 = backend_libs__foreign__is_foreign_type_1_f_0(ExportedType_10);
                if ((IsForeign_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *Cast_12 = (MR_String) "";
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_String Var_19;
                  MR_String Var_20;
                  MR_String Var_21;
                  MR_Word Assertions_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), IsForeign_27, (MR_Integer) 0)));

                  succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(Assertions_25);
                  if (succeeded)
                  {
                    Var_19 = (MR_String) "(";
                    Var_21 = (MR_String) ")";
                    Var_20 = mercury__string__f_43_43_2_f_0(TypeString_11, Var_21);
                    *Cast_12 = mercury__string__f_43_43_2_f_0(Var_19, Var_20);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word IsForeign_13;
              MR_String Var_22;
              MR_String Var_23;
              MR_String Var_24;

              IsForeign_13 = backend_libs__foreign__is_foreign_type_1_f_0(ExportedType_10);
              if ((IsForeign_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                succeeded = MR_TRUE;
              else
              {
                MR_Word Assertions_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), IsForeign_13, (MR_Integer) 0)));

                succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(Assertions_14);
              }
              if (succeeded)
              {
                Var_22 = (MR_String) "(";
                Var_24 = (MR_String) ")";
                Var_23 = mercury__string__f_43_43_2_f_0(TypeString_11, Var_24);
                *Cast_12 = mercury__string__f_43_43_2_f_0(Var_22, Var_23);
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
ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_p_0(
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
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "unexpected code model");
                  return;
                }
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
        ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(OrdinaryKind_25, Attributes_14, PredId_15, Args_17, ExtraArgs_18, ForeignCode_19, Context_20, Decls_21, Stmts_22, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
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
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "C# foreign code not supported for compilation target");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0((MR_Integer) 1, OrdinaryKind_25, Attributes_14, PredId_15, Args_17, ExtraArgs_18, ForeignCode_19, Context_20, Decls_21, Stmts_22, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "unexpected language Erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0((MR_Integer) 2, OrdinaryKind_25, Attributes_14, PredId_15, Args_17, ExtraArgs_18, ForeignCode_19, Context_20, Decls_21, Stmts_22, STATE_VARIABLE_Info_0_34, STATE_VARIABLE_Info_35);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(
  MR_Word OrdinaryKind_13,
  MR_Word Attributes_14,
  MR_Word PredId_15,
  MR_Word OrigArgs_17,
  MR_Word ExtraArgs_18,
  MR_String C_Code_19,
  MR_Word Context_20,
  MR_Word * Decls_21,
  MR_Word * Stmts_22,
  MR_Word STATE_VARIABLE_Info_0_44,
  MR_Word * STATE_VARIABLE_Info_45)
{
  {
    MR_Word Lang_24;
    MR_Word Args_25;
    MR_Word ArgDeclsList_26;
    MR_Word AssignInputsList_27;
    MR_Word AssignOutputsList_28;
    MR_Word ConvStmts_30;
    MR_Word ThreadSafe_31;
    MR_String ObtainLock_32;
    MR_String ReleaseLock_33;
    MR_Word HashDefineAllocId_34;
    MR_Word HashUndefAllocId_35;
    MR_Word HashDefineProcLabel_36;
    MR_Word StartingFragments_37;
    MR_Word EndingFragments_38;
    MR_Word StartingCCode_40;
    MR_Word StartingCCodeStmt_41;
    MR_Word EndingCCode_42;
    MR_Word EndingCCodeStmt_43;
    MR_Word STATE_VARIABLE_Info_46_46;
    MR_Word STATE_VARIABLE_Info_47_47;
    MR_Word Var_48;
    MR_Word STATE_VARIABLE_Info_49_49;
    MR_Word Var_193;
    MR_Word Var_194;

    Lang_24 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_14);
    mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, OrigArgs_17, ExtraArgs_18, &Args_25);
    ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(STATE_VARIABLE_Info_0_44, Lang_24, Args_25, &ArgDeclsList_26);
    ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(Lang_24, Args_25, &AssignInputsList_27, STATE_VARIABLE_Info_0_44, &STATE_VARIABLE_Info_46_46);
    ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(Args_25, Context_20, &AssignOutputsList_28, Decls_21, &ConvStmts_30, STATE_VARIABLE_Info_46_46, &STATE_VARIABLE_Info_47_47);
    ThreadSafe_31 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attributes_14);
    ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(STATE_VARIABLE_Info_47_47, ThreadSafe_31, PredId_15, &ObtainLock_32, &ReleaseLock_33);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (C_Code_19));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(Var_48, Context_20, &HashDefineAllocId_34, &HashUndefAllocId_35, STATE_VARIABLE_Info_47_47, &STATE_VARIABLE_Info_49_49);
    ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(STATE_VARIABLE_Info_49_49, &HashDefineProcLabel_36);
    switch (OrdinaryKind_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_151;
          MR_Word Var_156;
          MR_Word Var_157;
          MR_Word Var_158;
          MR_Word Var_159;
          MR_Word Var_164;
          MR_Word Var_165;
          MR_Word Var_166;
          MR_Word Var_167;
          MR_Word Var_168;
          MR_Word Var_171;
          MR_Word Var_172;
          MR_Word Var_173;
          MR_Word Var_178;
          MR_Word Var_179;
          MR_Word Var_180;
          MR_Word Var_183;
          MR_Word Var_184;
          MR_Word Var_186;

          {
            Var_167 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_167, 0) = ((MR_Box) (ObtainLock_32));
          }
          {
            Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (Context_20));
          }
          {
            Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (C_Code_19));
            MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_173));
          }
          {
            Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (Var_172));
            MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
          }
          {
            Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[15])));
            MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_171));
          }
          {
            Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (Var_167));
            MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_168));
          }
          {
            Var_184 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_184, 0) = ((MR_Box) (ReleaseLock_33));
          }
          {
            Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (Var_184));
            MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
            MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (Var_183));
          }
          {
            Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (AssignOutputsList_28));
            MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
            MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_186));
          }
          {
            Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (HashUndefAllocId_35));
            MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_179));
          }
          {
            Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (Var_166));
            MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_178));
          }
          {
            Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_164, 0) = ((MR_Box) (AssignInputsList_27));
            MR_hl_field(MR_mktag(1), Var_164, 1) = ((MR_Box) (Var_165));
          }
          {
            Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
            MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_164));
          }
          {
            Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (ArgDeclsList_26));
            MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_159));
          }
          {
            Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (HashDefineProcLabel_36));
            MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (Var_158));
          }
          {
            Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (HashDefineAllocId_34));
            MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_157));
          }
          {
            Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11])));
            MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_156));
          }
          StartingFragments_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, Var_151);
          EndingFragments_38 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[2]);
          *STATE_VARIABLE_Info_45 = STATE_VARIABLE_Info_49_49;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SucceededLval_39;
          MR_Word Var_107;
          MR_Word Var_112;
          MR_Word Var_113;
          MR_Word Var_114;
          MR_Word Var_115;
          MR_Word Var_120;
          MR_Word Var_121;
          MR_Word Var_122;
          MR_Word Var_123;
          MR_Word Var_124;
          MR_Word Var_127;
          MR_Word Var_128;
          MR_Word Var_129;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_Word Var_136;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Word Var_143;

          ml_backend__ml_code_util__ml_success_lval_3_p_0(&SucceededLval_39, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_45);
          {
            Var_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_123, 0) = ((MR_Box) (ObtainLock_32));
          }
          {
            Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Context_20));
          }
          {
            Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (C_Code_19));
            MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_129));
          }
          {
            Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
            MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
          }
          {
            Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[15])));
            MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
          }
          {
            Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
            MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (Var_124));
          }
          {
            Var_140 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_140, 0) = ((MR_Box) (ReleaseLock_33));
          }
          {
            Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) (Var_140));
            MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
            MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_139));
          }
          {
            Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (Var_136));
            MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (HashUndefAllocId_35));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_135));
          }
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
            MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_134));
          }
          {
            Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (AssignInputsList_27));
            MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
          }
          {
            Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
            MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_120));
          }
          {
            Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (ArgDeclsList_26));
            MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (Var_115));
          }
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (HashDefineProcLabel_36));
            MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_114));
          }
          {
            Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (HashDefineAllocId_34));
            MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (Var_113));
          }
          {
            Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11])));
            MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) (Var_112));
          }
          StartingFragments_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, Var_107);
          {
            Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_143, 1) = ((MR_Box) (SucceededLval_39));
          }
          {
            EndingFragments_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), EndingFragments_38, 0) = ((MR_Box) (Var_143));
            MR_hl_field(MR_mktag(1), EndingFragments_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[3])));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_52;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_93;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word SucceededLval_196;

          ml_backend__ml_code_util__ml_success_lval_3_p_0(&SucceededLval_196, STATE_VARIABLE_Info_49_49, STATE_VARIABLE_Info_45);
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_71, 0) = ((MR_Box) (ObtainLock_32));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Context_20));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (C_Code_19));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[15])));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_75));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_88, 0) = ((MR_Box) (ReleaseLock_33));
          }
          {
            Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
            MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_87));
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (AssignOutputsList_28));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_93));
          }
          {
            Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (HashUndefAllocId_35));
            MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_82));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (AssignInputsList_27));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[5])));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_68));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ArgDeclsList_26));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (HashDefineProcLabel_36));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (HashDefineAllocId_34));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11])));
            MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_57));
          }
          StartingFragments_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, Var_52);
          {
            Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_98, 1) = ((MR_Box) (SucceededLval_196));
          }
          {
            Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
            MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
          }
          {
            EndingFragments_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), EndingFragments_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[10])));
            MR_hl_field(MR_mktag(1), EndingFragments_38, 1) = ((MR_Box) (Var_97));
          }
        }
        break;
    }
    {
      StartingCCode_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StartingCCode_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), StartingCCode_40, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), StartingCCode_40, 2) = ((MR_Box) (StartingFragments_37));
    }
    {
      StartingCCodeStmt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StartingCCodeStmt_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), StartingCCodeStmt_41, 1) = ((MR_Box) (StartingCCode_40));
      MR_hl_field(MR_mktag(3), StartingCCodeStmt_41, 2) = ((MR_Box) (Context_20));
    }
    {
      EndingCCode_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EndingCCode_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), EndingCCode_42, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), EndingCCode_42, 2) = ((MR_Box) (EndingFragments_38));
    }
    {
      EndingCCodeStmt_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EndingCCodeStmt_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), EndingCCodeStmt_43, 1) = ((MR_Box) (EndingCCode_42));
      MR_hl_field(MR_mktag(3), EndingCCodeStmt_43, 2) = ((MR_Box) (Context_20));
    }
    {
      Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (StartingCCodeStmt_41));
      MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (ConvStmts_30));
    }
    {
      Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (EndingCCodeStmt_43));
      MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    *Stmts_22 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, Var_193, Var_194);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(
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

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_7 = STATE_VARIABLE_Info_0_6;
    }
    else
    {
      MR_Word ForeignArg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ForeignArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Components1_19;
      MR_Word ConvDecls1_20;
      MR_Word ConvStmts1_21;
      MR_Word Components2_22;
      MR_Word ConvDecls2_23;
      MR_Word ConvStmts2_24;
      MR_Word STATE_VARIABLE_Info_27_27;
      MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignArg_12, (MR_Integer) 0)));
      MR_Word MaybeNameAndMode_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignArg_12, (MR_Integer) 1)));
      MR_Word OrigType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignArg_12, (MR_Integer) 2)));
      MR_Word BoxPolicy_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignArg_12, (MR_Integer) 3)));
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
      succeeded = ((MR_tag((MR_Word) MaybeNameAndMode_41)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameAndMode_41, (MR_Integer) 0)));
        ArgName_45 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 0)));
        Mode_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_47, (MR_Integer) 1)));
        Var_54 = (MR_Char) 95;
        succeeded = mercury__string__first_char_3_p_2(ArgName_45, Var_54, &Var_53);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_48 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_44, OrigType_42);
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
        ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(Var_40, ArgName_45, OrigType_42, BoxPolicy_43, Context_2, &Components1_19, &ConvDecls1_20, &ConvStmts1_21, STATE_VARIABLE_Info_0_6, &STATE_VARIABLE_Info_27_27);
      else
      {
        Components1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ConvDecls1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ConvStmts1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        STATE_VARIABLE_Info_27_27 = STATE_VARIABLE_Info_0_6;
      }
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(ForeignArgs_13, Context_2, &Components2_22, &ConvDecls2_23, &ConvStmts2_24, STATE_VARIABLE_Info_27_27, STATE_VARIABLE_Info_7);
      *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, Components1_19, Components2_22);
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvDecls1_20, ConvDecls2_23);
      *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ConvStmts1_21, ConvStmts2_24);
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(
  MR_Word Var_11,
  MR_String ArgName_12,
  MR_Word OrigType_13,
  MR_Word BoxPolicy_14,
  MR_Word Context_15,
  MR_Word * AssignOutput_16,
  MR_Word * ConvDecls_17,
  MR_Word * ConvOutputStmts_18,
  MR_Word STATE_VARIABLE_Info_0_38,
  MR_Word * STATE_VARIABLE_Info_39)
{
  {
    MR_bool succeeded;
    MR_Word VarType_20;
    MR_Word VarLval_21;
    MR_Word NonMangledArgVarName_22;
    MR_Word ArgLval_23;
    MR_Word ModuleInfo_25;
    MR_Word ExportedType_26;
    MR_String TypeString_27;
    MR_Word IsForeign_28;
    MR_Word _ConvInputStmts_24;
    MR_Word Cast_29;

    ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_38, Var_11, &VarType_20);
    ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_38, Var_11, &VarLval_21);
    {
      NonMangledArgVarName_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), NonMangledArgVarName_22, 0) = ((MR_Box) (ArgName_12));
    }
    ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(VarType_20, OrigType_13, BoxPolicy_14, VarLval_21, NonMangledArgVarName_22, Context_15, (MR_Integer) 0, (MR_Integer) 0, &ArgLval_23, ConvDecls_17, &_ConvInputStmts_24, ConvOutputStmts_18, STATE_VARIABLE_Info_0_38, STATE_VARIABLE_Info_39);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_39, &ModuleInfo_25);
    ExportedType_26 = backend_libs__foreign__to_exported_type_2_f_0(ModuleInfo_25, OrigType_13);
    TypeString_27 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, ExportedType_26);
    IsForeign_28 = backend_libs__foreign__is_foreign_type_1_f_0(ExportedType_26);
    if ((IsForeign_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      Cast_29 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Assertions_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), IsForeign_28, (MR_Integer) 0)));

      succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(Assertions_30);
      if (succeeded)
      {
        Cast_29 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word HighLevelData_31;
      MR_String LHS_Cast_32;
      MR_String RHS_Cast_33;
      MR_String AssignFromArgName_36;
      MR_String AssignTo_37;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_String Var_78;
      MR_String Var_79;
      MR_String Var_82;

      ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(*STATE_VARIABLE_Info_39, &HighLevelData_31);
      switch (HighLevelData_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word Var_34;
              MR_Word Var_35;

              succeeded = ((MR_tag((MR_Word) OrigType_13)) == (MR_mktag((MR_Integer) 0)));
              if (succeeded)
              {
                Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrigType_13, (MR_Integer) 0)));
                Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrigType_13, (MR_Integer) 1)));
              }
            }
            if (!(succeeded))
              succeeded = (Cast_29 == (MR_Integer) 1);
            if (succeeded)
              RHS_Cast_33 = (MR_String) "(MR_Box) ";
            else
              RHS_Cast_33 = (MR_String) "";
            LHS_Cast_32 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_45;

            Var_45 = mercury__string__f_43_43_2_f_0(TypeString_27, (MR_String) " *) &");
            LHS_Cast_32 = mercury__string__f_43_43_2_f_0((MR_String) "* (", Var_45);
            RHS_Cast_33 = (MR_String) "";
          }
          break;
      }
      Var_78 = mercury__string__f_43_43_2_f_0(ArgName_12, (MR_String) ";\n");
      Var_79 = mercury__string__f_43_43_2_f_0(RHS_Cast_33, Var_78);
      AssignFromArgName_36 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_79);
      Var_82 = mercury__string__f_43_43_2_f_0(LHS_Cast_32, (MR_String) " ");
      AssignTo_37 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_82);
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_57, 0) = ((MR_Box) (AssignTo_37));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (ArgLval_23));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (AssignFromArgName_36));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
        Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_63, 0) = ((MR_Box) (Var_64));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (ArgLval_23));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[15])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *AssignOutput_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_71));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(
  MR_Word Info_1,
  MR_Word Lang_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Decl_11;
      MR_Word Decls_12;
      MR_Word MaybeNameAndMode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 1)));
      MR_Word Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 2)));
      MR_Word BoxPolicy_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 3)));
      MR_Word ModuleInfo_21;
      MR_String DeclString_25;
      MR_Word _Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 0)));
      MR_String ArgName_22;
      MR_Word Var_26;
      MR_Word _Mode_23;
      MR_Char Var_41;
      MR_String Var_40;

      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_21);
      succeeded = ((MR_tag((MR_Word) MaybeNameAndMode_18)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameAndMode_18, (MR_Integer) 0)));
        ArgName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0)));
        _Mode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 1)));
        Var_41 = (MR_Char) 95;
        succeeded = mercury__string__first_char_3_p_2(ArgName_22, Var_41, &Var_40);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_String TypeString_24;
        MR_String Var_34;
        MR_String Var_36;
        MR_String Var_37;

        switch (BoxPolicy_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            TypeString_24 = (MR_String) "MR_Word";
            break;
          case (MR_Integer) 0:
            TypeString_24 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ModuleInfo_21, Lang_2, Type_19);
            break;
        }
        Var_34 = mercury__string__f_43_43_2_f_0(ArgName_22, (MR_String) ";\n");
        Var_36 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_34);
        Var_37 = mercury__string__f_43_43_2_f_0(TypeString_24, Var_36);
        DeclString_25 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_37);
      }
      else
        DeclString_25 = (MR_String) "";
      {
        Decl_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Decl_11, 0) = ((MR_Box) (DeclString_25));
      }
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(Info_1, Lang_2, Args_10, &Decls_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Decl_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Decls_12));
      }
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
    Var_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) PlainFuncName_8);
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Module_7));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Var_14));
    }
    Var_12 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) Var_13);
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14 = ((MR_String) (env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14);
    ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) env_ptr_arg;

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
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word TypeCtorInfo_42_42;

          (env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = ((env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13 == (MR_Integer) 1);
          if ((env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
          {
            TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
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
      libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 207, &(env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13);
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
        Var_27 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ProcLabel_19);
        ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(Var_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, Context_8, &AllocId_21, GlobalData0_20, &GlobalData_22);
        ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(GlobalData_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), Var_34, 1) = ((MR_Box) (AllocId_21));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HashDefine_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[11])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_33));
        }
        *HashUndef_10 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[14]);
      }
      else
      {
        *HashDefine_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *HashUndef_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 229, &Parallel_13);
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
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MangledName_16));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[13])));
      }
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\""));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
      }
      mercury__string__append_list_2_p_0(Var_18, ObtainLock_9);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__198__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0(
  MR_Word TargetLang_14,
  MR_Word OrdinaryKind_15,
  MR_Word Attributes_16,
  MR_Word PredId_17,
  MR_Word Args_19,
  MR_Word ExtraArgs_20,
  MR_String JavaCode_21,
  MR_Word Context_22,
  MR_Word * Decls_23,
  MR_Word * Stmts_24,
  MR_Word STATE_VARIABLE_Info_0_46,
  MR_Word * STATE_VARIABLE_Info_47)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_105_105;
    MR_Word TypeCtorInfo_106_106;
    MR_Word Lang_26;
    MR_Word ModuleInfo_27;
    MR_Word PredInfo_28;
    MR_Word Markers_29;
    MR_Word MutableSpecial_30;
    MR_Word ArgDeclsList_31;
    MR_Word AssignInputsList_32;
    MR_Word AssignOutputsList_33;
    MR_Word ConvStmts_35;
    MR_Word SucceededDecl_36;
    MR_Word AssignSucceeded_37;
    MR_Word StartingFragments_40;
    MR_Word StartingCode_41;
    MR_Word StartingCodeStmt_42;
    MR_Word EndingFragments_43;
    MR_Word EndingCode_44;
    MR_Word EndingCodeStmt_45;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_Info_53_53;
    MR_Word STATE_VARIABLE_Info_54_54;
    MR_Word Var_79;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_97;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;

    Lang_26 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_16);
    ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_46, &ModuleInfo_27);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_27, PredId_17, &PredInfo_28);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_28, &Markers_29);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_29, (MR_Integer) 24);
    if (succeeded)
      MutableSpecial_30 = (MR_Integer) 0;
    else
      MutableSpecial_30 = (MR_Integer) 1;
    ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(STATE_VARIABLE_Info_0_46, MutableSpecial_30, Args_19, &ArgDeclsList_31);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (ExtraArgs_20));
      MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    mercury__require__expect_3_p_0(Var_49, (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_csharp_java_proc\'/13", (MR_String) "extra args");
    ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(Lang_26, Args_19, &AssignInputsList_32, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_53_53);
    ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(MutableSpecial_30, Args_19, Context_22, &AssignOutputsList_33, Decls_23, &ConvStmts_35, STATE_VARIABLE_Info_53_53, &STATE_VARIABLE_Info_54_54);
    switch (OrdinaryKind_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *STATE_VARIABLE_Info_47 = STATE_VARIABLE_Info_54_54;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word SucceededLval_103;

          ml_backend__ml_code_util__ml_success_lval_3_p_0(&SucceededLval_103, STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Info_47);
          SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (SucceededLval_103));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[9])));
          }
          {
            AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AssignSucceeded_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[7])));
            MR_hl_field(MR_mktag(1), AssignSucceeded_37, 1) = ((MR_Box) (Var_58));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SucceededLval_38;
          MR_String BoolType_39;
          MR_Word Var_65;
          MR_String Var_66;
          MR_String Var_68;
          MR_Word Var_73;
          MR_Word Var_74;

          ml_backend__ml_code_util__ml_success_lval_3_p_0(&SucceededLval_38, STATE_VARIABLE_Info_54_54, STATE_VARIABLE_Info_47);
          switch (TargetLang_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              BoolType_39 = (MR_String) "bool";
              break;
            case (MR_Integer) 2:
              BoolType_39 = (MR_String) "boolean";
              break;
          }
          Var_68 = mercury__string__f_43_43_2_f_0(BoolType_39, (MR_String) " SUCCESS_INDICATOR;\n");
          Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_68);
          {
            Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_65, 0) = ((MR_Box) (Var_66));
          }
          {
            SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SucceededDecl_36, 0) = ((MR_Box) (Var_65));
            MR_hl_field(MR_mktag(1), SucceededDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (SucceededLval_38));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[10])));
          }
          {
            AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), AssignSucceeded_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[7])));
            MR_hl_field(MR_mktag(1), AssignSucceeded_37, 1) = ((MR_Box) (Var_73));
          }
        }
        break;
    }
    TypeCtorInfo_105_105 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0;
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Context_22));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (JavaCode_21));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (AssignInputsList_32));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (SucceededDecl_36));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_86));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (ArgDeclsList_31));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11])));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_84));
    }
    StartingFragments_40 = mercury__list__condense_1_f_0(TypeCtorInfo_105_105, Var_79);
    {
      StartingCode_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StartingCode_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), StartingCode_41, 1) = ((MR_Box) (TargetLang_14));
      MR_hl_field(MR_mktag(3), StartingCode_41, 2) = ((MR_Box) (StartingFragments_40));
    }
    {
      StartingCodeStmt_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StartingCodeStmt_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), StartingCodeStmt_42, 1) = ((MR_Box) (StartingCode_41));
      MR_hl_field(MR_mktag(3), StartingCodeStmt_42, 2) = ((MR_Box) (Context_22));
    }
    EndingFragments_43 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_105_105, AssignSucceeded_37, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[12]));
    {
      EndingCode_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EndingCode_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), EndingCode_44, 1) = ((MR_Box) (TargetLang_14));
      MR_hl_field(MR_mktag(3), EndingCode_44, 2) = ((MR_Box) (EndingFragments_43));
    }
    {
      EndingCodeStmt_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), EndingCodeStmt_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), EndingCodeStmt_45, 1) = ((MR_Box) (EndingCode_44));
      MR_hl_field(MR_mktag(3), EndingCodeStmt_45, 2) = ((MR_Box) (Context_22));
    }
    TypeCtorInfo_106_106 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (StartingCodeStmt_42));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (EndingCodeStmt_45));
      MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_100 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_106_106, ConvStmts_35, Var_101);
    Var_99 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_106_106, AssignOutputsList_33, Var_100);
    *Stmts_24 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_106_106, Var_97, Var_99);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(
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

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Info_8 = STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word TypeCtorInfo_32_32;
      MR_Word JavaArg_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word JavaArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Stmts1_22;
      MR_Word ConvDecls1_23;
      MR_Word ConvStmts1_24;
      MR_Word Stmts2_25;
      MR_Word ConvDecls2_26;
      MR_Word ConvStmts2_27;
      MR_Word STATE_VARIABLE_Info_30_30;
      MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), JavaArg_15, (MR_Integer) 0)));
      MR_Word MaybeNameAndMode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), JavaArg_15, (MR_Integer) 1)));
      MR_Word OrigType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), JavaArg_15, (MR_Integer) 2)));
      MR_Word BoxPolicy_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), JavaArg_15, (MR_Integer) 3)));
      MR_Word ModuleInfo_47;
      MR_String ArgName_48;
      MR_Word Mode_49;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_68;
      MR_Char Var_73;
      MR_String Var_72;

      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_7, &ModuleInfo_47);
      succeeded = ((MR_tag((MR_Word) MaybeNameAndMode_44)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameAndMode_44, (MR_Integer) 0)));
        ArgName_48 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 0)));
        Mode_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_58, (MR_Integer) 1)));
        Var_73 = (MR_Char) 95;
        succeeded = mercury__string__first_char_3_p_2(ArgName_48, Var_73, &Var_72);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_59 = check_hlds__type_util__check_dummy_type_2_f_0(ModuleInfo_47, OrigType_45);
          succeeded = (Var_59 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_60 = (MR_Integer) 1;
            check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_47, Mode_49, OrigType_45, &Var_68);
            succeeded = (Var_60 == Var_68);
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
        MR_Word Var_66;
        MR_Word _ConvInputStmts_54;

        ml_backend__ml_code_util__ml_variable_type_3_p_0(STATE_VARIABLE_Info_0_7, Var_43, &VarType_50);
        ml_backend__ml_code_util__ml_gen_var_3_p_0(STATE_VARIABLE_Info_0_7, Var_43, &VarLval_51);
        {
          NonMangledArgVarName_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), NonMangledArgVarName_52, 0) = ((MR_Box) (ArgName_48));
        }
        ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(VarType_50, OrigType_45, BoxPolicy_46, VarLval_51, NonMangledArgVarName_52, Context_3, (MR_Integer) 0, (MR_Integer) 0, &ArgLval_53, &ConvDecls1_23, &_ConvInputStmts_54, &ConvStmts1_24, STATE_VARIABLE_Info_0_7, &STATE_VARIABLE_Info_30_30);
        MLDSType_55 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_47, OrigType_45);
        {
          LocalVarLval_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), LocalVarLval_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), LocalVarLval_56, 1) = ((MR_Box) (NonMangledArgVarName_52));
          MR_hl_field(MR_mktag(3), LocalVarLval_56, 2) = ((MR_Box) (MLDSType_55));
        }
        switch (MutableSpecial_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_69;

              Var_69 = parse_tree__builtin_lib_types__int_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(OrigType_45, Var_69);
              if (succeeded)
                {
                  Rval_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Rval_57, 0) = ((MR_Box) (LocalVarLval_56));
                }
              else
              {
                MR_Word Var_64;
                MR_Word Var_65;

                {
                  Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MLDSType_55));
                }
                {
                  Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), Var_65, 0) = ((MR_Box) (LocalVarLval_56));
                }
                {
                  Rval_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Rval_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), Rval_57, 1) = ((MR_Box) (Var_64));
                  MR_hl_field(MR_mktag(3), Rval_57, 2) = ((MR_Box) (Var_65));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              Rval_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Rval_57, 0) = ((MR_Box) (LocalVarLval_56));
            }
            break;
        }
        Var_66 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ArgLval_53, Rval_57, Context_3);
        {
          Stmts1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Stmts1_22, 0) = ((MR_Box) (Var_66));
          MR_hl_field(MR_mktag(1), Stmts1_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        Stmts1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ConvDecls1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ConvStmts1_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        STATE_VARIABLE_Info_30_30 = STATE_VARIABLE_Info_0_7;
      }
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(MutableSpecial_1, JavaArgs_16, Context_3, &Stmts2_25, &ConvDecls2_26, &ConvStmts2_27, STATE_VARIABLE_Info_30_30, STATE_VARIABLE_Info_8);
      TypeCtorInfo_32_32 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_32_32, Stmts1_22, Stmts2_25);
      *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ConvDecls1_23, ConvDecls2_26);
      *HeadVar__6_6 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_32_32, ConvStmts1_24, ConvStmts2_27);
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1(
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

    ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_AssignInput_8, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_Info_18);
    *wrapper_arg_2 = ((MR_Box) (conv1_AssignInput_8));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(
  MR_Word Lang_6,
  MR_Word ArgList_7,
  MR_Word * AssignInputs_8,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word AssignInputsList_10;
    MR_Word Var_13;
    MR_Box conv2_STATE_VARIABLE_Info_12;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Lang_6));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[1], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, Var_13, ArgList_7, &AssignInputsList_10, ((MR_Box) (STATE_VARIABLE_Info_0_11)), &conv2_STATE_VARIABLE_Info_12);
    *STATE_VARIABLE_Info_12 = ((MR_Word) conv2_STATE_VARIABLE_Info_12);
    mercury__list__condense_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, AssignInputsList_10, AssignInputs_8);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(
  MR_Word Info_1,
  MR_Word MutableSpecial_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Decl_11;
      MR_Word Decls_12;
      MR_Word MaybeNameAndMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 1)));
      MR_Word Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 2)));
      MR_Word ModuleInfo_22;
      MR_Word _Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 0)));
      MR_Word _BoxPolicy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_9, (MR_Integer) 3)));
      MR_String ArgName_23;
      MR_Word Var_29;
      MR_Word _Mode_24;
      MR_Char Var_43;
      MR_String Var_42;

      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_1, &ModuleInfo_22);
      succeeded = ((MR_tag((MR_Word) MaybeNameAndMode_19)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeNameAndMode_19, (MR_Integer) 0)));
        ArgName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 0)));
        _Mode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_29, (MR_Integer) 1)));
        Var_43 = (MR_Char) 95;
        succeeded = mercury__string__first_char_3_p_2(ArgName_23, Var_43, &Var_42);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word MLDS_Type_25;
        MR_Word TypeDecl_26;
        MR_String VarDeclString_27;
        MR_Word VarDecl_28;
        MR_Word Var_34;
        MR_String Var_38;

        switch (MutableSpecial_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_36;

              Var_36 = parse_tree__builtin_lib_types__int_type_0_f_0();
              succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_20, Var_36);
              if (succeeded)
                MLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
              else
                MLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
            }
            break;
          case (MR_Integer) 1:
            MLDS_Type_25 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_22, Type_20);
            break;
        }
        {
          TypeDecl_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), TypeDecl_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), TypeDecl_26, 1) = ((MR_Box) (MLDS_Type_25));
        }
        Var_38 = mercury__string__f_43_43_2_f_0(ArgName_23, (MR_String) ";\n");
        VarDeclString_27 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_38);
        {
          VarDecl_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), VarDecl_28, 0) = ((MR_Box) (VarDeclString_27));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (VarDecl_28));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Decl_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Decl_11, 0) = ((MR_Box) (TypeDecl_26));
          MR_hl_field(MR_mktag(1), Decl_11, 1) = ((MR_Box) (Var_34));
        }
      }
      else
        Decl_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(Info_1, MutableSpecial_2, Args_10, &Decls_12);
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, Decl_11, Decls_12);
    }
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
      Var_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_17, 0) = ((MR_Box) (SuccessLval_10));
      MR_hl_field(MR_mktag(2), Var_17, 1) = ((MR_Box) (CondRval_11));
    }
    {
      Stmt_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Stmt_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), Stmt_12, 1) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(3), Stmt_12, 2) = ((MR_Box) (Context_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Stmts_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
        MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Expr_5, (MR_Integer) 0)));
        MR_Word Var_26;
        MR_Word Var_27;

        EnvVar_8 = (MR_String) Var_24;
        ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_p_0(EnvVar_8, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
        Var_27 = (MR_Word) EnvVar_8;
        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_26, 0) = ((MR_Box) (Var_27));
        }
        {
          EnvVarRval_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), EnvVarRval_9, 0) = ((MR_Box) (Var_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[8])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (EnvVarRval_9));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[7])));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExprA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Expr_5, (MR_Integer) 0)));
        MR_Word RvalA_12;

        ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ExprA_11, &RvalA_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_2[6])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalA_12));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TraceOp_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 0)));
        MR_Word ExprB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 2)));
        MR_Word RvalB_15;
        MR_Word Op_16;
        MR_Word STATE_VARIABLE_Info_19_19;
        MR_Word ExprA_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), Expr_5, (MR_Integer) 1)));
        MR_Word RvalA_33;

        ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ExprA_32, &RvalA_33, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_19_19);
        ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ExprB_14, &RvalB_15, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_18);
        switch (TraceOp_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 0:
            Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Op_16));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RvalA_33));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (RvalB_15));
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

	MR_register_type_ctor_info(&ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__type_ctor_info_mutable_special_case_0);
	MR_register_type_ctor_info(&ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__type_ctor_info_ordinary_pragma_kind_0);
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
