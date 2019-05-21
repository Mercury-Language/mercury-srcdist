/*
** Automatically generated from `ml_foreign_proc_gen.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module ml_backend.ml_foreign_proc_gen. */
/* :- implementation. */

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
  MR_String ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__Var_27;
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
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_52);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
  MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_7,
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_8,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_7,
  MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_8,
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_9,
  MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_10,
  MR_String ml_backend__ml_foreign_proc_gen__TypeString_11,
  MR_String * ml_backend__ml_foreign_proc_gen__Cast_12);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
  MR_Word ml_backend__ml_foreign_proc_gen__OrigArgs_17,
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
  MR_String ml_backend__ml_foreign_proc_gen__C_Code_19,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
  MR_Word * ml_backend__ml_foreign_proc_gen__Stmts_22,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_2,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Var_11,
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_12,
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13,
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_15,
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignOutput_16,
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvDecls_17,
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvOutputStmts_18,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_38,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_39);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_2,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Info_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_4);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3(
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__C_Codes_7,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_8,
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_9,
  MR_Word * ml_backend__ml_foreign_proc_gen__HashUndef_10,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Info_6,
  MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_7,
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_8,
  MR_String * ml_backend__ml_foreign_proc_gen__ObtainLock_9,
  MR_String * ml_backend__ml_foreign_proc_gen__ReleaseLock_10);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1(
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__TargetLang_14,
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_15,
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_16,
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_17,
  MR_Word ml_backend__ml_foreign_proc_gen__Args_19,
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
  MR_String ml_backend__ml_foreign_proc_gen__JavaCode_21,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_22,
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_23,
  MR_Word * ml_backend__ml_foreign_proc_gen__Stmts_24,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_1,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__6_6,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1(
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
  MR_Word ml_backend__ml_foreign_proc_gen__ArgList_7,
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInputs_8,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_12);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_2,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Expr_5,
  MR_Word * ml_backend__ml_foreign_proc_gen__CondRval_6,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001(
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001(
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0_10001(
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0_10001(
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3);


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
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[5])))
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
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_52)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    {
      ml_backend__ml_foreign_proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[0], ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_20)), ((MR_Box) (ml_backend__ml_foreign_proc_gen__HeadVar__2_52)));
    }
    return ml_backend__ml_foreign_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3)
{
  {
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__2_2;
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_foreign_proc_gen__HeadVar__1_1, ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4, ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__HeadVar__2_1 == ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

    return ml_backend__ml_foreign_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3)
{
  {
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__2_2;
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_foreign_proc_gen__HeadVar__1_1, ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4, ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__HeadVar__2_1 == ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

    return ml_backend__ml_foreign_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
  MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_7,
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_8,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_10;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_11;
    MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13;
    MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14;
    MR_String ml_backend__ml_foreign_proc_gen__ArgName_15;
    MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12;
    MR_Word ml_backend__ml_foreign_proc_gen__Mode_16;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_19;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_20;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_22;
    MR_Char ml_backend__ml_foreign_proc_gen__Var_25;
    MR_String ml_backend__ml_foreign_proc_gen__Var_24;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_foreign_proc_gen__ModuleInfo_10);
    }
    ml_backend__ml_foreign_proc_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 0)));
    ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 1)));
    ml_backend__ml_foreign_proc_gen__OrigType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 2)));
    ml_backend__ml_foreign_proc_gen__BoxPolicy_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 3)));
    ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_foreign_proc_gen__succeeded)
    {
      ml_backend__ml_foreign_proc_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12, (MR_Integer) 0)));
      ml_backend__ml_foreign_proc_gen__ArgName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_19, (MR_Integer) 0)));
      ml_backend__ml_foreign_proc_gen__Mode_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_19, (MR_Integer) 1)));
      ml_backend__ml_foreign_proc_gen__Var_25 = (MR_Char) 95;
      {
        ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_15, ml_backend__ml_foreign_proc_gen__Var_25, &ml_backend__ml_foreign_proc_gen__Var_24);
      }
      ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
      if (ml_backend__ml_foreign_proc_gen__succeeded)
      {
        ml_backend__ml_foreign_proc_gen__Var_20 = (MR_Integer) 0;
        {
          check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_10, ml_backend__ml_foreign_proc_gen__Mode_16, ml_backend__ml_foreign_proc_gen__OrigType_13, &ml_backend__ml_foreign_proc_gen__Var_22);
        }
        ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Var_20 == ml_backend__ml_foreign_proc_gen__Var_22);
      }
    }
    if (ml_backend__ml_foreign_proc_gen__succeeded)
    {
      MR_Word ml_backend__ml_foreign_proc_gen__VarType_35;
      MR_Word ml_backend__ml_foreign_proc_gen__VarLval_36;
      MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_37;
      MR_Word ml_backend__ml_foreign_proc_gen__IsDummy_38;
      MR_Word ml_backend__ml_foreign_proc_gen__ArgRval_39;
      MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_40;
      MR_String ml_backend__ml_foreign_proc_gen__TypeString_41;
      MR_Word ml_backend__ml_foreign_proc_gen__Globals_42;
      MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_43;
      MR_String ml_backend__ml_foreign_proc_gen__Cast_44;

      {
        ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__Var_11, &ml_backend__ml_foreign_proc_gen__VarType_35);
      }
      {
        ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__Var_11, &ml_backend__ml_foreign_proc_gen__VarLval_36);
      }
      {
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_foreign_proc_gen__ModuleInfo_37);
      }
      {
        ml_backend__ml_foreign_proc_gen__IsDummy_38 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_37, ml_backend__ml_foreign_proc_gen__VarType_35);
      }
      switch (ml_backend__ml_foreign_proc_gen__IsDummy_38) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ml_backend__ml_foreign_proc_gen__MLDS_Type_85;

            {
              ml_backend__ml_foreign_proc_gen__MLDS_Type_85 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_37, ml_backend__ml_foreign_proc_gen__VarType_35);
            }
            ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Lang_6 == (MR_Integer) 2);
            if (ml_backend__ml_foreign_proc_gen__succeeded)
            {
              MR_Word ml_backend__ml_foreign_proc_gen__Var_86;

              {
                ml_backend__ml_foreign_proc_gen__Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_86, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDS_Type_85));
              }
              {
                ml_backend__ml_foreign_proc_gen__ArgRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__ArgRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__ArgRval_39, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_86));
              }
            }
            else
            {
              ml_backend__ml_foreign_proc_gen__ArgRval_39 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[7]);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ml_backend__ml_foreign_proc_gen__Var_46;

            {
              ml_backend__ml_foreign_proc_gen__Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_46, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarLval_36));
            }
            {
              ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_37, ml_backend__ml_foreign_proc_gen__VarType_35, ml_backend__ml_foreign_proc_gen__OrigType_13, ml_backend__ml_foreign_proc_gen__BoxPolicy_14, ml_backend__ml_foreign_proc_gen__Var_46, &ml_backend__ml_foreign_proc_gen__ArgRval_39);
            }
          }
          break;
      }
      {
        ml_backend__ml_foreign_proc_gen__ExportedType_40 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_37, ml_backend__ml_foreign_proc_gen__OrigType_13);
      }
      {
        ml_backend__ml_foreign_proc_gen__TypeString_41 = backend_libs__foreign__exported_type_to_string_2_f_0(ml_backend__ml_foreign_proc_gen__Lang_6, ml_backend__ml_foreign_proc_gen__ExportedType_40);
      }
      {
        hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_37, &ml_backend__ml_foreign_proc_gen__Globals_42);
      }
      {
        libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_42, (MR_Integer) 265, &ml_backend__ml_foreign_proc_gen__HighLevelData_43);
      }
      {
        ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(ml_backend__ml_foreign_proc_gen__Lang_6, ml_backend__ml_foreign_proc_gen__HighLevelData_43, ml_backend__ml_foreign_proc_gen__OrigType_13, ml_backend__ml_foreign_proc_gen__ExportedType_40, ml_backend__ml_foreign_proc_gen__TypeString_41, &ml_backend__ml_foreign_proc_gen__Cast_44);
      }
      if (ml_backend__ml_foreign_proc_gen__succeeded)
      {
        MR_String ml_backend__ml_foreign_proc_gen__AssignToArgName_45;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_54;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_55;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_56;
        MR_String ml_backend__ml_foreign_proc_gen__Var_76;
        MR_String ml_backend__ml_foreign_proc_gen__Var_78;
        MR_String ml_backend__ml_foreign_proc_gen__Var_79;

        {
          ml_backend__ml_foreign_proc_gen__Var_76 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__Cast_44, (MR_String) " ");
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_78 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ml_backend__ml_foreign_proc_gen__Var_76);
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_79 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_15, ml_backend__ml_foreign_proc_gen__Var_78);
        }
        {
          ml_backend__ml_foreign_proc_gen__AssignToArgName_45 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__Var_79);
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_54, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignToArgName_45));
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_56, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgRval_39));
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_55, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_56));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[18])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_foreign_proc_gen__AssignInput_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_54));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_55));
        }
      }
      else
      {
        MR_Word ml_backend__ml_foreign_proc_gen__Var_61;
        MR_String ml_backend__ml_foreign_proc_gen__Var_62;
        MR_String ml_backend__ml_foreign_proc_gen__Var_64;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_66;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_67;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_68;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_69;
        MR_String ml_backend__ml_foreign_proc_gen__Var_70;
        MR_String ml_backend__ml_foreign_proc_gen__Var_72;

        {
          ml_backend__ml_foreign_proc_gen__Var_64 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_41, (MR_String) ", ");
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", ml_backend__ml_foreign_proc_gen__Var_64);
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_61, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_62));
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_67, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgRval_39));
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_72 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_15, (MR_String) ");\n");
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_70 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ml_backend__ml_foreign_proc_gen__Var_72);
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_69, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_70));
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_68, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_69));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_66, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_67));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_66, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_68));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_foreign_proc_gen__AssignInput_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_61));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_66));
        }
      }
      *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17;
    }
    else
    {
      *ml_backend__ml_foreign_proc_gen__AssignInput_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_7,
  MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_8,
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_9,
  MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_10,
  MR_String ml_backend__ml_foreign_proc_gen__TypeString_11,
  MR_String * ml_backend__ml_foreign_proc_gen__Cast_12)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    switch (ml_backend__ml_foreign_proc_gen__Lang_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (ml_backend__ml_foreign_proc_gen__HighLevelData_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_foreign_proc_gen__Var_15;
              MR_Word ml_backend__ml_foreign_proc_gen__Var_16;

              ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__OrigType_9)) == (MR_mktag((MR_Integer) 0)));
              if (ml_backend__ml_foreign_proc_gen__succeeded)
              {
                ml_backend__ml_foreign_proc_gen__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_9, (MR_Integer) 0)));
                ml_backend__ml_foreign_proc_gen__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_9, (MR_Integer) 1)));
                *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "(MR_Word)";
                ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
              }
              else
              {
                MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_27;

                {
                  ml_backend__ml_foreign_proc_gen__IsForeign_27 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_10);
                }
                if ((ml_backend__ml_foreign_proc_gen__IsForeign_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
                  ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
                }
                else
                {
                  MR_String ml_backend__ml_foreign_proc_gen__Var_19;
                  MR_String ml_backend__ml_foreign_proc_gen__Var_20;
                  MR_String ml_backend__ml_foreign_proc_gen__Var_21;
                  MR_Word ml_backend__ml_foreign_proc_gen__Assertions_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_27, (MR_Integer) 0)));

                  {
                    ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(ml_backend__ml_foreign_proc_gen__Assertions_25);
                  }
                  if (ml_backend__ml_foreign_proc_gen__succeeded)
                  {
                    ml_backend__ml_foreign_proc_gen__Var_19 = (MR_String) "(";
                    ml_backend__ml_foreign_proc_gen__Var_21 = (MR_String) ")";
                    {
                      ml_backend__ml_foreign_proc_gen__Var_20 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_11, ml_backend__ml_foreign_proc_gen__Var_21);
                    }
                    {
                      *ml_backend__ml_foreign_proc_gen__Cast_12 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__Var_19, ml_backend__ml_foreign_proc_gen__Var_20);
                    }
                    ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_13;
              MR_String ml_backend__ml_foreign_proc_gen__Var_22;
              MR_String ml_backend__ml_foreign_proc_gen__Var_23;
              MR_String ml_backend__ml_foreign_proc_gen__Var_24;

              {
                ml_backend__ml_foreign_proc_gen__IsForeign_13 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_10);
              }
              if ((ml_backend__ml_foreign_proc_gen__IsForeign_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
              else
              {
                MR_Word ml_backend__ml_foreign_proc_gen__Assertions_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_13, (MR_Integer) 0)));

                {
                  ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(ml_backend__ml_foreign_proc_gen__Assertions_14);
                }
              }
              if (ml_backend__ml_foreign_proc_gen__succeeded)
              {
                ml_backend__ml_foreign_proc_gen__Var_22 = (MR_String) "(";
                ml_backend__ml_foreign_proc_gen__Var_24 = (MR_String) ")";
                {
                  ml_backend__ml_foreign_proc_gen__Var_23 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_11, ml_backend__ml_foreign_proc_gen__Var_24);
                }
                {
                  *ml_backend__ml_foreign_proc_gen__Cast_12 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__Var_22, ml_backend__ml_foreign_proc_gen__Var_23);
                }
                ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
          ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.input_arg_assignable_with_cast\'/6", (MR_String) "unexpected language");
          }
          ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
          ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
        }
        break;
    }
    return ml_backend__ml_foreign_proc_gen__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__CodeModel_13,
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
  MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_16,
  MR_Word ml_backend__ml_foreign_proc_gen__Args_17,
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
  MR_String ml_backend__ml_foreign_proc_gen__ForeignCode_19,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
  MR_Word * ml_backend__ml_foreign_proc_gen__Stmts_22,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35)
{
  {
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_24;
    MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_25;

    {
      ml_backend__ml_foreign_proc_gen__Lang_24 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
    switch (ml_backend__ml_foreign_proc_gen__CodeModel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32;

          {
            ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32 = parse_tree__prog_data_foreign__get_ordinary_despite_detism_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
          }
          switch (ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32) {
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
              ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_26;
          MR_Word ml_backend__ml_foreign_proc_gen__ProcInfo_28;
          MR_Word ml_backend__ml_foreign_proc_gen__Detism_29;
          MR_Word ml_backend__ml_foreign_proc_gen__MaxSoln_31;
          MR_Word ml_backend__ml_foreign_proc_gen___PredInfo_27;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_30;

          {
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, &ml_backend__ml_foreign_proc_gen__ModuleInfo_26);
          }
          {
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_26, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__ProcId_16, &ml_backend__ml_foreign_proc_gen___PredInfo_27, &ml_backend__ml_foreign_proc_gen__ProcInfo_28);
          }
          {
            hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ml_backend__ml_foreign_proc_gen__ProcInfo_28, &ml_backend__ml_foreign_proc_gen__Detism_29);
          }
          {
            parse_tree__prog_data__determinism_components_3_p_0(ml_backend__ml_foreign_proc_gen__Detism_29, &ml_backend__ml_foreign_proc_gen__Var_30, &ml_backend__ml_foreign_proc_gen__MaxSoln_31);
          }
          ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = ((&ml_backend__ml_foreign_proc_gen_vector_common_5[0 + ml_backend__ml_foreign_proc_gen__MaxSoln_31]))->ml_backend__ml_foreign_proc_gen__vector_common_type_5_0__vct_5_f_0;
        }
        break;
    }
    switch (ml_backend__ml_foreign_proc_gen__Lang_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__ForeignCode_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Stmts_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__Target_33;

          {
            ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, &ml_backend__ml_foreign_proc_gen__Target_33);
          }
          switch (ml_backend__ml_foreign_proc_gen__Target_33) {
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
                {
                  ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0((MR_Integer) 1, ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__ForeignCode_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Stmts_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
                }
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
          {
            ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0((MR_Integer) 2, ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__ForeignCode_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Stmts_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
  MR_Word ml_backend__ml_foreign_proc_gen__OrigArgs_17,
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
  MR_String ml_backend__ml_foreign_proc_gen__C_Code_19,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
  MR_Word * ml_backend__ml_foreign_proc_gen__Stmts_22,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45)
{
  {
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_24;
    MR_Word ml_backend__ml_foreign_proc_gen__Args_25;
    MR_Word ml_backend__ml_foreign_proc_gen__ArgDeclsList_26;
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_27;
    MR_Word ml_backend__ml_foreign_proc_gen__AssignOutputsList_28;
    MR_Word ml_backend__ml_foreign_proc_gen__ConvStmts_30;
    MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_31;
    MR_String ml_backend__ml_foreign_proc_gen__ObtainLock_32;
    MR_String ml_backend__ml_foreign_proc_gen__ReleaseLock_33;
    MR_Word ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34;
    MR_Word ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35;
    MR_Word ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36;
    MR_Word ml_backend__ml_foreign_proc_gen__StartingFragments_37;
    MR_Word ml_backend__ml_foreign_proc_gen__EndingFragments_38;
    MR_Word ml_backend__ml_foreign_proc_gen__StartingCCode_40;
    MR_Word ml_backend__ml_foreign_proc_gen__StartingCCodeStmt_41;
    MR_Word ml_backend__ml_foreign_proc_gen__EndingCCode_42;
    MR_Word ml_backend__ml_foreign_proc_gen__EndingCCodeStmt_43;
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46;
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_48;
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_49_49;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_193;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_194;

    {
      ml_backend__ml_foreign_proc_gen__Lang_24 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
    {
      mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ml_backend__ml_foreign_proc_gen__OrigArgs_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, &ml_backend__ml_foreign_proc_gen__Args_25);
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44, ml_backend__ml_foreign_proc_gen__Lang_24, ml_backend__ml_foreign_proc_gen__Args_25, &ml_backend__ml_foreign_proc_gen__ArgDeclsList_26);
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(ml_backend__ml_foreign_proc_gen__Lang_24, ml_backend__ml_foreign_proc_gen__Args_25, &ml_backend__ml_foreign_proc_gen__AssignInputsList_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46);
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(ml_backend__ml_foreign_proc_gen__Args_25, ml_backend__ml_foreign_proc_gen__Context_20, &ml_backend__ml_foreign_proc_gen__AssignOutputsList_28, ml_backend__ml_foreign_proc_gen__Decls_21, &ml_backend__ml_foreign_proc_gen__ConvStmts_30, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47);
    }
    {
      ml_backend__ml_foreign_proc_gen__ThreadSafe_31 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_foreign_proc_gen__ThreadSafe_31, ml_backend__ml_foreign_proc_gen__PredId_15, &ml_backend__ml_foreign_proc_gen__ObtainLock_32, &ml_backend__ml_foreign_proc_gen__ReleaseLock_33);
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_48, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(ml_backend__ml_foreign_proc_gen__Var_48, ml_backend__ml_foreign_proc_gen__Context_20, &ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34, &ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_49_49);
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_49_49, &ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36);
    }
    switch (ml_backend__ml_foreign_proc_gen__OrdinaryKind_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__Var_151;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_156;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_157;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_158;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_159;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_164;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_165;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_166;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_167;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_168;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_171;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_172;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_173;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_178;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_179;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_180;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_183;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_184;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_186;

          {
            ml_backend__ml_foreign_proc_gen__Var_167 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_167, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_173, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_172, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_172, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_173));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_171, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_172));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_168, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[15])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_168, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_171));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_166, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_167));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_166, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_168));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_184 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_184, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_183, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_184));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_180, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_180, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_183));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_186, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_28));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_179, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_180));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_179, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_186));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_178, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_178, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_179));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_165, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_166));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_165, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_178));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_164, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_164, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_165));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_159, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_164));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_158, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_158, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_159));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_157, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_157, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_158));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_156, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_156, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_157));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_151, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_156));
          }
          {
            ml_backend__ml_foreign_proc_gen__StartingFragments_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__Var_151);
          }
          ml_backend__ml_foreign_proc_gen__EndingFragments_38 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[2]);
          *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_49_49;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_39;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_107;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_112;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_113;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_114;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_115;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_120;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_121;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_122;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_123;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_124;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_127;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_128;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_129;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_134;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_135;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_136;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_139;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_140;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_143;

          {
            ml_backend__ml_code_util__ml_success_lval_3_p_0(&ml_backend__ml_foreign_proc_gen__SucceededLval_39, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_49_49, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45);
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_123 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_123, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_129, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_128, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_128, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_129));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_127, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_128));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[15])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_124, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_127));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_122, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_123));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_122, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_124));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_140 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_140, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_139, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_140));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_136, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_139));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_135, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_136));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_134, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_134, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_135));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_121, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_122));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_121, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_134));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_120, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_120, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_121));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_115, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_120));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_114, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_114, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_115));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_113, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_113, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_114));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_112, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_112, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_113));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_107, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_112));
          }
          {
            ml_backend__ml_foreign_proc_gen__StartingFragments_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__Var_107);
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_143, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_39));
          }
          {
            ml_backend__ml_foreign_proc_gen__EndingFragments_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__EndingFragments_38, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_143));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__EndingFragments_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[3])));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__Var_52;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_57;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_58;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_59;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_60;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_68;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_69;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_70;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_71;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_72;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_75;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_76;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_77;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_82;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_83;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_84;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_87;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_88;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_93;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_97;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_98;
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_196;

          {
            ml_backend__ml_code_util__ml_success_lval_3_p_0(&ml_backend__ml_foreign_proc_gen__SucceededLval_196, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_49_49, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45);
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_71, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_77, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_76, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_76, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_77));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_75, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_76));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[15])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_72, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_75));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_70, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_71));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_70, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_72));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_88, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_87, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_88));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_84, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_87));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_93, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_28));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_83, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_84));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_83, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_93));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_82, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_82, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_83));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_69, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_70));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_69, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_82));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_68, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_68, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_69));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[5])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_60, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_68));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_59, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_60));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_58, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_59));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_57, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_58));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_52, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_57));
          }
          {
            ml_backend__ml_foreign_proc_gen__StartingFragments_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__Var_52);
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_98, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_196));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_97, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_98));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
          }
          {
            ml_backend__ml_foreign_proc_gen__EndingFragments_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__EndingFragments_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[10])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__EndingFragments_38, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_97));
          }
        }
        break;
    }
    {
      ml_backend__ml_foreign_proc_gen__StartingCCode_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__StartingCCode_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__StartingCCode_40, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__StartingCCode_40, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__StartingFragments_37));
    }
    {
      ml_backend__ml_foreign_proc_gen__StartingCCodeStmt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__StartingCCodeStmt_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__StartingCCodeStmt_41, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__StartingCCode_40));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__StartingCCodeStmt_41, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
    }
    {
      ml_backend__ml_foreign_proc_gen__EndingCCode_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__EndingCCode_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__EndingCCode_42, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__EndingCCode_42, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__EndingFragments_38));
    }
    {
      ml_backend__ml_foreign_proc_gen__EndingCCodeStmt_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__EndingCCodeStmt_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__EndingCCodeStmt_43, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__EndingCCode_42));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__EndingCCodeStmt_43, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_193, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__StartingCCodeStmt_41));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_193, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ConvStmts_30));
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_194, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__EndingCCodeStmt_43));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      *ml_backend__ml_foreign_proc_gen__Stmts_22 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_foreign_proc_gen__Var_193, ml_backend__ml_foreign_proc_gen__Var_194);
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_2,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    if ((ml_backend__ml_foreign_proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6;
    }
    else
    {
      MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ml_backend__ml_foreign_proc_gen__ForeignArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ml_backend__ml_foreign_proc_gen__Components1_19;
      MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls1_20;
      MR_Word ml_backend__ml_foreign_proc_gen__ConvStmts1_21;
      MR_Word ml_backend__ml_foreign_proc_gen__Components2_22;
      MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls2_23;
      MR_Word ml_backend__ml_foreign_proc_gen__ConvStmts2_24;
      MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 0)));
      MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 1)));
      MR_Word ml_backend__ml_foreign_proc_gen__OrigType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 2)));
      MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 3)));
      MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_44;
      MR_String ml_backend__ml_foreign_proc_gen__ArgName_45;
      MR_Word ml_backend__ml_foreign_proc_gen__Mode_46;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_47;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_48;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_49;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_51;
      MR_Char ml_backend__ml_foreign_proc_gen__Var_54;
      MR_String ml_backend__ml_foreign_proc_gen__Var_53;

      {
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_foreign_proc_gen__ModuleInfo_44);
      }
      ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41)) == (MR_mktag((MR_Integer) 1)));
      if (ml_backend__ml_foreign_proc_gen__succeeded)
      {
        ml_backend__ml_foreign_proc_gen__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41, (MR_Integer) 0)));
        ml_backend__ml_foreign_proc_gen__ArgName_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_47, (MR_Integer) 0)));
        ml_backend__ml_foreign_proc_gen__Mode_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_47, (MR_Integer) 1)));
        ml_backend__ml_foreign_proc_gen__Var_54 = (MR_Char) 95;
        {
          ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_45, ml_backend__ml_foreign_proc_gen__Var_54, &ml_backend__ml_foreign_proc_gen__Var_53);
        }
        ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
        if (ml_backend__ml_foreign_proc_gen__succeeded)
        {
          {
            ml_backend__ml_foreign_proc_gen__Var_48 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_44, ml_backend__ml_foreign_proc_gen__OrigType_42);
          }
          ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Var_48 == (MR_Integer) 1);
          if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            ml_backend__ml_foreign_proc_gen__Var_49 = (MR_Integer) 1;
            {
              check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_44, ml_backend__ml_foreign_proc_gen__Mode_46, ml_backend__ml_foreign_proc_gen__OrigType_42, &ml_backend__ml_foreign_proc_gen__Var_51);
            }
            ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Var_49 == ml_backend__ml_foreign_proc_gen__Var_51);
          }
        }
      }
      if (ml_backend__ml_foreign_proc_gen__succeeded)
        {
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(ml_backend__ml_foreign_proc_gen__Var_40, ml_backend__ml_foreign_proc_gen__ArgName_45, ml_backend__ml_foreign_proc_gen__OrigType_42, ml_backend__ml_foreign_proc_gen__BoxPolicy_43, ml_backend__ml_foreign_proc_gen__Context_2, &ml_backend__ml_foreign_proc_gen__Components1_19, &ml_backend__ml_foreign_proc_gen__ConvDecls1_20, &ml_backend__ml_foreign_proc_gen__ConvStmts1_21, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27);
        }
      else
      {
        ml_backend__ml_foreign_proc_gen__Components1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_foreign_proc_gen__ConvDecls1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_foreign_proc_gen__ConvStmts1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6;
      }
      {
        ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(ml_backend__ml_foreign_proc_gen__ForeignArgs_13, ml_backend__ml_foreign_proc_gen__Context_2, &ml_backend__ml_foreign_proc_gen__Components2_22, &ml_backend__ml_foreign_proc_gen__ConvDecls2_23, &ml_backend__ml_foreign_proc_gen__ConvStmts2_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7);
      }
      {
        *ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__Components1_19, ml_backend__ml_foreign_proc_gen__Components2_22);
      }
      {
        *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ml_backend__ml_foreign_proc_gen__ConvDecls1_20, ml_backend__ml_foreign_proc_gen__ConvDecls2_23);
      }
      {
        *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_foreign_proc_gen__ConvStmts1_21, ml_backend__ml_foreign_proc_gen__ConvStmts2_24);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Var_11,
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_12,
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13,
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_15,
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignOutput_16,
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvDecls_17,
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvOutputStmts_18,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_38,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_39)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Word ml_backend__ml_foreign_proc_gen__VarType_20;
    MR_Word ml_backend__ml_foreign_proc_gen__VarLval_21;
    MR_Word ml_backend__ml_foreign_proc_gen__NonMangledArgVarName_22;
    MR_Word ml_backend__ml_foreign_proc_gen__ArgLval_23;
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_25;
    MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_26;
    MR_String ml_backend__ml_foreign_proc_gen__TypeString_27;
    MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_28;
    MR_Word ml_backend__ml_foreign_proc_gen___ConvInputStmts_24;
    MR_Word ml_backend__ml_foreign_proc_gen__Cast_29;

    {
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_38, ml_backend__ml_foreign_proc_gen__Var_11, &ml_backend__ml_foreign_proc_gen__VarType_20);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_38, ml_backend__ml_foreign_proc_gen__Var_11, &ml_backend__ml_foreign_proc_gen__VarLval_21);
    }
    {
      ml_backend__ml_foreign_proc_gen__NonMangledArgVarName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__NonMangledArgVarName_22, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_12));
    }
    {
      ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_foreign_proc_gen__VarType_20, ml_backend__ml_foreign_proc_gen__OrigType_13, ml_backend__ml_foreign_proc_gen__BoxPolicy_14, ml_backend__ml_foreign_proc_gen__VarLval_21, ml_backend__ml_foreign_proc_gen__NonMangledArgVarName_22, ml_backend__ml_foreign_proc_gen__Context_15, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_foreign_proc_gen__ArgLval_23, ml_backend__ml_foreign_proc_gen__ConvDecls_17, &ml_backend__ml_foreign_proc_gen___ConvInputStmts_24, ml_backend__ml_foreign_proc_gen__ConvOutputStmts_18, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_38, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_39);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_39, &ml_backend__ml_foreign_proc_gen__ModuleInfo_25);
    }
    {
      ml_backend__ml_foreign_proc_gen__ExportedType_26 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_25, ml_backend__ml_foreign_proc_gen__OrigType_13);
    }
    {
      ml_backend__ml_foreign_proc_gen__TypeString_27 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, ml_backend__ml_foreign_proc_gen__ExportedType_26);
    }
    {
      ml_backend__ml_foreign_proc_gen__IsForeign_28 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_26);
    }
    if ((ml_backend__ml_foreign_proc_gen__IsForeign_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      ml_backend__ml_foreign_proc_gen__Cast_29 = (MR_Integer) 0;
      ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word ml_backend__ml_foreign_proc_gen__Assertions_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_28, (MR_Integer) 0)));

      {
        ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(ml_backend__ml_foreign_proc_gen__Assertions_30);
      }
      if (ml_backend__ml_foreign_proc_gen__succeeded)
      {
        ml_backend__ml_foreign_proc_gen__Cast_29 = (MR_Integer) 1;
        ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
      }
    }
    if (ml_backend__ml_foreign_proc_gen__succeeded)
    {
      MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_31;
      MR_String ml_backend__ml_foreign_proc_gen__LHS_Cast_32;
      MR_String ml_backend__ml_foreign_proc_gen__RHS_Cast_33;
      MR_String ml_backend__ml_foreign_proc_gen__AssignFromArgName_36;
      MR_String ml_backend__ml_foreign_proc_gen__AssignTo_37;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_57;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_58;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_59;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_60;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_61;
      MR_String ml_backend__ml_foreign_proc_gen__Var_78;
      MR_String ml_backend__ml_foreign_proc_gen__Var_79;
      MR_String ml_backend__ml_foreign_proc_gen__Var_82;

      {
        ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_39, &ml_backend__ml_foreign_proc_gen__HighLevelData_31);
      }
      switch (ml_backend__ml_foreign_proc_gen__HighLevelData_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              MR_Word ml_backend__ml_foreign_proc_gen__Var_34;
              MR_Word ml_backend__ml_foreign_proc_gen__Var_35;

              ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__OrigType_13)) == (MR_mktag((MR_Integer) 0)));
              if (ml_backend__ml_foreign_proc_gen__succeeded)
              {
                ml_backend__ml_foreign_proc_gen__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_13, (MR_Integer) 0)));
                ml_backend__ml_foreign_proc_gen__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_13, (MR_Integer) 1)));
              }
            }
            if (!(ml_backend__ml_foreign_proc_gen__succeeded))
              ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Cast_29 == (MR_Integer) 1);
            if (ml_backend__ml_foreign_proc_gen__succeeded)
              ml_backend__ml_foreign_proc_gen__RHS_Cast_33 = (MR_String) "(MR_Box) ";
            else
              ml_backend__ml_foreign_proc_gen__RHS_Cast_33 = (MR_String) "";
            ml_backend__ml_foreign_proc_gen__LHS_Cast_32 = (MR_String) "";
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ml_backend__ml_foreign_proc_gen__Var_45;

            {
              ml_backend__ml_foreign_proc_gen__Var_45 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_27, (MR_String) " *) &");
            }
            {
              ml_backend__ml_foreign_proc_gen__LHS_Cast_32 = mercury__string__f_43_43_2_f_0((MR_String) "* (", ml_backend__ml_foreign_proc_gen__Var_45);
            }
            ml_backend__ml_foreign_proc_gen__RHS_Cast_33 = (MR_String) "";
          }
          break;
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_78 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_12, (MR_String) ";\n");
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_79 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__RHS_Cast_33, ml_backend__ml_foreign_proc_gen__Var_78);
      }
      {
        ml_backend__ml_foreign_proc_gen__AssignFromArgName_36 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ml_backend__ml_foreign_proc_gen__Var_79);
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_82 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__LHS_Cast_32, (MR_String) " ");
      }
      {
        ml_backend__ml_foreign_proc_gen__AssignTo_37 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__Var_82);
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignTo_37));
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgLval_23));
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_61, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignFromArgName_36));
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_61));
        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_59));
        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_58, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_60));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ml_backend__ml_foreign_proc_gen__AssignOutput_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_57));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_58));
      }
    }
    else
    {
      MR_Word ml_backend__ml_foreign_proc_gen__Var_63;
      MR_String ml_backend__ml_foreign_proc_gen__Var_64;
      MR_String ml_backend__ml_foreign_proc_gen__Var_66;
      MR_String ml_backend__ml_foreign_proc_gen__Var_67;
      MR_String ml_backend__ml_foreign_proc_gen__Var_69;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_71;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_72;

      {
        ml_backend__ml_foreign_proc_gen__Var_69 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_12, (MR_String) ", ");
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_67 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ml_backend__ml_foreign_proc_gen__Var_69);
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_66 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_27, ml_backend__ml_foreign_proc_gen__Var_67);
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(", ml_backend__ml_foreign_proc_gen__Var_66);
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_63, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_64));
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_72, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgLval_23));
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_71, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_72));
        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[15])));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ml_backend__ml_foreign_proc_gen__AssignOutput_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_63));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_71));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_2,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    if ((ml_backend__ml_foreign_proc_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ml_backend__ml_foreign_proc_gen__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_foreign_proc_gen__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_foreign_proc_gen__Decl_11;
      MR_Word ml_backend__ml_foreign_proc_gen__Decls_12;
      MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 1)));
      MR_Word ml_backend__ml_foreign_proc_gen__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 2)));
      MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 3)));
      MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_21;
      MR_String ml_backend__ml_foreign_proc_gen__DeclString_25;
      MR_Word ml_backend__ml_foreign_proc_gen___Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 0)));
      MR_String ml_backend__ml_foreign_proc_gen__ArgName_22;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_26;
      MR_Word ml_backend__ml_foreign_proc_gen___Mode_23;
      MR_Char ml_backend__ml_foreign_proc_gen__Var_41;
      MR_String ml_backend__ml_foreign_proc_gen__Var_40;

      {
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_1, &ml_backend__ml_foreign_proc_gen__ModuleInfo_21);
      }
      ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18)) == (MR_mktag((MR_Integer) 1)));
      if (ml_backend__ml_foreign_proc_gen__succeeded)
      {
        ml_backend__ml_foreign_proc_gen__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18, (MR_Integer) 0)));
        ml_backend__ml_foreign_proc_gen__ArgName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_26, (MR_Integer) 0)));
        ml_backend__ml_foreign_proc_gen___Mode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_26, (MR_Integer) 1)));
        ml_backend__ml_foreign_proc_gen__Var_41 = (MR_Char) 95;
        {
          ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_22, ml_backend__ml_foreign_proc_gen__Var_41, &ml_backend__ml_foreign_proc_gen__Var_40);
        }
        ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
      }
      if (ml_backend__ml_foreign_proc_gen__succeeded)
      {
        MR_String ml_backend__ml_foreign_proc_gen__TypeString_24;
        MR_String ml_backend__ml_foreign_proc_gen__Var_34;
        MR_String ml_backend__ml_foreign_proc_gen__Var_36;
        MR_String ml_backend__ml_foreign_proc_gen__Var_37;

        switch (ml_backend__ml_foreign_proc_gen__BoxPolicy_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ml_backend__ml_foreign_proc_gen__TypeString_24 = (MR_String) "MR_Word";
            break;
          case (MR_Integer) 0:
            {
              ml_backend__ml_foreign_proc_gen__TypeString_24 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_21, ml_backend__ml_foreign_proc_gen__Lang_2, ml_backend__ml_foreign_proc_gen__Type_19);
            }
            break;
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_34 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_22, (MR_String) ";\n");
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_36 = mercury__string__f_43_43_2_f_0((MR_String) " ", ml_backend__ml_foreign_proc_gen__Var_34);
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_37 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_24, ml_backend__ml_foreign_proc_gen__Var_36);
        }
        {
          ml_backend__ml_foreign_proc_gen__DeclString_25 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__Var_37);
        }
      }
      else
        ml_backend__ml_foreign_proc_gen__DeclString_25 = (MR_String) "";
      {
        ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Decl_11, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__DeclString_25));
      }
      {
        ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(ml_backend__ml_foreign_proc_gen__Info_1, ml_backend__ml_foreign_proc_gen__Lang_2, ml_backend__ml_foreign_proc_gen__Args_10, &ml_backend__ml_foreign_proc_gen__Decls_12);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Decl_11));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Decls_12));
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Info_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_4)
{
  {
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_5;
    MR_Word ml_backend__ml_foreign_proc_gen__PredId_6;
    MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_7;
    MR_Word ml_backend__ml_foreign_proc_gen__Module_8;
    MR_Word ml_backend__ml_foreign_proc_gen__PlainFuncName_9;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_12;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_13;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_14;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_15;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_3, &ml_backend__ml_foreign_proc_gen__ModuleInfo_5);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_foreign_proc_gen__Info_3, &ml_backend__ml_foreign_proc_gen__PredId_6);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_foreign_proc_gen__Info_3, &ml_backend__ml_foreign_proc_gen__ProcId_7);
    }
    {
      ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_5, ml_backend__ml_foreign_proc_gen__PredId_6, ml_backend__ml_foreign_proc_gen__ProcId_7, &ml_backend__ml_foreign_proc_gen__Module_8, &ml_backend__ml_foreign_proc_gen__PlainFuncName_9);
    }
    ml_backend__ml_foreign_proc_gen__Var_15 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_foreign_proc_gen__PlainFuncName_9);
    {
      ml_backend__ml_foreign_proc_gen__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_14, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Module_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_14, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_15));
    }
    ml_backend__ml_foreign_proc_gen__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_foreign_proc_gen__Var_14);
    {
      ml_backend__ml_foreign_proc_gen__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_12, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_13));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_foreign_proc_gen__HashDefine_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[13])));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3(
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

    (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14 = ((MR_String) (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14);
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(ml_backend__ml_foreign_proc_gen__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

    {
      MR_Integer ml_backend__ml_foreign_proc_gen__Var_15;

      (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__Var_27 = (MR_String) "MR_ALLOC_ID";
      {
        (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = mercury__string__sub_string_search_3_p_0((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14, (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__Var_27, &ml_backend__ml_foreign_proc_gen__Var_15);
      }
      if ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
        {
          ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(ml_backend__ml_foreign_proc_gen__env_ptr);
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_43_43;

          (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13 == (MR_Integer) 1);
          if ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
          {
            ml_backend__ml_foreign_proc_gen__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mercury__list__member_2_p_1(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_43_43, &(ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14, (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7, ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3, ml_backend__ml_foreign_proc_gen__env_ptr);
            }
          }
        }
        (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__C_Codes_7,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_8,
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_9,
  MR_Word * ml_backend__ml_foreign_proc_gen__HashUndef_10,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25)
{
  {
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s ml_backend__ml_foreign_proc_gen__env;

    (ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7 = ml_backend__ml_foreign_proc_gen__C_Codes_7;
    {
      MR_Word ml_backend__ml_foreign_proc_gen__Globals_12;

      {
        ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__Globals_12);
      }
      {
        libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_12, (MR_Integer) 205, &(ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13);
      }
      {
        ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(&ml_backend__ml_foreign_proc_gen__env);
      }
      if ((ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
      {
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_16;
        MR_Word ml_backend__ml_foreign_proc_gen__PredId_17;
        MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_18;
        MR_Word ml_backend__ml_foreign_proc_gen__GlobalData0_19;
        MR_Word ml_backend__ml_foreign_proc_gen__ProcLabel_21;
        MR_Word ml_backend__ml_foreign_proc_gen__AllocId_22;
        MR_Word ml_backend__ml_foreign_proc_gen__GlobalData_23;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_28;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_34;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_35;
        MR_Word ml_backend__ml_foreign_proc_gen___Module_20;

        {
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__ModuleInfo_16);
        }
        {
          ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__PredId_17);
        }
        {
          ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__ProcId_18);
        }
        {
          ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__GlobalData0_19);
        }
        {
          ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_16, ml_backend__ml_foreign_proc_gen__PredId_17, ml_backend__ml_foreign_proc_gen__ProcId_18, &ml_backend__ml_foreign_proc_gen___Module_20, &ml_backend__ml_foreign_proc_gen__ProcLabel_21);
        }
        ml_backend__ml_foreign_proc_gen__Var_28 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_foreign_proc_gen__ProcLabel_21);
        {
          ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(ml_backend__ml_foreign_proc_gen__Var_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, ml_backend__ml_foreign_proc_gen__Context_8, &ml_backend__ml_foreign_proc_gen__AllocId_22, ml_backend__ml_foreign_proc_gen__GlobalData0_19, &ml_backend__ml_foreign_proc_gen__GlobalData_23);
        }
        {
          ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_foreign_proc_gen__GlobalData_23, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25);
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_35, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AllocId_22));
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_34, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_35));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_foreign_proc_gen__HashDefine_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[11])));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_34));
        }
        *ml_backend__ml_foreign_proc_gen__HashUndef_10 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[14]);
      }
      else
      {
        *ml_backend__ml_foreign_proc_gen__HashDefine_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_foreign_proc_gen__HashUndef_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24;
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Info_6,
  MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_7,
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_8,
  MR_String * ml_backend__ml_foreign_proc_gen__ObtainLock_9,
  MR_String * ml_backend__ml_foreign_proc_gen__ReleaseLock_10)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_11;
    MR_Word ml_backend__ml_foreign_proc_gen__Globals_12;
    MR_Word ml_backend__ml_foreign_proc_gen__Parallel_13;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_6, &ml_backend__ml_foreign_proc_gen__ModuleInfo_11);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_11, &ml_backend__ml_foreign_proc_gen__Globals_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_12, (MR_Integer) 227, &ml_backend__ml_foreign_proc_gen__Parallel_13);
    }
    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Parallel_13 == (MR_Integer) 1);
    if (ml_backend__ml_foreign_proc_gen__succeeded)
      ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__ThreadSafe_7 == (MR_Integer) 0);
    if (ml_backend__ml_foreign_proc_gen__succeeded)
    {
      MR_Word ml_backend__ml_foreign_proc_gen__PredInfo_14;
      MR_String ml_backend__ml_foreign_proc_gen__Name_15;
      MR_String ml_backend__ml_foreign_proc_gen__MangledName_16;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_18;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_20;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_24;

      {
        hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_11, ml_backend__ml_foreign_proc_gen__PredId_8, &ml_backend__ml_foreign_proc_gen__PredInfo_14);
      }
      {
        ml_backend__ml_foreign_proc_gen__Name_15 = hlds__hlds_pred__pred_info_name_1_f_0(ml_backend__ml_foreign_proc_gen__PredInfo_14);
      }
      {
        ml_backend__ml_foreign_proc_gen__MangledName_16 = backend_libs__c_util__quote_string_1_f_0(ml_backend__ml_foreign_proc_gen__Name_15);
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_20, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MangledName_16));
        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[13])));
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_18, 0) = ((MR_Box) ((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\""));
        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_18, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_20));
      }
      {
        mercury__string__append_list_2_p_0(ml_backend__ml_foreign_proc_gen__Var_18, ml_backend__ml_foreign_proc_gen__ObtainLock_9);
      }
      {
        ml_backend__ml_foreign_proc_gen__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_24, 0) = ((MR_Box) ((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\""));
        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_24, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_20));
      }
      {
        mercury__string__append_list_2_p_0(ml_backend__ml_foreign_proc_gen__Var_24, ml_backend__ml_foreign_proc_gen__ReleaseLock_10);
      }
    }
    else
    {
      *ml_backend__ml_foreign_proc_gen__ObtainLock_9 = (MR_String) "";
      *ml_backend__ml_foreign_proc_gen__ReleaseLock_10 = (MR_String) "";
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1(
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;

    {
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__198__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_foreign_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__TargetLang_14,
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_15,
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_16,
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_17,
  MR_Word ml_backend__ml_foreign_proc_gen__Args_19,
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
  MR_String ml_backend__ml_foreign_proc_gen__JavaCode_21,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_22,
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_23,
  MR_Word * ml_backend__ml_foreign_proc_gen__Stmts_24,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_105_105;
    MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_106_106;
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_26;
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_27;
    MR_Word ml_backend__ml_foreign_proc_gen__PredInfo_28;
    MR_Word ml_backend__ml_foreign_proc_gen__Markers_29;
    MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_30;
    MR_Word ml_backend__ml_foreign_proc_gen__ArgDeclsList_31;
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_32;
    MR_Word ml_backend__ml_foreign_proc_gen__AssignOutputsList_33;
    MR_Word ml_backend__ml_foreign_proc_gen__ConvStmts_35;
    MR_Word ml_backend__ml_foreign_proc_gen__SucceededDecl_36;
    MR_Word ml_backend__ml_foreign_proc_gen__AssignSucceeded_37;
    MR_Word ml_backend__ml_foreign_proc_gen__StartingFragments_40;
    MR_Word ml_backend__ml_foreign_proc_gen__StartingCode_41;
    MR_Word ml_backend__ml_foreign_proc_gen__StartingCodeStmt_42;
    MR_Word ml_backend__ml_foreign_proc_gen__EndingFragments_43;
    MR_Word ml_backend__ml_foreign_proc_gen__EndingCode_44;
    MR_Word ml_backend__ml_foreign_proc_gen__EndingCodeStmt_45;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_49;
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_53_53;
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_79;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_84;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_85;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_86;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_87;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_88;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_89;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_90;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_97;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_99;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_100;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_101;

    {
      ml_backend__ml_foreign_proc_gen__Lang_26 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_16);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_foreign_proc_gen__ModuleInfo_27);
    }
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_27, ml_backend__ml_foreign_proc_gen__PredId_17, &ml_backend__ml_foreign_proc_gen__PredInfo_28);
    }
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(ml_backend__ml_foreign_proc_gen__PredInfo_28, &ml_backend__ml_foreign_proc_gen__Markers_29);
    }
    {
      ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_pred__check_marker_2_p_0(ml_backend__ml_foreign_proc_gen__Markers_29, (MR_Integer) 24);
    }
    if (ml_backend__ml_foreign_proc_gen__succeeded)
      ml_backend__ml_foreign_proc_gen__MutableSpecial_30 = (MR_Integer) 0;
    else
      ml_backend__ml_foreign_proc_gen__MutableSpecial_30 = (MR_Integer) 1;
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, ml_backend__ml_foreign_proc_gen__MutableSpecial_30, ml_backend__ml_foreign_proc_gen__Args_19, &ml_backend__ml_foreign_proc_gen__ArgDeclsList_31);
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_49, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_49, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_49, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_3_p_0(ml_backend__ml_foreign_proc_gen__Var_49, (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_csharp_java_proc\'/13", (MR_String) "extra args");
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(ml_backend__ml_foreign_proc_gen__Lang_26, ml_backend__ml_foreign_proc_gen__Args_19, &ml_backend__ml_foreign_proc_gen__AssignInputsList_32, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_53_53);
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(ml_backend__ml_foreign_proc_gen__MutableSpecial_30, ml_backend__ml_foreign_proc_gen__Args_19, ml_backend__ml_foreign_proc_gen__Context_22, &ml_backend__ml_foreign_proc_gen__AssignOutputsList_33, ml_backend__ml_foreign_proc_gen__Decls_23, &ml_backend__ml_foreign_proc_gen__ConvStmts_35, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_53_53, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54);
    }
    switch (ml_backend__ml_foreign_proc_gen__OrdinaryKind_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__Var_58;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_59;
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_103;

          {
            ml_backend__ml_code_util__ml_success_lval_3_p_0(&ml_backend__ml_foreign_proc_gen__SucceededLval_103, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47);
          }
          ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            ml_backend__ml_foreign_proc_gen__Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_103));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_59));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[9])));
          }
          {
            ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[7])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_58));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_38;
          MR_String ml_backend__ml_foreign_proc_gen__BoolType_39;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_65;
          MR_String ml_backend__ml_foreign_proc_gen__Var_66;
          MR_String ml_backend__ml_foreign_proc_gen__Var_68;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_73;
          MR_Word ml_backend__ml_foreign_proc_gen__Var_74;

          {
            ml_backend__ml_code_util__ml_success_lval_3_p_0(&ml_backend__ml_foreign_proc_gen__SucceededLval_38, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47);
          }
          switch (ml_backend__ml_foreign_proc_gen__TargetLang_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              ml_backend__ml_foreign_proc_gen__BoolType_39 = (MR_String) "bool";
              break;
            case (MR_Integer) 2:
              ml_backend__ml_foreign_proc_gen__BoolType_39 = (MR_String) "boolean";
              break;
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_68 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__BoolType_39, (MR_String) " SUCCESS_INDICATOR;\n");
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__Var_68);
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_65, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_66));
          }
          {
            ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SucceededDecl_36, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_65));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SucceededDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Var_74, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_38));
          }
          {
            ml_backend__ml_foreign_proc_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_73, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_74));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[10])));
          }
          {
            ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[7])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_73));
          }
        }
        break;
    }
    ml_backend__ml_foreign_proc_gen__TypeCtorInfo_105_105 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0;
    {
      ml_backend__ml_foreign_proc_gen__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_90, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_22));
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_89, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__JavaCode_21));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_89, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_90));
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_88, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_89));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_87, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_88));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_86, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_32));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_86, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_87));
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_85, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededDecl_36));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_85, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_86));
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_84, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_31));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_84, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_85));
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_79, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11])));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_79, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_84));
    }
    {
      ml_backend__ml_foreign_proc_gen__StartingFragments_40 = mercury__list__condense_1_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_105_105, ml_backend__ml_foreign_proc_gen__Var_79);
    }
    {
      ml_backend__ml_foreign_proc_gen__StartingCode_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__StartingCode_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__StartingCode_41, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TargetLang_14));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__StartingCode_41, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__StartingFragments_40));
    }
    {
      ml_backend__ml_foreign_proc_gen__StartingCodeStmt_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__StartingCodeStmt_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__StartingCodeStmt_42, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__StartingCode_41));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__StartingCodeStmt_42, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_22));
    }
    {
      ml_backend__ml_foreign_proc_gen__EndingFragments_43 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_105_105, ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[12]));
    }
    {
      ml_backend__ml_foreign_proc_gen__EndingCode_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__EndingCode_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__EndingCode_44, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TargetLang_14));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__EndingCode_44, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__EndingFragments_43));
    }
    {
      ml_backend__ml_foreign_proc_gen__EndingCodeStmt_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__EndingCodeStmt_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__EndingCodeStmt_45, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__EndingCode_44));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__EndingCodeStmt_45, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_22));
    }
    ml_backend__ml_foreign_proc_gen__TypeCtorInfo_106_106 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
    {
      ml_backend__ml_foreign_proc_gen__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_97, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__StartingCodeStmt_42));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_101, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__EndingCodeStmt_45));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_100 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_106_106, ml_backend__ml_foreign_proc_gen__ConvStmts_35, ml_backend__ml_foreign_proc_gen__Var_101);
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_99 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_106_106, ml_backend__ml_foreign_proc_gen__AssignOutputsList_33, ml_backend__ml_foreign_proc_gen__Var_100);
    }
    {
      *ml_backend__ml_foreign_proc_gen__Stmts_24 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_106_106, ml_backend__ml_foreign_proc_gen__Var_97, ml_backend__ml_foreign_proc_gen__Var_99);
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_1,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__6_6,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    if ((ml_backend__ml_foreign_proc_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_foreign_proc_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7;
    }
    else
    {
      MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32;
      MR_Word ml_backend__ml_foreign_proc_gen__JavaArg_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ml_backend__ml_foreign_proc_gen__JavaArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ml_backend__ml_foreign_proc_gen__Stmts1_22;
      MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls1_23;
      MR_Word ml_backend__ml_foreign_proc_gen__ConvStmts1_24;
      MR_Word ml_backend__ml_foreign_proc_gen__Stmts2_25;
      MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls2_26;
      MR_Word ml_backend__ml_foreign_proc_gen__ConvStmts2_27;
      MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 0)));
      MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 1)));
      MR_Word ml_backend__ml_foreign_proc_gen__OrigType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 2)));
      MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 3)));
      MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_47;
      MR_String ml_backend__ml_foreign_proc_gen__ArgName_48;
      MR_Word ml_backend__ml_foreign_proc_gen__Mode_49;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_61;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_62;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_63;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_72;
      MR_Char ml_backend__ml_foreign_proc_gen__Var_77;
      MR_String ml_backend__ml_foreign_proc_gen__Var_76;

      {
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, &ml_backend__ml_foreign_proc_gen__ModuleInfo_47);
      }
      ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44)) == (MR_mktag((MR_Integer) 1)));
      if (ml_backend__ml_foreign_proc_gen__succeeded)
      {
        ml_backend__ml_foreign_proc_gen__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44, (MR_Integer) 0)));
        ml_backend__ml_foreign_proc_gen__ArgName_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_61, (MR_Integer) 0)));
        ml_backend__ml_foreign_proc_gen__Mode_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_61, (MR_Integer) 1)));
        ml_backend__ml_foreign_proc_gen__Var_77 = (MR_Char) 95;
        {
          ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_48, ml_backend__ml_foreign_proc_gen__Var_77, &ml_backend__ml_foreign_proc_gen__Var_76);
        }
        ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
        if (ml_backend__ml_foreign_proc_gen__succeeded)
        {
          {
            ml_backend__ml_foreign_proc_gen__Var_62 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__OrigType_45);
          }
          ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Var_62 == (MR_Integer) 1);
          if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            ml_backend__ml_foreign_proc_gen__Var_63 = (MR_Integer) 1;
            {
              check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__Mode_49, ml_backend__ml_foreign_proc_gen__OrigType_45, &ml_backend__ml_foreign_proc_gen__Var_72);
            }
            ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Var_63 == ml_backend__ml_foreign_proc_gen__Var_72);
          }
        }
      }
      if (ml_backend__ml_foreign_proc_gen__succeeded)
      {
        MR_Word ml_backend__ml_foreign_proc_gen__VarType_50;
        MR_Word ml_backend__ml_foreign_proc_gen__VarLval_51;
        MR_Word ml_backend__ml_foreign_proc_gen__NonMangledArgVarName_52;
        MR_Word ml_backend__ml_foreign_proc_gen__ArgLval_53;
        MR_Word ml_backend__ml_foreign_proc_gen__MLDSType_55;
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleName_56;
        MR_Word ml_backend__ml_foreign_proc_gen__MLDSModuleName_57;
        MR_Word ml_backend__ml_foreign_proc_gen__QualLocalVarName_58;
        MR_Word ml_backend__ml_foreign_proc_gen__LocalVarLval_59;
        MR_Word ml_backend__ml_foreign_proc_gen__Rval_60;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_70;
        MR_Word ml_backend__ml_foreign_proc_gen___ConvInputStmts_54;

        {
          ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, ml_backend__ml_foreign_proc_gen__Var_43, &ml_backend__ml_foreign_proc_gen__VarType_50);
        }
        {
          ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, ml_backend__ml_foreign_proc_gen__Var_43, &ml_backend__ml_foreign_proc_gen__VarLval_51);
        }
        {
          ml_backend__ml_foreign_proc_gen__NonMangledArgVarName_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__NonMangledArgVarName_52, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_48));
        }
        {
          ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_foreign_proc_gen__VarType_50, ml_backend__ml_foreign_proc_gen__OrigType_45, ml_backend__ml_foreign_proc_gen__BoxPolicy_46, ml_backend__ml_foreign_proc_gen__VarLval_51, ml_backend__ml_foreign_proc_gen__NonMangledArgVarName_52, ml_backend__ml_foreign_proc_gen__Context_3, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_foreign_proc_gen__ArgLval_53, &ml_backend__ml_foreign_proc_gen__ConvDecls1_23, &ml_backend__ml_foreign_proc_gen___ConvInputStmts_54, &ml_backend__ml_foreign_proc_gen__ConvStmts1_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30);
        }
        {
          ml_backend__ml_foreign_proc_gen__MLDSType_55 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__OrigType_45);
        }
        {
          hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, &ml_backend__ml_foreign_proc_gen__ModuleName_56);
        }
        {
          ml_backend__ml_foreign_proc_gen__MLDSModuleName_57 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_foreign_proc_gen__ModuleName_56);
        }
        {
          ml_backend__ml_foreign_proc_gen__QualLocalVarName_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_57));
          MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__NonMangledArgVarName_52));
        }
        {
          ml_backend__ml_foreign_proc_gen__LocalVarLval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__QualLocalVarName_58));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_59, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_55));
        }
        switch (ml_backend__ml_foreign_proc_gen__MutableSpecial_1) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_foreign_proc_gen__Var_73;

              {
                ml_backend__ml_foreign_proc_gen__Var_73 = parse_tree__builtin_lib_types__int_type_0_f_0();
              }
              {
                ml_backend__ml_foreign_proc_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_foreign_proc_gen__OrigType_45, ml_backend__ml_foreign_proc_gen__Var_73);
              }
              if (ml_backend__ml_foreign_proc_gen__succeeded)
                {
                  ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
                }
              else
              {
                MR_Word ml_backend__ml_foreign_proc_gen__Var_68;
                MR_Word ml_backend__ml_foreign_proc_gen__Var_69;

                {
                  ml_backend__ml_foreign_proc_gen__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_68, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_55));
                }
                {
                  ml_backend__ml_foreign_proc_gen__Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_69, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
                }
                {
                  ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_68));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_69));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
            }
            break;
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_70 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_foreign_proc_gen__ArgLval_53, ml_backend__ml_foreign_proc_gen__Rval_60, ml_backend__ml_foreign_proc_gen__Context_3);
        }
        {
          ml_backend__ml_foreign_proc_gen__Stmts1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Stmts1_22, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_70));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Stmts1_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        ml_backend__ml_foreign_proc_gen__Stmts1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_foreign_proc_gen__ConvDecls1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_foreign_proc_gen__ConvStmts1_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7;
      }
      {
        ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(ml_backend__ml_foreign_proc_gen__MutableSpecial_1, ml_backend__ml_foreign_proc_gen__JavaArgs_16, ml_backend__ml_foreign_proc_gen__Context_3, &ml_backend__ml_foreign_proc_gen__Stmts2_25, &ml_backend__ml_foreign_proc_gen__ConvDecls2_26, &ml_backend__ml_foreign_proc_gen__ConvStmts2_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8);
      }
      ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
      {
        *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32, ml_backend__ml_foreign_proc_gen__Stmts1_22, ml_backend__ml_foreign_proc_gen__Stmts2_25);
      }
      {
        *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0, ml_backend__ml_foreign_proc_gen__ConvDecls1_23, ml_backend__ml_foreign_proc_gen__ConvDecls2_26);
      }
      {
        *ml_backend__ml_foreign_proc_gen__HeadVar__6_6 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32, ml_backend__ml_foreign_proc_gen__ConvStmts1_24, ml_backend__ml_foreign_proc_gen__ConvStmts2_27);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1(
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3,
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;
    MR_Word ml_backend__ml_foreign_proc_gen__conv1_AssignInput_8;
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_STATE_VARIABLE_Info_18;

    {
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), &ml_backend__ml_foreign_proc_gen__conv1_AssignInput_8, ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_3), &ml_backend__ml_foreign_proc_gen__conv0_STATE_VARIABLE_Info_18);
    }
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv1_AssignInput_8));
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
  MR_Word ml_backend__ml_foreign_proc_gen__ArgList_7,
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInputs_8,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_12)
{
  {
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_10;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_13;
    MR_Box ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12;

    {
      ml_backend__ml_foreign_proc_gen__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_13, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_13, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_13, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Lang_6));
    }
    {
      mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[1], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_foreign_proc_gen__Var_13, ml_backend__ml_foreign_proc_gen__ArgList_7, &ml_backend__ml_foreign_proc_gen__AssignInputsList_10, ((MR_Box) (ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11)), &ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12);
    }
    *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_12 = ((MR_Word) ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12);
    {
      mercury__list__condense_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__AssignInputsList_10, ml_backend__ml_foreign_proc_gen__AssignInputs_8);
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_2,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    if ((ml_backend__ml_foreign_proc_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word ml_backend__ml_foreign_proc_gen__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ml_backend__ml_foreign_proc_gen__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ml_backend__ml_foreign_proc_gen__Decl_11;
      MR_Word ml_backend__ml_foreign_proc_gen__Decls_12;
      MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 1)));
      MR_Word ml_backend__ml_foreign_proc_gen__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 2)));
      MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_22;
      MR_Word ml_backend__ml_foreign_proc_gen___Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 0)));
      MR_Word ml_backend__ml_foreign_proc_gen___BoxPolicy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 3)));
      MR_String ml_backend__ml_foreign_proc_gen__ArgName_23;
      MR_Word ml_backend__ml_foreign_proc_gen__Var_29;
      MR_Word ml_backend__ml_foreign_proc_gen___Mode_24;
      MR_Char ml_backend__ml_foreign_proc_gen__Var_43;
      MR_String ml_backend__ml_foreign_proc_gen__Var_42;

      {
        ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_1, &ml_backend__ml_foreign_proc_gen__ModuleInfo_22);
      }
      ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19)) == (MR_mktag((MR_Integer) 1)));
      if (ml_backend__ml_foreign_proc_gen__succeeded)
      {
        ml_backend__ml_foreign_proc_gen__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19, (MR_Integer) 0)));
        ml_backend__ml_foreign_proc_gen__ArgName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_29, (MR_Integer) 0)));
        ml_backend__ml_foreign_proc_gen___Mode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Var_29, (MR_Integer) 1)));
        ml_backend__ml_foreign_proc_gen__Var_43 = (MR_Char) 95;
        {
          ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_23, ml_backend__ml_foreign_proc_gen__Var_43, &ml_backend__ml_foreign_proc_gen__Var_42);
        }
        ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
      }
      if (ml_backend__ml_foreign_proc_gen__succeeded)
      {
        MR_Word ml_backend__ml_foreign_proc_gen__MLDS_Type_25;
        MR_Word ml_backend__ml_foreign_proc_gen__TypeDecl_26;
        MR_String ml_backend__ml_foreign_proc_gen__VarDeclString_27;
        MR_Word ml_backend__ml_foreign_proc_gen__VarDecl_28;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_34;
        MR_String ml_backend__ml_foreign_proc_gen__Var_38;

        switch (ml_backend__ml_foreign_proc_gen__MutableSpecial_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_foreign_proc_gen__Var_36;

              {
                ml_backend__ml_foreign_proc_gen__Var_36 = parse_tree__builtin_lib_types__int_type_0_f_0();
              }
              {
                ml_backend__ml_foreign_proc_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_foreign_proc_gen__Type_20, ml_backend__ml_foreign_proc_gen__Var_36);
              }
              if (ml_backend__ml_foreign_proc_gen__succeeded)
                ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
              else
                ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_22, ml_backend__ml_foreign_proc_gen__Type_20);
            }
            break;
        }
        {
          ml_backend__ml_foreign_proc_gen__TypeDecl_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__TypeDecl_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__TypeDecl_26, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDS_Type_25));
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_38 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_23, (MR_String) ";\n");
        }
        {
          ml_backend__ml_foreign_proc_gen__VarDeclString_27 = mercury__string__f_43_43_2_f_0((MR_String) " ", ml_backend__ml_foreign_proc_gen__Var_38);
        }
        {
          ml_backend__ml_foreign_proc_gen__VarDecl_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__VarDecl_28, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarDeclString_27));
        }
        {
          ml_backend__ml_foreign_proc_gen__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_34, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarDecl_28));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TypeDecl_26));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_34));
        }
      }
      else
        ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(ml_backend__ml_foreign_proc_gen__Info_1, ml_backend__ml_foreign_proc_gen__MutableSpecial_2, ml_backend__ml_foreign_proc_gen__Args_10, &ml_backend__ml_foreign_proc_gen__Decls_12);
      }
      {
        *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__Decl_11, ml_backend__ml_foreign_proc_gen__Decls_12);
      }
    }
  }
}

void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_5_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__TraceRuntimeCond_6,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_7,
  MR_Word * ml_backend__ml_foreign_proc_gen__Stmts_8,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_13,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_14)
{
  {
    MR_Word ml_backend__ml_foreign_proc_gen__SuccessLval_10;
    MR_Word ml_backend__ml_foreign_proc_gen__CondRval_11;
    MR_Word ml_backend__ml_foreign_proc_gen__Stmt_12;
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_15_15;
    MR_Word ml_backend__ml_foreign_proc_gen__Var_17;

    {
      ml_backend__ml_code_util__ml_success_lval_3_p_0(&ml_backend__ml_foreign_proc_gen__SuccessLval_10, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_13, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_15_15);
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__TraceRuntimeCond_6, &ml_backend__ml_foreign_proc_gen__CondRval_11, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_15_15, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_14);
    }
    {
      ml_backend__ml_foreign_proc_gen__Var_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_17, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessLval_10));
      MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_17, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__CondRval_11));
    }
    {
      ml_backend__ml_foreign_proc_gen__Stmt_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Stmt_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Stmt_12, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_17));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Stmt_12, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_foreign_proc_gen__Stmts_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Stmt_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Expr_5,
  MR_Word * ml_backend__ml_foreign_proc_gen__CondRval_6,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18)
{
  switch (MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__Expr_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String ml_backend__ml_foreign_proc_gen__EnvVar_8;
        MR_Word ml_backend__ml_foreign_proc_gen__EnvVarRval_9;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_foreign_proc_gen__Var_26;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_27;

        ml_backend__ml_foreign_proc_gen__EnvVar_8 = (MR_String) ml_backend__ml_foreign_proc_gen__Var_24;
        {
          ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_p_0(ml_backend__ml_foreign_proc_gen__EnvVar_8, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
        }
        ml_backend__ml_foreign_proc_gen__Var_27 = (MR_Word) ml_backend__ml_foreign_proc_gen__EnvVar_8;
        {
          ml_backend__ml_foreign_proc_gen__Var_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Var_26, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_27));
        }
        {
          ml_backend__ml_foreign_proc_gen__EnvVarRval_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__EnvVarRval_9, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_26));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[8])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__EnvVarRval_9));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[7])));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ml_backend__ml_foreign_proc_gen__ExprA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_foreign_proc_gen__RvalA_12;

        {
          ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprA_11, &ml_backend__ml_foreign_proc_gen__RvalA_12, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_2[6])));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalA_12));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ml_backend__ml_foreign_proc_gen__TraceOp_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
        MR_Word ml_backend__ml_foreign_proc_gen__ExprB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 2)));
        MR_Word ml_backend__ml_foreign_proc_gen__RvalB_15;
        MR_Word ml_backend__ml_foreign_proc_gen__Op_16;
        MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19;
        MR_Word ml_backend__ml_foreign_proc_gen__ExprA_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 1)));
        MR_Word ml_backend__ml_foreign_proc_gen__RvalA_33;

        {
          ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprA_32, &ml_backend__ml_foreign_proc_gen__RvalA_33, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19);
        }
        {
          ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprB_14, &ml_backend__ml_foreign_proc_gen__RvalB_15, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
        }
        switch (ml_backend__ml_foreign_proc_gen__TraceOp_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ml_backend__ml_foreign_proc_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 0:
            ml_backend__ml_foreign_proc_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Op_16));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalA_33));
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalB_15));
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001(
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    {
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2));
    }
    return ml_backend__ml_foreign_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001(
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1;

    {
      ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(&ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_3));
    }
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0_10001(
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    {
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2));
    }
    return ml_backend__ml_foreign_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0_10001(
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1;

    {
      ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(&ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_3));
    }
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1));
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

/* :- end_module ml_backend.ml_foreign_proc_gen. */
