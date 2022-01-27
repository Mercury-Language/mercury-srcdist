/*
** Automatically generated from `ml_foreign_proc_gen.m'
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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
  MR_String ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__V_27_27;
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
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_p_0_1(
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
  MR_Word ml_backend__ml_foreign_proc_gen__Args_17,
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
  MR_String ml_backend__ml_foreign_proc_gen__ForeignCode_19,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_41,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42);

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
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_24,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__293__1_2_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_48);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__198__1_2_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_53);

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
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Var_11,
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_12,
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13,
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_15,
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignOutput_16,
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvDecls_17,
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvOutputStatements_18,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38);

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
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_1,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__6_6,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8);

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_7,
  MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_8,
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_9,
  MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_10,
  MR_String ml_backend__ml_foreign_proc_gen__TypeString_11,
  MR_String * ml_backend__ml_foreign_proc_gen__Cast_12);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
  MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_7,
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_8,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);

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

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_managed_proc_12_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
  MR_Word ml_backend__ml_foreign_proc_gen___PredId_15,
  MR_Integer ml_backend__ml_foreign_proc_gen___ProcId_16,
  MR_Word ml_backend__ml_foreign_proc_gen__Args_17,
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
  MR_String ml_backend__ml_foreign_proc_gen__ForeignCode_19,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_41,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42);

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Expr_5,
  MR_Word * ml_backend__ml_foreign_proc_gen__CondRval_6,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);


static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_1[20][2];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_2[20][1];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_4[1][8];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_5[1][5];


/* sealed */ struct ml_backend__ml_foreign_proc_gen__vector_common_type_3_0_s {
  const MR_Word ml_backend__ml_foreign_proc_gen__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct ml_backend__ml_foreign_proc_gen__vector_common_type_3_0_s ml_backend__ml_foreign_proc_gen_vector_common_3[4];



static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_1[20][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[6])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\");\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_2[20][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "\t}\n"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "}\n"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) " = MR_FALSE;\n"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\n"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\tMR_bool SUCCESS_INDICATOR;\n"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) " = SUCCESS_INDICATOR;\n"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "#define MR_ALLOC_ID "))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "#undef MR_ALLOC_ID\n"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "#define MR_PROC_LABEL "))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) ";\n"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) ");\n"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\t"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) " = false;\n"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "{\n"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\t\t{\n"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\n\t\t;}\n"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "#undef MR_PROC_LABEL\n"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "\tif (SUCCESS_INDICATOR) {\n"))
  },
};

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_4[1][8] = {
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

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
};


static /* final */ const struct ml_backend__ml_foreign_proc_gen__vector_common_type_3_0_s ml_backend__ml_foreign_proc_gen_vector_common_3[4] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_24;
    MR_Word ml_backend__ml_foreign_proc_gen__Args_25;
    MR_Word ml_backend__ml_foreign_proc_gen__ArgDeclsList_26;
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_27;
    MR_Word ml_backend__ml_foreign_proc_gen__AssignOutputsList_28;
    MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements_30;
    MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_31;
    MR_String ml_backend__ml_foreign_proc_gen__ObtainLock_32;
    MR_String ml_backend__ml_foreign_proc_gen__ReleaseLock_33;
    MR_Word ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34;
    MR_Word ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35;
    MR_Word ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36;
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_C_Code_37;
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_C_Code_38;
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40;
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41;
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42;
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43;
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46;
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47;
    MR_Word ml_backend__ml_foreign_proc_gen__V_48_48;
    MR_Word ml_backend__ml_foreign_proc_gen__V_191_191;
    MR_Word ml_backend__ml_foreign_proc_gen__V_192_192;
    MR_Word ml_backend__ml_foreign_proc_gen__V_193_193;
    MR_Word ml_backend__ml_foreign_proc_gen__V_194_194;
    MR_Word ml_backend__ml_foreign_proc_gen__V_195_195;
    MR_Word ml_backend__ml_foreign_proc_gen__V_196_196;

    {
      ml_backend__ml_foreign_proc_gen__Lang_24 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
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
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(ml_backend__ml_foreign_proc_gen__Args_25, ml_backend__ml_foreign_proc_gen__Context_20, &ml_backend__ml_foreign_proc_gen__AssignOutputsList_28, ml_backend__ml_foreign_proc_gen__Decls_21, &ml_backend__ml_foreign_proc_gen__ConvStatements_30, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47);
    }
    {
      ml_backend__ml_foreign_proc_gen__ThreadSafe_31 = parse_tree__prog_data__get_thread_safe_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_foreign_proc_gen__ThreadSafe_31, ml_backend__ml_foreign_proc_gen__PredId_15, &ml_backend__ml_foreign_proc_gen__ObtainLock_32, &ml_backend__ml_foreign_proc_gen__ReleaseLock_33);
    }
    {
      ml_backend__ml_foreign_proc_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_48_48, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(ml_backend__ml_foreign_proc_gen__V_48_48, ml_backend__ml_foreign_proc_gen__Context_20, &ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34, &ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45);
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45, &ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36);
    }
    switch (ml_backend__ml_foreign_proc_gen__OrdinaryKind_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__V_149_149;
          MR_Word ml_backend__ml_foreign_proc_gen__V_154_154;
          MR_Word ml_backend__ml_foreign_proc_gen__V_155_155;
          MR_Word ml_backend__ml_foreign_proc_gen__V_156_156;
          MR_Word ml_backend__ml_foreign_proc_gen__V_157_157;
          MR_Word ml_backend__ml_foreign_proc_gen__V_162_162;
          MR_Word ml_backend__ml_foreign_proc_gen__V_163_163;
          MR_Word ml_backend__ml_foreign_proc_gen__V_164_164;
          MR_Word ml_backend__ml_foreign_proc_gen__V_165_165;
          MR_Word ml_backend__ml_foreign_proc_gen__V_166_166;
          MR_Word ml_backend__ml_foreign_proc_gen__V_169_169;
          MR_Word ml_backend__ml_foreign_proc_gen__V_170_170;
          MR_Word ml_backend__ml_foreign_proc_gen__V_171_171;
          MR_Word ml_backend__ml_foreign_proc_gen__V_176_176;
          MR_Word ml_backend__ml_foreign_proc_gen__V_177_177;
          MR_Word ml_backend__ml_foreign_proc_gen__V_178_178;
          MR_Word ml_backend__ml_foreign_proc_gen__V_181_181;
          MR_Word ml_backend__ml_foreign_proc_gen__V_182_182;
          MR_Word ml_backend__ml_foreign_proc_gen__V_184_184;

          {
            ml_backend__ml_foreign_proc_gen__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_165_165, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_171_171, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_170_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_170_170, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_170_170, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_171_171));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_169_169, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_170_170));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_169_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[18])));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_166_166, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[16])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_166_166, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_169_169));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_164_164, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_165_165));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_164_164, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_166_166));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_182_182, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_181_181, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_182_182));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[18])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_178_178, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_181_181));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_184_184, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_28));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_177_177, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_178_178));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_177_177, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_184_184));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_176_176, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_176_176, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_177_177));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_163_163, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_164_164));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_163_163, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_176_176));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_162_162, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_162_162, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_163_163));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_157_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_157_157, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_162_162));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_156_156, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_156_156, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_157_157));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_155_155, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_155_155, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_156_156));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_154_154, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_154_154, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_155_155));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_149_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_149_149, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_154_154));
          }
          {
            ml_backend__ml_foreign_proc_gen__Starting_C_Code_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__V_149_149);
          }
          ml_backend__ml_foreign_proc_gen__Ending_C_Code_38 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4]);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_39;
          MR_Word ml_backend__ml_foreign_proc_gen__V_105_105;
          MR_Word ml_backend__ml_foreign_proc_gen__V_110_110;
          MR_Word ml_backend__ml_foreign_proc_gen__V_111_111;
          MR_Word ml_backend__ml_foreign_proc_gen__V_112_112;
          MR_Word ml_backend__ml_foreign_proc_gen__V_113_113;
          MR_Word ml_backend__ml_foreign_proc_gen__V_118_118;
          MR_Word ml_backend__ml_foreign_proc_gen__V_119_119;
          MR_Word ml_backend__ml_foreign_proc_gen__V_120_120;
          MR_Word ml_backend__ml_foreign_proc_gen__V_121_121;
          MR_Word ml_backend__ml_foreign_proc_gen__V_122_122;
          MR_Word ml_backend__ml_foreign_proc_gen__V_125_125;
          MR_Word ml_backend__ml_foreign_proc_gen__V_126_126;
          MR_Word ml_backend__ml_foreign_proc_gen__V_127_127;
          MR_Word ml_backend__ml_foreign_proc_gen__V_132_132;
          MR_Word ml_backend__ml_foreign_proc_gen__V_133_133;
          MR_Word ml_backend__ml_foreign_proc_gen__V_134_134;
          MR_Word ml_backend__ml_foreign_proc_gen__V_137_137;
          MR_Word ml_backend__ml_foreign_proc_gen__V_138_138;
          MR_Word ml_backend__ml_foreign_proc_gen__V_141_141;

          {
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45, &ml_backend__ml_foreign_proc_gen__SucceededLval_39);
          }
          {
            ml_backend__ml_foreign_proc_gen__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_121_121, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_127_127, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_126_126, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_126_126, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_127_127));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_125_125, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_126_126));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[18])));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[16])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_122_122, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_125_125));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_120_120, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_121_121));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_120_120, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_122_122));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_138_138, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_137_137, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_138_138));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_134_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[18])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_134_134, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_137_137));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_133_133, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_134_134));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_132_132, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_132_132, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_133_133));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_119_119, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_120_120));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_119_119, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_132_132));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_118_118, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_118_118, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_119_119));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_113_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_113_113, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_118_118));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_112_112, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_112_112, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_113_113));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_111_111, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_111_111, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_112_112));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_110_110, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_110_110, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_111_111));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_105_105, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_110_110));
          }
          {
            ml_backend__ml_foreign_proc_gen__Starting_C_Code_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__V_105_105);
          }
          {
            ml_backend__ml_foreign_proc_gen__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_141_141, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_39));
          }
          {
            ml_backend__ml_foreign_proc_gen__Ending_C_Code_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_141_141));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[5])));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__V_51_51;
          MR_Word ml_backend__ml_foreign_proc_gen__V_56_56;
          MR_Word ml_backend__ml_foreign_proc_gen__V_57_57;
          MR_Word ml_backend__ml_foreign_proc_gen__V_58_58;
          MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
          MR_Word ml_backend__ml_foreign_proc_gen__V_67_67;
          MR_Word ml_backend__ml_foreign_proc_gen__V_68_68;
          MR_Word ml_backend__ml_foreign_proc_gen__V_69_69;
          MR_Word ml_backend__ml_foreign_proc_gen__V_70_70;
          MR_Word ml_backend__ml_foreign_proc_gen__V_71_71;
          MR_Word ml_backend__ml_foreign_proc_gen__V_74_74;
          MR_Word ml_backend__ml_foreign_proc_gen__V_75_75;
          MR_Word ml_backend__ml_foreign_proc_gen__V_76_76;
          MR_Word ml_backend__ml_foreign_proc_gen__V_81_81;
          MR_Word ml_backend__ml_foreign_proc_gen__V_82_82;
          MR_Word ml_backend__ml_foreign_proc_gen__V_83_83;
          MR_Word ml_backend__ml_foreign_proc_gen__V_86_86;
          MR_Word ml_backend__ml_foreign_proc_gen__V_87_87;
          MR_Word ml_backend__ml_foreign_proc_gen__V_92_92;
          MR_Word ml_backend__ml_foreign_proc_gen__V_96_96;
          MR_Word ml_backend__ml_foreign_proc_gen__V_97_97;
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_198;

          {
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45, &ml_backend__ml_foreign_proc_gen__SucceededLval_198);
          }
          {
            ml_backend__ml_foreign_proc_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_70_70, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_76_76, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_75_75, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_75_75, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_76_76));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_74_74, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_75_75));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[18])));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[16])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_71_71, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_74_74));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_69_69, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_70_70));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_69_69, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_71_71));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_87_87, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_86_86, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_87_87));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[19])));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[18])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_86_86));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_92_92, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_28));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_82_82, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_83_83));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_82_82, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_92_92));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_81_81, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_81_81, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_82_82));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_68_68, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_69_69));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_68_68, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_81_81));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_67_67, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_67_67, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_68_68));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[7])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_67_67));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_57_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_57_57, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_58_58));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_56_56, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_56_56, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_57_57));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_51_51, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_56_56));
          }
          {
            ml_backend__ml_foreign_proc_gen__Starting_C_Code_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__V_51_51);
          }
          {
            ml_backend__ml_foreign_proc_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_97_97, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_198));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_96_96, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_97_97));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[8])));
          }
          {
            ml_backend__ml_foreign_proc_gen__Ending_C_Code_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[0])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_96_96));
          }
        }
        break;
    }
    {
      ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_C_Code_37));
    }
    {
      ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_C_Code_38));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_191_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_191_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_191_191, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_192_192 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_20);
    }
    {
      ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_191_191));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_192_192));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_193_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_193_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_193_193, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_194_194 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_20);
    }
    {
      ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_193_193));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_194_194));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_195_195, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_195_195, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ConvStatements_30));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_196_196, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_196_196, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      *ml_backend__ml_foreign_proc_gen__Statements_22 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_foreign_proc_gen__V_195_195, ml_backend__ml_foreign_proc_gen__V_196_196);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_p_0_1(
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;

    {
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__293__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_foreign_proc_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
  MR_Word ml_backend__ml_foreign_proc_gen__Args_17,
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
  MR_String ml_backend__ml_foreign_proc_gen__ForeignCode_19,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_41,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Word ml_backend__ml_foreign_proc_gen__OutlineArgs_24;
    MR_Word ml_backend__ml_foreign_proc_gen__ForeignLang_25;
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSContext_26;
    MR_Word ml_backend__ml_foreign_proc_gen__OutputVars_27;
    MR_Word ml_backend__ml_foreign_proc_gen__OutputVarLvals_28;
    MR_Word ml_backend__ml_foreign_proc_gen__OutlineStmt_29;
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_30;
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleName_31;
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSModuleName_32;
    MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_33;
    MR_Word ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatements_35;
    MR_Word ml_backend__ml_foreign_proc_gen__OutlineStatement_40;
    MR_Word ml_backend__ml_foreign_proc_gen__V_44_44;
    MR_Word ml_backend__ml_foreign_proc_gen__V_63_63;

    {
      ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_p_0(ml_backend__ml_foreign_proc_gen__Args_17, &ml_backend__ml_foreign_proc_gen__OutlineArgs_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_41, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42);
    }
    {
      ml_backend__ml_foreign_proc_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(ml_backend__ml_foreign_proc_gen__V_44_44, (MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_managed_proc\'/12", (MR_String) "extra args");
    }
    {
      ml_backend__ml_foreign_proc_gen__ForeignLang_25 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
    {
      ml_backend__ml_foreign_proc_gen__MLDSContext_26 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_20);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_value_output_vars_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42, &ml_backend__ml_foreign_proc_gen__OutputVars_27);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42, ml_backend__ml_foreign_proc_gen__OutputVars_27, &ml_backend__ml_foreign_proc_gen__OutputVarLvals_28);
    }
    {
      ml_backend__ml_foreign_proc_gen__OutlineStmt_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_29, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ForeignLang_25));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_29, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutlineArgs_24));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_29, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutputVarLvals_28));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_29, 4) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ForeignCode_19));
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42, &ml_backend__ml_foreign_proc_gen__ModuleInfo_30);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_30, &ml_backend__ml_foreign_proc_gen__ModuleName_31);
    }
    {
      ml_backend__ml_foreign_proc_gen__MLDSModuleName_32 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_foreign_proc_gen__ModuleName_31);
    }
    {
      ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42, &ml_backend__ml_foreign_proc_gen__SucceededLval_33);
    }
    switch (ml_backend__ml_foreign_proc_gen__OrdinaryKind_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ml_backend__ml_foreign_proc_gen__Decls_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatements_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_managed_proc\'/12", (MR_String) "kind_failure not yet implemented");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__SuccessIndicatorDecl_37;
          MR_Word ml_backend__ml_foreign_proc_gen__SuccessIndicatorLval_38;
          MR_Word ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatement_39;
          MR_Word ml_backend__ml_foreign_proc_gen__V_57_57;
          MR_Word ml_backend__ml_foreign_proc_gen__V_60_60;

          {
            ml_backend__ml_foreign_proc_gen__SuccessIndicatorDecl_37 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_1[17]))), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_foreign_proc_gen__MLDSContext_26);
          }
          {
            ml_backend__ml_foreign_proc_gen__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_57_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_32));
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_57_57, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_57_57, 2) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_1[17]));
          }
          {
            ml_backend__ml_foreign_proc_gen__SuccessIndicatorLval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__SuccessIndicatorLval_38, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_57_57));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__SuccessIndicatorLval_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_60_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessIndicatorLval_38));
          }
          {
            ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatement_39 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_foreign_proc_gen__SucceededLval_33, ml_backend__ml_foreign_proc_gen__V_60_60, ml_backend__ml_foreign_proc_gen__Context_20);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_foreign_proc_gen__Decls_21 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessIndicatorDecl_37));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatements_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatements_35, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatement_39));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatements_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    {
      ml_backend__ml_foreign_proc_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutlineStmt_29));
    }
    {
      ml_backend__ml_foreign_proc_gen__OutlineStatement_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OutlineStatement_40, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_63_63));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OutlineStatement_40, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSContext_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_foreign_proc_gen__Statements_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutlineStatement_40));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatements_35));
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
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_24,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_114_114;
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_26;
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_27;
    MR_Word ml_backend__ml_foreign_proc_gen__PredInfo_28;
    MR_Word ml_backend__ml_foreign_proc_gen__Markers_29;
    MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_30;
    MR_Word ml_backend__ml_foreign_proc_gen__ArgDeclsList_31;
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_32;
    MR_Word ml_backend__ml_foreign_proc_gen__AssignOutputsList_33;
    MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements_35;
    MR_Word ml_backend__ml_foreign_proc_gen__SucceededDecl_36;
    MR_Word ml_backend__ml_foreign_proc_gen__AssignSucceeded_37;
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_Code_40;
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41;
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42;
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_Code_43;
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44;
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45;
    MR_Word ml_backend__ml_foreign_proc_gen__V_49_49;
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54;
    MR_Word ml_backend__ml_foreign_proc_gen__V_78_78;
    MR_Word ml_backend__ml_foreign_proc_gen__V_83_83;
    MR_Word ml_backend__ml_foreign_proc_gen__V_84_84;
    MR_Word ml_backend__ml_foreign_proc_gen__V_85_85;
    MR_Word ml_backend__ml_foreign_proc_gen__V_86_86;
    MR_Word ml_backend__ml_foreign_proc_gen__V_87_87;
    MR_Word ml_backend__ml_foreign_proc_gen__V_88_88;
    MR_Word ml_backend__ml_foreign_proc_gen__V_89_89;
    MR_Word ml_backend__ml_foreign_proc_gen__V_92_92;
    MR_Word ml_backend__ml_foreign_proc_gen__V_93_93;
    MR_Word ml_backend__ml_foreign_proc_gen__V_94_94;
    MR_Word ml_backend__ml_foreign_proc_gen__V_101_101;
    MR_Word ml_backend__ml_foreign_proc_gen__V_102_102;
    MR_Word ml_backend__ml_foreign_proc_gen__V_103_103;
    MR_Word ml_backend__ml_foreign_proc_gen__V_104_104;
    MR_Word ml_backend__ml_foreign_proc_gen__V_106_106;
    MR_Word ml_backend__ml_foreign_proc_gen__V_107_107;
    MR_Word ml_backend__ml_foreign_proc_gen__V_108_108;
    MR_Word ml_backend__ml_foreign_proc_gen__V_109_109;

    {
      ml_backend__ml_foreign_proc_gen__Lang_26 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_16);
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
      ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_pred__check_marker_2_p_0(ml_backend__ml_foreign_proc_gen__Markers_29, (MR_Integer) 23);
    }
    if (ml_backend__ml_foreign_proc_gen__succeeded)
      ml_backend__ml_foreign_proc_gen__MutableSpecial_30 = (MR_Integer) 0;
    else
      ml_backend__ml_foreign_proc_gen__MutableSpecial_30 = (MR_Integer) 1;
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, ml_backend__ml_foreign_proc_gen__MutableSpecial_30, ml_backend__ml_foreign_proc_gen__Args_19, &ml_backend__ml_foreign_proc_gen__ArgDeclsList_31);
    }
    {
      ml_backend__ml_foreign_proc_gen__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(ml_backend__ml_foreign_proc_gen__V_49_49, (MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_csharp_java_proc\'/13", (MR_String) "extra args");
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(ml_backend__ml_foreign_proc_gen__Lang_26, ml_backend__ml_foreign_proc_gen__Args_19, &ml_backend__ml_foreign_proc_gen__AssignInputsList_32, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54);
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(ml_backend__ml_foreign_proc_gen__MutableSpecial_30, ml_backend__ml_foreign_proc_gen__Args_19, ml_backend__ml_foreign_proc_gen__Context_22, &ml_backend__ml_foreign_proc_gen__AssignOutputsList_33, ml_backend__ml_foreign_proc_gen__Decls_23, &ml_backend__ml_foreign_proc_gen__ConvStatements_35, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47);
    }
    switch (ml_backend__ml_foreign_proc_gen__OrdinaryKind_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__V_58_58;
          MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_112;

          {
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47, &ml_backend__ml_foreign_proc_gen__SucceededLval_112);
          }
          ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_59_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_112));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[14])));
          }
          {
            ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[13])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_58_58));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_38;
          MR_String ml_backend__ml_foreign_proc_gen__BoolType_39;
          MR_Word ml_backend__ml_foreign_proc_gen__V_64_64;
          MR_String ml_backend__ml_foreign_proc_gen__V_65_65;
          MR_String ml_backend__ml_foreign_proc_gen__V_67_67;
          MR_Word ml_backend__ml_foreign_proc_gen__V_72_72;
          MR_Word ml_backend__ml_foreign_proc_gen__V_73_73;

          {
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47, &ml_backend__ml_foreign_proc_gen__SucceededLval_38);
          }
          switch (ml_backend__ml_foreign_proc_gen__TargetLang_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              ml_backend__ml_foreign_proc_gen__BoolType_39 = (MR_String) "bool";
              break;
            case (MR_Integer) 3:
              ml_backend__ml_foreign_proc_gen__BoolType_39 = (MR_String) "boolean";
              break;
          }
          {
            ml_backend__ml_foreign_proc_gen__V_67_67 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__BoolType_39, (MR_String) " SUCCESS_INDICATOR;\n");
          }
          {
            ml_backend__ml_foreign_proc_gen__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_67_67);
          }
          {
            ml_backend__ml_foreign_proc_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_64_64, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_65_65));
          }
          {
            ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SucceededDecl_36, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_64_64));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SucceededDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_73_73, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_38));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_73_73));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[15])));
          }
          {
            ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[13])));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_72_72));
          }
        }
        break;
    }
    ml_backend__ml_foreign_proc_gen__TypeCtorInfo_114_114 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0;
    {
      ml_backend__ml_foreign_proc_gen__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_89_89, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_22));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_88_88, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__JavaCode_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_88_88, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_89_89));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_87_87, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_88_88));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_86_86, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_87_87));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_85_85, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_32));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_85_85, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_86_86));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_84_84, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededDecl_36));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_84_84, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_85_85));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_31));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_84_84));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_78_78, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_83_83));
    }
    {
      ml_backend__ml_foreign_proc_gen__Starting_Code_40 = mercury__list__condense_1_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_114_114, ml_backend__ml_foreign_proc_gen__V_78_78);
    }
    {
      ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TargetLang_14));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_Code_40));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_92_92, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_93_93 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_22);
    }
    {
      ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_92_92));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_93_93));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_94_94, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignSucceeded_37));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[3])));
    }
    {
      ml_backend__ml_foreign_proc_gen__Ending_Code_43 = mercury__list__condense_1_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_114_114, ml_backend__ml_foreign_proc_gen__V_94_94);
    }
    {
      ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TargetLang_14));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_Code_43));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_101_101, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_102_102 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_22);
    }
    {
      ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_101_101));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_102_102));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_104_104, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_109_109, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_108_108, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_109_109));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_107_107, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ConvStatements_35));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_107_107, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_108_108));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_106_106, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_33));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_106_106, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_107_107));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_103_103, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_104_104));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_103_103, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_106_106));
    }
    {
      *ml_backend__ml_foreign_proc_gen__Statements_24 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_foreign_proc_gen__V_103_103);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__293__1_2_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_48)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    {
      ml_backend__ml_foreign_proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[0], ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_18)), ((MR_Box) (ml_backend__ml_foreign_proc_gen__HeadVar__2_48)));
    }
    return ml_backend__ml_foreign_proc_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__198__1_2_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_53)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    {
      ml_backend__ml_foreign_proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[0], ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_20)), ((MR_Box) (ml_backend__ml_foreign_proc_gen__HeadVar__2_53)));
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
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
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
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
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
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__Var_11,
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_12,
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13,
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_15,
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignOutput_16,
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvDecls_17,
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvOutputStatements_18,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Word ml_backend__ml_foreign_proc_gen__VarType_20;
    MR_Word ml_backend__ml_foreign_proc_gen__VarLval_21;
    MR_Word ml_backend__ml_foreign_proc_gen__ArgLval_22;
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_24;
    MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_25;
    MR_String ml_backend__ml_foreign_proc_gen__TypeString_26;
    MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_27;
    MR_Word ml_backend__ml_foreign_proc_gen__V_39_39;
    MR_Word ml_backend__ml_foreign_proc_gen___ConvInputStatements_23;
    MR_Word ml_backend__ml_foreign_proc_gen__Cast_28;

    {
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_foreign_proc_gen__Var_11, &ml_backend__ml_foreign_proc_gen__VarType_20);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_foreign_proc_gen__Var_11, &ml_backend__ml_foreign_proc_gen__VarLval_21);
    }
    {
      ml_backend__ml_foreign_proc_gen__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_39_39, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_foreign_proc_gen__VarType_20, ml_backend__ml_foreign_proc_gen__OrigType_13, ml_backend__ml_foreign_proc_gen__BoxPolicy_14, ml_backend__ml_foreign_proc_gen__VarLval_21, ml_backend__ml_foreign_proc_gen__V_39_39, ml_backend__ml_foreign_proc_gen__Context_15, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_foreign_proc_gen__ArgLval_22, ml_backend__ml_foreign_proc_gen__ConvDecls_17, &ml_backend__ml_foreign_proc_gen___ConvInputStatements_23, ml_backend__ml_foreign_proc_gen__ConvOutputStatements_18, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38, &ml_backend__ml_foreign_proc_gen__ModuleInfo_24);
    }
    {
      ml_backend__ml_foreign_proc_gen__ExportedType_25 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_24, ml_backend__ml_foreign_proc_gen__OrigType_13);
    }
    {
      ml_backend__ml_foreign_proc_gen__TypeString_26 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, ml_backend__ml_foreign_proc_gen__ExportedType_25);
    }
    {
      ml_backend__ml_foreign_proc_gen__IsForeign_27 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_25);
    }
    if ((ml_backend__ml_foreign_proc_gen__IsForeign_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ml_backend__ml_foreign_proc_gen__Cast_28 = (MR_Integer) 0;
        ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word ml_backend__ml_foreign_proc_gen__Assertions_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_27, (MR_Integer) 0)));

        {
          ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(ml_backend__ml_foreign_proc_gen__Assertions_29);
        }
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            ml_backend__ml_foreign_proc_gen__Cast_28 = (MR_Integer) 1;
            ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
          }
      }
    if (ml_backend__ml_foreign_proc_gen__succeeded)
      {
        MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_30;
        MR_String ml_backend__ml_foreign_proc_gen__LHS_Cast_31;
        MR_String ml_backend__ml_foreign_proc_gen__RHS_Cast_32;
        MR_String ml_backend__ml_foreign_proc_gen__AssignFromArgName_35;
        MR_String ml_backend__ml_foreign_proc_gen__AssignTo_36;
        MR_Word ml_backend__ml_foreign_proc_gen__V_58_58;
        MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
        MR_Word ml_backend__ml_foreign_proc_gen__V_60_60;
        MR_Word ml_backend__ml_foreign_proc_gen__V_61_61;
        MR_Word ml_backend__ml_foreign_proc_gen__V_62_62;
        MR_String ml_backend__ml_foreign_proc_gen__V_79_79;
        MR_String ml_backend__ml_foreign_proc_gen__V_80_80;
        MR_String ml_backend__ml_foreign_proc_gen__V_83_83;

        {
          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38, &ml_backend__ml_foreign_proc_gen__HighLevelData_30);
        }
        switch (ml_backend__ml_foreign_proc_gen__HighLevelData_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word ml_backend__ml_foreign_proc_gen__V_33_33;
                MR_Word ml_backend__ml_foreign_proc_gen__V_34_34;

                ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__OrigType_13)) == (MR_mktag((MR_Integer) 0)));
                if (ml_backend__ml_foreign_proc_gen__succeeded)
                  {
                    ml_backend__ml_foreign_proc_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_13, (MR_Integer) 0)));
                    ml_backend__ml_foreign_proc_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_13, (MR_Integer) 1)));
                  }
              }
              if (!(ml_backend__ml_foreign_proc_gen__succeeded))
                ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Cast_28 == (MR_Integer) 1);
              if (ml_backend__ml_foreign_proc_gen__succeeded)
                ml_backend__ml_foreign_proc_gen__RHS_Cast_32 = (MR_String) "(MR_Box) ";
              else
                ml_backend__ml_foreign_proc_gen__RHS_Cast_32 = (MR_String) "";
              ml_backend__ml_foreign_proc_gen__LHS_Cast_31 = (MR_String) "";
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ml_backend__ml_foreign_proc_gen__V_46_46;

              {
                ml_backend__ml_foreign_proc_gen__V_46_46 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_26, (MR_String) " *) &");
              }
              {
                ml_backend__ml_foreign_proc_gen__LHS_Cast_31 = mercury__string__f_43_43_2_f_0((MR_String) "* (", ml_backend__ml_foreign_proc_gen__V_46_46);
              }
              ml_backend__ml_foreign_proc_gen__RHS_Cast_32 = (MR_String) "";
            }
            break;
        }
        {
          ml_backend__ml_foreign_proc_gen__V_79_79 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_12, (MR_String) ";\n");
        }
        {
          ml_backend__ml_foreign_proc_gen__V_80_80 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__RHS_Cast_32, ml_backend__ml_foreign_proc_gen__V_79_79);
        }
        {
          ml_backend__ml_foreign_proc_gen__AssignFromArgName_35 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ml_backend__ml_foreign_proc_gen__V_80_80);
        }
        {
          ml_backend__ml_foreign_proc_gen__V_83_83 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__LHS_Cast_31, (MR_String) " ");
        }
        {
          ml_backend__ml_foreign_proc_gen__AssignTo_36 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_83_83);
        }
        {
          ml_backend__ml_foreign_proc_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignTo_36));
        }
        {
          ml_backend__ml_foreign_proc_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_60_60, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgLval_22));
        }
        {
          ml_backend__ml_foreign_proc_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_62_62, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignFromArgName_35));
        }
        {
          ml_backend__ml_foreign_proc_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_61_61, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_62_62));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_60_60));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_61_61));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_foreign_proc_gen__AssignOutput_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_58_58));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
        }
      }
    else
      {
        MR_Word ml_backend__ml_foreign_proc_gen__V_64_64;
        MR_String ml_backend__ml_foreign_proc_gen__V_65_65;
        MR_String ml_backend__ml_foreign_proc_gen__V_67_67;
        MR_String ml_backend__ml_foreign_proc_gen__V_68_68;
        MR_String ml_backend__ml_foreign_proc_gen__V_70_70;
        MR_Word ml_backend__ml_foreign_proc_gen__V_72_72;
        MR_Word ml_backend__ml_foreign_proc_gen__V_73_73;

        {
          ml_backend__ml_foreign_proc_gen__V_70_70 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_12, (MR_String) ", ");
        }
        {
          ml_backend__ml_foreign_proc_gen__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ml_backend__ml_foreign_proc_gen__V_70_70);
        }
        {
          ml_backend__ml_foreign_proc_gen__V_67_67 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_26, ml_backend__ml_foreign_proc_gen__V_68_68);
        }
        {
          ml_backend__ml_foreign_proc_gen__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(", ml_backend__ml_foreign_proc_gen__V_67_67);
        }
        {
          ml_backend__ml_foreign_proc_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_64_64, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_65_65));
        }
        {
          ml_backend__ml_foreign_proc_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_73_73, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgLval_22));
        }
        {
          ml_backend__ml_foreign_proc_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_73_73));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[13])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_foreign_proc_gen__AssignOutput_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_64_64));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_72_72));
        }
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
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements1_21;
        MR_Word ml_backend__ml_foreign_proc_gen__Components2_22;
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls2_23;
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements2_24;
        MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 0)));
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 1)));
        MR_Word ml_backend__ml_foreign_proc_gen__OrigType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 2)));
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 3)));
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_44;
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_45;
        MR_Word ml_backend__ml_foreign_proc_gen__Mode_46;
        MR_Word ml_backend__ml_foreign_proc_gen__V_47_47;
        MR_Word ml_backend__ml_foreign_proc_gen__V_48_48;
        MR_Word ml_backend__ml_foreign_proc_gen__V_49_49;
        MR_Word ml_backend__ml_foreign_proc_gen__V_51_51;
        MR_Char ml_backend__ml_foreign_proc_gen__V_54_54;
        MR_String ml_backend__ml_foreign_proc_gen__V_53_53;

        {
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_foreign_proc_gen__ModuleInfo_44);
        }
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            ml_backend__ml_foreign_proc_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41, (MR_Integer) 0)));
            ml_backend__ml_foreign_proc_gen__ArgName_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_47_47, (MR_Integer) 0)));
            ml_backend__ml_foreign_proc_gen__Mode_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_47_47, (MR_Integer) 1)));
            ml_backend__ml_foreign_proc_gen__V_54_54 = (MR_Char) 95;
            {
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_45, ml_backend__ml_foreign_proc_gen__V_54_54, &ml_backend__ml_foreign_proc_gen__V_53_53);
            }
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
            if (ml_backend__ml_foreign_proc_gen__succeeded)
              {
                {
                  ml_backend__ml_foreign_proc_gen__V_48_48 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_44, ml_backend__ml_foreign_proc_gen__OrigType_42);
                }
                ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_48_48 == (MR_Integer) 1);
                if (ml_backend__ml_foreign_proc_gen__succeeded)
                  {
                    ml_backend__ml_foreign_proc_gen__V_49_49 = (MR_Integer) 1;
                    {
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_44, ml_backend__ml_foreign_proc_gen__Mode_46, ml_backend__ml_foreign_proc_gen__OrigType_42, &ml_backend__ml_foreign_proc_gen__V_51_51);
                    }
                    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_49_49 == ml_backend__ml_foreign_proc_gen__V_51_51);
                  }
              }
          }
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(ml_backend__ml_foreign_proc_gen__Var_40, ml_backend__ml_foreign_proc_gen__ArgName_45, ml_backend__ml_foreign_proc_gen__OrigType_42, ml_backend__ml_foreign_proc_gen__BoxPolicy_43, ml_backend__ml_foreign_proc_gen__Context_2, &ml_backend__ml_foreign_proc_gen__Components1_19, &ml_backend__ml_foreign_proc_gen__ConvDecls1_20, &ml_backend__ml_foreign_proc_gen__ConvStatements1_21, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27);
          }
        else
          {
            ml_backend__ml_foreign_proc_gen__Components1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ml_backend__ml_foreign_proc_gen__ConvDecls1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ml_backend__ml_foreign_proc_gen__ConvStatements1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6;
          }
        {
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(ml_backend__ml_foreign_proc_gen__ForeignArgs_13, ml_backend__ml_foreign_proc_gen__Context_2, &ml_backend__ml_foreign_proc_gen__Components2_22, &ml_backend__ml_foreign_proc_gen__ConvDecls2_23, &ml_backend__ml_foreign_proc_gen__ConvStatements2_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7);
        }
        {
          *ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__Components1_19, ml_backend__ml_foreign_proc_gen__Components2_22);
        }
        {
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_foreign_proc_gen__ConvDecls1_20, ml_backend__ml_foreign_proc_gen__ConvDecls2_23);
        }
        {
          *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_foreign_proc_gen__ConvStatements1_21, ml_backend__ml_foreign_proc_gen__ConvStatements2_24);
        }
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
        MR_Word ml_backend__ml_foreign_proc_gen__Statements1_22;
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls1_23;
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements1_24;
        MR_Word ml_backend__ml_foreign_proc_gen__Statements2_25;
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls2_26;
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements2_27;
        MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 0)));
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 1)));
        MR_Word ml_backend__ml_foreign_proc_gen__OrigType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 2)));
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 3)));
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_47;
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_48;
        MR_Word ml_backend__ml_foreign_proc_gen__Mode_49;
        MR_Word ml_backend__ml_foreign_proc_gen__V_61_61;
        MR_Word ml_backend__ml_foreign_proc_gen__V_62_62;
        MR_Word ml_backend__ml_foreign_proc_gen__V_63_63;
        MR_Word ml_backend__ml_foreign_proc_gen__V_75_75;
        MR_Char ml_backend__ml_foreign_proc_gen__V_80_80;
        MR_String ml_backend__ml_foreign_proc_gen__V_79_79;

        {
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, &ml_backend__ml_foreign_proc_gen__ModuleInfo_47);
        }
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            ml_backend__ml_foreign_proc_gen__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44, (MR_Integer) 0)));
            ml_backend__ml_foreign_proc_gen__ArgName_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_61_61, (MR_Integer) 0)));
            ml_backend__ml_foreign_proc_gen__Mode_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_61_61, (MR_Integer) 1)));
            ml_backend__ml_foreign_proc_gen__V_80_80 = (MR_Char) 95;
            {
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_48, ml_backend__ml_foreign_proc_gen__V_80_80, &ml_backend__ml_foreign_proc_gen__V_79_79);
            }
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
            if (ml_backend__ml_foreign_proc_gen__succeeded)
              {
                {
                  ml_backend__ml_foreign_proc_gen__V_62_62 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__OrigType_45);
                }
                ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_62_62 == (MR_Integer) 1);
                if (ml_backend__ml_foreign_proc_gen__succeeded)
                  {
                    ml_backend__ml_foreign_proc_gen__V_63_63 = (MR_Integer) 1;
                    {
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__Mode_49, ml_backend__ml_foreign_proc_gen__OrigType_45, &ml_backend__ml_foreign_proc_gen__V_75_75);
                    }
                    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_63_63 == ml_backend__ml_foreign_proc_gen__V_75_75);
                  }
              }
          }
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            MR_Word ml_backend__ml_foreign_proc_gen__VarType_50;
            MR_Word ml_backend__ml_foreign_proc_gen__VarLval_51;
            MR_Word ml_backend__ml_foreign_proc_gen__ArgLval_52;
            MR_Word ml_backend__ml_foreign_proc_gen__MLDSType_54;
            MR_Word ml_backend__ml_foreign_proc_gen__ModuleName_55;
            MR_Word ml_backend__ml_foreign_proc_gen__MLDSModuleName_56;
            MR_Word ml_backend__ml_foreign_proc_gen__NonMangledVarName_57;
            MR_Word ml_backend__ml_foreign_proc_gen__QualLocalVarName_58;
            MR_Word ml_backend__ml_foreign_proc_gen__LocalVarLval_59;
            MR_Word ml_backend__ml_foreign_proc_gen__Rval_60;
            MR_Word ml_backend__ml_foreign_proc_gen__V_73_73;
            MR_Word ml_backend__ml_foreign_proc_gen___ConvInputStatements_53;

            {
              ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, ml_backend__ml_foreign_proc_gen__Var_43, &ml_backend__ml_foreign_proc_gen__VarType_50);
            }
            {
              ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, ml_backend__ml_foreign_proc_gen__Var_43, &ml_backend__ml_foreign_proc_gen__VarLval_51);
            }
            {
              ml_backend__ml_foreign_proc_gen__NonMangledVarName_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__NonMangledVarName_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_48));
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__NonMangledVarName_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_foreign_proc_gen__VarType_50, ml_backend__ml_foreign_proc_gen__OrigType_45, ml_backend__ml_foreign_proc_gen__BoxPolicy_46, ml_backend__ml_foreign_proc_gen__VarLval_51, ml_backend__ml_foreign_proc_gen__NonMangledVarName_57, ml_backend__ml_foreign_proc_gen__Context_3, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_foreign_proc_gen__ArgLval_52, &ml_backend__ml_foreign_proc_gen__ConvDecls1_23, &ml_backend__ml_foreign_proc_gen___ConvInputStatements_53, &ml_backend__ml_foreign_proc_gen__ConvStatements1_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30);
            }
            {
              ml_backend__ml_foreign_proc_gen__MLDSType_54 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__OrigType_45);
            }
            {
              hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, &ml_backend__ml_foreign_proc_gen__ModuleName_55);
            }
            {
              ml_backend__ml_foreign_proc_gen__MLDSModuleName_56 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_foreign_proc_gen__ModuleName_55);
            }
            {
              ml_backend__ml_foreign_proc_gen__QualLocalVarName_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_56));
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__NonMangledVarName_57));
            }
            {
              ml_backend__ml_foreign_proc_gen__LocalVarLval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_59, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__QualLocalVarName_58));
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_54));
            }
            switch (ml_backend__ml_foreign_proc_gen__MutableSpecial_1) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_foreign_proc_gen__V_76_76;

                  {
                    ml_backend__ml_foreign_proc_gen__V_76_76 = parse_tree__builtin_lib_types__int_type_0_f_0();
                  }
                  {
                    ml_backend__ml_foreign_proc_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_foreign_proc_gen__OrigType_45, ml_backend__ml_foreign_proc_gen__V_76_76);
                  }
                  if (ml_backend__ml_foreign_proc_gen__succeeded)
                    {
                      ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
                    }
                  else
                    {
                      MR_Word ml_backend__ml_foreign_proc_gen__V_71_71;
                      MR_Word ml_backend__ml_foreign_proc_gen__V_72_72;

                      {
                        ml_backend__ml_foreign_proc_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_71_71, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_54));
                      }
                      {
                        ml_backend__ml_foreign_proc_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
                      }
                      {
                        ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_71_71));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_72_72));
                      }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
                }
                break;
            }
            {
              ml_backend__ml_foreign_proc_gen__V_73_73 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_foreign_proc_gen__ArgLval_52, ml_backend__ml_foreign_proc_gen__Rval_60, ml_backend__ml_foreign_proc_gen__Context_3);
            }
            {
              ml_backend__ml_foreign_proc_gen__Statements1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Statements1_22, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_73_73));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Statements1_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
        else
          {
            ml_backend__ml_foreign_proc_gen__Statements1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ml_backend__ml_foreign_proc_gen__ConvDecls1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ml_backend__ml_foreign_proc_gen__ConvStatements1_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7;
          }
        {
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(ml_backend__ml_foreign_proc_gen__MutableSpecial_1, ml_backend__ml_foreign_proc_gen__JavaArgs_16, ml_backend__ml_foreign_proc_gen__Context_3, &ml_backend__ml_foreign_proc_gen__Statements2_25, &ml_backend__ml_foreign_proc_gen__ConvDecls2_26, &ml_backend__ml_foreign_proc_gen__ConvStatements2_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8);
        }
        ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
        {
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32, ml_backend__ml_foreign_proc_gen__Statements1_22, ml_backend__ml_foreign_proc_gen__Statements2_25);
        }
        {
          *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_foreign_proc_gen__ConvDecls1_23, ml_backend__ml_foreign_proc_gen__ConvDecls2_26);
        }
        {
          *ml_backend__ml_foreign_proc_gen__HeadVar__6_6 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32, ml_backend__ml_foreign_proc_gen__ConvStatements1_24, ml_backend__ml_foreign_proc_gen__ConvStatements2_27);
        }
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
              MR_Word ml_backend__ml_foreign_proc_gen__V_15_15;
              MR_Word ml_backend__ml_foreign_proc_gen__V_16_16;

              ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__OrigType_9)) == (MR_mktag((MR_Integer) 0)));
              if (ml_backend__ml_foreign_proc_gen__succeeded)
                {
                  ml_backend__ml_foreign_proc_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_9, (MR_Integer) 0)));
                  ml_backend__ml_foreign_proc_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_9, (MR_Integer) 1)));
                  *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "(MR_Word)";
                  ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
                }
              else
                {
                  MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_28;

                  {
                    ml_backend__ml_foreign_proc_gen__IsForeign_28 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_10);
                  }
                  if ((ml_backend__ml_foreign_proc_gen__IsForeign_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
                      ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_String ml_backend__ml_foreign_proc_gen__V_20_20;
                      MR_String ml_backend__ml_foreign_proc_gen__V_21_21;
                      MR_String ml_backend__ml_foreign_proc_gen__V_22_22;
                      MR_Word ml_backend__ml_foreign_proc_gen__Assertions_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_28, (MR_Integer) 0)));

                      {
                        ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(ml_backend__ml_foreign_proc_gen__Assertions_26);
                      }
                      if (ml_backend__ml_foreign_proc_gen__succeeded)
                        {
                          ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_String) "(";
                          ml_backend__ml_foreign_proc_gen__V_22_22 = (MR_String) ")";
                          {
                            ml_backend__ml_foreign_proc_gen__V_21_21 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_11, ml_backend__ml_foreign_proc_gen__V_22_22);
                          }
                          {
                            *ml_backend__ml_foreign_proc_gen__Cast_12 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_20_20, ml_backend__ml_foreign_proc_gen__V_21_21);
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
              MR_String ml_backend__ml_foreign_proc_gen__V_23_23;
              MR_String ml_backend__ml_foreign_proc_gen__V_24_24;
              MR_String ml_backend__ml_foreign_proc_gen__V_25_25;

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
                  ml_backend__ml_foreign_proc_gen__V_23_23 = (MR_String) "(";
                  ml_backend__ml_foreign_proc_gen__V_25_25 = (MR_String) ")";
                  {
                    ml_backend__ml_foreign_proc_gen__V_24_24 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_11, ml_backend__ml_foreign_proc_gen__V_25_25);
                  }
                  {
                    *ml_backend__ml_foreign_proc_gen__Cast_12 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_23_23, ml_backend__ml_foreign_proc_gen__V_24_24);
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
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.input_arg_assignable_with_cast\'/6", (MR_String) "unexpected language");
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
    MR_Word ml_backend__ml_foreign_proc_gen__V_19_19;
    MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;
    MR_Word ml_backend__ml_foreign_proc_gen__V_22_22;
    MR_Char ml_backend__ml_foreign_proc_gen__V_25_25;
    MR_String ml_backend__ml_foreign_proc_gen__V_24_24;

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
        ml_backend__ml_foreign_proc_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12, (MR_Integer) 0)));
        ml_backend__ml_foreign_proc_gen__ArgName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_19_19, (MR_Integer) 0)));
        ml_backend__ml_foreign_proc_gen__Mode_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_19_19, (MR_Integer) 1)));
        ml_backend__ml_foreign_proc_gen__V_25_25 = (MR_Char) 95;
        {
          ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_15, ml_backend__ml_foreign_proc_gen__V_25_25, &ml_backend__ml_foreign_proc_gen__V_24_24);
        }
        ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_Integer) 0;
            {
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_10, ml_backend__ml_foreign_proc_gen__Mode_16, ml_backend__ml_foreign_proc_gen__OrigType_13, &ml_backend__ml_foreign_proc_gen__V_22_22);
            }
            ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_20_20 == ml_backend__ml_foreign_proc_gen__V_22_22);
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
                  MR_Word ml_backend__ml_foreign_proc_gen__V_86_86;

                  {
                    ml_backend__ml_foreign_proc_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_86_86, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDS_Type_85));
                  }
                  {
                    ml_backend__ml_foreign_proc_gen__ArgRval_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__ArgRval_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__ArgRval_39, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_86_86));
                  }
                }
              else
                {
                  ml_backend__ml_foreign_proc_gen__ArgRval_39 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[9]);
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_foreign_proc_gen__V_46_46;

              {
                ml_backend__ml_foreign_proc_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_46_46, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarLval_36));
              }
              {
                ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_37, ml_backend__ml_foreign_proc_gen__VarType_35, ml_backend__ml_foreign_proc_gen__OrigType_13, ml_backend__ml_foreign_proc_gen__BoxPolicy_14, ml_backend__ml_foreign_proc_gen__V_46_46, &ml_backend__ml_foreign_proc_gen__ArgRval_39);
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
          libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_42, (MR_Integer) 255, &ml_backend__ml_foreign_proc_gen__HighLevelData_43);
        }
        {
          ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(ml_backend__ml_foreign_proc_gen__Lang_6, ml_backend__ml_foreign_proc_gen__HighLevelData_43, ml_backend__ml_foreign_proc_gen__OrigType_13, ml_backend__ml_foreign_proc_gen__ExportedType_40, ml_backend__ml_foreign_proc_gen__TypeString_41, &ml_backend__ml_foreign_proc_gen__Cast_44);
        }
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            MR_String ml_backend__ml_foreign_proc_gen__AssignToArgName_45;
            MR_Word ml_backend__ml_foreign_proc_gen__V_54_54;
            MR_Word ml_backend__ml_foreign_proc_gen__V_55_55;
            MR_Word ml_backend__ml_foreign_proc_gen__V_56_56;
            MR_String ml_backend__ml_foreign_proc_gen__V_76_76;
            MR_String ml_backend__ml_foreign_proc_gen__V_78_78;
            MR_String ml_backend__ml_foreign_proc_gen__V_79_79;

            {
              ml_backend__ml_foreign_proc_gen__V_76_76 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__Cast_44, (MR_String) " ");
            }
            {
              ml_backend__ml_foreign_proc_gen__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ml_backend__ml_foreign_proc_gen__V_76_76);
            }
            {
              ml_backend__ml_foreign_proc_gen__V_79_79 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_15, ml_backend__ml_foreign_proc_gen__V_78_78);
            }
            {
              ml_backend__ml_foreign_proc_gen__AssignToArgName_45 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_79_79);
            }
            {
              ml_backend__ml_foreign_proc_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_54_54, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignToArgName_45));
            }
            {
              ml_backend__ml_foreign_proc_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_56_56, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgRval_39));
            }
            {
              ml_backend__ml_foreign_proc_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_55_55, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_56_56));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[12])));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_foreign_proc_gen__AssignInput_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_54_54));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_55_55));
            }
          }
        else
          {
            MR_Word ml_backend__ml_foreign_proc_gen__V_61_61;
            MR_String ml_backend__ml_foreign_proc_gen__V_62_62;
            MR_String ml_backend__ml_foreign_proc_gen__V_64_64;
            MR_Word ml_backend__ml_foreign_proc_gen__V_66_66;
            MR_Word ml_backend__ml_foreign_proc_gen__V_67_67;
            MR_Word ml_backend__ml_foreign_proc_gen__V_68_68;
            MR_Word ml_backend__ml_foreign_proc_gen__V_69_69;
            MR_String ml_backend__ml_foreign_proc_gen__V_70_70;
            MR_String ml_backend__ml_foreign_proc_gen__V_72_72;

            {
              ml_backend__ml_foreign_proc_gen__V_64_64 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_41, (MR_String) ", ");
            }
            {
              ml_backend__ml_foreign_proc_gen__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", ml_backend__ml_foreign_proc_gen__V_64_64);
            }
            {
              ml_backend__ml_foreign_proc_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_61_61, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_62_62));
            }
            {
              ml_backend__ml_foreign_proc_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_67_67, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgRval_39));
            }
            {
              ml_backend__ml_foreign_proc_gen__V_72_72 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_15, (MR_String) ");\n");
            }
            {
              ml_backend__ml_foreign_proc_gen__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ml_backend__ml_foreign_proc_gen__V_72_72);
            }
            {
              ml_backend__ml_foreign_proc_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_69_69, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_70_70));
            }
            {
              ml_backend__ml_foreign_proc_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_68_68, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_69_69));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ml_backend__ml_foreign_proc_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_66_66, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_67_67));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_66_66, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_68_68));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ml_backend__ml_foreign_proc_gen__AssignInput_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_61_61));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_66_66));
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
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_10;
    MR_Word ml_backend__ml_foreign_proc_gen__V_13_13;
    MR_Box ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12;

    {
      ml_backend__ml_foreign_proc_gen__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Lang_6));
    }
    {
      mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[1], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_foreign_proc_gen__V_13_13, ml_backend__ml_foreign_proc_gen__ArgList_7, &ml_backend__ml_foreign_proc_gen__AssignInputsList_10, ((MR_Box) (ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11)), &ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12);
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
        MR_Word ml_backend__ml_foreign_proc_gen__V_29_29;
        MR_Word ml_backend__ml_foreign_proc_gen___Mode_24;
        MR_Char ml_backend__ml_foreign_proc_gen__V_43_43;
        MR_String ml_backend__ml_foreign_proc_gen__V_42_42;

        {
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_1, &ml_backend__ml_foreign_proc_gen__ModuleInfo_22);
        }
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            ml_backend__ml_foreign_proc_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19, (MR_Integer) 0)));
            ml_backend__ml_foreign_proc_gen__ArgName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_29_29, (MR_Integer) 0)));
            ml_backend__ml_foreign_proc_gen___Mode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_29_29, (MR_Integer) 1)));
            ml_backend__ml_foreign_proc_gen__V_43_43 = (MR_Char) 95;
            {
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_23, ml_backend__ml_foreign_proc_gen__V_43_43, &ml_backend__ml_foreign_proc_gen__V_42_42);
            }
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
          }
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            MR_Word ml_backend__ml_foreign_proc_gen__MLDS_Type_25;
            MR_Word ml_backend__ml_foreign_proc_gen__TypeDecl_26;
            MR_String ml_backend__ml_foreign_proc_gen__VarDeclString_27;
            MR_Word ml_backend__ml_foreign_proc_gen__VarDecl_28;
            MR_Word ml_backend__ml_foreign_proc_gen__V_34_34;
            MR_String ml_backend__ml_foreign_proc_gen__V_38_38;

            switch (ml_backend__ml_foreign_proc_gen__MutableSpecial_2) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_foreign_proc_gen__V_36_36;

                  {
                    ml_backend__ml_foreign_proc_gen__V_36_36 = parse_tree__builtin_lib_types__int_type_0_f_0();
                  }
                  {
                    ml_backend__ml_foreign_proc_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_foreign_proc_gen__Type_20, ml_backend__ml_foreign_proc_gen__V_36_36);
                  }
                  if (ml_backend__ml_foreign_proc_gen__succeeded)
                    ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                  else
                    ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
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
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__TypeDecl_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__TypeDecl_26, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDS_Type_25));
            }
            {
              ml_backend__ml_foreign_proc_gen__V_38_38 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_23, (MR_String) ";\n");
            }
            {
              ml_backend__ml_foreign_proc_gen__VarDeclString_27 = mercury__string__f_43_43_2_f_0((MR_String) " ", ml_backend__ml_foreign_proc_gen__V_38_38);
            }
            {
              ml_backend__ml_foreign_proc_gen__VarDecl_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__VarDecl_28, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarDeclString_27));
            }
            {
              ml_backend__ml_foreign_proc_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_34_34, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarDecl_28));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TypeDecl_26));
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_34_34));
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
        MR_Word ml_backend__ml_foreign_proc_gen__V_26_26;
        MR_Word ml_backend__ml_foreign_proc_gen___Mode_23;
        MR_Char ml_backend__ml_foreign_proc_gen__V_41_41;
        MR_String ml_backend__ml_foreign_proc_gen__V_40_40;

        {
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_1, &ml_backend__ml_foreign_proc_gen__ModuleInfo_21);
        }
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            ml_backend__ml_foreign_proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18, (MR_Integer) 0)));
            ml_backend__ml_foreign_proc_gen__ArgName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_26_26, (MR_Integer) 0)));
            ml_backend__ml_foreign_proc_gen___Mode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_26_26, (MR_Integer) 1)));
            ml_backend__ml_foreign_proc_gen__V_41_41 = (MR_Char) 95;
            {
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_22, ml_backend__ml_foreign_proc_gen__V_41_41, &ml_backend__ml_foreign_proc_gen__V_40_40);
            }
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
          }
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            MR_String ml_backend__ml_foreign_proc_gen__TypeString_24;
            MR_String ml_backend__ml_foreign_proc_gen__V_34_34;
            MR_String ml_backend__ml_foreign_proc_gen__V_36_36;
            MR_String ml_backend__ml_foreign_proc_gen__V_37_37;

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
              ml_backend__ml_foreign_proc_gen__V_34_34 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_22, (MR_String) ";\n");
            }
            {
              ml_backend__ml_foreign_proc_gen__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) " ", ml_backend__ml_foreign_proc_gen__V_34_34);
            }
            {
              ml_backend__ml_foreign_proc_gen__V_37_37 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_24, ml_backend__ml_foreign_proc_gen__V_36_36);
            }
            {
              ml_backend__ml_foreign_proc_gen__DeclString_25 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_37_37);
            }
          }
        else
          ml_backend__ml_foreign_proc_gen__DeclString_25 = (MR_String) "";
        {
          ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__DeclString_25));
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
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_5;
    MR_Word ml_backend__ml_foreign_proc_gen__PredId_6;
    MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_7;
    MR_Word ml_backend__ml_foreign_proc_gen__Name_8;
    MR_Word ml_backend__ml_foreign_proc_gen__Module_9;
    MR_Word ml_backend__ml_foreign_proc_gen__V_12_12;
    MR_Word ml_backend__ml_foreign_proc_gen__V_13_13;
    MR_Word ml_backend__ml_foreign_proc_gen__V_14_14;

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
      ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_5, ml_backend__ml_foreign_proc_gen__PredId_6, ml_backend__ml_foreign_proc_gen__ProcId_7, &ml_backend__ml_foreign_proc_gen__Name_8, &ml_backend__ml_foreign_proc_gen__Module_9);
    }
    {
      ml_backend__ml_foreign_proc_gen__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_14_14, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Module_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_14_14, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_14_14, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Name_8));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_13_13, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_14_14));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_12_12, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_13_13));
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_foreign_proc_gen__HashDefine_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[10])));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_12_12));
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
      MR_Integer ml_backend__ml_foreign_proc_gen__V_15_15;

      (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__V_27_27 = (MR_String) "MR_ALLOC_ID";
      {
        (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = mercury__string__sub_string_search_3_p_0((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14, (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__V_27_27, &ml_backend__ml_foreign_proc_gen__V_15_15);
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
          MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_42_42;

          (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13 == (MR_Integer) 1);
          if ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
            {
              ml_backend__ml_foreign_proc_gen__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              {
                mercury__list__member_2_p_1(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_42_42, &(ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14, (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7, ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3, ml_backend__ml_foreign_proc_gen__env_ptr);
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
        libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_12, (MR_Integer) 194, &(ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13);
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
          MR_Word ml_backend__ml_foreign_proc_gen__ProcLabel_20;
          MR_Word ml_backend__ml_foreign_proc_gen__AllocId_22;
          MR_Word ml_backend__ml_foreign_proc_gen__GlobalData_23;
          MR_Word ml_backend__ml_foreign_proc_gen__V_33_33;
          MR_Word ml_backend__ml_foreign_proc_gen__V_34_34;
          MR_Word ml_backend__ml_foreign_proc_gen___Module_21;

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
            ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_16, ml_backend__ml_foreign_proc_gen__PredId_17, ml_backend__ml_foreign_proc_gen__ProcId_18, &ml_backend__ml_foreign_proc_gen__ProcLabel_20, &ml_backend__ml_foreign_proc_gen___Module_21);
          }
          {
            ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(ml_backend__ml_foreign_proc_gen__ProcLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, ml_backend__ml_foreign_proc_gen__Context_8, &ml_backend__ml_foreign_proc_gen__AllocId_22, ml_backend__ml_foreign_proc_gen__GlobalData0_19, &ml_backend__ml_foreign_proc_gen__GlobalData_23);
          }
          {
            ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_foreign_proc_gen__GlobalData_23, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25);
          }
          {
            ml_backend__ml_foreign_proc_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_34_34, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AllocId_22));
          }
          {
            ml_backend__ml_foreign_proc_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_33_33, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_34_34));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_foreign_proc_gen__HashDefine_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[8])));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_33_33));
          }
          *ml_backend__ml_foreign_proc_gen__HashUndef_10 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11]);
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
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_12, (MR_Integer) 216, &ml_backend__ml_foreign_proc_gen__Parallel_13);
    }
    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Parallel_13 == (MR_Integer) 1);
    if (ml_backend__ml_foreign_proc_gen__succeeded)
      ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__ThreadSafe_7 == (MR_Integer) 0);
    if (ml_backend__ml_foreign_proc_gen__succeeded)
      {
        MR_Word ml_backend__ml_foreign_proc_gen__PredInfo_14;
        MR_String ml_backend__ml_foreign_proc_gen__Name_15;
        MR_String ml_backend__ml_foreign_proc_gen__MangledName_16;
        MR_Word ml_backend__ml_foreign_proc_gen__V_18_18;
        MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;
        MR_Word ml_backend__ml_foreign_proc_gen__V_24_24;

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
          ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_20_20, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MangledName_16));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[10])));
        }
        {
          ml_backend__ml_foreign_proc_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_18_18, 0) = ((MR_Box) ((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\""));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_18_18, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_20_20));
        }
        {
          mercury__string__append_list_2_p_0(ml_backend__ml_foreign_proc_gen__V_18_18, ml_backend__ml_foreign_proc_gen__ObtainLock_9);
        }
        {
          ml_backend__ml_foreign_proc_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_24_24, 0) = ((MR_Box) ((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\""));
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_24_24, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_20_20));
        }
        {
          mercury__string__append_list_2_p_0(ml_backend__ml_foreign_proc_gen__V_24_24, ml_backend__ml_foreign_proc_gen__ReleaseLock_10);
        }
      }
    else
      {
        *ml_backend__ml_foreign_proc_gen__ObtainLock_9 = (MR_String) "";
        *ml_backend__ml_foreign_proc_gen__ReleaseLock_10 = (MR_String) "";
      }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_3,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    if ((ml_backend__ml_foreign_proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_foreign_proc_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_3;
      }
    else
      {
        MR_Word ml_backend__ml_foreign_proc_gen__Arg_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_foreign_proc_gen__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_foreign_proc_gen__OutlineArg_10;
        MR_Word ml_backend__ml_foreign_proc_gen__OutlineArgs_11;
        MR_Word ml_backend__ml_foreign_proc_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_8, (MR_Integer) 0)));
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeVarMode_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_8, (MR_Integer) 1)));
        MR_Word ml_backend__ml_foreign_proc_gen__OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_8, (MR_Integer) 2)));
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_8, (MR_Integer) 3)));
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_17;
        MR_Word ml_backend__ml_foreign_proc_gen__VarLval_18;
        MR_Word ml_backend__ml_foreign_proc_gen__MldsType_19;
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_20;
        MR_Word ml_backend__ml_foreign_proc_gen__Mode_21;
        MR_Word ml_backend__ml_foreign_proc_gen__V_26_26;
        MR_Word ml_backend__ml_foreign_proc_gen__V_27_27;
        MR_Char ml_backend__ml_foreign_proc_gen__V_31_31;
        MR_String ml_backend__ml_foreign_proc_gen__V_30_30;

        {
          ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_p_0(ml_backend__ml_foreign_proc_gen__Args_9, &ml_backend__ml_foreign_proc_gen__OutlineArgs_11, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_3, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4);
        }
        {
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4, &ml_backend__ml_foreign_proc_gen__ModuleInfo_17);
        }
        {
          ml_backend__ml_code_util__ml_gen_var_3_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4, ml_backend__ml_foreign_proc_gen__Var_13, &ml_backend__ml_foreign_proc_gen__VarLval_18);
        }
        switch (ml_backend__ml_foreign_proc_gen__BoxPolicy_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            ml_backend__ml_foreign_proc_gen__MldsType_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
            break;
          case (MR_Integer) 0:
            {
              ml_backend__ml_code_util__ml_gen_type_3_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4, ml_backend__ml_foreign_proc_gen__OrigType_15, &ml_backend__ml_foreign_proc_gen__MldsType_19);
            }
            break;
        }
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeVarMode_14)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            ml_backend__ml_foreign_proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeVarMode_14, (MR_Integer) 0)));
            ml_backend__ml_foreign_proc_gen__ArgName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_26_26, (MR_Integer) 0)));
            ml_backend__ml_foreign_proc_gen__Mode_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_26_26, (MR_Integer) 1)));
            {
              ml_backend__ml_foreign_proc_gen__V_27_27 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_17, ml_backend__ml_foreign_proc_gen__OrigType_15);
            }
            ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_27_27 == (MR_Integer) 1);
            if (ml_backend__ml_foreign_proc_gen__succeeded)
              {
                ml_backend__ml_foreign_proc_gen__V_31_31 = (MR_Char) 95;
                {
                  ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_20, ml_backend__ml_foreign_proc_gen__V_31_31, &ml_backend__ml_foreign_proc_gen__V_30_30);
                }
                ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
              }
          }
        if (ml_backend__ml_foreign_proc_gen__succeeded)
          {
            MR_Word ml_backend__ml_foreign_proc_gen__ArgMode_22;

            {
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_17, ml_backend__ml_foreign_proc_gen__Mode_21, ml_backend__ml_foreign_proc_gen__OrigType_15, &ml_backend__ml_foreign_proc_gen__ArgMode_22);
            }
            switch (ml_backend__ml_foreign_proc_gen__ArgMode_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_foreign_proc_gen__V_28_28;

                  {
                    ml_backend__ml_foreign_proc_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_28_28, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarLval_18));
                  }
                  {
                    ml_backend__ml_foreign_proc_gen__OutlineArg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__OutlineArg_10, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MldsType_19));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__OutlineArg_10, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_20));
                    MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__OutlineArg_10, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_28_28));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  ml_backend__ml_foreign_proc_gen__OutlineArg_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__OutlineArg_10, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MldsType_19));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__OutlineArg_10, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_20));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__OutlineArg_10, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarLval_18));
                }
                break;
              case (MR_Integer) 2:
                ml_backend__ml_foreign_proc_gen__OutlineArg_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
            }
          }
        else
          ml_backend__ml_foreign_proc_gen__OutlineArg_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_foreign_proc_gen__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutlineArg_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutlineArgs_11));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_managed_proc_12_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
  MR_Word ml_backend__ml_foreign_proc_gen___PredId_15,
  MR_Integer ml_backend__ml_foreign_proc_gen___ProcId_16,
  MR_Word ml_backend__ml_foreign_proc_gen__Args_17,
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
  MR_String ml_backend__ml_foreign_proc_gen__ForeignCode_19,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_41,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    {
      ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_p_0(ml_backend__ml_foreign_proc_gen__OrdinaryKind_13, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__ForeignCode_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_41, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42);
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
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__Expr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ml_backend__ml_foreign_proc_gen__EnvVar_8;
          MR_Word ml_backend__ml_foreign_proc_gen__EnvVarRval_9;
          MR_Word ml_backend__ml_foreign_proc_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_foreign_proc_gen__V_26_26;
          MR_Word ml_backend__ml_foreign_proc_gen__V_27_27;

          ml_backend__ml_foreign_proc_gen__EnvVar_8 = (MR_String) ml_backend__ml_foreign_proc_gen__V_24_24;
          {
            ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_p_0(ml_backend__ml_foreign_proc_gen__EnvVar_8, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
          }
          ml_backend__ml_foreign_proc_gen__V_27_27 = (MR_Word) ml_backend__ml_foreign_proc_gen__EnvVar_8;
          {
            ml_backend__ml_foreign_proc_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_26_26, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_27_27));
          }
          {
            ml_backend__ml_foreign_proc_gen__EnvVarRval_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__EnvVarRval_9, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_26_26));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__EnvVarRval_9));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[9])));
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
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_2[7])));
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
          MR_Word ml_backend__ml_foreign_proc_gen__ExprA_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_foreign_proc_gen__RvalA_32;

          {
            ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprA_31, &ml_backend__ml_foreign_proc_gen__RvalA_32, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19);
          }
          {
            ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprB_14, &ml_backend__ml_foreign_proc_gen__RvalB_15, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
          }
          switch (ml_backend__ml_foreign_proc_gen__TraceOp_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              ml_backend__ml_foreign_proc_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
              break;
            case (MR_Integer) 0:
              ml_backend__ml_foreign_proc_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Op_16));
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalA_32));
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalB_15));
          }
        }
        break;
    }
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
  MR_String ml_backend__ml_foreign_proc_gen__Foreign_Code_19,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_24;
    MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_25;

    {
      ml_backend__ml_foreign_proc_gen__Lang_24 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
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
            ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32 = parse_tree__prog_data__get_ordinary_despite_detism_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
          }
          switch (ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "unexpected code model");
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
          MR_Word ml_backend__ml_foreign_proc_gen__V_30_30;

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
            parse_tree__prog_data__determinism_components_3_p_0(ml_backend__ml_foreign_proc_gen__Detism_29, &ml_backend__ml_foreign_proc_gen__V_30_30, &ml_backend__ml_foreign_proc_gen__MaxSoln_31);
          }
          ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = ((&ml_backend__ml_foreign_proc_gen_vector_common_3[0 + ml_backend__ml_foreign_proc_gen__MaxSoln_31]))->ml_backend__ml_foreign_proc_gen__vector_common_type_3_0__vct_3_f_0;
        }
        break;
    }
    switch (ml_backend__ml_foreign_proc_gen__Lang_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
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
            case (MR_Integer) 3:
            case (MR_Integer) 2:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "C# foreign code not supported for compilation target");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0((MR_Integer) 2, ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "unexpected language Erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0((MR_Integer) 3, ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
          }
        }
        break;
    }
  }
}

void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_p_0(
  MR_Word ml_backend__ml_foreign_proc_gen__TraceRuntimeCond_7,
  MR_Word ml_backend__ml_foreign_proc_gen__Context_8,
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_9,
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_10,
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_16,
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_17)
{
  {
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSContext_12;
    MR_Word ml_backend__ml_foreign_proc_gen__SuccessLval_13;
    MR_Word ml_backend__ml_foreign_proc_gen__CondRval_14;
    MR_Word ml_backend__ml_foreign_proc_gen__Statement_15;
    MR_Word ml_backend__ml_foreign_proc_gen__V_19_19;
    MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;

    *ml_backend__ml_foreign_proc_gen__Decls_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      ml_backend__ml_foreign_proc_gen__MLDSContext_12 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_8);
    }
    {
      ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_16, &ml_backend__ml_foreign_proc_gen__SuccessLval_13);
    }
    {
      ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__TraceRuntimeCond_7, &ml_backend__ml_foreign_proc_gen__CondRval_14, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_16, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_17);
    }
    {
      ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_20_20, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessLval_13));
      MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_20_20, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__CondRval_14));
    }
    {
      ml_backend__ml_foreign_proc_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_19_19, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_20_20));
    }
    {
      ml_backend__ml_foreign_proc_gen__Statement_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Statement_15, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_19_19));
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Statement_15, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSContext_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_foreign_proc_gen__Statements_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Statement_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_foreign_proc_gen. */
